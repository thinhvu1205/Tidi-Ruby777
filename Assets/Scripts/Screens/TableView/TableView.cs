﻿using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using Globals;

public class TableView : BaseView
{
    public static TableView instance;
    [SerializeField] List<TextMeshProUGUI> txtJackpot;
    [SerializeField] GameObject itemTabBetPrefab, itemBetPrefab, itemTablePrefab;
    [SerializeField] Button btnNext, btnPrevious, btnCreateTable;
    [SerializeField] TextMeshProUGUI txtAg;
    [SerializeField] Image btnTabBet, btnTabTable, m_TitleImg;
    [SerializeField] ScrollRect scrTabBet, scrTable, scrBet;
    [SerializeField] TMP_InputField edbPass;
    [SerializeField] Animation nodeJackpot;
    public List<int> listRoomBet = new List<int>();
    public JArray listDataRoomBet = new JArray();
    public JObject currentJackpot;
    public bool isHorizontal = false, isSelectGame = false;

    private JArray room_vip_list = new JArray();
    private int currentTabBet = 0, currentTab = 0; //0:Tab Bet,1:Tab Table
    private bool isHideBtnScroll = false;

    protected override void Awake()
    {
        base.Awake();
        instance = this;
        Config.lastGameIDSave = Config.curGameId;
        UIManager.instance.lobbyView.setQuickPlayGame(Config.lastGameIDSave);
        //var spacingY = 30.0f;
        var rectContent = scrBet.content.GetComponent<GridLayoutGroup>();
        rectContent.spacing = new Vector2(rectContent.spacing.x, (scrBet.GetComponent<RectTransform>().rect.height - rectContent.cellSize.y * 2) / 3.0f);
        scrBet.DOHorizontalNormalizedPos(0, 0.2f).SetEase(Ease.OutSine);

    }

    public override void OnDestroy()
    {
        base.OnDestroy();
        TableView.instance = null;
    }

    protected override void OnEnable()
    {
        //    setTimeout(() => {
        //    if (this.node == null || typeof this.node == 'undefined') return;
        //    this.showPopupWhenLostChip();
        //}, 500);
        UpdateJackpot();
        Globals.CURRENT_VIEW.setCurView(Globals.CURRENT_VIEW.LOBBY);
        DOTween.Sequence().AppendInterval(0.5f).AppendCallback(() =>
        {
            UIManager.instance.showPopupWhenLostChip();
        });
        if (currentTab == 0)
        {
            onClickSelectBet();
        }
        else
        {
            onClickSelectTable();
        }
        //
        updateInfo();
        if (Globals.Config.isChangeTable)
        {
            Globals.Config.isChangeTable = false;

            Debug.Log("==-=-=- doi ban  " + Globals.Config.curGameId);
            if (Globals.Config.listGamePlaynow.Contains(Globals.Config.curGameId))
            {
                Debug.Log("==-=-=- doi ban  sendPlayNow");

                SocketSend.sendPlayNow(Globals.Config.curGameId);
            }
            else
            {
                //Globals.Logging.Log("tableMark  " + Globals.Config.tableMark + " table id  " + Globals.Config.tableId);

                Debug.Log("==-=-=- doi ban  sendChangeTable");
                SocketSend.sendChangeTable(Globals.Config.tableMark, Globals.Config.tableId);
            }
        }
        Globals.Logging.Log("-=-= di vao day   " + listDataRoomBet.Count);
        if (listDataRoomBet.Count > 0)
        {
            handleLtv(listDataRoomBet);
        }
        else
        {
            var ltv_data = PlayerPrefs.GetString("ltv_data_" + Globals.Config.curGameId, "");
            if (!ltv_data.Equals(""))
            {
                listDataRoomBet = JArray.Parse(ltv_data);
                handleLtv(listDataRoomBet);
            }
            else
                SocketSend.sendSelectGame(Globals.Config.curGameId);
        }

        if (Globals.Config.curGameId == (int)Globals.GAMEID.PUSOY
            || Globals.Config.curGameId == (int)Globals.GAMEID.THREE_CARD_POKER
             || Globals.Config.curGameId == (int)Globals.GAMEID.KARTU_QIU)
        {
            nodeJackpot.Stop();
            nodeJackpot.gameObject.SetActive(true);
            nodeJackpot.transform.localScale = Vector2.zero;
            var pos = nodeJackpot.transform.localPosition;
            var parent = nodeJackpot.transform.parent.GetComponent<RectTransform>();
            DOTween.Sequence().Append(nodeJackpot.transform.DOScale(Vector2.one, .2f).SetEase(Ease.OutBack)).AppendInterval(1).AppendCallback(() =>
            {
                nodeJackpot.Play();
            });
            DOTween.Sequence().AppendCallback(() =>
            {
                SocketSend.sendUpdateJackpot(Globals.Config.curGameId);
            }).AppendInterval(5.0f).SetLoops(-1).SetId("updateJackpot");
        }
        else
        {
            nodeJackpot.Stop();
            nodeJackpot.gameObject.SetActive(false);
        }
        btnCreateTable.interactable = Globals.User.userMain.VIP > 1;
        if (Globals.Config.isPlayNowFromLobby)
        {
            SocketSend.sendPlayNow(Globals.Config.curGameId);
            Globals.Config.isPlayNowFromLobby = false;
        }
    }
    private void OnDisable()
    {
        DOTween.Kill("updateJackpot");
    }

