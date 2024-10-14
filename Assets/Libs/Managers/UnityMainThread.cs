using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class UnityMainThread : MonoBehaviour
{
    public static UnityMainThread instance;
    private Queue<Action> jobs = new Queue<Action>();
    private const float TIME_PING_MAX = 60f;
    private float timePing = 0;
    public bool isHasNet = true;
    void Awake()
    {
        instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        while (jobs.Count > 0)
        {
            jobs.Dequeue().Invoke();
        }
    }

    public void LateUpdate()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            if (WebSocketManager.getInstance().connectionStatus == Globals.ConnectionStatus.CONNECTED || !WebSocketManager.getInstance().IsAlive())
            {
                isHasNet = false;
                Globals.Logging.Log("Error. Check internet connection!");
                WebSocketManager.getInstance().connectionStatus = Globals.ConnectionStatus.DISCONNECTED;
                UIManager.instance.showLoginScreen(false);
                return;
            }
            else if (isHasNet)
            {
                Globals.Logging.Log("vao day roi");
                isHasNet = false;
                StartCoroutine(delayBox());
                return;
            }
        }
        else
        {
            if (!isHasNet && !LoadConfig.instance.isLoadedConfig)
            {

                Globals.Config.isErrorNet = false;
                LoadConfig.instance.getConfigInfo();
            }
            isHasNet = true;
        }
        if (WebSocketManager.getInstance().connectionStatus == Globals.ConnectionStatus.CONNECTED || !WebSocketManager.getInstance().IsAlive())
        {
            timePing += Time.deltaTime;
            if (timePing >= TIME_PING_MAX)
            {
                timePing = 0;
                Debug.Log("-=-=-= send ping");
                SocketSend.sendPing();
            }
        }
        else if (timePing != 0)
        {
            timePing = 0;
        }
    }

    internal void AddJob(Action newJob)
    {
        jobs.Enqueue(newJob);
    }
    internal void forceClearJob()
    {
        while (jobs.Count > 0)
        {
            jobs.Dequeue();
        }
    }
    IEnumerator delayBox()
    {
        yield return new WaitForSeconds(1);
        if (Globals.Config.isErrorNet) yield break;
        Globals.Config.isErrorNet = true;
        UIManager.instance.showMessageBox(Globals.Config.getTextConfig("err_network"));
        UIManager.instance.hideWatting();
    }
}
