using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using UnityEngine.EventSystems;
using Spine.Unity;
using System;
using System.Threading.Tasks;
using System.Linq;
using Globals;

public class TongitsView : GameView
{
    public static int CountPlayers;
    public static bool IsFight = true;
    [SerializeField] private List<GameObject> m_DiamondIcons = new(), m_OtherScores = new(), m_Modes = new();
    [SerializeField] private List<Sprite> m_GameNameImgs = new();
    [SerializeField]
    private GameObject
        m_Cards, m_Arrows, m_ButtonManager, m_DrawArrow, m_EatArrow, m_CardNumber, m_FinishTable, m_TongitsSceneParent, m_FightConfirm;
    [SerializeField] private Button m_DropBtn, m_FightBtn, m_GroupBtn, m_DumpBtn, m_DeclareBtn, m_DrawBtn, m_TongitsBtn, m_SortBtn;
    [SerializeField] private TextMeshProUGUI m_PointTMP;
    [SerializeField] private Image m_TextTableImg;
    [SerializeField] private SkeletonGraphic m_HitPotSG, m_ChipEjectSG;
    [SerializeField] private ShowNumbOfCard m_CardNumberSNOC;
    [SerializeField] private Card m_PrefabCardC;
    [SerializeField] private ShowGroupBanner m_GroupBannerSGB;
    [SerializeField] private FightScene m_FightSceneFS;
    [SerializeField] private TongitsScene m_TongitsSceneTS;
    [SerializeField] private FinishTable m_ResultTableFT;
    [SerializeField] private ShowNoti m_ShowNotiSN;
    [SerializeField] private Coin m_CointHitpotC;
    [SerializeField] private PotView m_PotPV;

    private Dictionary<int, int> _CountCards = new() { { 8090, 52 }, { 8088, 54 }, { 8091, 52 } };
    private List<List<List<Card>>> _CardsInDeck = new() { new List<List<Card>>(), new List<List<Card>>(), new List<List<Card>>() };
    private List<GameObject> _HintScArray = new();
    private List<List<int>> _playerGroups = new();
    private List<Card> _CardStackCs = new(), _DumpedCardCs = new(), _CardCodeCs = new(), _ChosenCardCs = new(), _TouchedCardCs = new();
    private List<ShowGroupBanner> _GroupBannerSGB = new();
    private List<Player> _BlackListPs = new();
    private List<int> _currentCodeOrder = new();
    private Player _CurrentPlayerP;
    private Card _ChosenCardC;
    private ShowNumbOfCard _CardNumberSNOC;
    private FightScene _FightObjFS;
    private FinishTable _ResultTableFT;
    private Vector2 _CardPosV2;
    private double _distance;
    private int _currentSort, _touchId = -1;
    private int? _code = null;
    private float _delayUp;
    private bool _isDraw, _canFight, _isHold, _checkSwap, _checkAutoDc, _checkClick, _alreadyDropped;