    public void UpdateJackpot()
    {
        var indexRun = UIManager.instance._PusoyJackPot.Length - 1;
        for (var i = txtJackpot.Count - 1; i >= 0; i--)
        {
            txtJackpot[i].text = (indexRun >= 0) ? UIManager.instance._PusoyJackPot[indexRun] + "" : "0";
            indexRun--;
        }
    }
    public void onClickRuleJP()
    {
        if (Globals.Config.curGameId == (int)Globals.GAMEID.KARTU_QIU)
        {
            UIManager.instance.openRuleJPBork();
        }
        if (Globals.Config.curGameId == (int)Globals.GAMEID.PUSOY)
        {
            UIManager.instance.openRuleJPBinh();
        }
    }
    void updateInfo()
    {
        txtAg.text = Globals.Config.FormatNumber(Globals.User.userMain.AG);
        m_TitleImg.sprite = Config.LoadGameNameByGameId(Config.curGameId);
        m_TitleImg.SetNativeSize();
    }
    public void updateAg()
    {
        txtAg.text = Globals.Config.FormatNumber(Globals.User.userMain.AG);
    }

    public void reloadLtv()
    {
        if (listDataRoomBet.Count > 0)
        {
            handleLtv(listDataRoomBet);
        }
        else
        {
            var ltv_data = PlayerPrefs.GetString("ltv_data_" + Globals.Config.curGameId, "");
            if (!ltv_data.Equals(""))
            {
                listDataRoomBet = JArray.Parse(ltv_data);
                handleLtv(listDataRoomBet);
            }

        }
    }

