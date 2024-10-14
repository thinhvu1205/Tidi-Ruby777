using System;
using System.Collections.Generic;
using System.Threading;
using Globals;
using Newtonsoft.Json.Linq;
using UnityEngine;
using WebSocketSharp;

public class WebSocketManager
{
    Queue<Action> jobsResend = new Queue<Action>();
    public Globals.ConnectionStatus connectionStatus = Globals.ConnectionStatus.NONE;
    WebSocket ws = null;
    static WebSocketManager instance = null;

    public WebSocketManager()
    {
    }

    public static WebSocketManager getInstance()
    {
        if (instance == null)
        {
            instance = new WebSocketManager();
        }
        return instance;
    }

    public void Connect(Action callback)
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            if (Globals.Config.isErrorNet) return;
            Globals.Config.isErrorNet = true;
            UIManager.instance.showMessageBox(Globals.Config.getTextConfig("err_network"));
            UIManager.instance.hideWatting();
            return;
        }

        Globals.Config.isErrorNet = false;
        stop();
        jobsResend.Clear();
        //Globals.Config.isSvTest = true;
        //Globals.Config.curServerIp = "app.test.topbangkokclub.com";
        //Globals.Config.curServerIp = "app1.jakartagames.net";
        Globals.Config.curServerIp = "app2.davaogames.com";
        // Globals.Config.curServerIp = "test.app.1707casino.com";
        //Globals.Config.curServerIp = "app-002.ngwcasino.com";
        Debug.Log(" Globals.Config.curServerI=" + Globals.Config.curServerIp);
        Debug.Log(" Globals.Config.PORT=" + Globals.Config.PORT);
        ws = new WebSocket("wss://" + Globals.Config.curServerIp);
        //ws = new WebSocket("ws://" + Globals.Config.curServerIp + ":80" );
        Globals.Logging.Log("IP CONNECT:" + Globals.Config.curServerIp);
        connectionStatus = Globals.ConnectionStatus.CONNECTING;
        ws.ConnectAsync();
        //ws.Connect();

        ws.EmitOnPing = true;
        ws.WaitTime = TimeSpan.FromSeconds(10); ;

        ws.OnError += (sender, e) =>
        {
            if (connectionStatus == Globals.ConnectionStatus.DISCONNECTED) return;
            connectionStatus = Globals.ConnectionStatus.DISCONNECTED;
            Globals.Logging.Log("OnError ");
            UnityMainThread.instance.AddJob(() =>
            {
                UIManager.instance.showLoginScreen(false);
            });
        };
        ws.OnClose += (sender, e) =>
        {
            if (connectionStatus == Globals.ConnectionStatus.DISCONNECTED) return;
            connectionStatus = Globals.ConnectionStatus.DISCONNECTED;
            Globals.Logging.Log("OnClose ");
            UnityMainThread.instance.AddJob(() =>
            {
                UIManager.instance.showLoginScreen(false);
            });
        };

        ws.OnOpen += (sender, e) =>
        {
            connectionStatus = Globals.ConnectionStatus.CONNECTED;
            //sendLogin("playforfun", "cuong123");
            if (callback != null)
                callback.Invoke();

            while (jobsResend.Count > 0)
                jobsResend.Dequeue().Invoke();
        };
        ws.OnMessage += (sender, e) =>
        {
            UnityMainThread.instance.AddJob(() =>
            {
                UIManager.instance.hideWatting();
                //Globals.Logging.Log("-=-=>>>> OnMessage   " + e.Data);
                JObject data = JObject.Parse(e.Data);
                //{ "screenname":null,"pid":0,"status":"DENIED","code":-3,"message":"Username and Password do not match!","credentials":"","classId":11}
                int cmdId = (int)data["classId"];
                switch (cmdId)
                {
                    case Globals.CMD.LOGIN_RESPONSE:
                        HandleData.handleLoginResponse(e.Data);
                        break;
                    case Globals.CMD.SERVICE_TRANSPORT:
                        HandleData.handleServiceTransportPacket(e.Data);
                        break;
                    case Globals.CMD.GAME_TRANSPORT:
                        HandleData.handleGameTransportPacket(e.Data);
                        break;
                    case Globals.CMD.FORCE_LOGOUT:
                        HandleData.handleForcedLogoutPacket(e.Data);
                        break;
                    case Globals.CMD.JOIN_RESPONSE:
                        HandleData.handleJoinResponsePacket(e.Data);
                        break;
                    case Globals.CMD.LEAVE_RESPONSE:
                        HandleData.handleLeaveResponsePacket(e.Data);
                        break;
                    case Globals.CMD.PING:
                        Globals.Logging.Log("PING PONG!!!!");
                        break;
                    default:
                        {
                            //Globals.Logging.Log("-=-= ko vao ID nao:"+ cmdId);
                            break;
                        }
                }
            });
        };
    }

    public void runConnect()
    {


    }

    public void stop(bool isClearTask = true)
    {
        //if (ws != null)
        //    ws.CloseAsync();
        if (ws != null)
            ws.Close();

        ws = null;

        if (isClearTask)
        {
            jobsResend.Clear();
        }
    }

    public bool IsAlive()
    {
        return (ws != null && ws.IsAlive);
    }

    public void SendData(string dataSend, bool ping = true)
    {
        //{ "classId":10,"user":"{\"Userid\":1,\"From\":\"mbacay\",\"gameid\":\"8802\",\"deviceId\":\"4BADD3ED-790D-45BA-BD21-2971EE4F7422\",\"Signid\":\"qazwsxedcrfv123$%^789\",\"loginCount\":0,\"versionCode\":\"1.05\",\"language\":\"en\",\"Username\":\"zxcvb\",\"Usertype\":1}","password":"1234565","operatorid":7000,"credentials":[]}
        //Globals.Logging.Log("SendData IsAlive  " + ws.IsAlive);
        //Globals.Logging.Log("SendData IsAlive  1 " + ws.ReadyState);
        //Globals.Logging.Log("SendData IsAlive  2 " + (ws.ReadyState == WebSocketState.Open));
        if (connectionStatus == Globals.ConnectionStatus.CONNECTED && (ping ? ws.IsAlive : true) && ws.ReadyState == WebSocketState.Open)
        {
            ws.SendAsync(dataSend, (msg) =>
            {
            });
        }
        else
        {
            jobsResend.Enqueue(() =>
            {
                ws.SendAsync(dataSend, (msg) =>
                {
                });
            });
        }
    }

    /**
     * Send a ServiceTransportPacket
     * @param {Number} pid player id
     * @param {Number} gameId gamed id
     * @param {Number} classId class id
     * @param {String} serviceContract name of service contract
     * @param {Array} byteArray game data
     */
    public void sendService(string strData, bool ping = true)
    {

        //if (NetworkManager.getInstance().statusConnect != FIREBASE.ConnectionStatus.CONNECTED) return;
        ServiceTransportPacket serviceTransport = new ServiceTransportPacket();
        serviceTransport.service = "com.athena.services.api.ServiceContract";
        serviceTransport.servicedata = Globals.Config.getByte(strData);// utf8.toByteArray(data);

        serviceTransport.pid = Globals.User.userMain.Userid;
        serviceTransport.seq = 1;
        serviceTransport.idtype = 1;
        //connector.sendProtocolObject(serviceTransport);
        SendData(JsonUtility.ToJson(serviceTransport), ping);

        var objData = new JObject();
        var dataParse = JObject.Parse(strData);
        if (dataParse.ContainsKey("evt"))
        {
            objData["evt"] = dataParse["evt"];
        }
        else if (dataParse.ContainsKey("idevt"))
        {
            objData["idevt"] = dataParse["idevt"];
        }
        objData["data"] = strData;
        SocketIOManager.getInstance().emitSIOWithValue(objData, "ServiceTransportPacket", true);
    }
    /**
     * Send a Styx protocol object to a table. This protocol
     * object send to the game using a GameTransportPacket.
     *
     * @param {Number} pid player id
     * @param {Number} tableid table id
     * @param {Object} protocolObject Styx protocol object
     */
    public void sendDataGame(string strData, bool ping = true)
    {
        //Globals.Logging.Log("sendDataGame:" + strData);
        GameTransportPacket gameTransportPacket = new GameTransportPacket();
        gameTransportPacket.pid = Globals.User.userMain.Userid;
        gameTransportPacket.tableid = Globals.Config.tableId;
        gameTransportPacket.gamedata = Globals.Config.Base64Encode(strData);
        SendData(JsonUtility.ToJson(gameTransportPacket), ping);


        var objData = new JObject();
        var dataParse = JObject.Parse(strData);
        if (dataParse.ContainsKey("evt"))
        {
            objData["evt"] = dataParse["evt"];
        }
        else if (dataParse.ContainsKey("idevt"))
        {
            objData["idevt"] = dataParse["idevt"];
        }
        objData["data"] = strData;
        SocketIOManager.getInstance().emitSIOWithValue(objData, "GameTransportPacket", true);

    }
}