    #region Button
    public void onFightConfirmYes()
    {
        SocketSend.sendTgFight();
        m_FightConfirm.SetActive(false);
    }
    public void onFightConfirmNo()
    {
        m_FightConfirm.SetActive(false);
    }
    public void onFightClick()
    {
        if (checkIfCanFight())
        {
            if (!IsFight)
            {
                SocketSend.sendTgFight();
            }
            else
            {
                var point = calculatePoint();
                m_FightConfirm.SetActive(true);
                m_FightConfirm.transform.Find("text").GetComponent<TextMeshProUGUI>().text
                    = "Your Hand's Value is " + point.ToString() + ", are you sure to declare a Fight?";
            }
        }
    }
    public void onGroupClick()
    {
        doGroupSelectedCard();
        enableGroup(false);
        enableDrop(false);
        enableDump(false);
        updatePlayerPoint();
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CARD_FLIP_1);
    }
    public void onSortClick()
    {
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CARD_FLIP_1);
        m_SortBtn.interactable = false;
        allowDraw(false);
        _ChosenCardCs.Clear();
        showScHint();

        switch (_currentSort)
        {
            case 0:
            case 2:
                autoSortCard(1);
                break;
            case 1:
                autoSortCard(2);
                break;
        }

        reOrganizeCodeOrderByGroup();
        Invoke("enableSortButton", 1f);
    }
    public void OnTongitsClick()
    {
        List<List<int>> data = getDeclareData();
        SocketSend.sendTgTongits(data);
    }
    public void onDropClick()
    {
        JObject data = getCardDropInfo();
        if (getBool(data, "isValid"))
        {
            JArray jarr = (JArray)data["arrC"];
            List<int> arrD = getListInt(data, "arrD");
            List<List<int>> codes = jarr.ToObject<List<List<int>>>();
            SocketSend.sendTgHc(arrD, codes);
        }
        else
            showNoti("You can not drop this card");
    }
    public void onDeclareClick()
    {
        List<List<int>> data = getDeclareData();
        if (data != null)
            SocketSend.sendTgDeclare(data);
    }
    public void onDrawClick()
    {
        SocketSend.sendTgBc();
        m_SortBtn.interactable = false;
    }
    public void toggleResultTable(bool isOff = false)
    {
        if (_ResultTableFT != null && _ResultTableFT.gameObject != null)
        {
            if (isOff)
            {
                _ResultTableFT.gameObject.SetActive(false);
            }
            else
            {
                _ResultTableFT.gameObject.SetActive(!_ResultTableFT.gameObject.activeSelf);
            }
            _ResultTableFT.transform.SetAsLastSibling();
        }
    }
    public void onDumpClick()
    {
        JObject data = getDumpInfo();
        if (data == null)
            return;
        if (getBool(data, "isValid"))
        {
            JArray jarr = (JArray)data["arrC"];
            List<List<int>> codes = jarr.ToObject<List<List<int>>>();
            SocketSend.sendTgDc((int)data["code"], codes);
        }
        else
            showNoti("You can not dump this card");
    }
    #endregion
    public override void setGameInfo(int m, int id = 0, int maxBet = 0)
    {
        base.setGameInfo(m, id, maxBet);
        int countMode = 0, gameId = Globals.Config.curGameId;
        m_TextTableImg.sprite = m_GameNameImgs[0];
        if (gameId == (int)Globals.GAMEID.TONGITS)
            countMode = 1;
        else if (gameId == (int)Globals.GAMEID.TONGITS_JOKER)
        {
            countMode = 2;
            m_TextTableImg.sprite = m_GameNameImgs[1];
        }
        for (int index = 0; index < m_Modes.Count; index++)
        {
            m_Modes[index].SetActive(index < countMode);
        }
        m_TextTableImg.SetNativeSize();
    }
    protected override void updatePositionPlayerView()
    {
        thisPlayer.playerView.setPosThanhBarThisPlayer();
        int? currentDimondIndex = null;
        string currentDimonHolder = null;
        for (int i = 0; i < 3; i++)
        {
            if (m_DiamondIcons[i].activeSelf)
            {
                currentDimondIndex = i;
                m_DiamondIcons[i].SetActive(false);
                break;
            }
        }
        if (currentDimondIndex != null)
        {
            for (int i = 0; i < players.Count; i++)
            {
                if (players[i]._indexDynamic == currentDimondIndex)
                {
                    currentDimonHolder = players[i].displayName;
                }
            }
        }
        base.updatePositionPlayerView();
        for (int i = 0; i < players.Count; i++)
        {
            int index = getDynamicIndex(getIndexOf(players[i]));
            players[i].playerView.transform.localPosition = listPosView[index];
            players[i]._indexDynamic = index;
        }
        for (int i = 0; i < players.Count; i++)
        {
            if (players[i].displayName == currentDimonHolder)
            {
                m_DiamondIcons[players[i]._indexDynamic].SetActive(true);
            }
        }
    }
    public override void handleCTable(string data)
    {
        base.handleCTable(data);
        m_ButtonManager.SetActive(false);
    }
    public override void handleCCTable(JObject data)
    {
        base.handleCCTable(data);
        m_ButtonManager.SetActive(false);
    }
    public override void handleSTable(string objData)
    {
        base.handleSTable(objData);
        JObject data = JObject.Parse(objData);
        JObject hitPot = (JObject)data["HitPot"];
        potView((int)hitPot["AG"], (int)hitPot["rounds"], false);
        var dimon = m_HitPotSG.transform.Find("dimond");
        if ((int)hitPot["pid"] != 0)
        {
            var player = getPlayerWithID((int)hitPot["pid"]);
            showDimond(player._indexDynamic);
            if (dimon != null)
            {
                dimon.gameObject.SetActive(true);
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                m_DiamondIcons[i].gameObject.SetActive(false);
            }
            if (dimon != null)
            {
                dimon.gameObject.SetActive(false);
            }
        }
        toggleResultTable(true);
        clearNumbOfCard();
        _BlackListPs.Clear();
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.START_GAME);
    }
    public override void handleLTable(JObject data)
    {
        base.handleLTable(data);
        cleanTable();
        string name = getString(data, "Name");
        Player player = getPlayer(name);
        if (player == null)
            return;
        var msg = "";
        if (m_DiamondIcons[player._indexDynamic].activeSelf)
        {
            GameObject dimon = m_HitPotSG.transform.Find("dimond").gameObject;
            dimon.SetActive(false);
        }
        m_DiamondIcons[player._indexDynamic].SetActive(false);
        clearNumbOfCard();
    }
    public override void handleVTable(string objData)
    {
        base.handleVTable(objData);
        m_ButtonManager.SetActive(false);
        JObject data = JObject.Parse(objData);
        JObject hitPot = (JObject)data["HitPot"];
        potView((int)hitPot["AG"], (int)hitPot["rounds"], false);
        var dimon = m_HitPotSG.transform.Find("dimond");
        if ((int)hitPot["pid"] != 0)
        {
            var player = getPlayerWithID((int)hitPot["pid"]);
            showDimond(player._indexDynamic);
            if (dimon != null)
            {
                dimon.gameObject.SetActive(true);
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                m_DiamondIcons[i].gameObject.SetActive(false);
            }
            if (dimon != null)
            {
                dimon.gameObject.SetActive(false);
            }
        }

        if ((int)data["Finish"] != 1 || (int)data["Finish"] == null)
        {
            viewTable(data);
            JArray ArrP = getJArray(data, "ArrP");
            if ((int)data["T"] > 0)
            {
                for (int i = 0; i < ArrP.Count; i++)
                {
                    if ((bool)ArrP[i]["isStart"])
                    {
                        setPlayerTurn((int)ArrP[i]["id"], (int)data["T"]);
                    }
                }
            }
            else
            {
                for (int i = 0; i < ArrP.Count; i++)
                {
                    if ((bool)ArrP[i]["isStart"])
                    {
                        setPlayerTurn((int)ArrP[i]["id"], 0);
                    }
                }
            }
            viewCardOnDeck(ArrP);
        }
    }
    public async override void handleRJTable(string objData)
    {
        base.handleRJTable(objData);
        JObject data = JObject.Parse(objData);
        cleanTable(false);
        JObject hitPot = (JObject)data["HitPot"];
        potView((int)hitPot["AG"], (int)hitPot["rounds"], false);
        var dimon = m_HitPotSG.transform.Find("dimond");
        if ((int)hitPot["pid"] != 0)
        {
            var player = getPlayerWithID((int)hitPot["pid"]);
            showDimond(player._indexDynamic);
            if (dimon != null)
            {
                dimon.gameObject.SetActive(true);
            }
        }
        if ((int)data["T"] > 0)
        {
            setPlayerTurn((int)data["CN"], (int)data["T"], (bool)data["isDaBoc"]);
        }
        else
        {
            setPlayerTurn((int)data["CN"], 0);
        }
        viewTable(data);
        JArray ArrP = getJArray(data, "ArrP");
        viewCardOnDeck(ArrP);
        updateGroupBanner();
        _isDraw = (bool)data["isDaBoc"];
        if (!_isDraw && _CurrentPlayerP == thisPlayer)
        {
            await Task.Delay(200);
            showArrow();
            showEatHint();
        }

        var status = getString(data, "statusGame");
        if (status == "WAIT_FOR_START" || status == "DECLEARING" || status == "FINISH")
        {
            activeAllButton(false);
            hideArrow();
        }
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.START_GAME);
    }
    public void handleTimeToStart(JObject data)
    {
        //{ "evt":"timeToStart","time":5}
        stateGame = Globals.STATE_GAME.WAITING;
        cleanTable();
    }
    public async void handleLc(JObject data)
    {
        stateGame = Globals.STATE_GAME.PLAYING;
        initCardStack(_CountCards[Globals.Config.curGameId], true);
        updateGroupBanner();
        toggleResultTable(true);
        // dealCards
        await Task.Delay(1500);
        List<int> listCards = getListInt(data, "Arr");
        if (listCards.Count == 12)
        {
            Card card = _CardStackCs[_CardStackCs.Count - 1];
            _CardStackCs.RemoveAt(_CardStackCs.Count - 1);
            putCard(card);
        }
        else
        {
            hideArrow();
            _isDraw = true;
        }
        hideArrow();
        int limit;
        for (var i = 0; i < players.Count(); i++)
        {
            float delay = 0f;
            limit = 12;
            int indexD = players[i]._indexDynamic;
            Vector2 pos;
            if (indexD == 0)
            {
                limit = listCards.Count;
            }
            for (var j = 0; j < limit; j++)
            {
                delay += 0.1f;
                var card = _CardStackCs[_CardStackCs.Count - 1];
                _CardStackCs.RemoveAt(_CardStackCs.Count - 1);
                if (indexD == 0)
                {
                    pos = getPlayerCardPosition(limit, limit - 1 - j);
                    card.transform.DOLocalMove(new Vector2(pos.x, pos.y + 20f), 0.2f).SetEase(Ease.InOutQuad).SetDelay(delay);
                    card.transform.DOLocalMove(pos, 0.2f).SetEase(Ease.InOutQuad).SetDelay(delay);
                    card.transform.DOScale(0.8f, 0.4f).SetDelay(0.4f);
                    _CardCodeCs.Add(card);
                }
                else
                {
                    pos = getHandPosition(indexD);
                    card.transform.DOLocalMove(pos, 0.4f).SetEase(Ease.InOutCubic).SetDelay(delay);
                    card.transform.DOScale(0.3f, 0.4f).SetDelay(0.4f);
                }
                players[i].vectorCard.Add(card);
            }
        }
        await Task.Delay(600);
        for (var i = 0; i < players.Count(); i++)
        {
            limit = listCards.Count;
            int indexD = players[i]._indexDynamic;
            for (var j = 0; j < limit; j++)
            {
                if (indexD == 0)
                {
                    var card = players[i].vectorCard[j];
                    foldCardUp(card, listCards[j], 0.3f);
                }
            }
        }
        await Task.Delay(2500);
        for (var i = 0; i < _CardStackCs.Count(); i++)
        {
            var card = _CardStackCs[i];
            card.transform.DOLocalMove(new Vector2(-400 + i / 10f, 60 + i / 6), 0.3f);
            activeAllButton(true);
        }
        autoSortCard(1);
        m_SortBtn.interactable = true;
        await Task.Delay(1000);
        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            setCardTouch(thisPlayer.vectorCard[i]);
        }
        _isDraw = true;
        int nName = (int)data["NName"];
        setPlayerTurn(nName, 16);
        List<int> otherPlayerCard = new();
        for (int i = 0; i < players.Count - 1; i++)
        {
            otherPlayerCard.Add(12);
        }
        Player player = getPlayerWithID(nName);
        if (player._indexDynamic == 1)
        {
            otherPlayerCard[0] = 13;
        }
        if (player._indexDynamic == 2)
        {
            otherPlayerCard[1] = 13;
        }
        _delayUp = 0f;
        showNumbOfCard(_CardStackCs.Count, otherPlayerCard);
    }
    public void handleBetInfo(JObject data) { }
    public void handleUpdateAG(JObject data)
    {
        thisPlayer.ag = (long)data["M"];
        thisPlayer.updateMoney();
    }
    public void handleAcceptFight(JObject data)
    {
        int id = (int)data["pid"];
        Player player = getPlayerWithID(id);
        showFightDecision(player, (int)data["type"]);
        if ((int)data["type"] < 2)
        {
            _BlackListPs.Add(player);
        }
    }
    public void handleDeclare(JObject data)
    {
        int playerId = (int)data["pid"];
        Player player = getPlayerWithID(playerId);
        //player.point = (int)data["score"];
        player.setTurn(false);

        if (player == thisPlayer)
        {
            activeAllButton(false);
            m_SortBtn.interactable = false;
        }
    }
    public void handleFight(JObject data)
    {
        Debug.Log("!> handle fight" + data);
        hideArrow();
        _CurrentPlayerP.setTurn(false);
        showFightScene((int)data["pid"]);
        Transform eat = m_Arrows.transform.Find("eatArrow");
        if (eat != null)
        {
            Destroy(eat.gameObject);
        }
        highLightPlayerArea(3);
        setDarkDumpedCard(0);
        enableAllButton(false);
        var arr = getDeclareData();
        SocketSend.sendTgUpdateCard(arr);
    }
    public void handleBd(JObject data)
    {
        int id = (int)data["pid"];
        Player player = getPlayerWithID(id);
        _FightObjFS.playerFight(player, 0);
        _BlackListPs.Add(player);
    }
    public async void handleDc(JObject data)
    {
        //{ "N":7990790,"C":46,"NN":7926468,"Cardcuoi":false,"isFight":false,"listUserScore":[{ "pid":7926468,"score":0,"sizeArr":11},{ "pid":7954341,"score":0,"sizeArr":12},{ "pid":7990790,"score":0,"sizeArr":6}],"evt":"dc"}
        Debug.Log("!> handle Dc" + data);
        await Task.Delay(20);
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CARD_FLIP_1);
        //closeDialogFightConfirm();
        _isDraw = false;
        Card dumpCard = null;
        _CurrentPlayerP = getPlayerWithID((int)data["N"]);
        _canFight = (bool)data["isFight"];
        if (thisPlayer == _CurrentPlayerP)
        {
            for (int i = 0; i < _CardCodeCs.Count; i++)
            {
                if (_CardCodeCs[i].code == (int)data["C"])
                {
                    _CardCodeCs.RemoveAt(i);
                    break;
                }
            }
            for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
            {
                var card = thisPlayer.vectorCard[i];
                if (card.code == (int)data["C"])
                {
                    if (_checkAutoDc)
                    {
                        _checkAutoDc = false;
                        await Task.Delay(430);
                    }
                    dumpCard = thisPlayer.vectorCard[i];
                    dumpCard.transform.DOKill();
                    dumpCard.removeAllListenerDragDrop();
                    thisPlayer.vectorCard.RemoveAt(i);
                    removeCode((int)data["C"]);
                    break;
                }
            }
            _ChosenCardCs.Clear();
            enableAllButton(false);
            dumpCard.transform.DOScale(0.4f, 0.3f);
            reOrganizeCardPosition(0);
            turnOffTouchForLimitedTime(0.6f);
            updatePlayerPoint();
            destroyHintArrow();
        }
        else
        {
            Vector3 pos = getHandPosition(_CurrentPlayerP._indexDynamic);
            Card cardTemp = spawnCard();
            dumpCard = cardTemp;
            dumpCard.transform.localPosition = pos;
            dumpCard.transform.localScale = new Vector3(0.3f, 0.3f, 1f);
            setCardTouch(dumpCard);
            foldCardUp(dumpCard, (int)data["C"], 0.3f, false, 0.4f);
            updateNumbOfCard(_CurrentPlayerP._indexDynamic, 1, 0);
        }
        Invoke("callNextEvt", 0.6f);
        if (_DumpedCardCs.Count > 0)
            _DumpedCardCs[_DumpedCardCs.Count - 1].removeAllListenerDragDrop();
        _DumpedCardCs.Add(dumpCard);
        setDarkDumpedCard(1);
        Vector3 position = getDumpedCardsPosition(_DumpedCardCs.Count - 1);
        dumpCard.turnBorderBlue(true);
        dumpCard.transform.SetAsLastSibling();
        dumpCard.transform.DOLocalMove(position, 0.4f);
        var pl = getPlayerWithID((int)data["NN"]);
        if (pl != null && (int)data["NN"] != null && (int)data["NN"] != 0)
        {
            setPlayerTurn((int)data["NN"], 20);
            if (pl == thisPlayer)
            {
                await Task.Delay(700);
                showEatHint();
            }
        }
        else
        {
            for (int i = 0; i < players.Count; i++)
            {
                players[i].setTurn(false);
            }
        }
        reSetZOrder();
        checkAllowTongits();
    }
    public async void handleBc(JObject data)
    {
        //{ "evt":"bc","C":0,"pid":7926468}
        Debug.Log("!> handle Bc" + data);
        _checkAutoDc = true;
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CARD_FLIP_1);
        //closeDialogFightConfirm();
        updateNumbOfCard(0, 1, 0);
        _isDraw = true;
        Card card;
        int lastIndex = _CardStackCs.Count - 1;
        if (_CardStackCs.Count > 0)
        {
            card = _CardStackCs[lastIndex];
            _CardStackCs.RemoveAt(lastIndex);
        }
        else
        {
            var cardTemp = getCard();
            cardTemp.transform.localPosition = new Vector2(-400, 65);
            card = cardTemp;
        }
        Vector2 pos;
        hideArrow();
        if (thisPlayer == _CurrentPlayerP)
        {
            thisPlayer.vectorCard.Add(card);
            card.code = (int)data["C"];
            setCardTouch(card);
            pos = getPlayerCardPosition(thisPlayer.vectorCard.Count, thisPlayer.vectorCard.Count - 1);
            foldCardUp(card, (int)data["C"], 0.3f, false);
            _currentCodeOrder.Add((int)data["C"]);
            if (_playerGroups.Count > 1)
            {
                _playerGroups[_playerGroups.Count - 1].Add((int)data["C"]);
            }
            _CardCodeCs.Add(card);
            _ChosenCardCs.Clear();
            enableAllButton(false);
            updatePlayerPoint();
            var eat = m_Arrows.transform.Find("eatArrow");
            if (eat != null)
            {
                Destroy(eat.gameObject);
            }
            turnOffTouchForLimitedTime(0.6f);
            Invoke("callNextEvt", 07f);
            destroyHintArrow();
        }
        else
        {
            updateNumbOfCard(_CurrentPlayerP._indexDynamic, 1, 1);
            pos = getHandPosition(_CurrentPlayerP._indexDynamic);
            card.transform.DOScale(0.3f, 0.6f);
            callNextEvt();
        }
        card.transform.DOLocalMove(pos, 0.35f).OnComplete(() =>
        {
            _checkAutoDc = false;
            if (thisPlayer == _CurrentPlayerP)
                reOrganizeCardPosition(1);
        }); ;
        card.transform.DORotate(new Vector3(0f, 0f, -40f), 0.25f);
        card.transform.SetAsLastSibling();
        card.transform.DORotate(new Vector3(0f, 0f, 0f), 0.25f).SetEase(Ease.OutCubic);
        if (thisPlayer != _CurrentPlayerP)
        {
            await Task.Delay(600);
            putCard(card);
        }
        m_SortBtn.interactable = false;
        StartCoroutine(enableSortAfterDelay(0.8f));
        reSetZOrder();
    }
    public async void handleHc(JObject data)
    {
        Debug.Log("!> handle Hc" + data);
        SoundManager.instance.playEffectFromPath(Globals.SOUND_TONGITS.TgEatcardMusic);
        //closeDialogFightConfirm();
        Player player = getPlayerWithID((int)data["pid"]);
        List<Card> temp = new();
        int dId = player._indexDynamic;
        List<int> arr = getListInt(data, "listC");
        int limit = _CardsInDeck[dId].Count;
        if (limit == 1)
        {
            if (_CardsInDeck[dId][0].Count < 3)
            {
                _CardsInDeck[dId].RemoveAt(0);
                limit = 0;
            }
        }
        Vector2 pos = setDropedCardPosition(dId, 0, limit);

        if (dId != 0)
        {
            if ((int)data["cardEat"] != 0)
            {
                Card card = _DumpedCardCs[_DumpedCardCs.Count - 1];
                _DumpedCardCs.RemoveAt(_DumpedCardCs.Count - 1);
                card.transform.DOLocalMove(pos, 0.4f).SetEase(Ease.OutCubic).OnComplete(() =>
                {
                    putCard(card);
                });
            }
            int z = arr.Count - 1;
            if ((int)data["cardEat"] != 0)
            {
                updateNumbOfCard(dId, z, 0);
            }
            else
            {
                updateNumbOfCard(dId, z + 1, 0);
            }

            for (int i = 0; i < arr.Count; i++)
            {
                Card cardTemp = spawnCard();
                cardTemp.transform.localScale = new Vector3(0.3f, 0.3f, 1f);
                cardTemp.transform.localPosition = pos;
                cardTemp.setTextureWithCode(arr[i], true);
                Vector2 destination = setDropedCardPosition(dId, i, limit);
                cardTemp.transform.DOLocalMove(destination, 0.3f).SetDelay(0.4f + i * 0.1f);
                cardTemp.turnBorderBlue(false);
                cardTemp.turnHighlightYellow(false);
                setCardTouch(cardTemp);
                if (arr[i] == (int)data["cardEat"] && (int)data["cardEat"] != 0)
                {
                    cardTemp.showBorder(true);
                    //ShowBurnAni(destination);
                }
                if (dId == 1 && Globals.Config.curGameId != (int)Globals.GAMEID.TONGITS11)
                {
                    cardTemp.transform.SetSiblingIndex(z);
                    z--;
                }
                else
                {
                    cardTemp.transform.SetSiblingIndex(i);
                }
                temp.Add(cardTemp);
            }
        }
        else
        {
            _alreadyDropped = true;
            enableAllButton(false);
            if ((int)data["cardEat"] != 0)
            {
                hideArrow();
                Card card = _DumpedCardCs[_DumpedCardCs.Count - 1];
                _DumpedCardCs.RemoveAt(_DumpedCardCs.Count - 1);
                card.transform.DOLocalMove(pos, 0.4f).SetEase(Ease.OutCubic).OnComplete(() =>
                {
                    putCard(card);
                });
            }
            int z = arr.Count - 1;
            List<Card> arrayReturn = new();
            for (int j = 0; j < arr.Count; j++)
            {
                for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
                {
                    Card dumpCard = thisPlayer.vectorCard[i];
                    if (dumpCard.code == arr[j])
                    {
                        arrayReturn.Add(dumpCard);
                    }
                }
            }
            foreach (Card card in arrayReturn)
            {
                card.transform.DOScale(0.3f, 0.4f);
                card.transform.DOLocalMove(pos, 0.4f).SetEase(Ease.OutCubic).OnComplete(() =>
                {
                    putCard(card);
                });
            }
            for (int j = 0; j < arrayReturn.Count; j++)
            {
                for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
                {
                    if (thisPlayer.vectorCard[i] == arrayReturn[j])
                    {
                        thisPlayer.vectorCard.RemoveAt(i);
                        i--;
                    }
                }
            }
            List<Card> cardValue = new();
            foreach (Card selectedCard in _ChosenCardCs)
            {
                cardValue.Add(selectedCard);
            }
            for (int j = 0; j < cardValue.Count; j++)
            {
                for (int i = 0; i < _CardCodeCs.Count; i++)
                {
                    if (_CardCodeCs[i] == cardValue[j])
                    {
                        _CardCodeCs.RemoveAt(i);
                        i--;
                    }
                }
            }
            foreach (Card cardValueItem in cardValue)
            {
                _CardCodeCs.Remove(cardValueItem);
            }
            foreach (int code in arr)
            {
                removeCode(code);
            }
            _ChosenCardCs.Clear();

            List<Card> namEvac = new();
            for (int i = 0; i < arr.Count; i++)
            {
                Card cardTemp = spawnCard();
                cardTemp.transform.localScale = new Vector3(0.3f, 0.3f, 1f);
                cardTemp.gameObject.SetActive(false);
                cardTemp.setTextureWithCode(arr[i], true);
                setCardTouch(cardTemp);
                namEvac.Add(cardTemp);
                Vector2 destination = setDropedCardPosition(dId, i, limit);
                if (arr[i] == (int)data["cardEat"] && (int)data["cardEat"] != 0)
                {
                    cardTemp.showBorder(true);
                    //    ShowBurnAni(destination);
                }
            }
            sortDropedCard(namEvac, false);
            await Task.Delay(50);
            foreach (Card cardTemp in namEvac)
            {
                int index = namEvac.IndexOf(cardTemp);
                cardTemp.transform.localPosition = pos;
                cardTemp.gameObject.SetActive(true);
                temp.Add(cardTemp);
                Vector2 destination = setDropedCardPosition(dId, index, limit);
                cardTemp.transform.DOLocalMove(destination, 0.3f).SetDelay(0.05f + index * 0.1f);
                cardTemp.turnBorderBlue(false);
                cardTemp.turnHighlightYellow(false);

                if (dId == 1 && Globals.Config.curGameId != (int)Globals.GAMEID.TONGITS11)
                {
                    cardTemp.transform.SetSiblingIndex(z);
                    z--;
                }
                else
                {
                    cardTemp.transform.SetSiblingIndex(index);
                }
                await Task.Delay(100);
            }
            turnOffTouchForLimitedTime(0.6f);
            reSetZOrder();
            updatePlayerPoint();
            _ChosenCardCs.Clear();
            _ChosenCardC = null;
            await Task.Delay(namEvac.Count * 100);
            reOrganizeCardPosition(0);
            showScHint();
        }
        await Task.Delay(dId != 0 ? 100 : 50 + (arr.Count - 1) * 100);
        _CardsInDeck[dId].Add(temp);
        callNextEvt();
        reSetZOrder();
    }
    public void handleSc(JObject data)
    {
        Debug.Log("!> handle sc" + data);
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CARD_FLIP_1);
        //closeDialogFightConfirm();
        Player player = getPlayerWithID((int)data["pid"]);
        Player plS = getPlayerWithID((int)data["pidS"]);
        List<int> arrP = getListInt(data, "arrP");
        List<int> arrGui = getListInt(data, "arrGui");
        int index = convertCodeToIndex(arrP, plS._indexDynamic);
        List<List<Card>> stack = _CardsInDeck[plS._indexDynamic];
        if (player == thisPlayer)
        {
            List<Card> temp = new();
            foreach (int code in arrGui)
            {
                foreach (Card card in thisPlayer.vectorCard)
                {
                    if (card.code == code)
                    {
                        temp.Add(card);
                        stack[index].Add(card);
                    }
                }
            }
            foreach (Card card in temp)
            {
                for (int j = 0; j < _CardCodeCs.Count; j++)
                {
                    if (_CardCodeCs[j].code == card.code)
                    {
                        _CardCodeCs.RemoveAt(j);
                        break;
                    }
                }
            }
            for (int i = 0; i < temp.Count; i++)
            {
                for (int j = 0; j < thisPlayer.vectorCard.Count; j++)
                {
                    if (thisPlayer.vectorCard[j] == temp[i])
                    {
                        thisPlayer.vectorCard.RemoveAt(j);
                        break;
                    }
                }
            }
            for (int i = 0; i < arrGui.Count; i++)
            {
                for (int j = 0; j < _CardCodeCs.Count; j++)
                {
                    if (arrGui[i] == _CardCodeCs[j].code)
                    {
                        _CardCodeCs.RemoveAt(j);
                        break;
                    }
                }
            }
            foreach (int code in arrGui)
            {
                removeCode(code);
            }
            reOrganizeCardPosition(0);
            _ChosenCardC = null;
            _ChosenCardCs.Clear();
            enableAllButton(false);
            updatePlayerPoint();
            turnOffTouchForLimitedTime(0.3f);
            destroyHintArrow();
            showScHint();
        }
        else
        {
            updateNumbOfCard(player._indexDynamic, arrGui.Count(), 0);
            foreach (int code in arrGui)
            {
                Card cardTemp = spawnCard();
                cardTemp.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
                cardTemp.setTextureWithCode(code, true);
                cardTemp.transform.localPosition = getHandPosition(player._indexDynamic);
                stack[index].Add(cardTemp);
            }
        }
        for (int i = 0; i < stack.Count; i++)
        {
            int z = stack[i].Count - 1;
            if (i == index)
            {
                sortDropedCard(stack[i]);
            }
            foreach (Card card in stack[i])
            {
                card.turnBorderBlue(false);
                card.turnHighlightYellow(false);
                //cardTemp.showSmall(true);
                destroyHintArrow();
                Vector3 pos = setDropedCardPosition(plS._indexDynamic, stack[i].IndexOf(card), i);
                card.transform.DOLocalMove(pos, 0.3f);
                card.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
                if (plS._indexDynamic == 1 && Globals.Config.curGameId == (int)Globals.GAMEID.TONGITS11)
                {
                    card.transform.SetSiblingIndex(z);
                    z--;
                }
                else
                {
                    if (plS._indexDynamic == 1)
                    {
                        card.transform.SetSiblingIndex(z);
                        z--;
                    }
                    else
                        card.transform.SetSiblingIndex(stack[i].IndexOf(card));
                }
            }
        }
        Invoke("callNextEvt", 0.1f);
    }
    public void handleMsg(JObject data)
    {
        string text = getString(data, "text");
        showNoti(text);
        reOrganizeCardPosition(0);
        enableAllButton(false);
        _ChosenCardCs.Clear();
        _ChosenCardC = null;
        destroyHintArrow();
        foreach (Player player in players)
        {
            List<List<Card>> stack = _CardsInDeck[players.IndexOf(player)];
            foreach (List<Card> sublist in stack)
            {
                if (sublist.Count > 0)
                {
                    foreach (Card card in sublist)
                    {
                        card.turnHighlightYellow(false);
                        card.turnBorderBlue(false);
                    }
                }
            }
        }
    }
    public async void handleXepBai(JObject data)
    {
        resetStateCardAndButton();
        hideArrow();
        bool isFight = true;
        reOrganizeCardPosition(0);
        updatePlayerPoint();
        _ChosenCardCs = new List<Card>();
        _ChosenCardC = null;
        enableAllButton(false);
        foreach (Player blackListItem in _BlackListPs)
        {
            if (thisPlayer == blackListItem)
            {
                isFight = false;
                break;
            }
        }
        if (isFight)
        {
            showXepBai();
        }
        else
        {
            showXepBaiBlackList();
        }
        float time = (float)data["time"];
        foreach (Player player in players)
        {
            if (player.vectorCard.Count > 0 && !checkIfBlackList(player))
            {
                player.setTurn(true, time);
            }
        }
        if (checkIfBlackList(thisPlayer))
        {
            m_SortBtn.interactable = false;
        }
        await Task.Delay((int)time);
        List<List<int>> arr = getDeclareData();
        SocketSend.sendTgUpdateCard(arr);
    }
    public void handleBp(JObject data)
    {
        Debug.Log("!> handle bp" + data);
        //closeDialogFightConfirm();
        Player player = getPlayerWithID((int)data["pid"]);
        _BlackListPs.Add(player);
        if (player == thisPlayer)
        {
            m_SortBtn.interactable = false;
            hideArrow();
            setDarkDumpedCard(0);
            activeAllButton(false);
        }
    }
    public async void handleFinish(JObject data)
    {
        _alreadyDropped = false;
        StopAllActions();
        _BlackListPs.Clear();
        //buttonManager.StopAllCoroutines();
        m_SortBtn.interactable = false;
        cleanResult();
        Debug.Log("!> handle finish" + data);
        hideArrow();
        _isDraw = false;
        highLightPlayerArea(3);
        setDarkDumpedCard(0);
        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
        }
        int hitPotDelay = 3000;
        bool isTongits = false;
        bool isHitPot = false;
        Player winnerPlayer = null;
        foreach (var player in players)
        {
            player.setTurn(false);
        }
        turnOffTouch();
        _TouchedCardCs.Clear();
        activeAllButton(false);
        clearFight();
        // try
        // {
        // }
        // catch (Exception err)
        // {
        //     Debug.Log("!> error: " + err);
        // }
        JArray listPl = JArray.Parse(getString(data, "data"));
        foreach (var item in listPl)
        {
            JArray jarr = (JArray)item["arr"];
            List<List<int>> codes = jarr.ToObject<List<List<int>>>();
            if ((int)item["tongits"] > 0)
            {
                showTongitsScene((int)item["pid"], codes);
                isTongits = true;
                break;
            }
        }
        foreach (var item in listPl)
        {
            if ((int)item["HitPot"] > 0)
            {
                isHitPot = true;
                winnerPlayer = getPlayerWithID((int)item["pid"]);
                break;
            }
        }
        clearNumbOfCard();
        if (isHitPot && !isTongits)
        {
            hitPotDelay = 5000;
            showOtherResult(listPl);
            showDimondMoveUp(listPl);
            StartCoroutine(showHitPotAniCoroutine(3000, winnerPlayer));
        }
        else if (!isHitPot && isTongits)
        {
            hitPotDelay = 4000;
            StartCoroutine(showOtherResultCoroutine(4000, listPl));
        }
        else if (isHitPot && isTongits)
        {
            hitPotDelay = 8000;
            StartCoroutine(showOtherResultCoroutine(4000, listPl, true));
            StartCoroutine(showHitPotAniCoroutine(6500, winnerPlayer));
        }
        else if (!isHitPot && !isTongits)
        {
            showOtherResult(listPl);
        }
        foreach (ShowGroupBanner sgb in _GroupBannerSGB) sgb.gameObject.SetActive(false);
        await Task.Delay(hitPotDelay + 1000);
        showWinLose(listPl);
        await Task.Delay(3000);
        showResultTable(listPl);
    }
    public void handleHitpot(JObject data)
    {
        potView((int)data["ag"], (int)data["roundHitPot"]);
        GameObject dimon = m_HitPotSG.transform.Find("dimond").gameObject;
        if ((int)data["NameWin"] != 0)
        {
            Player player = getPlayerWithID((int)data["NameWin"]);
            int playerIndex = player._indexDynamic;
            showDimond(playerIndex);

            if (dimon != null)
            {
                dimon.gameObject.SetActive(true);
            }
        }
    }

    private void destroyFightObj()
    {
        if (_FightObjFS != null)
        {
            Destroy(_FightObjFS.gameObject);
            _FightObjFS = null;
        }
    }
    public void cleanTable(bool updateBanner = false)
    {
        if (_checkSwap)
            swapzIndexGo(playerContainer.gameObject, m_Cards);
        m_FightConfirm.SetActive(false);
        for (var i = 0; i <= 1; i++)
        {
            m_OtherScores[i].SetActive(false);
        }
        m_PointTMP.text = "0";
        foreach (Player player in players)
        {
            int count = player.vectorCard.Count;
            for (int j = 0; j < count; j++)
            {
                Card card = player.vectorCard[j];
                putCard(card);
            }
            player.vectorCard.Clear();
        }

        foreach (Card card in _DumpedCardCs)
        {
            putCard(card);
        }

        foreach (List<List<Card>> stack in _CardsInDeck)
        {
            foreach (List<Card> cardList in stack)
            {
                foreach (Card card in cardList)
                {
                    putCard(card);
                }
                cardList.Clear();
            }
        }

        foreach (Card card in _CardStackCs)
        {
            putCard(card);
        }

        _CardCodeCs.Clear();
        _CardStackCs.Clear();
        _DumpedCardCs.Clear();

        _CardsInDeck = new List<List<List<Card>>> { new(), new(), new() };
        _currentCodeOrder.Clear();
        _playerGroups.Clear();
        _ChosenCardCs.Clear();
        _ChosenCardC = null;
        clearNumbOfCard();
        if (updateBanner) updateGroupBanner();
        turnOffTouch();
        _TouchedCardCs.Clear();
        checkAutoExit();

        if (Globals.Config.curGameId == (int)Globals.GAMEID.TONGITS11)
        {
            Transform other = transform.Find("playerScoreOther");
            if (other != null)
                other.GetChild(0).gameObject.SetActive(false);

            Transform title = transform.Find("cardOnHand");
            if (title != null)
                title.gameObject.SetActive(false);
        }

        _canFight = false;
        enableFight(_canFight);
    }
    public void StopAllActions()
    {
        StopAllCoroutines();
        CancelInvoke();
    }
    async void viewTable(JObject data)
    {
        JArray ArrP = getJArray(data, "ArrP");
        foreach (JObject playerData in ArrP)
        {
            if ((int)playerData["id"] == thisPlayer.id)
            {
                JArray jarr = (JArray)playerData["arr"];
                List<List<int>> arr = jarr.ToObject<List<List<int>>>();
                viewHand(arr);
            }
            if ((int)data["CN"] == (int)playerData["id"] && (int)playerData["id"] == thisPlayer.id)
            {
                if ((bool)playerData["isFight"] == true)
                {
                    _canFight = true;
                    enableFight(true);
                }
            }
        }
        initCardStack((int)data["cardNoc"], false);
        List<int> ArrD = getListInt(data, "ArrD");
        for (int i = 0; i < ArrD.Count; i++)
        {
            Card cardTemp = spawnCard();
            cardTemp.setTextureWithCode(ArrD[i]);
            cardTemp.transform.localScale = new Vector3(0.4f, 0.4f, 1f);
            _DumpedCardCs.Add(cardTemp);
            var pos = getDumpedCardsPosition(i);
            cardTemp.transform.localPosition = pos;
            if (i == ArrD.Count - 1)
            {
                cardTemp.turnBorderBlue(true);
            }
            else
            {
                cardTemp.setDark(true);
            }
            if (i == ArrD.Count - 1)
                setCardTouch(cardTemp);
        }
        List<int> otherPlayerCard = new();
        for (int i = 0; i < players.Count - 1; i++)
        {
            otherPlayerCard.Add(12);
        }
        for (var i = 0; i < ArrP.Count; i++)
        {
            JObject playerData = (JObject)ArrP[i];
            var player = getPlayerWithID((int)playerData["id"]);
            if (player != thisPlayer)
            {
                int count = 0;
                JArray jarr = (JArray)playerData["arr"];
                List<List<int>> arr = new();
                for (var j = 0; j < jarr.Count; j++)
                {
                    JArray arrItem = (JArray)jarr[j];
                    count += arrItem.Count();
                }
                otherPlayerCard[player._indexDynamic - 1] = count;
            }
        }
        showNumbOfCard((int)data["cardNoc"], otherPlayerCard);
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.START_GAME);
        await Task.Delay(600);
        m_SortBtn.interactable = true;
    }
    void viewHand(List<List<int>> ArrC)
    {
        if (ArrC.Count > 0)
        {
            _playerGroups = ArrC;
            reOrganizeCodeOrderByGroup();
        }
        _CardCodeCs = new List<Card>();
        foreach (var card in thisPlayer.vectorCard)
        {
            _CardCodeCs.Add(card);
        }
        for (int index = 0; index < ArrC.Count; index++)
        {
            for (int i = 0; i < ArrC[index].Count; i++)
            {
                var cardTemp = spawnCard();
                var pos = getPlayerCardPosition(ArrC[0].Count, i);
                cardTemp.transform.localPosition = pos;
                cardTemp.setTextureWithCode(ArrC[index][i]);
                _CardCodeCs.Add(cardTemp);
                cardTemp.transform.localScale = new Vector3(0.8f, 0.8f, 1f);
                setCardTouch(cardTemp);
                thisPlayer.vectorCard.Add(cardTemp);
            }
        }
        autoSortCard(1);
        for (int i = 0; i < players.Count; i++)
        {
            var player = players[i];
            if (player != thisPlayer)
            {
                var pos = getHandPosition(player._indexDynamic);
                var cardTemp = spawnCard();
                cardTemp.transform.localPosition = pos;
                cardTemp.transform.localScale = new Vector3(0.3f, 0.3f, 1f);
                player.vectorCard.Add(cardTemp);
            }
        }
        activeAllButton(true);
    }
    void viewCardOnDeck(JArray arrP)
    {
        foreach (JObject pData in arrP)
        {
            Player player = getPlayer(getString(pData, "N"));
            JArray dataArrH = (JArray)pData["ArrH"];
            List<List<int>> dropedDeck = dataArrH.ToObject<List<List<int>>>();
            int indexD = player._indexDynamic;
            if (player != thisPlayer)
            {
                Vector2 pos = getHandPosition(indexD);
                Card cardTemp = spawnCard();
                cardTemp.transform.localPosition = pos;
                cardTemp.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
                player.vectorCard.Add(cardTemp);
            }
            // Spawn dropped cards on the deck
            for (int j = 0; j < dropedDeck.Count; j++)
            {
                var deck = dropedDeck[j];
                if (deck.Count > 0)
                {
                    if (player == thisPlayer) _alreadyDropped = true;
                    List<Card> temp = new();
                    for (int i = 0; i < deck.Count; i++)
                    {
                        Card cardTemp = spawnCard();
                        cardTemp.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
                        cardTemp.setTextureWithCode(deck[i], true);
                        if (indexD == 1)
                        {
                            cardTemp.transform.SetAsFirstSibling();
                        }
                        temp.Add(cardTemp);
                        Vector2 destination = setDropedCardPosition(indexD, i, j);
                        setCardTouch(cardTemp);
                        cardTemp.transform.DOLocalMove(destination, 0.3f).SetEase(Ease.InOutCubic);
                    }
                    _CardsInDeck[indexD].Add(temp);
                }
                else
                {
                    List<Card> temp = new();
                    for (int i = 0; i < deck.Count; i++)
                    {
                        Card cardTemp = spawnCard();
                        cardTemp.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
                        cardTemp.setTextureWithCode(deck[i], true);
                        temp.Add(cardTemp);
                        Vector2 destination = setDropedCardPosition(indexD, i, 0);
                        setCardTouch(cardTemp);
                        cardTemp.transform.DOLocalMove(destination, 0.3f).SetEase(Ease.InOutCubic);
                    }
                    _CardsInDeck[indexD].Add(temp);
                }
            }
        }
    }
    void potView(int money, int round, bool isChangeMoney = true)
    {
        m_PotPV.SetInfo(money, round);
        if (!isChangeMoney)
        {
            return;
        }
        foreach (var player in players)
        {
            var moneyLeft = player.ag - agTable * 2;
            updatePlayerMoney(player, moneyLeft);
            player.playerView.effectFlyMoney(0 - agTable * 2, 40);
        }
    }
    void updatePlayerMoney(Player player, long money)
    {
        player.ag = money;
        player.updateMoney();
    }
    void setPlayerTurn(int playerID, float time, bool isDaBoc = false)
    {
        hideArrow();
        Player player = getPlayerWithID(playerID);
        foreach (Player p in players)
        {
            p.setTurn(false);
        }
        if (player == null) return;
        if (player == thisPlayer)
        {
            if (thisPlayer.vectorCard.Count > 12 || isDaBoc)
            {
                _isDraw = true;
                hideArrow();
            }
            else if (!isDaBoc)
            {
                StartCoroutine(showArrowWithDelay(0.7f));
            }
            if (checkIfCanFight())
            {
                enableFight(true);
            }
        }
        if (player != null)
        {
            _CurrentPlayerP = player;
            player.setTurn(true, time);
            highLightPlayerArea(player._indexDynamic);
        }
        else
        {
            foreach (Player p in players)
            {
                p.setTurn(false);
            }
            highLightPlayerArea(3);
        }
    }
    IEnumerator showArrowWithDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        showArrow();
    }
    bool checkIfCanFight()
    {
        if (_CardsInDeck[0].Count > 0 && _canFight == true)
        {
            return true;
        }
        return false;
    }
    void foldCardUp(Card card, int code, float time, bool isLc = true, float scale = 0.8f, float delay = 0.3f)
    {
        bool isSmall = scale < 0.4f ? true : false;
        Vector2 scaleCard = new(0.01f, scale);
        if (isLc)
        {
            card.transform.DOScale(scaleCard, time / 2f).SetDelay(_delayUp += 0.1f).OnComplete(() =>
            {
                card.setTextureWithCode(code, isSmall);
                card.transform.DOScale(scale, 0.2f).SetEase(Ease.InOutCubic);
            });
        }
        else
        {
            card.transform.DOScale(scaleCard, time / 2f).SetDelay(delay).OnComplete(() =>
            {
                card.setTextureWithCode(code, isSmall);
                card.transform.DOScale(scale, 0.2f).SetEase(Ease.InOutCubic);
            });
        }
    }
    public async void initCardStack(int numb, bool isAni)
    {
        if (isAni)
        {
            SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CARD_FLIP_1);
        }
        for (int i = 0; i < numb; i++)
        {
            Card cardTemp = spawnCard();
            _CardStackCs.Add(cardTemp);
            if (isAni)
            {
                cardTemp.transform.localPosition = new Vector2(0 + i / 10f, 60 + i / 6f);
            }
            else
            {
                cardTemp.transform.localPosition = new Vector2(-400 + i / 10f, 60 + i / 6f);
            }
        }
        if (isAni)
        {
            foreach (Card card in _CardStackCs)
            {
                int index = _CardStackCs.IndexOf(card);
                Vector2 pos;
                float skX, skY;
                if (index % 2 == 0)
                {
                    pos = new Vector2(80 + index * 0.3f, 130 + index * 0.3f);
                    skX = -8f;
                    skY = -16f;
                }
                else
                {
                    pos = new Vector2(-80 - index * 0.3f, 130 + index * 0.3f);
                    skX = 8f;
                    skY = 16f;
                }
                Quaternion newRotation = Quaternion.Euler(skX, skY, 0);

                card.transform.DOLocalMove(pos, 0.3f).SetEase(Ease.InOutCubic);
                card.transform.DORotate(newRotation.eulerAngles, 0.3f).SetEase(Ease.InOutCubic);
            }
            await Task.Delay(300);
            for (var i = 0; i < _CountCards[Globals.Config.curGameId]; i++)
            {
                var card = _CardStackCs[i];
                var pos = new Vector2(0 + i / 10f, 100f + i / 6f);
                card.transform.DOLocalMove(pos, 0.3f).SetEase(Ease.InOutCubic).SetDelay(0.02f * i);
                card.transform.DORotate(Vector3.zero, 0.3f).SetEase(Ease.InOutCubic).SetDelay(0.02f * i);
            }
        }
    }
    async void autoSortCard(int type)
    {
        Vector2 pos = getHandPosition(0);
        //selectedCard = null;
        //selectedArrC.Clear();
        enableDrop(false);
        enableDump(false);
        enableGroup(false);
        for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            Card card = thisPlayer.vectorCard[i];
            card.transform.DOLocalMove(pos, 0.1f);
        }
        if (type == 1)
        {
            sortCodeUpByValue();
            spotGroup();
        }
        else if (type == 2)
        {
            _playerGroups.Clear();
            sortCodeUpByKindsASC();
        }
        updatePlayerPoint();
        if (Config.curGameId == (int)GAMEID.TONGITS_JOKER && type == 1)
        { // bổ sung check joker ghép với đôi lớn nhất nếu có
            foreach (List<int> list in _playerGroups)
            {
                int countJoker = 0;
                foreach (int item in list)
                    if (item == Globals.Config.CODE_JOKER_BLACK || item == Globals.Config.CODE_JOKER_RED)
                        countJoker++;
                if (_playerGroups.IndexOf(list) != (_playerGroups.Count - 1) && list.Count == countJoker)
                {
                    _playerGroups.Last().AddRange(list);
                    list.Clear();
                }
            }
            for (int i = 0; i < _playerGroups.Count; i++)
            {
                if (_playerGroups[i].Count <= 0)
                {
                    _playerGroups.RemoveAt(i);
                    i--;
                }
            }
            if (_playerGroups.Count <= 0)
            {
                List<int> tempList = new();
                foreach (Card cardC in thisPlayer.vectorCard) tempList.Add(cardC.code);
                _playerGroups.Add(tempList);
            }
            List<int> jokerIds = new();
            foreach (int item in _playerGroups.Last())
                if (item == Globals.Config.CODE_JOKER_BLACK || item == Globals.Config.CODE_JOKER_RED)
                    jokerIds.Add(item);
            if (jokerIds.Count > 0)
            {
                List<int> coupleNumberAndIds = new();
                int numberCompare = 0;
                for (int i = 0; i < _playerGroups.Last().Count - 1; i++)
                {
                    Card firstCardC = thisPlayer.vectorCard.Find(x => x.code == _playerGroups.Last()[i]);
                    if (numberCompare != firstCardC.N) numberCompare = firstCardC.N;
                    for (int j = i + 1; j < _playerGroups.Last().Count; j++)
                    {
                        Card secondCardC = thisPlayer.vectorCard.Find(x => x.code == _playerGroups.Last()[j]);
                        if (numberCompare == secondCardC.N)
                        {
                            coupleNumberAndIds.AddRange(new List<int>() { numberCompare, firstCardC.code, secondCardC.code });
                            break;
                        }
                    }
                }
                List<List<int>> jokerGroups = new();
                while (jokerIds.Count > 0)
                {
                    int maxGroupId = -1, maxNumber = 0;
                    for (int i = 0; i < coupleNumberAndIds.Count; i += 3)
                    {
                        if (coupleNumberAndIds[i] > maxNumber)
                        {
                            maxNumber = coupleNumberAndIds[i];
                            maxGroupId = i;
                        }
                    }
                    if (maxGroupId < 0) break;
                    jokerGroups.Add(new List<int>() { jokerIds[0], coupleNumberAndIds[maxGroupId + 1], coupleNumberAndIds[maxGroupId + 2] });
                    coupleNumberAndIds.RemoveRange(maxGroupId, 3);
                    jokerIds.RemoveAt(0);
                }
                foreach (List<int> list in jokerGroups)
                {
                    _playerGroups.Insert(0, list);
                    foreach (int item in list) _playerGroups.Last().Remove(item);
                }
            }
            if (_playerGroups.Count <= 1) _playerGroups.Clear();
            else
            {
                List<Card> ascendingLeftOverCardCs = new();
                foreach (int item in _playerGroups.Last())
                {
                    Card cardC = thisPlayer.vectorCard.Find(x => x.code == item);
                    ascendingLeftOverCardCs.Add(cardC);
                }
                ascendingLeftOverCardCs = ascendingLeftOverCardCs.OrderBy(x => x.N).ToList();
                List<int> sortedCodes = new();
                foreach (Card cardC in ascendingLeftOverCardCs) sortedCodes.Add(cardC.code);
                _playerGroups.Last().Clear();
                _playerGroups.Last().AddRange(sortedCodes);
                reOrganizeCodeOrderByGroup();
            }
        }
        await Task.Delay(200);
        for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            var card = thisPlayer.vectorCard[i];
            var newPos = getPlayerCardPosition(thisPlayer.vectorCard.Count, i);
            card.setTextureWithCode(_currentCodeOrder[i]);
            card.transform.SetAsLastSibling();
            card.transform.DOLocalMove(newPos, 0.2f);
        }
        _currentSort = type;
        updateGroupBanner();
    }
    void sortCodeUpByValue()
    {
        _currentCodeOrder.Clear();
        List<Card> jokerCs = new();
        for (int i = 0; i < _CardCodeCs.Count; i++)
        {
            if (_CardCodeCs[i].code == Globals.Config.CODE_JOKER_RED || _CardCodeCs[i].code == Globals.Config.CODE_JOKER_BLACK)
            {
                jokerCs.Add(_CardCodeCs[i]);
                _CardCodeCs.Remove(_CardCodeCs[i]);
                i--;
            }
        }
        _CardCodeCs.Sort((a, b) => a.S.CompareTo(b.S));
        _CardCodeCs.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        foreach (Card card in jokerCs) _CardCodeCs.Add(card);
        for (int i = 0; i < _CardCodeCs.Count; i++)
        {
            _currentCodeOrder.Add(_CardCodeCs[i].code);
        }
        //logInfoCard(currentCodeOrder);
    }
    void spotGroup()
    {
        _playerGroups.Clear();
        List<Card> leftOver = new();
        List<Card> joker = new();
        List<Card> orgCard = new(_CardCodeCs);
        orgCard.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        orgCard.Reverse();
        // Find and handle jokers
        for (int i = 0; i < orgCard.Count; i++)
        {
            Card card = orgCard[i];
            if (card.N == Globals.Config.CODE_JOKER_RED || card.N == Globals.Config.CODE_JOKER_BLACK)
            {
                joker.Add(orgCard[i]);
                orgCard.RemoveAt(i);
                i--;
            }
        }
        while (orgCard.Count > 0)
        {
            JObject straight = spotStraightGroupHightLow(orgCard, 0);
            List<int> arrCode = getListInt(straight, "arrCode");
            JArray arr = getJArray(straight, "arrCard");
            if (arrCode.Count >= 3)
            {
                _playerGroups.Add(arrCode);
                spliceArray(orgCard, arrCode);
            }
            else
            {
                int removeIndex = 0;
                for (int i = 0; i < orgCard.Count; i++)
                {
                    if (orgCard[i].N != Globals.Config.CODE_JOKER_BLACK && orgCard[i].N != Globals.Config.CODE_JOKER_RED)
                    {
                        removeIndex = i;
                        break;
                    }
                }
                leftOver.Add(orgCard[removeIndex]);
                orgCard.RemoveAt(removeIndex);
            }
        }
        // Find kinds
        for (int index = -1; index < joker.Count; index++)
        {
            if (index < 0)
                orgCard = new List<Card>(leftOver);
            else
                orgCard = new List<Card>(leftOver.Concat(new List<Card> { joker[index] }));
            leftOver.Clear();
            orgCard.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
            orgCard.Reverse();
            while (orgCard.Count > 0)
            {
                JObject kinds = spotSameKindGroup(orgCard, 0, true);
                List<int> arrCode = getListInt(kinds, "arrCode");
                if (arrCode.Count >= 3)
                {
                    _playerGroups.Add(arrCode);
                    spliceArray(orgCard, arrCode);
                }
                else
                {
                    int removeIndex = 0;
                    for (int i = 0; i < orgCard.Count; i++)
                    {
                        if (orgCard[i].N != Globals.Config.CODE_JOKER_BLACK && orgCard[i].N != Globals.Config.CODE_JOKER_RED)
                        {
                            removeIndex = i;
                            break;
                        }
                    }
                    leftOver.Add(orgCard[removeIndex]);
                    orgCard.RemoveAt(removeIndex);
                }
            }
        }
        // Add leftover cards to playerGroups if any
        if (leftOver.Count > 0 && _playerGroups.Count > 0)
        {
            leftOver.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
            _playerGroups.Add(leftOver.Select(c => c.code).ToList());
        }
        reOrganizeCodeOrderByGroup();
    }
    List<Card> spliceArray(List<Card> arrCode, List<int> arrSplice)
    {
        foreach (int card in arrSplice)
        {
            arrCode.RemoveAll(c => c.code == card);
        }
        return arrCode;
    }
    public List<T> SpliceArray<T>(List<T> arrCode, List<T> arrSplice)
    {
        if (typeof(T) == typeof(Card))
        {
            List<Card> cards = arrCode.Cast<Card>().ToList();

            foreach (Card card in arrSplice.Cast<Card>())
            {
                cards.RemoveAll(c => c.code == card.code);
            }

            return cards.Cast<T>().ToList();
        }
        else if (typeof(T) == typeof(int))
        {
            List<int> integers = arrCode.Cast<int>().ToList();

            foreach (int value in arrSplice.Cast<int>())
            {
                integers.RemoveAll(i => i == value);
            }

            return integers.Cast<T>().ToList();
        }
        else
        {
            throw new ArgumentException("Unsupported type.");
        }
    }
    void reOrganizeCodeOrderByGroup()
    {
        if (_playerGroups.Count > 0)
        {
            _currentCodeOrder = new List<int>();
            for (int i = 0; i < _playerGroups.Count; i++)
            {
                for (int j = 0; j < _playerGroups[i].Count; j++)
                {
                    _currentCodeOrder.Add(_playerGroups[i][j]);
                }
            }
        }
    }
    void enableAllButton(bool isActive)
    {
        Button[] btns = { m_DropBtn, m_DumpBtn, m_FightBtn, m_GroupBtn };
        foreach (Button btn in btns)
        {
            btn.interactable = isActive;
        }
        activeTongits(false);
    }
    void activeAllButton(bool isActive)
    {
        m_ButtonManager.SetActive(isActive);
        Button[] buttons = { m_DropBtn, m_DumpBtn, m_FightBtn, m_GroupBtn };
        foreach (Button btn in buttons)
        {
            btn.gameObject.SetActive(isActive);
        }
        m_DeclareBtn.gameObject.SetActive(false);
        activeTongits(false);
    }
    void enableGroup(bool isActive)
    {
        if (isActive)
        {
            if (_playerGroups.Count >= 6)
                return;
        }
        m_GroupBtn.interactable = isActive;
    }
    void enableDrop(bool isActive)
    {
        m_DropBtn.interactable = isActive;
    }
    void enableFight(bool isActive)
    {
        m_FightBtn.interactable = isActive;
        setNumOfPlayers();
    }
    public void setNumOfPlayers()
    {
        CountPlayers = players.Count;
    }
    private void enableSortButton()
    {
        m_SortBtn.interactable = true;
        allowDraw(true);
    }
    void enableDump(bool isActive)
    {
        m_DumpBtn.interactable = isActive;
        int point = calculatePoint();
        bool turn = thisPlayer.playerView.getIsTurn();
        bool declare = isDeclare();
        activeTongits(!isActive && point == 0 && turn && !declare);
    }
    void activeTongits(bool isActive)
    {
        m_TongitsBtn.gameObject.SetActive(isActive);
    }
    bool isDeclare()
    {
        return m_DeclareBtn.IsActive();
    }
    public async void showFightDecision(Player player, int type)
    {
        if (stateGame == Globals.STATE_GAME.VIEWING)
        {
            return;
        }
        if (_FightObjFS != null && _FightObjFS.gameObject.activeSelf)
        {
            _FightObjFS.playerFight(player, type);
            switch (type)
            {
                case 0:
                    SoundManager.instance.playEffectFromPath(Globals.SOUND_TONGITS.TgFoldMusic);
                    break;
                case 1:
                    SoundManager.instance.playEffectFromPath(Globals.SOUND_TONGITS.TgBurnedMusic);
                    break;
                case 2:
                    SoundManager.instance.playEffectFromPath(Globals.SOUND_TONGITS.TgChallengetMusic);
                    break;
            }
        }
        else
        {
            await Task.Delay(200);
            _FightObjFS.playerFight(player, type);
        }
    }
    public void clearFight()
    {
        Invoke("destroyFightObj", 1.5f);
    }
    public JObject getDumpInfo()
    {
        if (_code != null && _isDraw == true)
        {
            List<List<int>> saveGroup = new(_playerGroups);
            List<int> saveCodes = new(_currentCodeOrder);
            removeCode((int)_code);
            List<List<int>> arr = new();
            if (_playerGroups.Count > 0)
            {
                arr = new List<List<int>>(_playerGroups);
            }
            else
            {
                arr.Add(new List<int>(_currentCodeOrder));
            }
            JObject data = new();
            List<int> array = new() { (int)_code };
            data["isValid"] = !checkGroupIncludeJoker(array);
            data["code"] = (int)_code;
            data["arrC"] = JArray.FromObject(arr);
            _currentCodeOrder = saveCodes;
            _playerGroups = saveGroup;
            // == them 4 dong nay de fix loi sort sau khi dump =//
            _CardCodeCs = new List<Card>();
            foreach (var card in thisPlayer.vectorCard)
            {
                _CardCodeCs.Add(card.GetComponent<Card>());
            }
            // ==========//
            return data;
        }
        return null;
    }
    public void allowDraw(bool isActive)
    {
        m_DrawBtn.interactable = isActive;
    }
    JObject getCardDropInfo()
    {
        var saveGr = new List<List<int>>(_playerGroups);
        var arrC = new List<int>();
        for (var i = 0; i < _ChosenCardCs.Count; i++)
        {
            var card = _ChosenCardCs[i];
            arrC.Add(card.code);
        }
        var status = false;
        arrC.Sort((a, b) => a - b);
        if (checkEatSame(arrC))
        {
            status = true;
        }
        else if (checkEatStraight(arrC))
        {
            status = true;
        }
        JObject result = removeCardDrop(arrC);
        _playerGroups = new List<List<int>>(saveGr);
        return result;
    }
    JObject removeCardDrop(List<int> arrRm)
    {
        List<List<int>> temp = new(_playerGroups);
        if (temp.Count > 0 && temp[0] is List<int>)
        {
            for (int i = 0; i < arrRm.Count; i++)
            {
                for (int m = 0; m < temp.Count; m++)
                {
                    for (int n = 0; n < temp[m].Count; n++)
                    {
                        if (arrRm[i] == temp[m][n])
                        {
                            temp[m].RemoveAt(n);
                        }
                    }
                }
            }
            for (int i = 0; i < temp.Count; i++)
            {
                if (temp[i].Count == 0)
                {
                    temp.RemoveAt(i);
                }
            }
            JObject data = new();
            data["isValid"] = !checkGroupIncludeJoker(arrRm);
            data["arrD"] = JArray.FromObject(arrRm);
            data["arrC"] = JArray.FromObject(temp);
            return data;
        }
        else
        {
            List<int> cCode = new(_currentCodeOrder);
            List<int> tempSlided = SpliceArray(cCode, arrRm);
            List<List<int>> tempSlided1 = new() { tempSlided };
            JObject data = new();
            data["isValid"] = !checkGroupIncludeJoker(arrRm);
            data["arrD"] = JArray.FromObject(arrRm);
            data["arrC"] = JArray.FromObject(tempSlided1);
            return data;
        }
    }
    public List<List<int>> getDeclareData()
    {
        List<List<int>> data = new();
        if (_playerGroups.Count > 1)
        {
            data = new List<List<int>>(_playerGroups);
        }
        else
        {
            data.Add(new List<int>(_currentCodeOrder));
        }
        return data;
    }
    void doGroupSelectedCard()
    {
        List<int> temp = new();

        if (_playerGroups.Count == 0)
        {
            for (int m = 0; m < _ChosenCardCs.Count; m++)
            {
                for (int i = 0; i < _currentCodeOrder.Count; i++)
                {
                    if (_currentCodeOrder[i] == _ChosenCardCs[m].code)
                    {
                        temp.Add(_currentCodeOrder[i]);
                        _currentCodeOrder.RemoveAt(i);
                        break;
                    }
                }
            }

            List<int> sorted = sortCodeByArray(temp);
            temp = new List<int>(sorted);
            _playerGroups.Add(temp);
            _playerGroups.Add(_currentCodeOrder);
        }
        else
        {
            for (int m = 0; m < _ChosenCardCs.Count; m++)
            {
                for (int i = 0; i < _playerGroups.Count; i++)
                {
                    for (int j = 0; j < _playerGroups[i].Count; j++)
                    {
                        if (_playerGroups[i][j] == _ChosenCardCs[m].code)
                        {
                            temp.Add(_playerGroups[i][j]);
                            _playerGroups[i].RemoveAt(j);
                            break;
                        }
                    }
                }
            }

            List<int> sorted = sortCodeByArray(temp);
            temp = new List<int>(sorted);
            _playerGroups.Insert(0, temp);
        }

        for (int i = 0; i < _playerGroups.Count; i++)
        {
            if (_playerGroups[i].Count == 0)
            {
                _playerGroups.RemoveAt(i);
            }
        }

        List<int> selectedArrCode = new();
        for (var i = 0; i < _ChosenCardCs.Count; i++)
        {
            selectedArrCode.Add(_ChosenCardCs[i].code);
        }

        thisPlayer.vectorCard = spliceArray(thisPlayer.vectorCard, selectedArrCode);

        List<Card> temp1 = new(_ChosenCardCs);
        temp1.AddRange(thisPlayer.vectorCard);
        thisPlayer.vectorCard = new List<Card>(temp1);

        reOrganizeCodeOrderByGroup();
        for (int i = 0; i < _playerGroups.Count; i++)
        {
            if (_playerGroups[i].Count == 0)
            {
                _playerGroups.RemoveAt(i);
            }
        }

        reOrganizeCardPosition(0);

        for (int i = 0; i < _ChosenCardCs.Count; i++)
        {
            Card card = thisPlayer.vectorCard[i];
            card.setTextureWithCode(_currentCodeOrder[i]);
        }

        _ChosenCardCs.Clear();
        _ChosenCardC = null;
        reSetZOrder();
    }
    void reSetZOrder()
    {
        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            Card card = thisPlayer.vectorCard[i];
            card.transform.SetSiblingIndex(i);
        }
    }
    public void showNoti(string content)
    {
        ShowNoti item = Instantiate(m_ShowNotiSN, m_FinishTable.transform);
        item.showContent(content);
        item.transform.localPosition = new Vector2(0, 68);
        item.transform.SetAsLastSibling(); // Set to top of the hierarchy
        item.gameObject.SetActive(true);
    }
    List<int> sortCodeByArray(List<int> temp)
    {
        List<Card> sortedArr = new();
        foreach (int code in temp)
        {
            foreach (Card card in thisPlayer.vectorCard)
            {
                if (code == card.code)
                {
                    sortedArr.Add(card);
                }
            }
        }
        sortedArr.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        List<int> result = new();
        foreach (Card card in sortedArr)
        {
            result.Add(card.code);
        }
        return result;
    }
    bool checkEatSame(List<int> arrC)
    {
        int cardStart = arrC[0];
        int count = 0;
        for (int i = 1; i < arrC.Count; i++)
        {
            int cardCompare = arrC[i];
            for (int j = 1; j <= 4; j++)
            {
                if (cardCompare == cardStart + 13 * j)
                {
                    count++;
                }
            }
        }
        return count == arrC.Count - 1;
    }
    bool checkEatStraight(List<int> arrC)
    {
        int index = 1;
        int cardStart = arrC[0];
        int count = 0;
        for (int i = 1; i < arrC.Count; i++)
        {
            int cardCompare = arrC[i];
            if (cardCompare == cardStart + index)
            {
                count++;
                index++;
            }
        }
        return count == arrC.Count - 1;
    }
    void showEatHint()
    {
        List<int> result = removeDuplicate(spotEatCard());
        if (result.Count > 2)
        {
            Card dumpCard = _DumpedCardCs[_DumpedCardCs.Count - 1];
            GameObject eatArrow = Instantiate(m_EatArrow, m_Arrows.transform);
            eatArrow.transform.localPosition = new Vector2(dumpCard.transform.localPosition.x, 140);
            eatArrow.name = "eatArrow";
            StartCoroutine(moveEatArrow(eatArrow));
        }
    }
    IEnumerator moveEatArrow(GameObject eatArrow, bool isGui = false)
    {
        var posY = eatArrow.transform.localPosition.y;
        while (eatArrow != null)
        {
            if (!isGui)
            {
                yield return eatArrow.transform.DOLocalMoveY(120, 0.3f).SetEase(Ease.InCubic).WaitForCompletion();
                yield return eatArrow.transform.DOLocalMoveY(140, 0.3f).SetEase(Ease.OutCubic).WaitForCompletion();
            }
            else
            {
                yield return eatArrow.transform.DOLocalMoveY(posY, 0.3f).SetEase(Ease.InCubic).WaitForCompletion();
                yield return eatArrow.transform.DOLocalMoveY(posY + 20, 0.3f).SetEase(Ease.OutCubic).WaitForCompletion();
            }
        }
    }
    List<int> removeDuplicate(List<int> array)
    {
        List<int> result = new();
        List<int> cleanArray = new(array);
        int index = 0;
        while (index < cleanArray.Count)
        {
            for (int i = index + 1; i < cleanArray.Count; i++)
            {
                if (cleanArray[index] == cleanArray[i])
                {
                    cleanArray[i] = -1;
                }
            }
            index++;
        }
        for (int i = 0; i < cleanArray.Count; i++)
        {
            if (cleanArray[i] != -1)
            {
                result.Add(cleanArray[i]);
            }
        }
        return result;
    }
    List<int> spotEatCard()
    {
        List<List<int>> simulatorGroup = new();
        List<Card> simulatorArr = new(_CardCodeCs);
        List<int> result = new();
        List<int> leftOver = new();
        int limit = 1;
        Card dumpedCard = _DumpedCardCs[_DumpedCardCs.Count - 1];
        simulatorArr.Add(dumpedCard);
        simulatorArr.Sort((a, b) => a.S.CompareTo(b.S));
        simulatorArr.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        while (simulatorArr.Count > 0)
        {
            JObject kinds = spotSameKindGroup(simulatorArr, 0);
            List<int> arrCode = getListInt(kinds, "arrCode");
            if (arrCode.Count >= 3)
            {
                simulatorGroup.Add(arrCode);
                for (int i = 0; i < arrCode.Count; i++)
                {
                    for (int j = 0; j < simulatorArr.Count; j++)
                    {
                        if (simulatorArr[j].code == arrCode[i])
                        {
                            simulatorArr.RemoveAt(j);
                            break;
                        }
                    }
                }
            }
            else
            {
                leftOver.Add(simulatorArr[0].code);
                simulatorArr.RemoveAt(0);
            }
        }
        foreach (var group in simulatorGroup)
        {
            foreach (var code in group)
            {
                if (code == dumpedCard.code)
                {
                    result = new List<int>(group);
                    break;
                }
            }
        }
        simulatorGroup.Clear();
        simulatorArr.Clear();
        simulatorArr = new List<Card>(_CardCodeCs);
        leftOver.Clear();
        limit = 1;
        simulatorArr.Add(dumpedCard);
        simulatorArr.Sort((a, b) => a.S.CompareTo(b.S));
        simulatorArr.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        while (simulatorArr.Count > 0)
        {
            JObject straight = spotStraightGroup(simulatorArr, 0);
            List<int> arrCode = getListInt(straight, "arrCode");
            if (arrCode.Count >= 3)
            {
                simulatorGroup.Add(arrCode);
                for (int i = 0; i < arrCode.Count; i++)
                {
                    for (int j = 0; j < simulatorArr.Count; j++)
                    {
                        if (simulatorArr[j].code == arrCode[i])
                        {
                            simulatorArr.RemoveAt(j);
                            break;
                        }
                    }
                }
            }
            else
            {
                leftOver.Add(simulatorArr[0].code);
                simulatorArr.RemoveAt(0);
            }
        }
        foreach (var group in simulatorGroup)
        {
            foreach (var code in group)
            {
                if (code == dumpedCard.code)
                {
                    if (result.Count == 0)
                    {
                        result = new List<int>(group);
                    }
                    else
                    {
                        result.AddRange(group); // ????
                    }
                    break;
                }
            }
        }
        return result;
    }
    void showFightScene(int pId)
    {
        _FightObjFS = Instantiate(m_FightSceneFS, transform).GetComponent<FightScene>();
        //_FightObjFS.node.zIndex = 100;
        _FightObjFS.transform.localPosition = Vector2.zero;
        _FightObjFS.startFight(getPlayerWithID(pId), calculatePoint());
        SoundManager.instance.playEffectFromPath(Globals.SOUND_TONGITS.TgFightMusic);

        resetStateCardAndButton();
    }
    IEnumerator enableSortAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        m_SortBtn.interactable = true;
        updateGroupBanner();
    }
    void callNextEvt()
    {
        HandleGame.nextEvt();
    }
    int convertCodeToIndex(List<int> arr, int indexD)
    {
        for (int j = 0; j < _CardsInDeck[indexD].Count; j++)
        {
            List<int> temp = new();
            foreach (Card card in _CardsInDeck[indexD][j])
            {
                int code = card.GetComponent<Card>().code;
                temp.Add(code);
            }
            if (arr.Count == _CardsInDeck[indexD][j].Count)
            {
                if (compareArr(arr, temp))
                {
                    return j;
                }
            }
        }
        return -1;
    }
    bool compareArr(List<int> a1, List<int> a2)
    {
        if (a1.Count != a2.Count)
        {
            return false;
        }
        int count = 0;
        foreach (int code1 in a1)
        {
            foreach (int code2 in a2)
            {
                if (code1 == code2)
                {
                    count++;
                    break;
                }
            }
        }
        return count == a1.Count && count == a2.Count;
    }
    void sortDropedCard(List<Card> stack, bool isNode = true)
    {
        List<Card> temp = new();
        if (isNode)
        {
            for (int i = 0; i < stack.Count; i++)
            {
                Card card = stack[i];
                temp.Add(card);
            }
        }
        else
        {
            foreach (Card card in stack)
            {
                temp.Add(card);
            }
        }
        temp.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        List<Card> saveStack = new(stack);
        for (int i = 0; i < saveStack.Count; i++)
        {
            for (int j = 0; j < temp.Count; j++)
            {
                int cardCode = saveStack[i].code;
                if (cardCode == temp[j].code)
                {
                    stack[j] = saveStack[i];
                }
            }
        }
    }
    public void showXepBai()
    {
        Button[] btns = { m_DropBtn, m_DumpBtn, m_FightBtn };
        foreach (Button btn in btns)
        {
            btn.gameObject.SetActive(false);
        }
        m_DeclareBtn.gameObject.SetActive(true);
        m_DeclareBtn.interactable = true;
        activeTongits(false);
    }
    public void showXepBaiBlackList()
    {
        Button[] btns = { m_DropBtn, m_DumpBtn, m_FightBtn };
        foreach (Button btn in btns)
        {
            btn.gameObject.SetActive(false);
        }
        m_DeclareBtn.gameObject.SetActive(true);
        m_DeclareBtn.interactable = false;
        activeTongits(false);
    }
    public bool checkIfBlackList(Player player)
    {
        foreach (Player blackListItem in _BlackListPs)
        {
            if (player == blackListItem)
            {
                return true;
            }
        }
        return false;
    }
    void setCardTouch(Card card)
    {
        card.setListenerDragDrop(OnBeginDrag, OnDrag, OnEndDrag, OnPointerClick);
        _TouchedCardCs.Add(card);
    }
    public async void showTongitsScene(int pId, List<List<int>> arrC)
    {
        await Task.Delay(300);
        TongitsScene scene = Instantiate(m_TongitsSceneTS, m_TongitsSceneParent.transform);
        scene.transform.localPosition = Vector2.zero;
        Player player = getPlayerWithID(pId);
        if (player == thisPlayer)
        {
            m_PointTMP.text = "0";
        }
        scene.startScene(player);
        List<List<int>> saveGroup = new(_playerGroups);
        List<int> saveCodes = new(_currentCodeOrder);
        _playerGroups.Clear();
        _playerGroups.AddRange(arrC);
        for (int i = _playerGroups.Count - 1; i >= 0; i--)
        {
            if (_playerGroups[i].Count == 0)
            {
                _playerGroups.RemoveAt(i);
            }
        }
        int limit = _GroupBannerSGB.Count;
        for (int i = 0; i < limit; i++)
        {
            int lastIndex = _GroupBannerSGB.Count - 1;
            ShowGroupBanner banner = _GroupBannerSGB[lastIndex];
            _GroupBannerSGB.RemoveAt(lastIndex);
            if (banner != null)
            {
                banner.gameObject.SetActive(false);
                Destroy(banner.gameObject);
            }
        }
        reOrganizeCodeOrderByGroup();
        List<int> tongitsCode = new(_currentCodeOrder);
        List<Card> listCardTongit = new();
        for (int i = 0; i < tongitsCode.Count; i++)
        {
            Card cardTemp = Instantiate(m_PrefabCardC, m_TongitsSceneParent.transform);
            cardTemp.transform.localScale = new Vector3(0.5f, 0.5f, 1f);
            Vector3 pos = getPlayerCardPosition(_currentCodeOrder.Count, i);
            cardTemp.transform.localPosition = pos;
            cardTemp.setTextureWithCode(0);
            listCardTongit.Add(cardTemp);
            foldCardUp(cardTemp, tongitsCode[i], 0.3f, false, 0.8f, i / 10f);
        }
        await Task.Delay(2000);
        _playerGroups.Clear();
        _playerGroups.AddRange(saveGroup);
        _currentCodeOrder.Clear();
        _currentCodeOrder.AddRange(saveCodes);
        SoundManager.instance.playEffectFromPath(Globals.SOUND_TONGITS.TgTongitsMusic);
        await Task.Delay(1500);
        foreach (Card card in listCardTongit)
        {
            card.StopAllCoroutines();
            putCard(card);
        }
        listCardTongit.Clear();
    }
    void turnOffTouch()
    {
        for (var i = 0; i < _TouchedCardCs.Count; i++)
        {
            _TouchedCardCs[i].removeAllListenerDragDrop();
        }
    }
    void turnOffTouchForLimitedTime(float time)
    {
        turnOffTouch();
        Invoke("handleCardTouch", time);
    }
    void handleCardTouch()
    {
        for (var i = 0; i < _TouchedCardCs.Count; i++)
        {
            _TouchedCardCs[i].setListenerDragDrop(OnBeginDrag, OnDrag, OnEndDrag, OnPointerClick);
        }
    }
    void showOtherResult(JArray listPl)
    {
        foreach (var d in listPl)
        {
            showOtherPlayerCard((JObject)d);
        }
        showOtherScore(listPl);
    }
    void showOtherScore(JArray data)
    {
        if (Globals.Config.curGameId != (int)Globals.GAMEID.TONGITS11)
        {
            for (int i = 0; i < data.Count; i++)
            {
                Player player = getPlayerWithID((int)data[i]["pid"]);
                if (player != thisPlayer)
                {
                    if (player._indexDynamic == 1)
                    {
                        GameObject score = m_OtherScores[0].transform.Find("score").gameObject;
                        m_OtherScores[0].SetActive(true);
                        score.GetComponent<TextMeshProUGUI>().text = "score: " + (int)data[i]["Score"];
                    }
                    if (player._indexDynamic == 2)
                    {
                        GameObject score = m_OtherScores[1].transform.Find("score").gameObject;
                        m_OtherScores[1].SetActive(true);
                        score.GetComponent<TextMeshProUGUI>().text = "score: " + (int)data[i]["Score"];
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < data.Count; i++)
            {
                Player player = getPlayerWithID((int)data[i]["pid"]);
                if (player != thisPlayer)
                {
                    GameObject other = transform.Find("playerScoreOther").gameObject;
                    other.transform.GetChild(0).gameObject.SetActive(true);
                    other.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = data[i]["Score"].ToString();
                }
            }
        }
    }
    void showOtherPlayerCard(JObject data)
    {
        if ((int)data["tongits"] > 0) return;
        Player player = getPlayerWithID((int)data["pid"]);
        if (player != thisPlayer)
        {
            List<float> arrNodeLength = new();
            List<List<Card>> cards = new();
            JArray jarr = (JArray)data["arr"];
            List<List<int>> codes = jarr.ToObject<List<List<int>>>();
            int uperLimit = _CardsInDeck[player._indexDynamic].Count;
            for (int i = 0; i < player.vectorCard.Count; i++)
            {
                Card card = player.vectorCard[i];
                putCard(card);
            }
            player.vectorCard.Clear();
            for (int i = 0; i < codes.Count; i++)
            {
                List<Card> temp = new();
                int z = codes[i].Count - 1;
                int len = _CardsInDeck[player._indexDynamic].Count;
                for (int j = 0; j < codes[i].Count; j++)
                {
                    Card cardTemp = spawnCard();
                    cardTemp.transform.localScale = new Vector3(0.3f, 0.3f, 1f);
                    cardTemp.transform.localPosition = getHandPosition(player._indexDynamic);
                    cardTemp.setTextureWithCode(codes[i][j], true);
                    Vector2 pos = setDropedCardPosition(player._indexDynamic, j, len, true, uperLimit);
                    cardTemp.transform.DOLocalMove(pos, 0.4f);
                    temp.Add(cardTemp);
                    if (player._indexDynamic == 1 && Globals.Config.curGameId != (int)Globals.GAMEID.TONGITS11)
                    {
                        cardTemp.transform.SetSiblingIndex(z);
                        z--;
                    }
                    else
                    {
                        cardTemp.transform.SetAsLastSibling();
                    }
                    if ((i == 0 && j == 0) || (i == codes.Count - 1 && j == codes[i].Count - 1)) arrNodeLength.Add(pos.x);
                }
                _CardsInDeck[player._indexDynamic].Add(temp);
                cards.Add(temp);
            }
        }
    }
    void showDimondMoveUp(JArray data)
    {
        GameObject dimon = m_HitPotSG.transform.Find("dimond1").gameObject;
        Vector3 orgPos = dimon.transform.localPosition;
        Vector2 pos = Vector2.zero;
        for (int i = 0; i < data.Count; i++)
        {
            Player player = getPlayerWithID((int)data[i]["pid"]);
            if ((int)data[i]["rank"] == 1)
            {
                pos = getDimondPos(player._indexDynamic);
            }
        }
        for (int i = 0; i < 3; i++)
        {
            m_DiamondIcons[i].SetActive(false);
        }
        dimon.transform.localPosition = pos;
        dimon.SetActive(true);
        dimon.transform.localScale = new Vector3(1, 1, 1);
        dimon.transform.DOLocalMove(orgPos, 1.5f).SetEase(Ease.InOutCubic).SetDelay(1f);
        dimon.transform.DOScale(0.5f, 1.5f).SetEase(Ease.InOutCubic).SetDelay(1f);
    }
    Vector2 getDimondPos(int id)
    {
        Vector3 pos = m_DiamondIcons[id].transform.localPosition;
        return pos;
    }
    IEnumerator showOtherResultCoroutine(int delay, JArray data, bool dimondMoveup = false)
    {
        yield return new WaitForSeconds(delay / 1000f);
        showOtherResult(data);
        if (dimondMoveup)
            showDimondMoveUp(data);
    }
    IEnumerator showHitPotAniCoroutine(int delay, Player winnerPlayer)
    {
        yield return new WaitForSeconds(delay / 1000f);
        showHitPotAni(true);
        yield return new WaitForSeconds(2);
        showCoinHitPot(winnerPlayer);
    }
    async void showHitPotAni(bool isEat)
    {
        var dimon = m_HitPotSG.transform.Find("dimond");
        var dimon1 = m_HitPotSG.transform.Find("dimond1");
        if (isEat)
        {
            SoundManager.instance.playEffectFromPath(Globals.SOUND_HILO.WIN);
            m_HitPotSG.transform.DOLocalMove(new Vector2(60, -250), 1f).SetEase(Ease.InOutCubic);
            await Task.Delay(1200);
            dimon.gameObject.SetActive(false);
            dimon1.gameObject.SetActive(false);
            m_HitPotSG.gameObject.SetActive(true);
            m_HitPotSG.startingAnimation = "run";
            m_HitPotSG.AnimationState.SetAnimation(0, "run", false);
            m_HitPotSG.Initialize(true);
            //hitPot_ani.AnimationState.Complete += delegate
            //{
            //    hitPot_ani.gameObject.SetActive(false);
            //};
            await Task.Delay(1800);
            //chipEject.SetSiblingIndex(999);
            m_ChipEjectSG.gameObject.SetActive(true);
            m_ChipEjectSG.AnimationState.SetAnimation(0, "animation", false);
            m_ChipEjectSG.Initialize(true);
            m_ChipEjectSG.AnimationState.Complete += delegate
            {
                m_ChipEjectSG.gameObject.SetActive(false);
            };
            await Task.Delay(500);
            m_HitPotSG.gameObject.SetActive(true);
            m_HitPotSG.startingAnimation = "stay";
            m_HitPotSG.AnimationState.SetAnimation(0, "stay", false);
            m_HitPotSG.Initialize(true);
            m_HitPotSG.transform.localPosition = Vector2.zero;
            m_PotPV.SetInfo(0, 0);
            for (int i = 0; i < 3; i++)
            {
                m_DiamondIcons[i].gameObject.SetActive(false);
            }
        }
        else
        {
            m_HitPotSG.AnimationState.SetAnimation(0, "stay", false);
            m_HitPotSG.transform.localPosition = Vector2.zero;
        }
    }
    public void showCoinHitPot(Player player)
    {
        for (int i = 0; i < 20; i++)
        {
            Coin coin = Instantiate(m_CointHitpotC, transform);
            coin.transform.SetAsLastSibling();
            coin.transform.localPosition = Vector2.zero;
            float offsetX = UnityEngine.Random.Range(0, 300);
            float offsetY = UnityEngine.Random.Range(0, 40);
            Vector2 jpos = new(-150f + offsetX, -150f + offsetY);
            Vector3 pos = player.playerView.transform.localPosition;
            coin.transform.localPosition = jpos;
            float duration = 0.6f;
            float jumpHeight = 100f;
            float delay = 0.4f + i * 0.05f;
            coin.transform.DOLocalJump(jpos, 100, 1, 0.6f);
            coin.transform.DOLocalMove(pos, 0.4f).SetEase(Ease.OutCubic).SetDelay(0.4f + i * 0.05f).OnComplete(() =>
            {
                Destroy(coin.gameObject);
            });
        }
    }
    void showWinLose(JArray data)
    {
        swapzIndexGo(playerContainer.gameObject, m_Cards);
        for (int i = 0; i < data.Count; i++)
        {
            Player player = getPlayerWithID((int)data[i]["pid"]);
            if ((int)data[i]["rank"] == 1)
            {
                player.playerView.setEffectWin("", false);
                if ((int)data[i]["HitPot"] <= 0 || (int)data[i]["HitPot"] == null)
                {
                    showDimond(player._indexDynamic);
                }
                if (player == thisPlayer)
                {
                    SoundManager.instance.playEffectFromPath(Globals.SOUND_HILO.WIN);
                }
            }
            else
            {
                player.playerView.setEffectLose(false);
                if (player == thisPlayer)
                {
                    SoundManager.instance.playEffectFromPath(Globals.SOUND_HILO.LOSE);

                }
            }
            player.playerView.effectFlyMoney((int)data[i]["M"], 26);
            player.ag = (int)data[i]["AG"];
            player.setAg();
        }
    }
    void showResultTable(JArray data)
    {
        List<Player> players = new();
        for (int i = 0; i < data.Count; i++)
        {
            Player player = getPlayerWithID((int)data[i]["pid"]);
            players.Add(player);
        }
        FinishTable table = Instantiate(m_ResultTableFT, m_FinishTable.transform);
        _ResultTableFT = table;
        table.transform.localPosition = Vector3.zero;
        table.transform.localScale = Vector3.one;
        table.showTable(data, players);
        table.transform.SetAsLastSibling();
    }
    void cleanResult()
    {
        if (_ResultTableFT != null && _ResultTableFT.gameObject != null)
        {
            Destroy(_ResultTableFT.gameObject);
            _ResultTableFT = null;
        }
    }
    void highLightPlayerArea(int dId)
    {
        for (int i = 0; i < players.Count; i++)
        {
            if (i == dId)
            {
                if (_canFight)
                {
                    setPlayerDumpedCardDark(i, false);
                }
                else
                {
                    setPlayerDumpedCardDark(i, true);
                }
            }
            else
            {
                setPlayerDumpedCardDark(i, true);
            }
        }
    }
    void setPlayerDumpedCardDark(int dId, bool isDark)
    {
        List<List<Card>> stack = _CardsInDeck[dId];
        if (stack.Count > 0)
        {
            for (int i = 0; i < stack.Count; i++)
            {
                if (stack[i].Count > 0)
                {
                    for (int j = 0; j < stack[i].Count; j++)
                    {
                        Card card = stack[i][j].GetComponent<Card>();
                        card.setDark(isDark);
                        card.turnBorderBlue(false);
                        card.turnHighlightYellow(false);
                    }
                }
            }
        }
    }
    void setDarkDumpedCard(int type)
    {
        for (int i = 0; i < _DumpedCardCs.Count - type; i++)
        {
            Card card = _DumpedCardCs[i].GetComponent<Card>();
            card.setDark(true);
            card.turnBorderBlue(false);
            card.turnHighlightYellow(false);
        }
    }
    void removeCode(int code)
    {
        for (int i = 0; i < _currentCodeOrder.Count; i++)
        {
            if (code == _currentCodeOrder[i])
            {
                _currentCodeOrder.RemoveAt(i);
                break;
            }
        }
        if (_CardCodeCs.Count > 0)
        {
            for (int i = 0; i < _CardCodeCs.Count; i++)
            {
                if (_CardCodeCs[i].code == code)
                {
                    _CardCodeCs.RemoveAt(i);
                }
            }
        }
        if (_playerGroups.Count > 0)
        {
            for (int i = 0; i < _playerGroups.Count; i++)
            {
                for (int j = 0; j < _playerGroups[i].Count; j++)
                {
                    if (code == _playerGroups[i][j])
                    {
                        _playerGroups[i].RemoveAt(j);
                        break;
                    }
                }
            }
        }
        int len = _playerGroups.Count;
        if (_playerGroups.Count > 1)
        {
            for (int i = 0; i < len; i++)
            {
                if (_playerGroups[i].Count == 0)
                {
                    _playerGroups.RemoveAt(i);
                    break;
                }
            }
        }
        if (_playerGroups.Count <= 1)
        {
            _playerGroups.Clear();
        }
    }
    async void reOrganizeCardPosition(int type)
    {
        // dump = 0
        // draw = 1
        for (int i = 0; i < thisPlayer.vectorCard.Count - type; i++)
        {
            Vector2 newPos = getPlayerCardPosition(thisPlayer.vectorCard.Count, i);
            Card card = thisPlayer.vectorCard[i];
            card.transform.DOLocalMove(newPos, 0.2f);
        }
        await Task.Delay(200);
        updateGroupBanner();
        _ChosenCardCs.Clear();
        _ChosenCardC = null;
    }
    JObject spotStraightGroupHightLow(List<Card> orgCard, int startId)
    {
        List<Card> group = new() { orgCard[startId] };
        if (group[0] == null) return null;
        int index = 1;
        Card codeStart = group[0];
        var startN = codeStart.N;
        if (startN == 14)
            startN = 1;
        for (int i = startId + 1; i < orgCard.Count; i++)
        {
            Card codeCompare = orgCard[i];
            var compareN = codeCompare.N;
            if (compareN == 14)
                compareN = 1;
            if (startN - index == compareN && codeStart.S == codeCompare.S)
            {
                group.Add(orgCard[i]);
                index++;
            }
        }
        List<int> result = new();
        foreach (Card card in group)
        {
            result.Add(card.code);
        }
        JObject data = new();
        {
            data["arrCode"] = JArray.FromObject(result);
        };
        return data;
    }
    JObject spotStraightGroup(List<Card> orgCard, int startId)
    {
        List<Card> group = new();
        group.Add(orgCard[startId]);
        if (group[0] == null) return null;
        int index = 1;
        Card codeStart = group[0];
        var startN = codeStart.N;
        if (startN == 14)
            startN = 1;
        for (int i = startId + 1; i < orgCard.Count; i++)
        {
            Card codeCompare = orgCard[i];
            var compareN = codeCompare.N;
            if (compareN == 14)
                compareN = 1;
            if (startN + index == compareN && codeStart.S == codeCompare.S)
            {
                group.Add(orgCard[i]);
                index++;
            }
        }
        List<int> result = new();
        foreach (Card card in group)
        {
            result.Add(card.code);
        }
        JObject data = new();
        {
            data["arrCode"] = JArray.FromObject(result);
        };
        return data;
    }
    bool isValidPhomOnHand()
    {
        // Droped
        if (_CardsInDeck[0].Count > 0 && _CardsInDeck[0][0].Count > 0) return true;
        return checkValidPhomOnGroup(_CardCodeCs);
    }
    JObject spotSameKindGroup(List<Card> orgCard, int startId, bool isCardOnHand = false)
    {
        bool isValidPhom = isValidPhomOnHand();
        List<Card> group = new() { orgCard[startId] };
        if (group[0] == null) return null;
        int numberCompare = group[0].N;
        for (int i = startId + 1; i < orgCard.Count; i++)
        {
            //if (numberCompare == Globals.Config.CODE_JOKER_BLACK || numberCompare == Globals.Config.CODE_JOKER_RED)
            //{
            //    numberCompare = orgCard[i].N;
            //}
            if (orgCard[i].N == numberCompare || (isCardOnHand && isValidPhom && (orgCard[i].N == Globals.Config.CODE_JOKER_BLACK || orgCard[i].N == Globals.Config.CODE_JOKER_RED)))
            {
                group.Add(orgCard[i]);
            }
        }
        // Maximum same kind = 4
        if (group.Count > 4)
        {
            int index = group.Count - 1;
            while (group.Count > 4)
            {
                if (group[index].N == Globals.Config.CODE_JOKER_BLACK || group[index].N == Globals.Config.CODE_JOKER_RED)
                {
                    group.RemoveAt(index);
                    index = group.Count - 1;
                }
                else
                {
                    index--;
                }
            }
        }
        if (group.Count == 4)
        {
            for (int i = 0; i < group.Count; i++)
            {
                if (group[i].N == Globals.Config.CODE_JOKER_BLACK || group[i].N == Globals.Config.CODE_JOKER_RED)
                {
                    group.RemoveAt(i);
                    break;
                }
            }
        }
        List<int> result = new();
        foreach (Card card in group)
        {
            result.Add(card.code);
        }
        JObject data = new();
        {
            data["arrCode"] = JArray.FromObject(result);
        };
        return data;
    }
    bool checkValidPhomOnGroup(List<Card> group)
    {
        Dictionary<int, int> countNum = new();
        foreach (Card card in group)
        {
            int num = card.N;
            if (countNum.ContainsKey(num))
                countNum[num]++;
            else
                countNum[num] = 1;
        }
        foreach (KeyValuePair<int, int> kvp in countNum)
        {
            if (kvp.Value >= 3)
                return true;
        }
        List<Card> orgCard = new(group);
        orgCard.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        while (orgCard.Count > 0)
        {
            JObject straight = spotStraightGroup(orgCard, 0);
            List<int> arrCode = getListInt(straight, "arrCode");
            if (arrCode.Count >= 3)
                return true;
            orgCard.RemoveAt(0);
        }
        return false;
    }
    void sortCodeUpByKindsASC()
    {
        _currentCodeOrder.Clear();
        _CardCodeCs.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        _CardCodeCs.Sort((a, b) => (a.S).CompareTo(b.S));
        foreach (Card card in _CardCodeCs)
        {
            _currentCodeOrder.Add(card.code);
        }
    }
    void updateGroupBanner()
    {
        int limit = _GroupBannerSGB.Count;
        for (int i = 0; i < limit; i++)
        {
            int lastIndex = _GroupBannerSGB.Count - 1;
            ShowGroupBanner banner = _GroupBannerSGB[lastIndex];
            _GroupBannerSGB.RemoveAt(lastIndex);
            if (banner != null)
            {
                // banner.gameObject.SetActive(false);
                Destroy(banner.gameObject);
            }
        }
        for (int i = 0; i < _playerGroups.Count; i++) showGroupBanner(i);
    }
    public void showGroupBanner(int groupId)
    {
        ShowGroupBanner banner = Instantiate(m_GroupBannerSGB, m_Cards.transform);
        banner.transform.SetAsLastSibling();
        _GroupBannerSGB.Add(banner);
        setInfoGroupBanner(groupId, banner);
    }
    public void setInfoGroupBanner(int gId, ShowGroupBanner banner)
    {
        List<float> temp = new();
        for (var i = 0; i < _playerGroups[gId].Count; i++)
        {
            for (var j = 0; j < thisPlayer.vectorCard.Count; j++)
            {
                Card card = thisPlayer.vectorCard[j];
                var code = card.code;
                if (code == _playerGroups[gId][i])
                {
                    Vector2 pos = getPlayerCardPosition(thisPlayer.vectorCard.Count, j);
                    temp.Add(pos.x);
                }
            }
        }
        (float? min, float? max) minMax = findMinMax(temp);
        bool isTrue = checkIsGroup(_playerGroups[gId]);
        bool isValidPure = checkValidPhomPure();
        bool isJoker = checkGroupIncludeJoker(_playerGroups[gId]);
        bool isDroped = checkDropedCard();
        bool isSpecified = checkIsSpecified(_playerGroups[gId]);
        bool isValidSpecified = checkValidSpecified();
        if (((minMax.min != null && minMax.max != null) || isJoker) && _playerGroups[gId].Count >= 3)
        {
            float centerPos = (float)(minMax.min.Value + minMax.max.Value) / 2;
            float stret = (float)(minMax.max.Value - minMax.min.Value);
            float bannerWide = stret + 79 * 0.8f * 2;

            if (gId != _playerGroups.Count - 1)
                banner.SetInfo(bannerWide, centerPos, isTrue, isJoker, isDroped, isSpecified, isValidSpecified, isValidPure);
            if (_currentSort == 1 && gId == _playerGroups.Count - 2)
            { // refresh lai UI cho cac bo co Joker xem co hop le khong
                bool canHaveJokerGroup = _alreadyDropped;
                if (!canHaveJokerGroup)
                {
                    foreach (ShowGroupBanner sgb in _GroupBannerSGB)
                    {
                        if (sgb.IsTrue && (!sgb.IsJoker || sgb.IsSpecified))
                        {
                            canHaveJokerGroup = true;
                            break;
                        }
                    }
                }
                foreach (ShowGroupBanner sgb in _GroupBannerSGB) sgb.RefreshUI(canHaveJokerGroup);
            }
        }
        else
        {
            if (banner != null) Destroy(banner.gameObject);
        }
    }
    public (float? min, float? max) findMinMax(List<float> array)
    {
        if (array.Count == 0)
        {
            return (null, null);
        }
        float minValue = array[0];
        float maxValue = array[0];
        for (int i = 1; i < array.Count; i++)
        {
            if (array[i] > maxValue)
            {
                maxValue = array[i];
            }
            if (array[i] < minValue)
            {
                minValue = array[i];
            }
        }
        return (minValue, maxValue);
    }
    bool checkIsGroup(List<int> group)
    {
        bool hasJoker = false;
        List<Card> temp = new();
        if (group.Count == 0) return false;
        foreach (int code in group)
        {
            foreach (Card card in _CardCodeCs)
            {
                if (code == card.code)
                {
                    temp.Add(card);
                    if (card.code == Globals.Config.CODE_JOKER_BLACK || card.code == Globals.Config.CODE_JOKER_RED) hasJoker = true;
                    break;
                }
            }
        }
        temp.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        var kinds = spotSameKindGroup(temp, 0, true);
        var straight = spotStraightGroup(temp, 0);
        List<int> arrCodeStraight = getListInt(straight, "arrCode");
        List<int> arrCodeKinds = getListInt(kinds, "arrCode");
        bool isValidJokerPhom = false;
        if (hasJoker)
        { //check bổ sung trong trường hợp có joker, hàm spotSameKindGroup hiện đang chạy đúng luồng cũ nên không dộng vào
            int phomValue = 0;
            int countSameKind = 0;
            foreach (var item in temp)
            {
                if (item.N == Globals.Config.CODE_JOKER_BLACK || item.N == Globals.Config.CODE_JOKER_RED) countSameKind++;
                else if (phomValue == 0)
                {
                    phomValue = item.N;
                    countSameKind++;
                }
                else if (item.N == phomValue)
                {
                    countSameKind++;
                }
                else
                {
                    phomValue = 0;
                    break;
                }
            }
            if (phomValue != 0 && countSameKind == 3 || countSameKind == 4) isValidJokerPhom = true;
        }
        if (arrCodeStraight.Count == group.Count || arrCodeKinds.Count == group.Count || isValidJokerPhom)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool checkValidPhomPure()
    {
        foreach (var group in _playerGroups)
        {
            if (group.Count == 0) continue;
            List<Card> temp = new();
            foreach (int code in group)
            {
                foreach (var card in _CardCodeCs)
                {
                    if (code == card.code)
                    {
                        temp.Add(card);
                        break;
                    }
                }
            }
            bool validPhom = checkValidPhomOnGroup(temp);
            bool validJoker = checkGroupIncludeJoker(group);
            temp.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
            var kinds = spotSameKindGroup(temp, 0, true);
            var straight = spotStraightGroup(temp, 0);
            List<int> arrCodeStraight = getListInt(straight, "arrCode");
            List<int> arrCodeKinds = getListInt(kinds, "arrCode");
            bool isGroup = arrCodeStraight.Count == group.Count || arrCodeKinds.Count == group.Count;
            if ((validPhom && !validJoker) || (validPhom && validJoker && !isGroup))
            {
                return true;
            }
        }
        return false;
    }
    bool checkGroupIncludeJoker(List<int> arrC)
    {
        return arrC.Contains(Globals.Config.CODE_JOKER_RED) || arrC.Contains(Globals.Config.CODE_JOKER_BLACK);
    }
    bool checkDropedCard()
    {
        return false;
        return (_CardsInDeck[0].Count > 0 && _CardsInDeck[0][0].Count > 0);
    }
    bool checkIsSpecified(List<int> group)
    {
        List<Card> temp = new();
        if (group.Count == 0) return false;
        for (int i = 0; i < group.Count; i++)
        {
            for (int j = 0; j < _CardCodeCs.Count; j++)
            {
                Card card = _CardCodeCs[j];
                if (group[i] == card.code)
                {
                    temp.Add(card);
                }
            }
        }
        temp.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        JObject kinds = spotSameKindGroup(temp, 0, true);
        JObject straight = spotStraightGroup(temp, 0);
        List<int> arrCodeStraight = getListInt(straight, "arrCode");
        List<int> arrCodeKinds = getListInt(kinds, "arrCode");
        return ((arrCodeStraight.Count == group.Count && group.Count >= 5) ||
                (arrCodeKinds.Count == group.Count && group.Count >= 4 && !checkGroupIncludeJoker(group)));
    }
    bool checkValidSpecified()
    {
        foreach (var group in _playerGroups)
        {
            if (checkIsSpecified(group))
            {
                return true;
            }
        }
        return false;
    }
    async void showNumbOfCard(int numbCardStack, List<int> numbOfCardPlayer)
    {
        ShowNumbOfCard item = Instantiate(m_CardNumberSNOC, m_CardNumber.transform);
        await Task.Delay(600);
        item.setInfo(numbCardStack, numbOfCardPlayer);
        item.gameObject.SetActive(true);
        _CardNumberSNOC = item;
    }
    void updateNumbOfCard(int kind, int numb, int type)
    {
        if (_CardNumberSNOC != null && _CardNumberSNOC.gameObject != null)
        {
            switch (kind)
            {
                case 0:
                    _CardNumberSNOC.updateCardStack(numb, type);
                    break;
                case 1:
                    _CardNumberSNOC.updatePlayer(kind, numb, type);
                    break;
                case 2:
                    _CardNumberSNOC.updatePlayer(kind, numb, type);
                    break;
            }
        }
    }
    void clearNumbOfCard()
    {
        if (_CardNumberSNOC == null)
        {
            return;
        }
        else
        {
            try
            {
                Destroy(_CardNumberSNOC.gameObject);
            }
            catch (System.Exception err)
            {
                Debug.Log(err);
            }
            _CardNumberSNOC = null;
        }
    }
    void showDimond(int id)
    {
        for (int i = 0; i < 3; i++)
        {
            m_DiamondIcons[i].gameObject.SetActive(false);
        }
        if (id == null)
            return;
        m_DiamondIcons[id].gameObject.SetActive(true);
        if (m_HitPotSG.transform.Find("dimond") == null)
            return;
        m_HitPotSG.transform.Find("dimond").gameObject.SetActive(true);
    }
    async void updatePlayerPoint()
    {
        await Task.Delay(500);
        m_PointTMP.gameObject.SetActive(true);
        int point = calculatePoint();
        m_PointTMP.text = point.ToString();
        // Allow tongits event
        checkAllowTongits();
    }
    int calculatePoint()
    {
        int point = 0;
        if (thisPlayer.vectorCard.Count == 0)
        {
            return 0;
        }
        _CardCodeCs = new List<Card>();
        foreach (var card in thisPlayer.vectorCard)
        {
            _CardCodeCs.Add(card.GetComponent<Card>());
        }
        if (_playerGroups.Count > 0)
        {
            foreach (var array in _playerGroups)
            {
                if (!checkIsGroup(array) || array.Count < 3)
                {
                    foreach (var code in array)
                    {
                        foreach (var card in _CardCodeCs)
                        {
                            if (code == card.code)
                            {
                                if (card.N == 14)
                                {
                                    point += 1;
                                }
                                else if (card.N == Globals.Config.CODE_JOKER_BLACK || card.N == Globals.Config.CODE_JOKER_RED)
                                {
                                    point += 0;
                                }
                                else if (card.N >= 10)
                                {
                                    point += 10;
                                }
                                else
                                {
                                    point += card.N;
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            foreach (var card in _CardCodeCs)
            {
                if (card.N == 14)
                {
                    point += 1;
                }
                else if (card.N == Globals.Config.CODE_JOKER_BLACK || card.N == Globals.Config.CODE_JOKER_RED)
                {
                    point += 0;
                }
                else if (card.N >= 10)
                {
                    point += 10;
                }
                else
                {
                    point += card.N;
                }
            }
        }
        return point;
    }
    void checkAllowTongits()
    {
        int point = calculatePoint();
        bool turn = thisPlayer.playerView.getIsTurn();
        bool declare = isDeclare();
        activeTongits(point == 0 && turn && !declare);
    }
    Vector2 getPlayerCardPosition(int numbOfCard, int indexC)
    {
        Vector2 hand = getHandPosition(0);
        if (_playerGroups.Count <= 1)
        {
            float posx = hand.x - (numbOfCard - 1) * 30 + 60 * indexC;
            Vector2 result = new(posx, hand.y);
            return result;
        }
        else
        {
            float offset = getGroupOffset(indexC);
            float posx = hand.x - (numbOfCard - 1) * 30 + 60 * indexC + offset;
            Vector2 result = new(posx, hand.y);
            return result;
        }
    }
    async void showArrow()
    {
        m_DrawArrow.SetActive(true);
        StartCoroutine(moveEatArrow(m_DrawArrow));
        await Task.Delay(200);
        allowDraw(true);
    }
    void hideArrow()
    {
        allowDraw(false);
        m_DrawArrow.gameObject.SetActive(false);
        m_DrawArrow.transform.localPosition = new Vector3(m_DrawArrow.transform.localPosition.x, 140, m_DrawArrow.transform.localPosition.z);
        destroyHintArrow();
        Transform eat = m_Arrows.transform.Find("eatArrow");
        if (eat != null)
        {
            Destroy(eat.gameObject);
        }
    }
    void destroyHintArrow()
    {
        int limit = _HintScArray.Count;
        for (int i = 0; i < limit; i++)
        {
            GameObject hint = _HintScArray[_HintScArray.Count - 1];
            _HintScArray.RemoveAt(_HintScArray.Count - 1);
            if (hint != null)
            {
                Destroy(hint);
            }
        }
        _HintScArray.Clear();
    }
    Vector2 getDumpedCardsPosition(int idCard)
    {
        return new Vector2(-320 + idCard * 20, 60);
    }
    Vector2 getHandPosition(int indexD)
    {
        if (Globals.Config.curGameId != (int)Globals.GAMEID.TONGITS11)
        {
            switch (indexD)
            {
                case 0:
                    return new Vector2(0f, -280f);
                case 1:
                    return new Vector2(470f, 100f);
                case 2:
                    return new Vector2(-470f, 100f);
            }
        }
        else
        {
            switch (indexD)
            {
                case 0:
                    return new Vector2(0f, -280f);
                case 1:
                    return new Vector2(-50f, 220f);
            }
        }
        return Vector2.zero;
    }
    Vector2 setDropedCardPosition(int indexD, int indexC, int stackID, bool isLower = false, int uperLimit = 0)
    {
        float offset = 0;
        if (isLower)
        {
            offset = getOffsetLower(indexD, uperLimit);
        }
        Vector2 orgPos = getPlayersGroupPosition(indexD);
        if (Globals.Config.curGameId == (int)Globals.GAMEID.TONGITS11 && indexD != 0)
        {
            isLower = true;
            offset = 0;
            orgPos = getPlayersGroupPosition(2);
        }
        if (stackID == 0 && !isLower)
        {
            if (indexD == 1)
            {
                return new Vector2(orgPos.x - indexC * 25, orgPos.y);
            }
            return new Vector2(orgPos.x + indexC * 25, orgPos.y);
        }
        else
        {
            int id = indexC;
            for (int i = 0; i < stackID; i++)
            {
                id += _CardsInDeck[indexD][i].Count;
            }
            if (indexD == 1 && Globals.Config.curGameId != (int)Globals.GAMEID.TONGITS11)
            {
                if (isLower)
                {
                    return new Vector2(orgPos.x - id * 25 - 30 * stackID + offset, orgPos.y - 70);
                }
                return new Vector2(orgPos.x - id * 25 - 30 * stackID, orgPos.y);
            }
            else
            {
                if (isLower)
                {
                    if (indexD != 0)
                    {
                        return new Vector2(orgPos.x + id * 25 + 30 * stackID + offset, orgPos.y - 70);
                    }
                    return new Vector2(orgPos.x + id * 25 + 30 * stackID, orgPos.y);
                }
                return new Vector2(orgPos.x + id * 25 + 30 * stackID, orgPos.y);
            }
        }
    }
    float getOffsetLower(int indexD, int uperLimit)
    {
        Vector2 basePos = getPlayersGroupPosition(indexD);
        Vector2 uperPos = setDropedCardPosition(indexD, 0, uperLimit);
        if (indexD == 1 || indexD == 2)
        {
            return basePos.x - uperPos.x;
        }
        else
        {
            return 0;
        }
    }
    Vector2 getPlayersGroupPosition(int indexD)
    {
        switch (indexD)
        {
            case 0:
                return new Vector2(-405f, -30f);
            case 1:
                return new Vector2(400f, 220f);
            case 2:
                return new Vector2(-405f, 220f);
            default:
                return Vector2.zero;
        }
    }
    float getGroupOffset(int indexC)
    {
        int numbOfGroup = _playerGroups.Count;
        switch (numbOfGroup)
        {
            case 2:
                if (indexC < _playerGroups[0].Count)
                {
                    return -40f;
                }
                else
                {
                    return 40f;
                }
            case 3:
                if (indexC < _playerGroups[0].Count)
                {
                    return -70f;
                }
                else if (indexC >= _playerGroups[0].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count)
                {
                    return 0f;
                }
                else
                {
                    return 70f;
                }
            case 4:
                if (indexC < _playerGroups[0].Count)
                {
                    return -80f;
                }
                else if (indexC >= _playerGroups[0].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count)
                {
                    return -20f;
                }
                else if (indexC >= _playerGroups[0].Count + _playerGroups[1].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count)
                {
                    return 40f;
                }
                else
                {
                    return 100f;
                }
            case 5:
                if (indexC < _playerGroups[0].Count)
                {
                    return -110f;
                }
                else if (indexC >= _playerGroups[0].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count)
                {
                    return -50f;
                }
                else if (indexC >= _playerGroups[0].Count + _playerGroups[1].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count)
                {
                    return 10f;
                }
                else if (indexC >= _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count + _playerGroups[3].Count)
                {
                    return 70f;
                }
                else
                {
                    return 130f;
                }
            case 6:
                if (indexC < _playerGroups[0].Count)
                {
                    return -120f;
                }
                else if (indexC >= _playerGroups[0].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count)
                {
                    return -65f;
                }
                else if (indexC >= _playerGroups[0].Count + _playerGroups[1].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count)
                {
                    return -10f;
                }
                else if (indexC >= _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count + _playerGroups[3].Count)
                {
                    return 45f;
                }
                else if (indexC >= _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count + _playerGroups[3].Count && indexC < _playerGroups[0].Count + _playerGroups[1].Count + _playerGroups[2].Count + _playerGroups[3].Count + _playerGroups[4].Count)
                {
                    return 100f;
                }
                else
                {
                    return 155f;
                }
            default:
                return 0f;
        }
    }
    private Card spawnCard()
    {
        Card cardTemp = getCard();
        cardTemp.setTextureWithCode(0);
        cardTemp.transform.localScale = new Vector3(0.4f, 0.4f, 1f);
        cardTemp.transform.localPosition = new Vector2(-340f, 120f);
        return cardTemp;
    }
    private Card getCard()
    {
        Card card;
        if (cardPool.Count > 0)
        {
            card = cardPool[0];
            cardPool.Remove(card);
            card.transform.SetParent(m_Cards.transform);
        }
        else
        {
            card = Instantiate(m_PrefabCardC, m_Cards.transform);
        }
        card.gameObject.SetActive(true);
        return card;
    }
    private void putCard(Card card)
    {
        if (card == null)
            return;
        if (!cardPool.Contains(card))
            cardPool.Add(card);
        card.setDark(false);
        card.turnHighlightYellow(false);
        card.showBorder(false);
        card.turnBorderBlue(false);
        card.showSpecialTg(false);
        card.transform.SetParent(null);
        card.gameObject.SetActive(false);
        card.transform.localScale = Vector3.one;
        card.removeAllListenerDragDrop();
    }
    public string getSuitInVN(int S)
    {
        switch (S)
        {
            case 1:
                return "bich";
            case 2:
                return "tep";
            case 3:
                return "ro";
            case 4:
                return "co";
            default:
                return "joker";
        }
    }
    bool checkEatCardPosible(Card card)
    {
        List<Card> compareArr = new();
        for (int i = 0; i < _ChosenCardCs.Count; i++)
        {
            Card code = _ChosenCardCs[i];
            compareArr.Add(code);
        }
        compareArr.Add(card);
        compareArr.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        JObject kinds = spotSameKindGroup(compareArr, 0);
        JObject straight = spotStraightGroup(compareArr, 0);
        List<int> arrCodeKinds = getListInt(kinds, "arrCode");
        List<int> arrCodeStraight = getListInt(straight, "arrCode");
        if (arrCodeKinds.Count >= 3 && arrCodeKinds.Count == compareArr.Count)
        {
            return true;
        }
        else if (arrCodeStraight.Count >= 3 && arrCodeStraight.Count == compareArr.Count)
        {
            return true;
        }
        return false;
    }
    void doEatCard()
    {
        List<int> arrEat = new();
        foreach (var selectedCard in _ChosenCardCs)
        {
            int card = selectedCard.code;
            arrEat.Add(card);
        }
        List<List<int>> saveGroup = new(_playerGroups);
        //foreach (List<int> group in playerGroups)
        //{
        //    List<int> newGroup = new List<int>(group);
        //    saveGroup.Add(newGroup);
        //}
        List<int> saveCode = new(_currentCodeOrder);
        foreach (var card in arrEat)
        {
            removeCode(card);
        }
        List<List<int>> arrLeft = new();
        if (_playerGroups.Count > 1)
        {
            arrLeft = new List<List<int>>(_playerGroups);
        }
        else
        {
            arrLeft.Add(new List<int>(_currentCodeOrder));
        }
        _playerGroups.Clear();
        _currentCodeOrder.Clear();
        _playerGroups = new List<List<int>>(saveGroup);
        _currentCodeOrder = new List<int>(saveCode);
        SocketSend.sendTgEc(arrEat, arrLeft);
        _isDraw = true;
    }
    void handleFail()
    {
        showNoti("You can not do that");
        Debug.Log("!> Failed" + _playerGroups.ToString() + _currentCodeOrder.ToString());
        resetStateCardAndButton();
    }
    void resetStateCardAndButton()
    {
        reOrganizeCardPosition(0);
        enableAllButton(false);
        _ChosenCardCs.Clear();
        _ChosenCardC = null;
        destroyHintArrow();
        updateGroupBanner();
        for (int i = 0; i < players.Count; i++)
        {
            List<List<Card>> stack = _CardsInDeck[i];
            if (stack.Count > 0)
            {
                for (int j = 0; j < stack.Count; j++)
                {
                    if (stack[j].Count > 0)
                    {
                        for (int k = 0; k < stack[j].Count; k++)
                        {
                            Card card = stack[j][k].GetComponent<Card>();
                            card.turnBorderBlue(false);
                            card.turnHighlightYellow(false);
                        }
                    }
                }
            }
        }
    }
    bool checkCanGui(List<Card> arrCode)
    {
        List<Card> arrC = new();
        if (_ChosenCardCs.Count == 0)
        {
            return false;
        }
        foreach (Card cardObject in arrCode)
        {
            Card card = cardObject;
            arrC.Add(card);
        }
        foreach (Card selectedCardObject in _ChosenCardCs)
        {
            Card card = selectedCardObject;
            arrC.Add(card);
        }
        arrC.Sort((a, b) => (a.N % 14).CompareTo(b.N % 14));
        JObject kinds = spotSameKindGroup(arrC, 0);
        JObject straight = spotStraightGroup(arrC, 0);
        List<int> arrCodeKinds = getListInt(kinds, "arrCode");
        List<int> arrCodeStraight = getListInt(straight, "arrCode");
        //Debug.Log("!> check gui " + arrC.Count + " " + arrCodeKinds.Count + " " + arrCodeStraight.Count);
        if (arrCodeKinds.Count == arrC.Count && arrC.Count > 2)
        {
            return true;
        }
        else if (arrCodeStraight.Count == arrC.Count && arrC.Count > 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void showScHint()
    {
        destroyHintArrow();
        for (int i = 0; i < players.Count; i++)
        {
            List<List<Card>> stack = _CardsInDeck[i];
            if (stack.Count > 0)
            {
                for (int j = 0; j < stack.Count; j++)
                {
                    if (stack[j].Count > 0)
                    {
                        if (checkCanGui(stack[j]))
                        {
                            hightLightHintSc(stack[j]);
                        }
                        else
                        {
                            foreach (Card cardObject in stack[j])
                            {
                                cardObject.turnBorderBlue(false);
                                cardObject.turnHighlightYellow(false);
                            }
                        }
                    }
                }
            }
        }
    }
    void hightLightHintSc(List<Card> arrCard)
    {
        if (arrCard.Count == 0 || arrCard == null)
        {
            return;
        }
        float posY = 0;
        List<float> posArray = new();
        foreach (Card card in arrCard)
        {
            posY = card.transform.localPosition.y;
            card.turnHighlightYellow(true);
            posArray.Add(card.transform.localPosition.x);
        }
        (float? min, float? max) minMax = findMinMax(posArray);
        float posX = 0f;
        if (minMax.min != null && minMax.max != null)
            posX = ((float)minMax.max + (float)minMax.min) / 2f;
        GameObject hintScArrow = Instantiate(m_EatArrow, m_Arrows.transform);
        hintScArrow.transform.localPosition = new Vector2(posX, posY + 40);
        _HintScArray.Add(hintScArrow);
        StartCoroutine(moveEatArrow(hintScArrow, true));
    }
    int[] spotGuiCard(Card card)
    {
        for (int i = 0; i < _CardsInDeck.Count; i++)
        {
            for (int j = 0; j < _CardsInDeck[i].Count; j++)
            {
                for (int k = 0; k < _CardsInDeck[i][j].Count; k++)
                {
                    if (card == _CardsInDeck[i][j][k])
                    {
                        return new int[] { i, j };
                    }
                }
            }
        }
        return null;
    }
    void doGuiCard(int[] des)
    {
        List<int> arr = convertIndexToCode(des[0], des[1]);
        List<int> subCode = new(_currentCodeOrder);
        List<List<int>> subGroup = new(_playerGroups);
        List<int> temp = new();
        foreach (Card selectedCard in _ChosenCardCs)
        {
            int code = selectedCard.GetComponent<Card>().code;
            temp.Add(code);
        }
        foreach (int code in temp)
        {
            if (subCode.Contains(code))
            {
                subCode.Remove(code);
            }
            if (subGroup.Count > 0)
            {
                for (int i = 0; i < subGroup.Count; i++)
                {
                    if (subGroup[i].Contains(code))
                    {
                        subGroup[i].Remove(code);
                        break;
                    }
                }
            }
            if (subGroup.Count > 0)
            {
                for (int i = 0; i < subGroup.Count; i++)
                {
                    if (subGroup[i].Count == 0)
                    {
                        subGroup.RemoveAt(i);
                    }
                }
            }
        }
        List<List<int>> cardLeft;
        if (subGroup.Count > 1)
        {
            cardLeft = subGroup;
        }
        else
        {
            cardLeft = new List<List<int>>();
            cardLeft.Add(subCode);
        }
        if (cardLeft.Count < 1)
        {
            return;
        }
        SocketSend.sendTgSc(temp, arr, cardLeft);
    }
    List<int> convertIndexToCode(int i, int j)
    {
        List<int> temp = new();
        foreach (Card cardObject in _CardsInDeck[i][j])
        {
            int code = cardObject.GetComponent<Card>().code;
            temp.Add(code);
        }
        return temp;
    }
    void handleCardSwapPosition(int touchCard, int moveCard)
    {
        var temp = thisPlayer.vectorCard[touchCard];
        thisPlayer.vectorCard[touchCard] = thisPlayer.vectorCard[moveCard];
        thisPlayer.vectorCard[moveCard] = temp;
        if (_playerGroups.Count > 1)
        {
            var gId1 = getCardGroup(thisPlayer.vectorCard[touchCard]);
            var gId2 = getCardGroup(thisPlayer.vectorCard[moveCard]);
            if (gId1 != null && gId2 != null && gId1 != gId2)
            {
                moveCardGroup((int)gId2, (int)gId1, _ChosenCardC.code);
            }
            for (int i = 0; i < _playerGroups.Count; i++)
            {
                if (_playerGroups[i].Count == 0)
                {
                    _playerGroups.RemoveAt(i);
                    moveCardPosition();
                }
            }
        }
        if (_playerGroups.Count == 1)
        {
            _playerGroups.Clear();
        }
        reSetZOrder();
    }
    void moveCardGroup(int from, int to, int code)
    {
        updatePlayerPoint();
        for (int i = 0; i < _playerGroups[from].Count; i++)
        {
            int compare = _playerGroups[from][i];
            if (code == compare)
            {
                _playerGroups[from].RemoveAt(i);
                _playerGroups[to].Add(code);
                updateGroupBanner();
                return;
            }
        }
    }
    void moveCardPosition()
    {
        for (int j = 0; j < thisPlayer.vectorCard.Count; j++)
        {
            Vector2 newPos = getPlayerCardPosition(thisPlayer.vectorCard.Count, j);
            Card card = thisPlayer.vectorCard[j];
            if (card != _ChosenCardC)
            {
                card.transform.DOLocalMove(new Vector2(newPos.x, card.transform.localPosition.y), 0.2f);
                updateGroupBanner();
            }
        }
        reSetZOrder();
    }
    int? getCardGroup(Card card)
    {
        for (int i = 0; i < _playerGroups.Count; i++)
        {
            for (int j = 0; j < _playerGroups[i].Count; j++)
            {
                if (card.code == _playerGroups[i][j])
                {
                    return i;
                }
            }
        }
        return null;
    }
    int? checkGroupCard(Card card)
    {
        int code = card.code;
        if (_playerGroups.Count > 0)
        {
            for (int i = 0; i < _playerGroups.Count; i++)
            {
                for (int j = 0; j < _playerGroups[i].Count; j++)
                {
                    if (code == _playerGroups[i][j])
                    {
                        return i;
                    }
                }
            }
        }
        return null;
    }
    bool checkSelectedCards()
    {
        for (int i = 0; i < _ChosenCardCs.Count; i++)
        {
            if (_ChosenCardC == _ChosenCardCs[i])
            {
                return true;
            }
        }
        return false;
    }
    void chooseCard(Card card, int idCard)
    {
        Vector2 pos = getPlayerCardPosition(thisPlayer.vectorCard.Count, idCard);
        card.transform.DOLocalMove(new Vector2(pos.x, -250f), 0.2f);
        if (!checkSelectedCards())
        {
            _ChosenCardCs.Add(card);
            if (_ChosenCardCs.Count == 1 && thisPlayer == _CurrentPlayerP && _isDraw)
            {
                enableDump(true);
                enableGroup(false);
            }
            else
            {
                enableDump(false);
            }
            if (_ChosenCardCs.Count >= 2)
            {
                checkGroupButton();
            }
            if (_ChosenCardCs.Count >= 3 && thisPlayer == _CurrentPlayerP && _isDraw)
            {
                enableDrop(true);
            }
        }
        else
        {
            unSelectedCard();
            if (_ChosenCardCs.Count == 1 && thisPlayer == _CurrentPlayerP && _isDraw)
            {
                enableDump(true);
            }
            else
            {
                enableDump(false);
            }
            if (_ChosenCardCs.Count < 3)
            {
                enableDrop(false);
            }
        }
        if (_CurrentPlayerP == thisPlayer && _isDraw && _ChosenCardCs.Count > 0)
        {
            showScHint();
        }
    }
    void unSelectedCard()
    {
        for (int i = 0; i < _ChosenCardCs.Count; i++)
        {
            if (_ChosenCardC == _ChosenCardCs[i])
            {
                _ChosenCardCs.RemoveAt(i);
                Vector2 slcPos = _ChosenCardC.transform.localPosition;
                _ChosenCardC.transform.DOLocalMove(new Vector2(slcPos.x, -280f), 0.2f);
            }
        }
        if (_ChosenCardCs.Count == 1 && _isDraw)
        {
            enableDump(true);
            _code = _ChosenCardCs[0].code;
        }
        if (_ChosenCardCs.Count > 0)
        {
            checkGroupButton();
        }
        else
        {
            enableDrop(false);
            enableDump(false);
            enableGroup(false);
        }
        if (_CurrentPlayerP == thisPlayer && _isDraw)
        {
            showScHint();
        }
    }
    void checkGroupButton()
    {
        if (_ChosenCardCs.Count == 0) return;
        if (_CurrentPlayerP == thisPlayer && _isDraw)
        {
            showScHint();
        }
        int? baseGroup = checkGroupCard(_ChosenCardCs[0]);
        bool isSameGroup = true;
        foreach (Card selectedCard in _ChosenCardCs)
        {
            int? currentGroup = checkGroupCard(selectedCard);
            if (currentGroup != baseGroup)
            {
                isSameGroup = false;
                break;
            }
        }
        if ((baseGroup == null || _playerGroups[baseGroup.Value].Count == null) && _ChosenCardCs.Count > 1)
        {
            enableGroup(true);
            return;
        }
        if (baseGroup.HasValue)
        {
            if (_playerGroups[baseGroup.Value] == null)
            {
                enableGroup(false);
                return;
            }
            if (isSameGroup && _ChosenCardCs.Count == _playerGroups[baseGroup.Value].Count)
            {
                if (baseGroup == _playerGroups.Count - 1 && !checkIsGroup(_playerGroups[baseGroup.Value]))
                {
                    enableGroup(true);
                }
                else
                {
                    enableGroup(false);
                }
                return;
            }
            else if (_ChosenCardCs.Count > 1)
            {
                enableGroup(true);
                return;
            }
            else
            {
                enableGroup(false);
                return;
            }
        }
    }
    async void OnPointerClick(PointerEventData eventData, Card card) { }
    async void OnBeginDrag(PointerEventData eventData, Card card)
    {
        _checkClick = true;
        if (thisPlayer.vectorCard.Contains(card))
        {
            _touchId = thisPlayer.vectorCard.IndexOf(card);
            _ChosenCardC = card;
        }
        else
        {
            _ChosenCardC = null;
        }
        _CardPosV2 = card.transform.localPosition;
        Card eatCard = null;
        if (_DumpedCardCs.Count > 0)
            eatCard = _DumpedCardCs[_DumpedCardCs.Count - 1];
        if (_CurrentPlayerP == thisPlayer && eatCard != null)
        {
            if (eatCard == card)
            {
                if (checkEatCardPosible(eatCard))
                {
                    doEatCard();
                }
                else
                {
                    handleFail();
                }
            }
        }
        var gui = spotGuiCard(card);
        if (gui != null && _isDraw == true)
        {
            doGuiCard(gui);
        }
        await Task.Delay(10);
        if (_checkClick)
            OnEndDrag(eventData, card);
    }
    void OnDrag(PointerEventData eventData, Card card)
    {
        var delta = eventData.delta;
        _distance += Math.Sqrt(Math.Pow(delta.x, 2));
        Vector2 posTouch = card.transform.parent.InverseTransformPoint(eventData.pointerCurrentRaycast.worldPosition);
        Mathf.Clamp(posTouch.x, -Screen.currentResolution.width / 2 + 80, Screen.currentResolution.width / 2 - 80);
        posTouch.y = _CardPosV2.y;
        if (_ChosenCardC != null)
        {
            _isHold = false;
            if (thisPlayer.vectorCard.Contains(card))
            {
                card.transform.localPosition = posTouch;
            }
            if (_touchId > 0)
                if (delta.x < 0 && thisPlayer.vectorCard[_touchId - 1] != null)
                {
                    if (card.transform.localPosition.x <= thisPlayer.vectorCard[_touchId - 1].transform.localPosition.x + 20)
                    {
                        Card moveCard = thisPlayer.vectorCard[_touchId - 1];
                        var orgPos = getPlayerCardPosition(thisPlayer.vectorCard.Count, _touchId - 1);
                        moveCard.transform.DOLocalMove(new Vector2(orgPos.x + 60, moveCard.transform.localPosition.y), 0.2f);
                        swapzIndex(card, moveCard);
                        handleCardSwapPosition(_touchId, _touchId - 1);
                        _touchId--;
                    }
                }
            if (delta.x > 0 && _touchId < thisPlayer.vectorCard.Count - 1)
            {
                if (card.transform.localPosition.x >= thisPlayer.vectorCard[_touchId + 1].transform.localPosition.x - 20)
                {
                    var moveCard = thisPlayer.vectorCard[_touchId + 1];
                    var orgPos = getPlayerCardPosition(thisPlayer.vectorCard.Count, _touchId + 1);
                    moveCard.transform.DOLocalMove(new Vector2(orgPos.x - 60, moveCard.transform.localPosition.y), 0.2f);
                    swapzIndex(card, moveCard);
                    handleCardSwapPosition(_touchId, _touchId + 1);
                    _touchId++;
                }
            }
        }
        if (_distance > 40)
        {
            _isHold = true;
            for (int i = 0; i < _ChosenCardCs.Count; i++)
            {
                if (_ChosenCardCs[i] == _ChosenCardC)
                {
                    _ChosenCardCs.RemoveAt(i);
                    _code = null;
                }
            }
            if (_ChosenCardCs.Count == 0)
            {
                enableDump(false);
            }
            if (_ChosenCardCs.Count == 1 && _isDraw && thisPlayer == _CurrentPlayerP)
            {
                _code = _ChosenCardCs[0].code;
                enableDump(true);
            }
            checkGroupButton();
            if (_ChosenCardCs.Count >= 3 && thisPlayer == _CurrentPlayerP && _isDraw)
            {
                enableDrop(true);
            }
            else
            {
                enableDrop(false);
            }
        }
        _checkClick = false;
    }
    void OnEndDrag(PointerEventData eventData, Card card)
    {
        _distance = 0;
        if (_ChosenCardC != null)
        {
            if (_isHold == true)
            {
                Vector2 pos = getPlayerCardPosition(thisPlayer.vectorCard.Count, _touchId);
                _ChosenCardC.transform.DOLocalMove(pos, 0.2f);
                _isHold = false;
            }
            else
            {
                if (_ChosenCardC.transform.localPosition.y <= -240)
                {
                    chooseCard(_ChosenCardC, _touchId);
                    _code = _ChosenCardC.code;
                    if (_ChosenCardCs.Count == 1)
                    {
                        _code = _ChosenCardCs[0].code;
                    }
                }
                int? groupId = checkGroupCard(_ChosenCardC);

                if (groupId != null && checkSelectedCards() == true)
                {
                    if (groupId == _playerGroups.Count - 1 && checkIsGroup(_playerGroups[(int)groupId]) == false)
                        return;

                    for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
                    {
                        Card card1 = thisPlayer.vectorCard[i];
                        _ChosenCardC = card1;
                        if (checkSelectedCards() == true)
                            continue;
                        int code = card1.code;
                        for (int j = 0; j < _playerGroups[(int)groupId].Count; j++)
                        {
                            if (code == _playerGroups[(int)groupId][j])
                            {
                                chooseCard(card1, i);
                            }
                        }
                    }
                    _ChosenCardC = null;
                }
            }
        }
        _ChosenCardC = null;
    }
    public void swapzIndex(Card card1, Card card2)
    {
        int zIndex = card1.transform.GetSiblingIndex();
        card1.transform.SetSiblingIndex(card2.transform.GetSiblingIndex());
        card2.transform.SetSiblingIndex(zIndex);
    }
    public void swapzIndexGo(GameObject go1, GameObject go2)
    {
        int zIndex = go1.transform.GetSiblingIndex();
        go1.transform.SetSiblingIndex(go2.transform.GetSiblingIndex());
        go2.transform.SetSiblingIndex(zIndex);
        _checkSwap = !_checkSwap;
    }

    protected override void Awake()
    {
        base.Awake();
        m_SortBtn.interactable = false;
        enableAllButton(false);
        activeAllButton(false);
    }
}