    public void handleLtv(JArray jArray)
    {
        listDataRoomBet = jArray;

        PlayerPrefs.SetString("ltv_data_" + Globals.Config.curGameId, listDataRoomBet.ToString());
        PlayerPrefs.Save();
        //                    {
        //                        "evt": "ltv",
        //  "data": "[{\"mark\":100,\"ag\":2000,\"agPn\":0,\"agD\":0,\"minAgCon\":2000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":1500,\"agRaiseFee\":2000,\"fee\":1.5},{\"mark\":1000,\"ag\":20000,\"agPn\":0,\"agD\":0,\"minAgCon\":20000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":15000,\"agRaiseFee\":20000,\"fee\":1.5},{\"mark\":5000,\"ag\":100000,\"agPn\":0,\"agD\":0,\"minAgCon\":100000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":75000,\"agRaiseFee\":100000,\"fee\":1.5},{\"mark\":10000,\"ag\":200000,\"agPn\":0,\"agD\":0,\"minAgCon\":200000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":150000,\"agRaiseFee\":150000,\"fee\":1.5},{\"mark\":50000,\"ag\":1000000,\"agPn\":0,\"agD\":0,\"minAgCon\":1000000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":750000,\"agRaiseFee\":1000000,\"fee\":1.5},{\"mark\":100000,\"ag\":2000000,\"agPn\":0,\"agD\":0,\"minAgCon\":2000000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":1500000,\"agRaiseFee\":2000000,\"fee\":1.5},{\"mark\":200000,\"ag\":4000000,\"agPn\":0,\"agD\":0,\"minAgCon\":4000000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":3000000,\"agRaiseFee\":3000000,\"fee\":1.5},{\"mark\":500000,\"ag\":10000000,\"agPn\":0,\"agD\":0,\"minAgCon\":10000000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":7500000,\"agRaiseFee\":10000000,\"fee\":1.5},{\"mark\":1000000,\"ag\":20000000,\"agPn\":0,\"agD\":0,\"minAgCon\":20000000,\"maxAgCon\":0,\"currplay\":0,\"room\":0,\"minChipbanker\":0,\"maxBet\":0,\"agLeft\":15000000,\"agRaiseFee\":20000000,\"fee\":1.5}]"
        //}
        listRoomBet.Clear();

        //var heighScv = scrBet.GetComponent<RectTransform>().rect.height;
        //Globals.Logging.Log("-=-=heighScv    " + jArray.Count);
        //Globals.Logging.Log("-=-=heighScv    " + Globals.User.userMain.AG);

        for (var i = 0; i < jArray.Count; i++)
        {
            JObject itData = (JObject)jArray[i];
            ItemBet item;
            if (i < scrBet.content.childCount)
            {
                item = scrBet.content.GetChild(i).GetComponent<ItemBet>();
            }
            else
            {
                item = Instantiate(itemBetPrefab, scrBet.content).GetComponent<ItemBet>();
            }
            item.transform.localScale = Vector3.one;

            item.setInfo(itData, i);
            listRoomBet.Add((int)itData["mark"]);
        }

        btnPrevious.gameObject.SetActive(false);
        isHideBtnScroll = jArray.Count <= 8;
        btnNext.gameObject.SetActive(!isHideBtnScroll);
        scrBet.DOHorizontalNormalizedPos(0, 0.2f).SetEase(Ease.OutSine);
    }

    public void handleListTable(JObject jData)
    {
        Debug.Log("handleListTable");
        JArray jArrayData = JArray.Parse((string)jData["data"]);
        room_vip_list = new JArray(jArrayData.OrderBy(obj => (int)obj["mark"]));
        reloadListSelect();
    }


    void reloadListSelect()
    {
        int isMark = 0;
        JObject firstObj = null;
        var indexRun = 0;
        var listMarkBet = room_vip_list.OrderByDescending(it => (int)it["mark"]);
        Debug.Log("currentTabBet  " + currentTabBet);
        for (var i = 0; i < listMarkBet.Count(); i++)
        {
            JObject objDataItem = (JObject)listMarkBet.ElementAt(i);
            if (isMark == (int)objDataItem["mark"])
            {
                continue;
            }
            if (Globals.User.userMain.AG < (int)objDataItem["minAgCon"]) continue;
            if (currentTabBet == indexRun)
            {
                firstObj = objDataItem;
            }
            if (firstObj == null)
            {
                firstObj = objDataItem;
            }
            isMark = (int)objDataItem["mark"];
            GameObject objButton;
            if (indexRun < scrTabBet.content.childCount)
            {
                objButton = scrTabBet.content.GetChild(indexRun).gameObject;
            }
            else
            {
                objButton = Instantiate(itemTabBetPrefab, scrTabBet.content);
            }

            objButton.SetActive(true);
            objButton.transform.SetParent(scrTabBet.content);
            objButton.transform.localScale = Vector3.one;
            //objButton.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = Globals.Config.FormatMoney(isMark);
            objButton.GetComponent<ItemTabBet>().setInfo(isMark, 0);
            int tabBet = indexRun;
            objButton.GetComponent<Button>().onClick.RemoveAllListeners();
            objButton.GetComponent<Button>().onClick.AddListener(() =>
            {
                onClickTabBet(objButton, objDataItem, tabBet);
            });
            indexRun++;
        }

        for (var i = indexRun; i < scrTabBet.content.childCount; i++)
        {
            scrTabBet.content.GetChild(i).gameObject.SetActive(false);
        }
        if (room_vip_list.Count > 0 && scrTabBet.content.childCount > 0)
        {
            Debug.Log("firstObj  " + firstObj.ToString());
            onClickTabBet(scrTabBet.content.GetChild(currentTabBet).gameObject, firstObj, currentTabBet);
        }
    }

    void reloadListTable(int mark)
    {

        var indexx = 0;
        for (var i = 0; i < room_vip_list.Count; i++)
        {
            JObject objDataItem = (JObject)room_vip_list[i];
            if (mark == (int)objDataItem["mark"])
            {
                GameObject objItem = null;
                if (indexx < scrTable.content.childCount)
                {
                    objItem = scrTable.content.GetChild(indexx).gameObject;
                }
                else
                {
                    objItem = Instantiate(itemTablePrefab, scrTable.content);
                }
                objItem.SetActive(true);
                //objItem.transform.SetParent(scrTable.content);
                objItem.transform.localScale = Vector3.one;
                //Globals.Logging.Log("set info item table:" + objDataItem.ToString());
                objItem.GetComponent<ItemTable>().setInfo(objDataItem, () =>
                {
                    onClickItemTable(objDataItem);
                });
                indexx++;
            }
        }
        for (var i = indexx; i < scrTable.content.childCount; i++)
        {
            scrTable.content.GetChild(i).gameObject.SetActive(false);
        }

        scrTable.DOVerticalNormalizedPos(1.0f, 0.2f).SetEase(Ease.OutSine);
    }

    public void onClickTabBet(GameObject obj, JObject dataIte, int index = 0)
    {
        SoundManager.instance.soundClick();
        currentTabBet = index;
        for (var i = 0; i < scrTabBet.content.childCount; i++)
        {
            scrTabBet.content.GetChild(i).Find("Checkmark").gameObject.SetActive(obj == scrTabBet.content.GetChild(i).gameObject);
        }
        Debug.Log((int)dataIte["mark"]);
        reloadListTable((int)dataIte["mark"]);
    }

    void onClickItemTable(JObject objData)
    {
        Globals.Logging.Log("onClickItemTable:" + objData.ToString());
        SoundManager.instance.soundClick();
        //itemVip.mark = jsData[i].mark;
        //itemVip.player = jsData[i].player;
        //itemVip.chip_require = jsData[i].minAgCon;
        //itemVip.table_id = jsData[i].id;
        //itemVip.isPrivate = jsData[i].isPrivate;
        //itemVip.name = jsData[i].N;
        //itemVip.size = jsData[i].size;
        //itemVip.hitPot = jsData[i].H;
        if ((int)objData["id"] != 0)
        {
            //require('NetworkManager').getInstance().sendCheckPass(this.table_id);
            SocketSend.sendCheckPass((int)objData["id"]);
        }
        else
        {
            //require('NetworkManager').getInstance().sendChangeTable(this.cur_mark, 0);
        }

        //if ((bool)objData["isPrivate"])
        //{
        //    UIManager.instance.openInputPass();
        //}
        //else {
        //}
    }

    public void onClickBack() { }

    public void onClickRefresh()
    {
        SoundManager.instance.soundClick();
        SocketSend.sendRoomTable();
    }

    public void onClickSelectBet()
    {
        SoundManager.instance.soundClick();
        scrTable.gameObject.SetActive(false);
        scrBet.gameObject.SetActive(true);
        //btnTabBet.gameObject.SetActive(false);
        btnTabBet.GetComponent<Image>().color = Color.white;
        //btnTabTable.gameObject.SetActive(true);
        btnTabTable.GetComponent<Image>().color = Color.gray;
        currentTab = 0;
    }
    public void onClickSelectTable()
    {
        currentTab = 1;
        SoundManager.instance.soundClick();
        SocketSend.sendRoomTable();
        //SocketSend.sendRoomVip();
        scrTable.gameObject.SetActive(true);
        scrBet.gameObject.SetActive(false);
        //btnTabBet.gameObject.SetActive(true);
        btnTabBet.GetComponent<Image>().color = Color.gray;
        //btnTabTable.gameObject.SetActive(false);
        btnTabTable.GetComponent<Image>().color = Color.white;
    }

    public void onClickQuickStart()
    {
        SoundManager.instance.soundClick();
        SocketSend.sendPlayNow(Globals.Config.curGameId);
    }
    public void onClickCreateTablle()
    {
        UIManager.instance.openCreateTableView();
    }

    public void onClickFindTablle()
    {
        SoundManager.instance.soundClick();
        var strTableId = edbPass.text;
        int tableId = 0;
        var isNumber = int.TryParse(strTableId, out tableId);
        Globals.Logging.Log("-=-= tim xem   " + tableId);
        if (tableId > 0)
        {
            SocketSend.sendCheckPass(tableId);
            Globals.Logging.Log("-=-=sendCheckPass   " + tableId);
        }
        edbPass.text = "";
    }

    public void onClickClose()
    {
        SoundManager.instance.soundClick();
        hide(true);
        //transform.SetParent(null); //de tam
        UIManager.instance.showLobbyScreen();
    }

    public void onClickShop()
    {
        SoundManager.instance.soundClick();
        UIManager.instance.openShop();
    }

    DialogView dialogInvite = null;
    public void showInvite(JObject jData)
    {
        //jData = new JObject();
        //jData["N"] = "ashdjas";
        //jData["AG"] = 1000;
        //jData["AGU"] = 1000;
        //jData["TID"] = 1;
        if (!getIsShow()) return;
        if (dialogInvite != null)
        {
            dialogInvite.hide();
            dialogInvite = null;
        }
        //"Player %s chip %s\n table bets: %s\n invite friends to play",
        var msg = Globals.Config.formatStr(Globals.Config.getTextConfig("invite_join_game"), (string)jData["N"], Globals.Config.FormatNumber((long)jData["AG"]), Globals.Config.FormatNumber((long)jData["AGU"]));

        var lb1 = Globals.Config.getTextConfig("ok");
        var lb3 = Globals.Config.getTextConfig("refuse_all");

        //dialogInvite =
        UIManager.instance.showDialog(msg, lb1, () =>
    {
        SocketSend.sendCheckPass((int)jData["TID"]);
        dialogInvite = null;
    }, lb3, () =>
    {
        Globals.Config.invitePlayGame = false;
        dialogInvite = null;
    }, true, () =>
    {
        dialogInvite = null;
    }, (obj) =>
    {
        dialogInvite = obj;
    });
    }
    public void onClickNext(Button btnNex)
    {
        scrBet.DOHorizontalNormalizedPos(1.0f, 0.2f).SetEase(Ease.OutSine);
        if (isHideBtnScroll) return;
        btnNex.gameObject.SetActive(false);
        btnPrevious.gameObject.SetActive(true);
    }
    public void onClickPrevious(Button btnPre)
    {
        scrBet.DOHorizontalNormalizedPos(0.0f, 0.1f).SetEase(Ease.OutSine);
        if (isHideBtnScroll) return;
        btnPre.gameObject.SetActive(false);
        btnNext.gameObject.SetActive(true);
    }
    public void onScrollScrBet()
    {
        //Globals.Logging.Log(scrBet.horizontalNormalizedPosition);
        float posX = scrBet.horizontalNormalizedPosition;
        if (isHideBtnScroll) return;
        btnPrevious.gameObject.SetActive(posX > 0.5f);
        btnNext.gameObject.SetActive(posX < 0.5f);
    }

    //[SerializeField]
    KeyboardController keyboardController;
    public void onClickInputSearch()
    {
        edbPass.text = "";
        if (keyboardController != null)
        {
            keyboardController.setShow(true);
        }
        else
        {
            keyboardController = UIManager.instance.showKeyboardCustom(transform);
            keyboardController.setTextAction(Globals.Config.getTextConfig("txt_search_1").ToUpper());
        }

        keyboardController.setPortrait(!isHorizontal);
        keyboardController.addListernerCallback((str) =>
        {
            edbPass.text = str;
            onClickFindTablle();
        }, (strIn) =>
        {
            edbPass.text = strIn;
        });
    }
}
