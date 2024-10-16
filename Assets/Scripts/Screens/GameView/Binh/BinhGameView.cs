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

public class BinhGameView : GameView
{
    public enum TYPE_CARD_MAU_BINH
    {
        NONE = -1,
        HIGH_CARD,
        PAIR,
        TWO_PAIR,
        THREE_OF_A_KIND,
        STRAIGHT,
        FLUSH,
        FULL_HOUSE,
        FOUR_OF_A_KIND,
        STRAIGHT_FLUSH,
        THREE_FLUSHES, // đặc biệt
        THREE_STRAIGHT,
        SIX_PAIRS,
        SAME_COLOR,
        DRAGON,
        GRAND_DRAGON
    }

    [SerializeField] private List<GameObject> m_TotalPoints, m_BurnedIcons;
    [SerializeField] private List<Image> m_RankImgs, m_SpecialRankImgs, m_HandImgs, m_HintRankImgs;
    [SerializeField] private List<TextMeshProUGUI> m_JackPotNumberTMPs;
    [SerializeField] private List<Sprite> m_RankImageSs, m_CheckIconSs, m_HandBgSs, m_ButtonSs;
    [SerializeField] private List<SkeletonGraphic> m_BurnedCardsSG;
    [SerializeField] private List<Vector2> m_CardsPosV2s;

    [SerializeField]
    private GameObject
        m_Cards, m_Cards1, m_Chips, m_TimeRemain, m_ScoreBg, m_SortCards, m_TextSpecial, m_Star, m_IconBomb;

    [SerializeField] private Image m_BgTimeRemainImg, m_CheckHand1Img, m_CheckHand2Img, m_CheckHand3Img;
    [SerializeField] private Button m_RearrangeBtn, m_ShowCardsBtn, m_SwapHandsBtn, m_DeclareBtn;

    [SerializeField]
    private TextMeshProUGUI
        m_SpecialNameTMP,
        m_SortHand1TMP,
        m_SortHand2TMP,
        m_SortHand3TMP,
        m_Hand1TMP,
        m_Hand2TMP,
        m_Hand3TMP,
        m_ScoreHand1TMP,
        m_ScoreHand2TMP,
        m_ScoreHand3TMP,
        m_Countdown;

    [SerializeField] private SkeletonGraphic m_StartSG, m_FinishSG, m_SpecialSG, m_EndSG, m_TankSG, m_BombSG;
    [SerializeField] private Avatar m_SpecialAvatarA;
    [SerializeField] private Card m_PrefabCardC;
    [SerializeField] private ChipBet m_PrefabChipCB;
    [SerializeField] private Animation m_JackpotAnimA;
    [SerializeField] private BinhChosenGroupCards m_ChosenCardsBCGC;

    private const float SCALE_CARD = 0.55f, CARD_HEIGHT = 198f, CARD_WIDTH = 147f, ORG_CARD = 0.8f;
    private List<List<List<Card>>> _HintRankCs = new();
    private List<Card> _CardPoolCs = new();
    private List<ChipBet> _ChipPoolCBs = new();
    private List<JObject> _DataResultJOs = new();
    private List<int> _ScoreBonus = new(), _InstantWin = new();
    private BinhLogicManager _LogicManagerBLM = new();
    private JArray _DataFinishJA = new();
    private Vector2 _CardsCenterV2;

    private TextMeshProUGUI _TimeTMP;

    //List<Card> listCardInTable = new();
    private int[] _StateButtonIds = new int[5];
    private int index = 0;

    private float _ScreenLeftClamp,
        _ScreenRightClamp,
        _ScreenBotClamp,
        _ScreenTopClamp,
        _CardsCheckOffset,
        _TimeSapHam = 0;

    private bool _IsExit, _IsFinish, _CanClear = true, _IsJackPot, _CanSortCard;

    #region Button

    public void onClickRuleJP()
    {
        UIManager.instance.openRuleJPBinh();
    }

    public void onClickShowCard()
    {
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CLICK);
        _IsExit = false;
        m_SortCards.SetActive(false);
        List<int> vtCard = new();
        thisPlayer.vectorCard = sortChi(thisPlayer.vectorCard);
        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            vtCard.Add(thisPlayer.vectorCard[i].code);
        }

        // showStar
        SocketSend.sendBinhShowCard(vtCard, _IsExit);
    }

    public void onClickDoiChi()
    {
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CLICK);
        cleanMarkCard();

        m_SwapHandsBtn.interactable = false;

        for (int i = 0; i < 5; i++)
        {
            thisPlayer.vectorCard[3 + i].transform.DOLocalMove(getPositionSortCard(8 + i), 0.2f);
            if (i < 4)
                thisPlayer.vectorCard[8 + i].transform.DOLocalMove(getPositionSortCard(3 + i), 0.2f);
            else
                thisPlayer.vectorCard[8 + i].transform.DOLocalMove(getPositionSortCard(3 + i), 0.2f).OnComplete(() =>
                {
                    m_SwapHandsBtn.interactable = true;
                });
            Card temp = thisPlayer.vectorCard[3 + i];
            thisPlayer.vectorCard[3 + i] = thisPlayer.vectorCard[8 + i];
            thisPlayer.vectorCard[8 + i] = temp;
        }

        splitChi(thisPlayer);
        updateTextBinh();
    }

    public void onClickHint(string customEventData)
    {
        int index = int.Parse(customEventData);
        if (_StateButtonIds[index] == 0) return;
        showIcStar(true, index);
        showStar(_HintRankCs[index]);
    }

    public void onClickDeclare()
    {
        _IsExit = false;
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CLICK);
        List<int> vtCard = new();
        thisPlayer.vectorCard = sortChi(thisPlayer.vectorCard);
        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            vtCard.Add(thisPlayer.vectorCard[i].code);
        }

        SocketSend.sendBinhDeclare(vtCard, _IsExit);
    }

    public void onClickXepLai()
    {
        _IsExit = false;
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CLICK);
        SocketSend.sendBinhXepLai();
    }

    #endregion

    public void ProcessResponseData(JObject jData)
    {
        Debug.Log(jData.ToString());
        switch ((string)jData["evt"])
        {
            case "countdowntostart":
                _HandleCountdownToStart(jData);
                break;
            case "lc":
                _HandleLC(jData);
                break;
            case "declare":
                _HandleDeclare(jData);
                break;
            case "fsc":
                _HandleCompareHands(jData);
                break;
            case "ufsc":
                _HandleReshuffle(jData);
                break;
            case "finish":
                _HandleFinishGame(jData);
                break;
            case "am":
                break;
        }
    }

    public override void handleCTable(string objData)
    {
        base.handleCTable(objData);
        JObject data = JObject.Parse(objData);
        JArray ArrP = getJArray(data, "ArrP");
        if (data["bonusScore"] != null)
        {
            _ScoreBonus = getListInt(data, "bonusScore");
        }

        if (data["instantWin"] != null)
        {
            _InstantWin = getListInt(data, "instantWin");
        }

        if (data["result"] != null)
        {
            _IsFinish = true;
            ViewIng((JObject)data["result"]);
        }
    }

    public override void handleSTable(string objData)
    {
        resetGameDisplay();
        base.handleSTable(objData);
        JObject data = JObject.Parse(objData);
        JArray ArrP = getJArray(data, "ArrP");
        if (data["bonusScore"] != null)
        {
            _ScoreBonus = getListInt(data, "bonusScore");
        }

        if (data["instantWin"] != null)
        {
            _InstantWin = getListInt(data, "instantWin");
        }

        if (data["result"] != null)
        {
            _IsFinish = true;
            ViewIng((JObject)data["result"]);
        }
    }

    public override void handleVTable(string objData)
    {
        base.handleVTable(objData);
        connectGame(objData);

        JObject data = JObject.Parse(objData);
        JArray ArrP = getJArray(data, "ArrP");
        if (data["bonusScore"] != null)
        {
            _ScoreBonus = getListInt(data, "bonusScore");
        }

        if (data["instantWin"] != null)
        {
            _InstantWin = getListInt(data, "instantWin");
        }

        if (data["result"] != null)
        {
            _IsFinish = true;
            ViewIng((JObject)data["result"]);
        }
        else
        {
            countDown((int)data["T"]);
            initPlayerCard();
            _IsFinish = false;
        }
    }

    public override void handleRJTable(string objData)
    {
        base.handleRJTable(objData);
        connectGame(objData);

        JObject data = JObject.Parse(objData);
        JArray ArrP = getJArray(data, "ArrP");
        if (data["bonusScore"] != null)
        {
            _ScoreBonus = getListInt(data, "bonusScore");
        }

        if (data["instantWin"] != null)
        {
            _InstantWin = getListInt(data, "instantWin");
        }

        if (data["result"] != null)
        {
            _IsFinish = true;
            ViewIng((JObject)data["result"]);
        }
        else
        {
            countDown((int)data["T"] - 5);
            initPlayerCard();
            _IsFinish = false;
        }
    }

    public override void handleFinishGame()
    {
        base.handleFinishGame();
        HandleGame.nextEvt();
        checkAutoExit();
    }

    private void _HandleCountdownToStart(JObject data)
    {
        Debug.LogError($"Data_HandleCountdownToStart {data.ToString()}");
        cleanTable();
        for (var i = 0; i < players.Count; i++)
        {
            clearAllCard(players[i]);
        }

        _CanClear = false;
        stateGame = Globals.STATE_GAME.WAITING;
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.START_GAME);
        int timeStart = (int)data["data"];
        resetGameDisplay();
        m_Countdown.gameObject.SetActive(true);
        m_Countdown.text = timeStart.ToString();
        DOTween.Sequence().AppendInterval(1.0f).AppendCallback(() =>
        {
            timeStart--;
            checkAutoExit();
            m_Countdown.text = timeStart + "";
        }).SetLoops(timeStart).OnComplete(() => { m_Countdown.gameObject.SetActive(false); });
        _TimeTMP.color = Color.green;
    }

    private async void _HandleLC(JObject data)
    {
        Debug.LogError($"Data_HandleLC {data.ToString()}");
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.START_GAME);
        updatePositionPlayerView();
        m_StartSG.gameObject.SetActive(true);
        m_StartSG.AnimationState.SetAnimation(0, "start", false);
        m_StartSG.Initialize(true);
        m_StartSG.AnimationState.Complete += delegate { m_StartSG.gameObject.SetActive(false); };
        stateGame = Globals.STATE_GAME.PLAYING;
        _IsFinish = false;
        int time = (int)data["T"];

        // get this player's cards
        string strArr = (string)data["data"];
        strArr = strArr.Remove(0, 1);
        strArr = strArr.Remove(strArr.Length - 1);
        List<int> arr = strArr?.Split(',').Select(Int32.Parse).ToList();

        for (int i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            player.vectorCard.Clear();
            Vector2 posCard = m_CardsPosV2s[getDynamicIndex(getIndexOf(player))];
            for (int j = 0; j < arr.Count; j++)
            {
                Card card = getCard();
                card.transform.localScale = new Vector2(SCALE_CARD, SCALE_CARD);
                card.GetComponent<RectTransform>().pivot = new Vector2(0.5f, -0.5f);
                card.gameObject.SetActive(false);
                Vector2 pos = getPositionPlayerCard(j, posCard);
                Quaternion newRotation = j < 3 ? Quaternion.Euler(0, 0, 15) : Quaternion.Euler(0, 0, 30);
                card.transform.SetLocalPositionAndRotation(pos, newRotation);
                if (player == thisPlayer)
                {
                    card.decodeCard(arr[j]);
                    card.setTextureWithCode(arr[j]);
                }
                else card.setTextureWithCode(0);

                player.vectorCard.Add(card);
            }
        }

        await Task.Delay(1500);
        chiabai();
        countDown(time - 4);
        await Task.Delay(1000);
        initSortLayer();
    }

    private void _HandleDeclare(JObject data)
    {
        Debug.LogError($"Data__HandleDeclare {data.ToString()}");
        Player player = getPlayer(getString(data, "Name"));
        if (player == thisPlayer)
        {
            moveBack();
            cleanMarkCard();
            hideSortLayer();
        }
    }

    private void _HandleCompareHands(JObject data)
    {
        Debug.LogError($"Data_HandleCompareHands {data.ToString()}");
        string name = getString(data, "Name");
        var player = getPlayer(name);
        if (player != thisPlayer)
        {
            for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
            {
                var card = player.vectorCard[i];
                card.transform.DOScale(SCALE_CARD + 0.05f, 0.3f).SetEase(Ease.InOutSine).SetDelay(0.2f).OnComplete(() =>
                {
                    card.transform.DOScale(SCALE_CARD, 0.3f).SetEase(Ease.InOutSine);
                });
            }

            player.mauBinhSoBai = true;
            var index = getDynamicIndex(getIndexOf(player));
            m_RankImgs[index].gameObject.SetActive(true);
            m_RankImgs[index].sprite = m_RankImageSs[13];
            m_RankImgs[index].SetNativeSize();
        }
        else
        {
            moveBack();
            cleanMarkCard();
            hideSortLayer();
        }
    }

    private void _HandleReshuffle(JObject data)
    {
        Debug.LogError($"Data_HandleReshuffle {data.ToString()}");
        string name = getString(data, "Name");
        Player player = getPlayer(name);
        if (player != thisPlayer)
        {
            player.mauBinhSoBai = false;
            var idexPos = getDynamicIndex(getIndexOf(player));
            m_RankImgs[idexPos].gameObject.SetActive(true);
            m_RankImgs[idexPos].sprite = m_RankImageSs[13];
            m_RankImgs[idexPos].SetNativeSize();
        }
        else
        {
            initSortLayer();
        }
    }

    private async void _HandleFinishGame(JObject data)
    {
        Debug.LogError($"Data_HandleFinishGame {data.ToString()}");
        _IsExit = true;
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.ALERT);
        if (m_SortCards.activeSelf)
            hideSortLayer();
        stopCountDown();

        m_RearrangeBtn.gameObject.SetActive(false);
        m_FinishSG.gameObject.SetActive(true);
        m_FinishSG.AnimationState.SetAnimation(0, "compare", false);
        m_FinishSG.Initialize(true);
        m_FinishSG.AnimationState.Complete += delegate { m_FinishSG.gameObject.SetActive(false); };
        for (var i = 0; i < 4; i++)
            m_RankImgs[i].gameObject.SetActive(false);
        JArray listPl = JArray.Parse(getString(data, "data"));
        _DataFinishJA = listPl;
        _DataResultJOs = new List<JObject>();
        int[] agArr = new int[4];
        for (var i = 0; i < listPl.Count; i++)
        {
            JObject jpl = (JObject)listPl[i];
            var name = getString(jpl, "N");
            var player = getPlayer(name);
            if (player == null)
                continue;
            player.mauBinh_M = (int)jpl["M"];
            player.mauBinh_BL = getBool(jpl, "BL");
            player.mauBinh_MB = (int)jpl["MB"];
            player.scoreChi1 = (int)jpl["hesochi1"];
            player.scoreChi2 = (int)jpl["hesochi2"];
            player.scoreChi3 = (int)jpl["hesochi3"];
            player.bonusChi1 = (int)jpl["bonuschi1"];
            player.bonusChi2 = (int)jpl["bonuschi2"];
            player.bonusChi3 = (int)jpl["bonuschi3"];
            player.jcards = getListInt(jpl, "ArrCard");
            agArr[i] = (int)jpl["AG"];
            for (var j = 0; j < player.jcards.Count; j++)
                player.vectorCard[j].decodeCard(player.jcards[j]);
            JObject playerData = new()
            {
                ["name"] = name,
                ["ArrWin"] = getJArray(jpl, "ArrWin")
            };
            _DataResultJOs.Add(playerData);
            if ((int)jpl["jackPot"] > 0 && player == thisPlayer)
            {
                player.playerView.chipJackpot = (int)jpl["jackPot"];
                showJackpotWin(name, (int)jpl["jackPot"]);
            }
        }

        var num = 0;
        for (var i = 0; i < players.Count; i++)
        {
            var player = players[i];
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;
            if (!player.mauBinh_BL && player.mauBinh_MB == 0)
                num++;
        }

        // Prepare finish
        await Task.Delay(1500);
        m_StartSG.gameObject.SetActive(false);
        if (stateGame == Globals.STATE_GAME.PLAYING)
        {
            for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
            {
                var card = thisPlayer.vectorCard[i];
                card.transform.DOScale(new Vector2(0, SCALE_CARD), 0.1f).SetEase(Ease.InOutSine).OnComplete(() =>
                {
                    card.setTextureWithCode(0);
                    card.transform.DOScale(new Vector2(SCALE_CARD, SCALE_CARD), 0.2f).SetEase(Ease.InOutSine);
                });
            }
        }

        for (var i = 0; i < players.Count; i++)
        {
            var player = players[i];
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;
            player.totalPoint = 0;
            player.mauBinhSoBai = false;
            player.is_ready = false;
            player.vectorCard = sortChi(player.vectorCard);
            splitChi(player);
            for (int j = player.vectorCard.Count - 1; j >= 0; j--)
            {
                Quaternion newRotation = Quaternion.Euler(0, 0, setRotationCard(j));
                player.vectorCard[j].transform.localRotation = newRotation;
            }
        }

        // showBinhSpecial
        await Task.Delay(2000);
        if (num < players.Count)
        {
            for (var i = 0; i < players.Count; i++)
            {
                var player = players[i];
                if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                    continue;
                if (player.mauBinh_BL || player.mauBinh_MB > 0)
                {
                    showCardSpecial(player);
                }
            }

            if (thisPlayer.mauBinh_MB > 0)
                showAnimationSpecialFull();
            await Task.Delay(2000);
        }

        if (num == 1)
        {
            for (var i = 0; i < players.Count; i++)
            {
                var player = players[i];
                if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                    continue;
                if (player.mauBinh_BL || player.mauBinh_MB > 0)
                    continue;
                for (var j = 0; j < player.vectorCard.Count; j++)
                {
                    var card = player.vectorCard[j];
                    card.transform.DOScale(new Vector2(0, SCALE_CARD), 0.05f).SetEase(Ease.InOutSine).OnComplete(() =>
                    {
                        card.transform.DOScale(new Vector2(SCALE_CARD, SCALE_CARD), 0.15f).SetEase(Ease.InOutSine);
                    });
                    card.setTextureWithCode(card.encodeCard());
                }
            }

            await Task.Delay(2000);
        }
        //TODO all user Burned
        for (int i = 0; i < players.Count; i++)
        {
            if (!m_BurnedIcons[i].activeSelf)
            {

            }
            else
            {
                Debug.LogError($"All User Burned");
            }
        }
        if (num > 1)
        {
            showChi3();
            await Task.Delay(3500);
            showChi2();
            await Task.Delay(3500);
            showChi1();
            await Task.Delay(2000);
            for (var i = 0; i < 4; i++)
                m_RankImgs[i].gameObject.SetActive(false);
            await Task.Delay(2000);
        }

        doEndGameFlow();
    }

    public void UpdateJackPot()
    {
        foreach (var jackPot in m_JackPotNumberTMPs)
        {
            jackPot.gameObject.SetActive(false);
        }

        string str = UIManager.instance._PusoyJackPot;

        for (int i = 0; i < 11 - UIManager.instance._PusoyJackPot.Length; i++)
        {
            str = "0" + str;
        }

        for (int i = 0; i < str.Length; i++)
        {
            string temp = str[i].ToString();
            m_JackPotNumberTMPs[i].gameObject.SetActive(true);
            m_JackPotNumberTMPs[i].text = temp;
            StartCoroutine(animateJackPot(m_JackPotNumberTMPs[i].gameObject));
        }
    }

    private IEnumerator animateJackPot(GameObject node)
    {
        float duration = 0.15f;
        Vector3 initialScale = node.transform.localScale;
        Vector3 targetScale = initialScale * 1.2f;

        float time = 0;

        while (time < duration)
        {
            time += Time.deltaTime;
            node.transform.localScale = Vector3.Lerp(initialScale, targetScale, time / duration);
            yield return null;
        }

        time = 0;

        while (time < duration)
        {
            time += Time.deltaTime;
            node.transform.localScale = Vector3.Lerp(targetScale, initialScale, time / duration);
            yield return null;
        }

        node.transform.localScale = initialScale;
    }

    void resetGameDisplay()
    {
        for (int i = 0; i < players.Count; i++)
        {
            var player = players[i];
            clearAllCard(player);
        }

        TurnOff();
        for (int i = 0; i < 4; i++)
        {
            m_BurnedCardsSG[i].gameObject.SetActive(false);
            m_BurnedIcons[i].gameObject.SetActive(false);
        }

        _IsJackPot = false;
        handleFinishGame();
    }

    private void TurnOff()
    {
        for (int i = 0; i < 4; i++)
        {
            m_SpecialRankImgs[i].gameObject.SetActive(false);
            m_TotalPoints[i].SetActive(false);
        }
    }

    public void ViewIng(JObject dataGame)
    {
        int ag = (int)dataGame["eventTime"];
        string objData1 = getString(dataGame, "data");
        string objData = objData1.Replace("\\\"", "\\");
        _DataFinishJA = JArray.Parse(objData);
        for (var i = 0; i < _DataFinishJA.Count; i++)
        {
            JObject jpl = (JObject)_DataFinishJA[i];
            var name = getString(jpl, "N");
            var player = getPlayer(name);
            if (player == null)
                continue;
            player.mauBinh_M = (int)jpl["M"];
            player.mauBinh_BL = (bool)jpl["BL"];
            player.mauBinh_MB = (int)jpl["MB"];
            player.scoreChi1 = (int)jpl["hesochi1"];
            player.scoreChi2 = (int)jpl["hesochi2"];
            player.scoreChi3 = (int)jpl["hesochi3"];
            player.bonusChi1 = (int)jpl["bonuschi1"];
            player.bonusChi2 = (int)jpl["bonuschi2"];
            player.bonusChi3 = (int)jpl["bonuschi3"];
            player.ag = (int)jpl["AG"] - player.mauBinh_M;
            player.setAg();
            List<int> jcards = getListInt(jpl, "ArrCard");
            for (var j = 0; j < jcards.Count; j++)
            {
                player.vectorCard[j].decodeCard(jcards[j]);
            }

            string winData1 = getString(dataGame, "ArrWin");
            string winData = objData1.Replace("\\\"", "\\");
            player.arrBinhWin = JArray.Parse(objData);

            //player.arrBinhWin = getJArray(jpl, "ArrWin");
            if (player.arrBinhWin.Count == 0)
                continue;
        }

        for (var i = 0; i < players.Count; i++)
        {
            var player = players[i];
            var firstTotalPoint = player.scoreChi1 + player.scoreChi2 + player.scoreChi3 + player.bonusChi1 +
                                  player.bonusChi2 + player.bonusChi3;
            player.totalPoint += firstTotalPoint;
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;

            for (var j = 0; j < players.Count; j++)
            {
                var player1 = players[j];
                if (player == player1)
                    continue;
                var point = 0;
                for (var k = 0; k < player.arrBinhWin.Count; k++)
                {
                    if (player1 == getPlayer((string)player.arrBinhWin[k]["name"]))
                    {
                        point = (int)player.arrBinhWin[k]["point"];
                        break;
                    }
                }

                player.totalPoint += point;
                player1.totalPoint -= point;
            }
        }

        for (var i = 0; i < players.Count; i++)
        {
            var player = players[i];
            setPointTotal(player, getDynamicIndex(getIndexOf(player)));
        }

        initPlayerCard();
        showExchangeMoney();
    }

    public void chiabai()
    {
        SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CARD_FLIP_1);
        _IsJackPot = false;
        for (var i = 0; i < players.Count; i++)
        {
            var player = players[i];
            for (int j = player.vectorCard.Count - 1; j >= 0; j--)
            {
                var card = player.vectorCard[j];
                card.gameObject.SetActive(true);
                Quaternion newRotation = Quaternion.Euler(0, 0, setRotationCard(j));
                card.transform.localScale = SCALE_CARD * Vector3.one;
                card.transform.DORotate(newRotation.eulerAngles, 0.3f).SetEase(Ease.InOutSine);
            }
        }

        splitChi(thisPlayer);
    }

    public int checkWinAll()
    {
        if (players.Count <= 3 && stateGame == Globals.STATE_GAME.VIEWING)
            return 0;

        int szSapLang = players.Count - 1;

        if (stateGame == Globals.STATE_GAME.VIEWING)
            szSapLang = players.Count - 2;

        if (szSapLang == 1)
            return 0;

        int time = 0;

        foreach (Player player in players)
        {
            bool checkHaveArrWin = false;
            JArray data = null;
            foreach (var result in _DataResultJOs)
            {
                if (player.displayName == getString(result, "name"))
                {
                    if (result.ContainsKey("ArrWin"))
                    {
                        data = getJArray(result, "ArrWin");
                        if (data != null)
                        {
                            checkHaveArrWin = true;
                            break;
                        }
                    }
                }
            }

            player.isSapLang = checkHaveArrWin && data.Count == szSapLang;
        }

        foreach (var player in players)
        {
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;

            if (player.mauBinh_MB > 0)
                continue;
            JArray data = null;
            foreach (JObject result in _DataResultJOs)
            {
                if (player.displayName == getString(result, "name"))
                {
                    if (result.ContainsKey("ArrWin"))
                    {
                        data = getJArray(result, "ArrWin");
                        break;
                    }
                    else continue;
                }
            }

            if (data == null)
                continue;
            else if (data.Count == szSapLang)
            {
                foreach (var player1 in players)
                {
                    if (player == player1)
                        continue;
                    if (player1 == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                        continue;

                    int point = 0;
                    foreach (var jData in data)
                    {
                        JObject winData = (JObject)jData;
                        var player2 = getPlayer(getString(winData, "Name"));
                        if (player1 == player2)
                        {
                            point = (int)winData["Score"];
                            break;
                        }
                    }
                    //TODO: chay anim ten lua
                    if (!player1.isSapLang)
                    {
                        player.totalPoint += point;
                        player1.totalPoint -= point;
                        int fromPos = getDynamicIndex(getIndexOf(player));
                        int toPos = getDynamicIndex(getIndexOf(player1));

                        setPointTotal(player, fromPos);
                        setPointTotal(player1, toPos);
                        StartCoroutine(soundBoom(0.4f));
                        Vector2 positionOffset = new Vector3(0, -60);
                        SkeletonGraphic animation = Instantiate(m_EndSG, transform);
                        animation.gameObject.SetActive(true);
                        animation.transform.localPosition = m_CardsPosV2s[toPos] + positionOffset;
                        animation.Initialize(true);
                        animation.AnimationState.SetAnimation(0, "animation", false);
                        animation.AnimationState.Complete += delegate { Destroy(animation.gameObject); };
                        time = 3000;
                    }
                }
            }
        }

        return time;
    }

    private IEnumerator soundBoom(float delay)
    {
        yield return new WaitForSeconds(delay);
        SoundManager.instance.playEffectFromPath(Globals.SOUND_CHAT.BOOM);
    }

    async void checkSapHam(int delayTime)
    {
        Debug.Log("chet cha may nay");
        await Task.Delay(delayTime);

        foreach (var player in players)
        {
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;

            if (player.mauBinh_BL || player.mauBinh_MB > 0 || player.isSapLang)
                continue;

            var playersToShoot = new List<Player>();
            JArray data = null;

            foreach (var playerResult in _DataResultJOs)
            {
                if (player.displayName == getString(playerResult, "name"))
                {
                    data = getJArray(playerResult, "ArrWin");
                    if (data != null)
                        break;
                }
            }

            if (data == null)
                continue;

            foreach (var winData in data)
            {
                JObject dataPl = (JObject)winData;
                var player1 = getPlayer(getString(dataPl, "Name"));
                playersToShoot.Add(player1);
            }

            if (playersToShoot.Count == 1 || playersToShoot.Count == 2)
            {
                float effectTime = (playersToShoot.Count == 1) ? 2 : 3.8f;
                int timee = (int)(effectTime * 1000);
                createShootingEffect(player, playersToShoot);
                await Task.Delay(timee);
                _TimeSapHam += effectTime;
            }
        }

        await Task.Delay(500);
        _CanClear = true;
    }

    async void createShootingEffect(Player shotPlayer, List<Player> listPlayersToShoot)
    {
        int fromPos = getDynamicIndex(getIndexOf(shotPlayer));
        Vector2 posTank = m_CardsPosV2s[fromPos] + new Vector2(0, 100);

        float delayTime = 0f;

        for (int i = 0; i < listPlayersToShoot.Count; i++)
        {
            var player = listPlayersToShoot[i];
            int toPos = getDynamicIndex(getIndexOf(player));
            string anim = "";

            if (fromPos == 0)
            {
                switch (toPos)
                {
                    case 3:
                        anim = "A1";
                        break;
                    case 2:
                        anim = "A2";
                        break;
                    case 1:
                        anim = "A3";
                        break;
                }
            }
            else if (fromPos == 1)
            {
                switch (toPos)
                {
                    case 0:
                        anim = "D4";
                        break;
                    case 3:
                        anim = "D5";
                        break;
                    case 2:
                        anim = "D6";
                        break;
                }
            }
            else if (fromPos == 2)
            {
                switch (toPos)
                {
                    case 0:
                        anim = "A2";
                        break;
                    case 1:
                        anim = "A1";
                        break;
                    case 3:
                        anim = "A3";
                        break;
                }
            }
            else if (fromPos == 3)
            {
                switch (toPos)
                {
                    case 0:
                        anim = "D6";
                        break;
                    case 1:
                        anim = "D5";
                        break;
                    case 2:
                        anim = "D4";
                        break;
                }
            }

            Debug.Log($"===> Binh from: {shotPlayer.displayName}, to: {player.displayName}, animation: {anim}");

            if (i != 0)
                await Task.Delay(2000);
            SkeletonGraphic animation = Instantiate(m_TankSG, transform);
            animation.gameObject.SetActive(true);
            animation.transform.localPosition = posTank;
            Quaternion newRotation = Quaternion.Euler(0, 0, 180);
            if (fromPos == 1 || fromPos == 2)
                animation.transform.localRotation = newRotation;
            animation.Initialize(true);
            animation.AnimationState.SetAnimation(0, anim, false);
            animation.AnimationState.Complete += delegate { StartCoroutine(turnOffAnimTank(2f, animation)); };
            await Task.Delay(1000);
            createBomEffect(shotPlayer, player);
        }
    }

    private IEnumerator turnOffAnimTank(float delay, SkeletonGraphic animation)
    {
        yield return new WaitForSeconds(delay);
        Destroy(animation.gameObject);
    }

    async void createBomEffect(Player shotPlayer, Player player)
    {
        int fromPos = getDynamicIndex(getIndexOf(shotPlayer));
        int toPos = getDynamicIndex(getIndexOf(player));

        Vector2 posTank = m_CardsPosV2s[fromPos] + new Vector2(0, 100);
        Vector2 posBom = m_CardsPosV2s[toPos] + new Vector2(0, 100);

        var spBom = Instantiate(m_IconBomb, transform);
        spBom.transform.localPosition = posTank;
        spBom.transform.DOMove(posBom, 0.5f).SetEase(Ease.InOutCubic).OnComplete(() => { Destroy(spBom); });

        SkeletonGraphic anim = Instantiate(m_BombSG, transform);
        anim.gameObject.SetActive(true);
        anim.transform.localPosition = posBom;
        await Task.Delay(300);
        anim.Initialize(true);
        anim.AnimationState.SetAnimation(0, "animation", false);
        anim.AnimationState.Complete += delegate { StartCoroutine(turnOffAnimBom(0.7f, anim)); };


        SoundManager.instance.playEffectFromPath(Globals.SOUND_CHAT.BOOM);
        int point = 0;
        foreach (var data in _DataResultJOs)
        {
            if (getString(data, "name") == shotPlayer.displayName)
            {
                JArray arr = getJArray(data, "ArrWin");
                if (arr == null) return;
                if (arr.Count == 0) return;
                JObject arrObj = (JObject)arr[0];
                if (arrObj.ContainsKey("Score") && arrObj["Score"] != null)
                {
                    point = (int)arrObj["Score"];
                }
                else
                {
                    point = 0;
                }

                break;
            }
            else continue;
        }

        shotPlayer.totalPoint += point;
        player.totalPoint -= point;
        setPointTotal(shotPlayer, fromPos, true);
        setPointTotal(player, toPos, true);
    }

    private IEnumerator turnOffAnimBom(float delay, SkeletonGraphic anim)
    {
        yield return new WaitForSeconds(delay);
        Destroy(anim.gameObject);
    }

    void showCardSpecial(Player player)
    {
        for (int i = 0; i < player.vectorCard.Count; i++)
        {
            Card card = player.vectorCard[i];
            card.setTextureWithCode(card.encodeCard());
            card.transform.DOScale(new Vector2(0, SCALE_CARD), 0.05f).SetEase(Ease.InOutSine).OnComplete(() =>
            {
                card.transform.DOScale(new Vector2(SCALE_CARD, SCALE_CARD), 0.15f).SetEase(Ease.InOutSine);
            });
        }

        var idexPos = getDynamicIndex(getIndexOf(player));
        if (player.mauBinh_BL)
        {
            //TODO Burned
            SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.CLOCK_TICK);
            m_BurnedCardsSG[idexPos].gameObject.SetActive(true);
            m_BurnedCardsSG[idexPos].Initialize(true);
            m_BurnedCardsSG[idexPos].AnimationState.SetAnimation(0, "animation", false);
            m_BurnedCardsSG[idexPos].AnimationState.Complete += delegate
            {
                m_BurnedCardsSG[idexPos].gameObject.SetActive(false);
                m_BurnedIcons[idexPos].SetActive(true);
                //listTotalPoint[idexPos].SetActive(false);
            };
        }
        else
        {
            var mb = player.mauBinh_MB;
            var path = -1;

            if (mb == 15) path = 8;
            else if (mb == 14) path = 1;
            else if (mb == 13) path = 14;
            else if (mb == 12) path = 15;
            else if (mb == 11) path = 23;
            else if (mb == 10) path = 20;

            var pos1 = getDynamicIndex(getIndexOf(player));
            var point = 0;

            for (int i = 0; i < _DataResultJOs.Count; i++)
            {
                JObject data = _DataResultJOs[i];

                if (getString(data, "name") == player.displayName)
                {
                    JArray arrWin = getJArray(data, "ArrWin");
                    if (arrWin.Count == 0) return;
                    point = (int)arrWin[0]["Score"];
                    break;
                }
                else continue;
            }

            for (int i = 0; i < players.Count; i++)
            {
                var curPlayer = players[i];

                if (curPlayer == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING) continue;

                var pos2 = getDynamicIndex(getIndexOf(curPlayer));

                if (curPlayer != player)
                {
                    if (curPlayer.mauBinh_MB > 0)
                    {
                        var value = CompareMauBinh(player.mauBinh_MB, curPlayer.mauBinh_MB);

                        if (value > 0)
                        {
                            player.totalPoint += point;
                            curPlayer.totalPoint -= point;
                        }
                    }
                    else
                    {
                        player.totalPoint += point;
                        curPlayer.totalPoint -= point;
                    }

                    setPointTotal(player, pos1);
                    setPointTotal(curPlayer, pos2);
                }
            }

            if (path >= 0)
            {
                m_SpecialRankImgs[pos1].gameObject.SetActive(true);
                m_SpecialRankImgs[pos1].transform.localScale = Vector2.zero;
                m_SpecialRankImgs[pos1].sprite = m_RankImageSs[path];
                m_SpecialRankImgs[pos1].transform.DOScale(1f, 0.3f).SetEase(Ease.InOutSine);
                m_SpecialRankImgs[pos1].SetNativeSize();
            }
        }
    }

    void showAnimationSpecialFull()
    {
        SoundManager.instance.playEffectFromPath(Globals.SOUND_BINH.WIN_BANKER);
        m_SpecialAvatarA.loadAvatar(thisPlayer.avatar_id, thisPlayer.displayName, thisPlayer.fid);
        var mb = thisPlayer.mauBinh_MB;
        var path = "";

        if (mb == 15) path = "granddragon";
        else if (mb == 14) path = "dragon";
        else if (mb == 13) path = "samecolour";
        else if (mb == 12) path = "6pairs";
        else if (mb == 11) path = "3straights";
        else if (mb == 10) path = "3flushes";
        m_SpecialSG.transform.parent.gameObject.SetActive(true);
        m_SpecialSG.gameObject.SetActive(true);
        m_SpecialSG.Initialize(true);
        m_SpecialSG.AnimationState.SetAnimation(0, path, false);
        m_SpecialSG.AnimationState.Complete += delegate
        {
            m_SpecialSG.gameObject.SetActive(false);
            m_SpecialSG.transform.parent.gameObject.SetActive(false);
        };
        m_SpecialNameTMP.text = thisPlayer.displayName.Length > 20
            ? thisPlayer.displayName.Substring(0, 20) + "..."
            : thisPlayer.displayName;
    }

    async void showChi1()
    {
        bool isBest = false;

        if (thisPlayer.scoreChi1 + thisPlayer.bonusChi1 > 0)
            SoundManager.instance.playEffectFromPath(Globals.SOUND_BINH.COMPARE_WIN);
        else
            SoundManager.instance.playEffectFromPath(Globals.SOUND_BINH.COMPARE_LOSE);

        for (int i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;

            if (player.mauBinh_BL || player.mauBinh_MB > 0)
                continue;

            player.totalPoint += player.scoreChi1 + player.bonusChi1;
            if (player.scoreChi1 + player.bonusChi1 > 0)
                isBest = true;
            else
                isBest = false;

            int rank = getMauBinhRank(player.vectorChi1);

            int fileName = getFileName(rank, isBest);

            int index = getDynamicIndex(getIndexOf(player));

            Vector2 posCard = m_CardsPosV2s[index];
            int[] zIndexArr = new int[8];

            for (var j = 0; j < 8; j++)
            {
                zIndexArr[j] = player.vectorCard[j].transform.GetSiblingIndex();
            }

            for (var j = 0; j < player.vectorChi2.Count; j++)
            {
                player.vectorChi2[j].setDark(true);
                player.vectorChi2[j].transform.SetSiblingIndex(zIndexArr[j]);
            }

            for (var j = 0; j < player.vectorChi1.Count; j++)
            {
                Card card = player.vectorChi1[j];
                card.setTextureWithCode(card.encodeCard());
                card.transform.SetSiblingIndex(zIndexArr[j + 5]);
                card.setDark(false);
                Quaternion newRotation = Quaternion.Euler(0, 0, setRotationCard(j));
                var pos1 = getPositionPlayerCard(j, posCard);
                var pos2 = getPositionShowCard(j, posCard);
                card.transform.rotation = Quaternion.identity;
                card.transform.DOLocalMove(pos2, 0.2f).SetEase(Ease.InOutCubic).OnComplete(() =>
                {
                    card.transform.DORotate(newRotation.eulerAngles, 0.2f).SetDelay(2f);
                    card.transform.DOLocalMove(pos1, 0.2f).SetEase(Ease.InOutCubic).SetDelay(2f).OnComplete(() =>
                    {
                        for (var j = 0; j < 8; j++)
                        {
                            player.vectorCard[j].transform.SetSiblingIndex(zIndexArr[j]);
                        }
                    });
                });
            }

            m_RankImgs[index].transform.localPosition = posCard + new Vector2(0, 80);
            RankImage(this.index, fileName);
        }

        await Task.Delay(2500);
        for (var i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;
            if (player.mauBinh_BL || player.mauBinh_MB > 0)
                continue;
            int rank = getMauBinhRank(player.vectorChi2);
            if (player == thisPlayer)
                setPointAtChi(m_Hand1TMP, m_ScoreHand1TMP, rank, player.scoreChi1, player.bonusChi1);
            int index = getDynamicIndex(getIndexOf(player));
            setPointTotal(player, index);
            for (var j = 0; j < player.vectorCard.Count; j++)
                player.vectorCard[j].setDark(false);
        }
    }

    async void showChi2()
    {
        bool isBest = false;

        if (thisPlayer.scoreChi2 + thisPlayer.bonusChi2 > 0)
            SoundManager.instance.playEffectFromPath(Globals.SOUND_BINH.COMPARE_WIN);
        else
            SoundManager.instance.playEffectFromPath(Globals.SOUND_BINH.COMPARE_LOSE);

        for (int i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;

            if (player.mauBinh_BL || player.mauBinh_MB > 0)
                continue;

            player.totalPoint += player.scoreChi2 + player.bonusChi2;
            if (player.scoreChi2 + player.bonusChi2 > 0)
                isBest = true;
            else
                isBest = false;

            int rank = getMauBinhRank(player.vectorChi2);

            int fileName = getFileName(rank, isBest);

            int index = getDynamicIndex(getIndexOf(player));

            Vector2 posCard = m_CardsPosV2s[index];
            int[] zIndexArr = new int[10];

            for (var j = 3; j < 13; j++)
            {
                zIndexArr[j - 3] = player.vectorCard[j].transform.GetSiblingIndex();
            }

            for (var j = 0; j < player.vectorChi3.Count; j++) //todo:PT10
            {
                player.vectorChi3[j].setDark(true);
                player.vectorChi3[j].transform.SetSiblingIndex(zIndexArr[j]);
            }

            for (var j = 0; j < player.vectorChi2.Count; j++)
            {
                Card card = player.vectorChi2[j];
                card.setTextureWithCode(card.encodeCard());
                card.transform.SetSiblingIndex(zIndexArr[j + 5]);
                card.setDark(false);
                Quaternion newRotation = Quaternion.Euler(0, 0, setRotationCard(j + 3));
                var pos1 = getPositionPlayerCard(j + 3, posCard);
                var pos2 = getPositionShowCard(j + 3, posCard);
                card.transform.rotation = Quaternion.identity;
                card.transform.DOLocalMove(pos2, 0.2f).SetEase(Ease.InOutCubic).OnComplete(() =>
                {
                    card.transform.DORotate(newRotation.eulerAngles, 0.2f).SetDelay(2f);
                    card.transform.DOLocalMove(pos1, 0.2f).SetEase(Ease.InOutCubic).SetDelay(2f).OnComplete(() =>
                    {
                        for (int j = 3; j < 13; j++)
                        {
                            player.vectorCard[j].transform.SetSiblingIndex(zIndexArr[j - 3]);
                        }
                    });
                });
            }

            m_RankImgs[index].transform.localPosition = posCard + new Vector2(0, 200);
            RankImage(index, fileName);
        }

        await Task.Delay(2500);
        for (var i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;
            if (player.mauBinh_BL || player.mauBinh_MB > 0)
                continue;
            int rank = getMauBinhRank(player.vectorChi2);
            if (player == thisPlayer)
                setPointAtChi(m_Hand2TMP, m_ScoreHand2TMP, rank, player.scoreChi2, player.bonusChi2);
            int index = getDynamicIndex(getIndexOf(player));
            setPointTotal(player, index);
        }
    }

    private void RankImage(int index, int fileName)
    {
        m_RankImgs[index].gameObject.SetActive(true);
        m_RankImgs[index].sprite = m_RankImageSs[fileName];
        m_RankImgs[index].SetNativeSize();
        m_RankImgs[index].transform.DOScale(1, 0.01f).SetDelay(2.5f).OnComplete(() =>
        {
            m_RankImgs[index].gameObject.SetActive(false);
        });
    }

    async void showChi3()
    {
        m_SpecialSG.transform.parent.gameObject.SetActive(false);

        bool isBest = false;

        if (thisPlayer.scoreChi3 + thisPlayer.bonusChi3 > 0)
            SoundManager.instance.playEffectFromPath(Globals.SOUND_BINH.COMPARE_WIN);
        else
            SoundManager.instance.playEffectFromPath(Globals.SOUND_BINH.COMPARE_LOSE);

        if (stateGame == Globals.STATE_GAME.VIEWING || thisPlayer.mauBinh_MB >= 10 || thisPlayer.mauBinh_BL)
            m_ScoreBg.SetActive(false);
        else
            m_ScoreBg.SetActive(true);
        for (int i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;

            if (player.mauBinh_BL || player.mauBinh_MB > 0)
                continue;

            player.totalPoint += player.scoreChi3 + player.scoreChi3;
            if (player.scoreChi3 + player.scoreChi3 > 0)
                isBest = true;
            else
                isBest = false;

            int rank = getMauBinhRank(player.vectorChi3);

            int fileName = getFileName(rank, isBest);

            int index = getDynamicIndex(getIndexOf(player));

            Vector2 posCard = m_CardsPosV2s[index];

            for (var j = 0; j < player.vectorChi3.Count; j++)
            {
                Card card = player.vectorChi3[j];
                card.setTextureWithCode(card.encodeCard());
                card.setDark(false);
                Quaternion newRotation = Quaternion.Euler(0, 0, setRotationCard(j + 8));
                var pos1 = getPositionPlayerCard(j + 8, posCard);
                var pos2 = getPositionShowCard(j + 8, posCard);
                card.transform.rotation = Quaternion.identity;
                card.transform.DOLocalMove(pos2, 0.2f).SetEase(Ease.InOutCubic).OnComplete(() =>
                {
                    card.transform.DORotate(newRotation.eulerAngles, 0.2f).SetDelay(2f);
                    card.transform.DOLocalMove(pos1, 0.2f).SetEase(Ease.InOutCubic).SetDelay(2f);
                });
            }

            m_RankImgs[index].transform.localPosition = posCard + new Vector2(0, 150);
            RankImage(index, fileName);
        }

        await Task.Delay(2500);
        for (var i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;
            if (player.mauBinh_BL || player.mauBinh_MB > 0)
                continue;
            int rank = getMauBinhRank(player.vectorChi3);
            if (player == thisPlayer)
                setPointAtChi(m_Hand3TMP, m_ScoreHand3TMP, rank, player.scoreChi3, player.bonusChi3);
            int index = getDynamicIndex(getIndexOf(player));
            setPointTotal(player, index);
        }
    }

    private IEnumerator _ShowRankImage(int idPlayer, Vector2 positionV2, int idRankSpr)
    {
        m_RankImgs[idPlayer].transform.localPosition = positionV2;
        m_RankImgs[idPlayer].gameObject.SetActive(true);
        m_RankImgs[idPlayer].sprite = m_RankImageSs[idRankSpr];
        m_RankImgs[idPlayer].SetNativeSize();
        m_RankImgs[idPlayer].transform.localScale = Vector2.one;
        yield return new WaitForSeconds(2.5f);
        m_RankImgs[index].gameObject.SetActive(false);
    }

    int getFileName(int rank, bool isBest)
    {
        int fileName = -1;
        switch (rank)
        {
            case (int)TYPE_CARD_MAU_BINH.HIGH_CARD:
                fileName = 9;
                break;
            case (int)TYPE_CARD_MAU_BINH.PAIR:
                fileName = 11;
                break;
            case (int)TYPE_CARD_MAU_BINH.TWO_PAIR:
                fileName = 21;
                break;
            case (int)TYPE_CARD_MAU_BINH.THREE_OF_A_KIND:
                fileName = 24;
                break;
            case (int)TYPE_CARD_MAU_BINH.STRAIGHT:
                fileName = 16;
                break;
            case (int)TYPE_CARD_MAU_BINH.FLUSH:
                fileName = 2;
                break;
            case (int)TYPE_CARD_MAU_BINH.FULL_HOUSE:
                fileName = 6;
                break;
            case (int)TYPE_CARD_MAU_BINH.FOUR_OF_A_KIND:
                fileName = 4;
                break;
            case (int)TYPE_CARD_MAU_BINH.STRAIGHT_FLUSH:
                fileName = 18;
                break;
            case (int)TYPE_CARD_MAU_BINH.THREE_FLUSHES: //todo:PT10
                fileName = 20;
                break;
        }

        if (!isBest) fileName++;
        return fileName;
    }

    public void initSortLayer()
    {
        _CanSortCard = true;
        m_SortCards.SetActive(true);
        m_RearrangeBtn.gameObject.SetActive(false);
        cleanMarkCard();
        showStar(new List<List<Card>>());
        updateTextBinh();
        showHintForPlayer();
        for (var i = 0; i < players.Count; i++)
        {
            var player = players[i];
            if (player != thisPlayer)
            {
                var index = getDynamicIndex(getIndexOf(player));
                var posCard = m_CardsPosV2s[index];
                var pos = posCard + new Vector2(0, 120);
                m_RankImgs[index].gameObject.SetActive(true);
                m_RankImgs[index].transform.localPosition = pos;
                m_RankImgs[index].sprite = m_RankImageSs[0];
                m_RankImgs[index].SetNativeSize();
            }
        }

        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            var pos = getPositionSortCard(i);
            var card = thisPlayer.vectorCard[i];
            card.transform.parent = m_Cards1.transform;
            card.GetComponent<RectTransform>().pivot = new Vector2(0.5f, 0.5f);
            card.StopAllCoroutines();
            card.transform.DOLocalMove(pos, 0.2f).SetEase(Ease.InOutCubic);
            card.transform.DORotate(Vector3.zero, 0.2f).SetEase(Ease.InOutCubic);
            card.transform.DOScale(ORG_CARD, 0.2f).SetEase(Ease.InOutSine);
            // card.setListenerDragDrop(OnBeginDrag, OnDrag, OnEndDrag, OnClick);
        }

        m_ChosenCardsBCGC.gameObject.SetActive(true);
        m_ChosenCardsBCGC.transform.SetAsLastSibling();
    }

    public void hideSortLayer()
    {
        _CanSortCard = false;
        m_SortCards.SetActive(false);
        hideStar();
        m_RearrangeBtn.gameObject.SetActive(true);
        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            var pos = getPositionPlayerCard(i, m_CardsPosV2s[0]);
            var card = thisPlayer.vectorCard[i];
            Quaternion newRotation = Quaternion.Euler(0, 0, setRotationCard(i));
            card.transform.parent = m_Cards.transform;
            card.GetComponent<RectTransform>().pivot = new Vector2(0.5f, -0.5f);
            card.transform.DOLocalMove(pos, 0.25f).SetEase(Ease.InOutCubic);
            card.transform.DORotate(newRotation.eulerAngles, 0.25f).SetEase(Ease.InOutCubic);
            card.transform.DOScale(SCALE_CARD, 0.1f).SetEase(Ease.InOutSine);
            // card.removeAllListenerDragDrop();
        }

        m_ChosenCardsBCGC.gameObject.SetActive(false);
        // resetColorCardChi();
    }

    public List<Card> sortChi(List<Card> vectorCard)
    {
        List<Card> vtCardChi1 = new();
        List<Card> vtCardChi2 = new();
        List<Card> vtCardChi3 = new();

        int[] zIndexArr = new int[13];
        for (int i = 0; i < vectorCard.Count; i++)
        {
            if (i < 3) vtCardChi1.Add(vectorCard[i]);
            else if (i < 8) vtCardChi2.Add(vectorCard[i]);
            else vtCardChi3.Add(vectorCard[i]);
            zIndexArr[i] = vectorCard[i].transform.GetSiblingIndex();
        }

        vtCardChi1.Sort((x, y) => y.N - x.N);
        vtCardChi2.Sort((x, y) => y.N - x.N);
        vtCardChi3.Sort((x, y) => y.N - x.N);

        string rankchi = "0";

        if (_LogicManagerBLM.checkDoi(vtCardChi1))
        {
            rankchi = "listDoi";
            vtCardChi1 = listDoi(vtCardChi1);
        }

        Debug.Log("sort chi 1 " + rankchi);

        if (_LogicManagerBLM.checkThungPhaSanh(vtCardChi2))
        {
            rankchi = "ThungPhaSanh";
            vtCardChi2 = listThung(vtCardChi2);
        }
        else if (_LogicManagerBLM.checkTuQuy(vtCardChi2))
        {
            rankchi = "listTuQuy";
            vtCardChi2 = listTuQuy(vtCardChi2);
        }
        else if (_LogicManagerBLM.checkCulu(vtCardChi2))
        {
            rankchi = "listCuLu";
            vtCardChi2 = listCuLu(vtCardChi2);
        }
        else if (_LogicManagerBLM.checkThung(vtCardChi2))
        {
            rankchi = "listThung";
            vtCardChi2 = listThung(vtCardChi2);
        }
        else if (_LogicManagerBLM.checkSanh(vtCardChi2))
        {
            rankchi = "listSanh";
            vtCardChi2 = listSanh(vtCardChi2);
        }
        else if (_LogicManagerBLM.checkXam(vtCardChi2))
        {
            rankchi = "listSamCo";
            vtCardChi2 = listSamCo(vtCardChi2);
        }
        else if (_LogicManagerBLM.checkThu(vtCardChi2))
        {
            rankchi = "listThu";
            vtCardChi2 = listThu(vtCardChi2);
        }
        else if (_LogicManagerBLM.checkDoi(vtCardChi2))
        {
            rankchi = "listDoi";
            vtCardChi2 = listDoi(vtCardChi2);
        }

        Debug.Log("sort chi 2 " + rankchi);

        if (_LogicManagerBLM.checkThungPhaSanh(vtCardChi3))
        {
            rankchi = "ThungPhaSanh";
            vtCardChi3 = listThung(vtCardChi3);
        }
        else if (_LogicManagerBLM.checkTuQuy(vtCardChi3))
        {
            rankchi = "listTuQuy";
            vtCardChi3 = listTuQuy(vtCardChi3);
        }
        else if (_LogicManagerBLM.checkCulu(vtCardChi3))
        {
            rankchi = "listCuLu";
            vtCardChi3 = listCuLu(vtCardChi3);
        }
        else if (_LogicManagerBLM.checkThung(vtCardChi3))
        {
            rankchi = "listThung";
            vtCardChi3 = listThung(vtCardChi3);
        }
        else if (_LogicManagerBLM.checkSanh(vtCardChi3))
        {
            rankchi = "listSanh";
            vtCardChi3 = listSanh(vtCardChi3);
        }
        else if (_LogicManagerBLM.checkXam(vtCardChi3))
        {
            rankchi = "listSamCo";
            vtCardChi3 = listSamCo(vtCardChi3);
        }
        else if (_LogicManagerBLM.checkThu(vtCardChi3))
        {
            rankchi = "listThu";
            vtCardChi3 = listThu(vtCardChi3);
        }
        else if (_LogicManagerBLM.checkDoi(vtCardChi3))
        {
            rankchi = "listDoi";
            vtCardChi3 = listDoi(vtCardChi3);
        }

        Debug.Log("sort chi 3 " + rankchi);

        List<Card> vectorCardResult = new(vtCardChi1.Concat(vtCardChi2).Concat(vtCardChi3));
        for (int i = 0; i < vectorCardResult.Count; i++)
        {
            vectorCardResult[i].transform.SetSiblingIndex(zIndexArr[i]);
        }

        return vectorCardResult;
    }

    List<Card> listDoi(List<Card> listCard)
    {
        List<Card> list = new(listCard);
        List<Card> doi = new();
        if (!_LogicManagerBLM.checkDoi(list)) return doi;

        list.Sort((x, y) => y.N.CompareTo(x.N));

        for (int i = list.Count - 1; i > 0; i--)
        {
            if (list[i].N == list[i - 1].N)
            {
                doi.Add(list[i]);
                doi.Add(list[i - 1]);
                break;
            }
        }

        foreach (var card in doi)
        {
            list.Remove(card);
        }

        doi.AddRange(list);

        return doi;
    }

    List<Card> listThu(List<Card> listCard)
    {
        List<Card> list = new(listCard);
        List<Card> thu = new();
        if (!_LogicManagerBLM.checkThu(list)) return thu;
        list.Sort((x, y) => x.N.CompareTo(y.N));
        for (int i = list.Count - 1; i > 0; i--)
        {
            if (list[i].N == list[i - 1].N)
            {
                thu.Add(list[i]);
                thu.Add(list[i - 1]);
                break;
            }
        }

        foreach (var card in thu)
        {
            list.Remove(card);
        }

        for (int i = list.Count - 1; i > 0; i--)
        {
            if (list[i].N == list[i - 1].N)
            {
                thu.Add(list[i]);
                thu.Add(list[i - 1]);
                break;
            }
        }

        foreach (var card in thu)
        {
            list.Remove(card);
        }

        thu.AddRange(list);

        return thu;
    }

    List<Card> listSamCo(List<Card> listCard)
    {
        List<Card> list = new(listCard);
        List<Card> samCo = new();
        if (!_LogicManagerBLM.checkXam(list)) return samCo;
        list.Sort((x, y) => y.N.CompareTo(x.N));
        for (int i = list.Count - 1; i > 1; i--)
        {
            if (list[i].N == list[i - 1].N && list[i].N == list[i - 2].N)
            {
                samCo.Add(list[i]);
                samCo.Add(list[i - 1]);
                samCo.Add(list[i - 2]);
                break;
            }
        }

        foreach (var card in samCo)
        {
            list.Remove(card);
        }

        samCo.AddRange(list);

        return samCo;
    }

    List<Card> listSanh(List<Card> listCard)
    {
        List<Card> list = new(listCard);
        List<Card> sanh = new();
        if (!_LogicManagerBLM.checkSanh(list, 5)) return sanh;
        list.Sort((x, y) => y.N.CompareTo(x.N));
        Card card1 = list[list.Count - 1];
        Card card2 = list[0];

        if (card1.N == 2 && card2.N == 14)
        {
            for (int j = 1; j < list.Count; j++)
            {
                sanh.Add(list[j]);
            }

            sanh.Add(card2);
        }
        else
        {
            sanh.AddRange(list);
        }

        return sanh;
    }

    List<Card> listThung(List<Card> listCard)
    {
        List<Card> list = new(listCard);
        List<Card> thung = new();
        if (!_LogicManagerBLM.checkThung(list, 5)) return thung;

        list.Sort((x, y) => y.N.CompareTo(x.N));

        return list;
    }

    List<Card> listCuLu(List<Card> listCard)
    {
        List<Card> list = new(listCard);
        List<Card> culu = new();
        if (!_LogicManagerBLM.checkCulu(list)) return culu;

        list.Sort((x, y) => x.N.CompareTo(y.N));

        for (int i = list.Count - 1; i > 1; i--)
        {
            if (list[i].N == list[i - 1].N && list[i].N == list[i - 2].N)
            {
                culu.Add(list[i]);
                culu.Add(list[i - 1]);
                culu.Add(list[i - 2]);
                break;
            }
        }

        foreach (var card in culu)
        {
            list.Remove(card);
        }

        culu.AddRange(list);
        return culu;
    }

    List<Card> listTuQuy(List<Card> listCard)
    {
        List<Card> list = new(listCard);
        List<Card> tuquy = new();
        if (!_LogicManagerBLM.checkTuQuy(list)) return tuquy;
        list.Sort((x, y) => x.N.CompareTo(y.N));
        for (int i = list.Count - 1; i > 2; i--)
        {
            if (list[i].N == list[i - 3].N)
            {
                tuquy.Add(list[i]);
                tuquy.Add(list[i - 1]);
                tuquy.Add(list[i - 2]);
                tuquy.Add(list[i - 3]);
                break;
            }
        }

        foreach (var card in tuquy)
        {
            list.Remove(card);
        }

        tuquy.AddRange(list);
        return tuquy;
    }


    public void moveBack()
    {
        //for (int i = 0; i < movePos.Count; i++)
        //{
        //    int pos = movePos[i];
        //    var card = thisPlayer.vectorCard[pos];
        //    card.transform.localPosition = oldCardPos[i];
        //    card.transform.SetSiblingIndex((int)Globals.GAME_ZORDER.Z_MENU_VIEW + 70 + pos);
        //}
    }


    public void cleanTable()
    {
        TurnOff();
        m_ScoreBg.SetActive(false);
        m_ScoreHand1TMP.gameObject.SetActive(false);
        m_ScoreHand2TMP.gameObject.SetActive(false);
        m_ScoreHand3TMP.gameObject.SetActive(false);
        m_Hand1TMP.gameObject.SetActive(false);
        m_Hand2TMP.gameObject.SetActive(false);
        m_Hand3TMP.gameObject.SetActive(false);
        //for (var i = 0; i < listCardInTable.Count; i ++)
        //{
        //    putCard(listCardInTable[i]);
        //}
        //listCardInTable.Clear();
        updatePositionPlayerView();
    }

    public void connectGame(string objData)
    {
        JObject data = JObject.Parse(objData);
        JArray ArrP = getJArray(data, "ArrP");

        for (int i = 0; i < ArrP.Count; i++)
        {
            JObject dataPlayer = (JObject)ArrP[i];
            var player = getPlayerWithID(getInt(dataPlayer, "id"));
            player.mauBinhSoBai = !(bool)dataPlayer["A"];
            clearAllCard(player);
            List<int> listCards = new();
            listCards = getListInt(dataPlayer, "Arr");
            for (var j = 0; j < listCards.Count; j++)
            {
                var card = getCard();
                //listCardInTable.Add(card);
                card.decodeCard(listCards[j]);
                player.vectorCard.Add(card);
            }
        }
    }


    void showJackpotWin(string name, int chip)
    {
        var player = getPlayer(name);
        if (player == null) return;
        _IsJackPot = true;
    }

    public void initPlayerCard()
    {
        for (var i = 0; i < players.Count; i++)
        {
            var player = players[i];

            if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
                continue;

            var idexPos = getDynamicIndex(getIndexOf(player));
            var posCard = m_CardsPosV2s[idexPos];
            for (var j = 0; j < player.vectorCard.Count; j++)
            {
                var card = player.vectorCard[j];
                Quaternion newRotation = Quaternion.Euler(0, 0, setRotationCard(j));
                var pos = getPositionPlayerCard(j, posCard);
                card.GetComponent<RectTransform>().pivot = new Vector2(0.5f, -0.5f);
                card.transform.localScale = new Vector2(SCALE_CARD, SCALE_CARD);
                card.transform.localPosition = pos;
                card.transform.localRotation = newRotation;
                card.setTextureWithCode(card.code);
            }

            if (player != thisPlayer && !_IsFinish)
            {
                var pos = posCard + new Vector2(0, 120);
                m_RankImgs[idexPos].gameObject.SetActive(true);
                m_RankImgs[idexPos].transform.localPosition = pos;
                if (player.mauBinhSoBai)
                    m_RankImgs[idexPos].sprite = m_RankImageSs[13];
                else
                    m_RankImgs[idexPos].sprite = m_RankImageSs[0];
                m_RankImgs[idexPos].SetNativeSize();
            }

            splitChi(player);
        }

        if (stateGame == Globals.STATE_GAME.PLAYING)
        {
            onClickXepLai();
        }
    }

    public async void doEndGameFlow()
    {
        for (int i = 0; i < 4; i++)
        {
            m_RankImgs[i].gameObject.SetActive(false);
        }

        m_SpecialSG.transform.parent.gameObject.SetActive(false);

        foreach (var player in players)
        {
            foreach (var chi in player.vectorChi1) chi.setDark(false);
            foreach (var chi in player.vectorChi2) chi.setDark(false);
            foreach (var chi in player.vectorChi3) chi.setDark(false);
        }

        int delayTime = checkWinAll();
        _TimeSapHam = 0;
        checkSapHam(delayTime);
        StartCoroutine(EndGameSequence(delayTime, _TimeSapHam));
    }

    private IEnumerator EndGameSequence(float delayTime, float additionalDelayTime)
    {
        yield return new WaitForSeconds(delayTime);
        yield return new WaitForSeconds(additionalDelayTime);
        yield return new WaitForSeconds(2.0f);
        StartCoroutine(CheckCanClearEverySecond());
    }

    private IEnumerator CheckCanClearEverySecond()
    {
        while (true)
        {
            if (_CanClear)
            {
                showExchangeMoney();
                yield return new WaitForSeconds(4.0f);
                handleFinishGame();
                yield break;
            }

            yield return new WaitForSeconds(1f);
        }
    }

    public async void showExchangeMoney()
    {
        m_ScoreBg.SetActive(false);
        m_ScoreHand1TMP.gameObject.SetActive(false);
        m_ScoreHand2TMP.gameObject.SetActive(false);
        m_ScoreHand3TMP.gameObject.SetActive(false);
        m_Hand1TMP.gameObject.SetActive(false);
        m_Hand2TMP.gameObject.SetActive(false);
        m_Hand3TMP.gameObject.SetActive(false);
        if (!_CanClear || _IsFinish)
        {
            await Task.Delay(4000);
        }

        TurnOff();
        await Task.Delay(1000);
        for (var i = 0; i < players.Count; i++)
        {
            var player = players[i];
            if (player == null || (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING))
                continue;
            var idexPos = getDynamicIndex(getIndexOf(player));
            m_BurnedCardsSG[idexPos].gameObject.SetActive(false);
            m_BurnedIcons[idexPos].SetActive(false);
            clearAllCard(player);
        }

        showWinLose();
    }

    public async void showWinLose()
    {
        Vector2 posPot = new();
        List<ChipBet> chipsLose = new();
        for (var i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            if (player == null || (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING))
                continue;
            if (player.mauBinh_M < 0)
            {
                if (player == thisPlayer)
                    SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.LOSE);
                player.playerView.setEffectLose(false);
                player.playerView.effectFlyMoney(player.mauBinh_M, 40);
                for (var j = 0; j < _DataFinishJA.Count; j++)
                {
                    JObject data = (JObject)_DataFinishJA[j];
                    if (player.namePl.Equals(getString(data, "N")))
                    {
                        player.ag = (long)data["AG"];
                        player.setAg();
                        player.playerView.chipJackpot = 0;
                    }
                }

                SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.THROW_CHIP);

                for (var j = 0; j < 10; j++)
                {
                    posPot.x = UnityEngine.Random.Range(0, 80) - 40;
                    posPot.y = UnityEngine.Random.Range(0, 80) - 40;
                    ChipBet chip = getChip();
                    chipsLose.Add(chip);
                    chip.transform.localPosition = player.playerView.transform.localPosition;
                    chip.transform.DOLocalMove(posPot, 0.8f).SetDelay(0.075f * j).SetEase(Ease.InOutCubic);
                }
            }
            else if (player.mauBinh_M == 0)
            {
                player.playerView.setEffectDraw(false);
                player.playerView.effectFlyMoney(player.mauBinh_M);
                for (var j = 0; j < _DataFinishJA.Count; j++)
                {
                    JObject data = (JObject)_DataFinishJA[j];
                    if (player.namePl.Equals(getString(data, "N")))
                    {
                        player.ag = (long)data["AG"];
                        player.setAg();
                        player.playerView.chipJackpot = 0;
                    }
                }
            }

            if (player == thisPlayer)
            {
                //
            }
        }

        await Task.Delay(3000);
        for (var i = 0; i < chipsLose.Count; i++)
        {
            putChip(chipsLose[i]);
        }

        for (var i = 0; i < players.Count; i++)
        {
            Player player = players[i];
            if (player == null || (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING))
                continue;
            if (player.mauBinh_M > 0)
            {
                SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.THROW_CHIP);
                if (player == thisPlayer)
                    SoundManager.instance.playEffectFromPath(Globals.SOUND_GAME.WIN);
                bool checkWin = false;
                for (var j = 0; j < 10; j++)
                {
                    posPot.x = UnityEngine.Random.Range(0, 80) - 40;
                    posPot.y = UnityEngine.Random.Range(0, 80) - 40;
                    ChipBet chip = getChip();
                    chip.transform.localPosition = posPot;
                    chip.transform.DOLocalMove(player.playerView.transform.localPosition, 0.8f).SetEase(Ease.InOutCubic)
                        .SetDelay(0.075f * j).OnComplete(() =>
                        {
                            putChip(chip);
                            if (!checkWin)
                            {
                                checkWin = true;
                                player.playerView.setEffectWin("", false);
                                player.playerView.effectFlyMoney(player.mauBinh_M, 40);
                                for (var k = 0; k < _DataFinishJA.Count; k++)
                                {
                                    JObject data = (JObject)_DataFinishJA[k];
                                    if (player.namePl.Equals(getString(data, "N")))
                                    {
                                        player.ag = (long)data["AG"];
                                        player.setAg();
                                        player.playerView.chipJackpot = 0;
                                    }
                                }
                            }
                        });
                }
            }
        }

        stateGame = Globals.STATE_GAME.WAITING;
        SocketSend.sendUpdateJackpot((int)Globals.GAMEID.PUSOY);
    }

    void setPointAtChi(TextMeshProUGUI lbText, TextMeshProUGUI lbScore, int rank, int point, int bonus)
    {
        int score = point + bonus;

        string text = "";

        if (rank == (int)TYPE_CARD_MAU_BINH.HIGH_CARD) text = Globals.Config.getTextConfig("binh_mauthau");
        else if (rank == (int)TYPE_CARD_MAU_BINH.PAIR) text = Globals.Config.getTextConfig("binh_doi");
        else if (rank == (int)TYPE_CARD_MAU_BINH.TWO_PAIR) text = Globals.Config.getTextConfig("binh_thu");
        else if (rank == (int)TYPE_CARD_MAU_BINH.THREE_OF_A_KIND) text = Globals.Config.getTextConfig("binh_xam");
        else if (rank == (int)TYPE_CARD_MAU_BINH.STRAIGHT) text = Globals.Config.getTextConfig("binh_sanh");
        else if (rank == (int)TYPE_CARD_MAU_BINH.FLUSH) text = Globals.Config.getTextConfig("binh_thung");
        else if (rank == (int)TYPE_CARD_MAU_BINH.FULL_HOUSE) text = Globals.Config.getTextConfig("binh_culu");
        else if (rank == (int)TYPE_CARD_MAU_BINH.FOUR_OF_A_KIND) text = Globals.Config.getTextConfig("binh_tuquy");
        else if (rank == (int)TYPE_CARD_MAU_BINH.STRAIGHT_FLUSH) text = Globals.Config.getTextConfig("binh_tps");

        lbText.gameObject.SetActive(true);
        lbScore.gameObject.SetActive(true);

        lbText.text = text;

        string s = string.Format("{0}", Mathf.Abs(point));

        if (point > 0) s = "+" + s;
        else if (point < 0) s = "-" + s;

        if (bonus != 0)
        {
            string mark = "";

            if (bonus > 0) mark = "+";
            else mark = "-";

            s += "(" + mark + Mathf.Abs(bonus) + ")";
        }

        lbScore.text = s;

        if (score > 0) lbScore.color = Color.yellow;
        else lbScore.color = Color.white;
    }

    public void countDown(int time)
    {
        m_BgTimeRemainImg.DOKill();
        _TimeTMP.text = time + "";
        m_BgTimeRemainImg.gameObject.SetActive(true);
        m_BgTimeRemainImg.fillAmount = 1;
        m_BgTimeRemainImg.DOFillAmount(0, time);

        DOTween.Sequence().AppendInterval(1.0f).AppendCallback(() =>
        {
            time--;
            updateBinhTime(time);
            _TimeTMP.text = time + "";
        }).SetLoops(time);
    }

    public void stopCountDown()
    {
        _TimeTMP.color = Color.green;
        m_BgTimeRemainImg.gameObject.SetActive(false);
    }


    public void setPointTotal(Player player, int index, bool turnOffOnEnd = false)
    {
        if (player == thisPlayer && stateGame == Globals.STATE_GAME.VIEWING)
            return;
        var isColor = false;
        var point = player.totalPoint;
        m_TotalPoints[index].SetActive(true);
        if (point >= 0) isColor = true;
        else isColor = false;

        TextMeshProUGUI totalPoint = m_TotalPoints[index].transform.Find("textPoint").GetComponent<TextMeshProUGUI>();
        totalPoint.text = point > 0 ? "+" + point.ToString() : point.ToString();
        totalPoint.color = isColor ? Color.yellow : Color.white;

        m_TotalPoints[index].transform.DOScale(1.5f, 0.2f).SetEase(Ease.InOutSine).OnComplete(() =>
        {
            m_TotalPoints[index].transform.DOScale(1f, 0.15f).SetEase(Ease.InOutSine).OnComplete(() =>
            {
                if (turnOffOnEnd)
                    m_TotalPoints[index].transform.DOScale(1f, 2f)
                        .OnComplete(() => m_TotalPoints[index].SetActive(false));
            });
        });
    }

    void splitChi(Player player)
    {
        if (player == null) return;

        player.vectorChi1 = new List<Card>();
        player.vectorChi2 = new List<Card>();
        player.vectorChi3 = new List<Card>();

        int chi = 1;
        for (int i = 0; i < player.vectorCard.Count; i++)
        {
            Card card = player.vectorCard[i];

            if (chi == 1)
                player.vectorChi1.Add(card);
            else if (chi == 2)
                player.vectorChi2.Add(card);
            else if (chi == 3)
                player.vectorChi3.Add(card);

            if (i == 2 || i == 7)
            {
                chi++;
            }
        }
    }

    public void updateBinhTime(int time)
    {
        if (time > 0)
        {
            if (time <= 10)
            {
                _TimeTMP.color = Color.red;
            }
            else if (time <= 20)
            {
                _TimeTMP.color = Color.yellow;
            }
            else
            {
                _TimeTMP.color = Color.green;
            }

            for (int i = 0; i < players.Count; i++)
            {
                if (players[i] != thisPlayer && !players[i].mauBinhSoBai)
                {
                    swapCard(players[i], time);
                }
            }
        }
        else
        {
            stopCountDown();
            if (_CanSortCard)
            {
                List<int> vtCard = new();
                thisPlayer.vectorCard = sortChi(thisPlayer.vectorCard);
                for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
                {
                    vtCard.Add(thisPlayer.vectorCard[i].code);
                }

                SocketSend.sendBinhShowCard(vtCard, _IsExit);
            }
        }
    }

    void updateTextBinh()
    {
        var mb = checkMauBinh();

        var verifyChi1 = compareRank(thisPlayer.vectorChi1, thisPlayer.vectorChi2);
        var verifyChi2 = compareRank(thisPlayer.vectorChi2, thisPlayer.vectorChi3);

        var rankChi1 = getMauBinhRank(thisPlayer.vectorChi1);
        var rankChi2 = getMauBinhRank(thisPlayer.vectorChi2);
        var rankChi3 = getMauBinhRank(thisPlayer.vectorChi3);

        cleanMarkCard();

        if (verifyChi1 > 0)
        {
            m_HandImgs[0].sprite = m_HandBgSs[0];
            m_CheckHand1Img.sprite = m_CheckIconSs[1];
            foreach (var card in thisPlayer.vectorChi1)
            {
                card.setDark(true);
                //card.setColorCard(Color.white);
            }
        }

        if (verifyChi2 > 0)
        {
            m_HandImgs[1].sprite = m_HandBgSs[0];
            m_CheckHand2Img.sprite = m_CheckIconSs[1];
            foreach (var card in thisPlayer.vectorChi2)
            {
                card.setDark(true);
                //card.setColorCard(Color.white);
            }
        }

        if (verifyChi1 <= 0 && verifyChi2 <= 0)
        {
            m_HandImgs[0].sprite = m_HandBgSs[1];
            m_HandImgs[1].sprite = m_HandBgSs[1];
            m_HandImgs[2].sprite = m_HandBgSs[1];
            m_CheckHand1Img.sprite = m_CheckIconSs[0];
            m_CheckHand2Img.sprite = m_CheckIconSs[0];
            m_CheckHand3Img.sprite = m_CheckIconSs[0];
        }

        if (verifyChi1 <= 0 && verifyChi2 <= 0)
        {
            SetTextMauBinh(rankChi1, 1);
            SetTextMauBinh(rankChi2, 2);
            SetTextMauBinh(rankChi3, 3);
        }

        if (mb == (int)(TYPE_CARD_MAU_BINH.NONE))
        {
            m_DeclareBtn.gameObject.SetActive(false);
            m_TextSpecial.SetActive(false);
            if (verifyChi1 <= 0 && verifyChi2 <= 0)
            {
                SetTextMauBinh(rankChi1, 1);
                SetTextMauBinh(rankChi2, 2);
                SetTextMauBinh(rankChi3, 3);
            }
            else
            {
                m_SortHand1TMP.text = "";
                m_SortHand2TMP.text = Globals.Config.getTextConfig("binh_lung");
                m_SortHand2TMP.color = Color.red;
                m_SortHand3TMP.text = "";
            }
        }
        else
        {
            m_SortHand1TMP.text = "";
            m_SortHand2TMP.text = "";
            m_SortHand3TMP.text = "";

            string path = "";
            m_DeclareBtn.gameObject.SetActive(true);
            m_TextSpecial.SetActive(true);

            if (mb == (int)TYPE_CARD_MAU_BINH.GRAND_DRAGON)
                m_TextSpecial.GetComponent<Image>().sprite = m_RankImageSs[8];
            else if (mb == (int)TYPE_CARD_MAU_BINH.DRAGON)
                m_TextSpecial.GetComponent<Image>().sprite = m_RankImageSs[1];
            else if (mb == (int)TYPE_CARD_MAU_BINH.SAME_COLOR)
                m_TextSpecial.GetComponent<Image>().sprite = m_RankImageSs[14];
            else if (mb == (int)TYPE_CARD_MAU_BINH.SIX_PAIRS)
                m_TextSpecial.GetComponent<Image>().sprite = m_RankImageSs[15];
            else if (mb == (int)TYPE_CARD_MAU_BINH.THREE_STRAIGHT)
                m_TextSpecial.GetComponent<Image>().sprite = m_RankImageSs[23];
            else if (mb == (int)TYPE_CARD_MAU_BINH.THREE_FLUSHES)
                m_TextSpecial.GetComponent<Image>().sprite = m_RankImageSs[20];
        }
    }

    void cleanMarkCard()
    {
        for (var i = 0; i < players.Count; i++)
        {
            for (var j = 0; j < players[i].vectorCard.Count; j++)
            {
                players[i].vectorCard[j].setDark(false);
                players[i].vectorCard[j].showBorder(false);
            }
        }

        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            thisPlayer.vectorCard[i].setDark(false);
            thisPlayer.vectorCard[i].showBorder(false);
        }

        for (var i = 0; i < _CardPoolCs.Count; i++)
        {
            _CardPoolCs[i].setDark(false);
            _CardPoolCs[i].showBorder(false);
        }
    }

    int compareRank(List<Card> listCard1, List<Card> listCard2)
    {
        List<int> listValue1 = GetListCardValue(listCard1);
        List<int> listValue2 = GetListCardValue(listCard2);
        int rank1 = getMauBinhRank(listCard1);
        int rank2 = getMauBinhRank(listCard2);

        if (rank1 == rank2)
        {
            if (rank1 == (int)TYPE_CARD_MAU_BINH.HIGH_CARD) return CompareMauThau(listValue1, listValue2);
            else if (rank1 == (int)TYPE_CARD_MAU_BINH.PAIR) return CompareDoi(listValue1, listValue2);
            else if (rank1 == (int)TYPE_CARD_MAU_BINH.TWO_PAIR) return CompareThu(listValue1, listValue2);
            else if (rank1 == (int)TYPE_CARD_MAU_BINH.THREE_OF_A_KIND) return CompareSamCo(listValue1, listValue2);
            else if (rank1 == (int)TYPE_CARD_MAU_BINH.STRAIGHT) return CompareSanh(listValue1, listValue2);
            else if (rank1 == (int)TYPE_CARD_MAU_BINH.FLUSH) return CompareThung(listValue1, listValue2);
            else if (rank1 == (int)TYPE_CARD_MAU_BINH.FULL_HOUSE) return CompareCuLu(listValue1, listValue2);
            else if (rank1 == (int)TYPE_CARD_MAU_BINH.FOUR_OF_A_KIND) return CompareTuQuy(listValue1, listValue2);
            else if (rank1 == (int)TYPE_CARD_MAU_BINH.STRAIGHT_FLUSH) return CompareTPS(listValue1, listValue2);
        }
        else if (rank1 > rank2) return 1;

        return -1;
    }

    int CompareMauThau(List<int> list1, List<int> list2)
    {
        for (int i = list1.Count - 1; i >= 0; i--)
        {
            if (list1[i] > list2[i])
                return 1;
            else if (list1[i] < list2[i])
                return -1;
        }

        return 0;
    }

    int CompareDoi(List<int> list1, List<int> list2)
    {
        int value1 = 0, value2 = 0;

        for (int i = 0; i < list1.Count - 1; i++)
        {
            if (list1[i] == list1[i + 1])
            {
                value1 = list1[i];
                break;
            }
        }

        for (int i = 0; i < list2.Count - 1; i++)
        {
            if (list2[i] == list2[i + 1])
            {
                value2 = list2[i];
                break;
            }
        }

        if (value1 > value2)
            return 1;
        else if (value1 < value2)
            return -1;
        else
            return CompareMauThau(list1, list2);
    }

    int CompareThu(List<int> list1, List<int> list2)
    {
        if (list1[1] != list1[2] && list1[2] != list1[3])
        {
            int temp = list1[2];
            list1.RemoveAt(2);
            list1.Insert(0, temp);
        }
        else if (list1[3] != list1[4])
        {
            int temp = list1[4];
            list1.RemoveAt(4);
            list1.Insert(0, temp);
        }

        if (list2[1] != list2[2] && list2[2] != list2[3])
        {
            int temp = list2[2];
            list2.RemoveAt(2);
            list2.Insert(0, temp);
        }
        else if (list2[3] != list2[4])
        {
            int temp = list2[4];
            list2.RemoveAt(4);
            list2.Insert(0, temp);
        }

        return CompareMauThau(list1, list2);
    }

    int CompareSamCo(List<int> list1, List<int> list2)
    {
        int value1 = 0, value2 = 0;

        for (int i = 0; i < list1.Count; i++)
        {
            if (list1[i] == list1[i + 1] && list1[i] == list1[i + 2])
            {
                value1 = list1[i];
                break;
            }
        }

        for (int i = 0; i < list2.Count; i++)
        {
            if (list2[i] == list2[i + 1] && list2[i] == list2[i + 2])
            {
                value2 = list2[i];
                break;
            }
        }

        if (value1 > value2)
            return 1;

        return -1;
    }

    int CompareSanh(List<int> list1, List<int> list2)
    {
        if (list1[0] == 2 && list1[4] == 14)
        {
            list1.RemoveAt(4);
            list1.Insert(0, 1);
        }

        if (list2[0] == 2 && list2[4] == 14)
        {
            list2.RemoveAt(4);
            list2.Insert(0, 1);
        }

        return CompareMauThau(list1, list2);
    }

    int CompareThung(List<int> list1, List<int> list2)
    {
        return CompareMauThau(list1, list2);
    }

    int CompareCuLu(List<int> list1, List<int> list2)
    {
        return CompareSamCo(list1, list2);
    }

    int CompareTuQuy(List<int> list1, List<int> list2)
    {
        return CompareDoi(list1, list2);
    }

    int CompareTPS(List<int> list1, List<int> list2)
    {
        return CompareThung(list1, list2);
    }

    int CompareMauBinh(int x, int y)
    {
        if (x == y)
            return 0;

        return x > y ? 1 : -1;
    }


    List<int> GetListCardValue(List<Card> listCard)
    {
        List<int> value = new();

        if (listCard.Count == 3)
        {
            value.Add(-2);
            value.Add(-1);
        }

        for (int i = 0; i < listCard.Count; i++)
        {
            value.Add(listCard[i].N);
        }

        value.Sort();

        return value;
    }

    int getMauBinhRank(List<Card> listCard)
    {
        if (_LogicManagerBLM.checkThungPhaSanh(listCard, 5)) return (int)TYPE_CARD_MAU_BINH.STRAIGHT_FLUSH;
        else if (_LogicManagerBLM.checkTuQuy(listCard)) return (int)TYPE_CARD_MAU_BINH.FOUR_OF_A_KIND;
        else if (_LogicManagerBLM.checkCulu(listCard)) return (int)TYPE_CARD_MAU_BINH.FULL_HOUSE;
        else if (_LogicManagerBLM.checkThung(listCard, 5)) return (int)TYPE_CARD_MAU_BINH.FLUSH;
        else if (_LogicManagerBLM.checkSanh(listCard, 5)) return (int)TYPE_CARD_MAU_BINH.STRAIGHT;
        else if (_LogicManagerBLM.checkXam(listCard)) return (int)TYPE_CARD_MAU_BINH.THREE_OF_A_KIND;
        else if (_LogicManagerBLM.checkThu(listCard)) return (int)TYPE_CARD_MAU_BINH.TWO_PAIR;
        else if (_LogicManagerBLM.checkDoi(listCard)) return (int)TYPE_CARD_MAU_BINH.PAIR;

        return (int)TYPE_CARD_MAU_BINH.HIGH_CARD;
    }

    int checkMauBinh()
    {
        if (_LogicManagerBLM.checkBinhGrandDragon(thisPlayer.vectorCard)) return (int)TYPE_CARD_MAU_BINH.GRAND_DRAGON;
        else if (_LogicManagerBLM.checkBinhDragon(thisPlayer.vectorCard)) return (int)TYPE_CARD_MAU_BINH.DRAGON;
        else if (_LogicManagerBLM.checkBinhSameColor(thisPlayer.vectorCard)) return (int)TYPE_CARD_MAU_BINH.SAME_COLOR;
        else if (_LogicManagerBLM.checkBinhSixPairs(thisPlayer.vectorCard)) return (int)TYPE_CARD_MAU_BINH.SIX_PAIRS;
        else if (_LogicManagerBLM.checkBinhThreeStraights(thisPlayer.vectorChi1, thisPlayer.vectorChi2,
                     thisPlayer.vectorChi3))
            return (int)TYPE_CARD_MAU_BINH.THREE_STRAIGHT;
        else if (_LogicManagerBLM.checkBinhThreeFlushes(thisPlayer.vectorChi1, thisPlayer.vectorChi2,
                     thisPlayer.vectorChi3))
            return (int)TYPE_CARD_MAU_BINH.THREE_FLUSHES;
        return (int)TYPE_CARD_MAU_BINH.NONE;
    }

    void SetTextMauBinh(int rankchi, int chi)
    {
        string text = "";
        bool color = false;

        if (chi == 1)
        {
            if (rankchi == (int)TYPE_CARD_MAU_BINH.HIGH_CARD)
                text = Globals.Config.getTextConfig("binh_mauthau");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.PAIR)
                text = Globals.Config.getTextConfig("binh_doi");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.THREE_OF_A_KIND)
            {
                text += Globals.Config.getTextConfig("binh_xam");

                if (_ScoreBonus.Count > 0)
                    text += "(+" + Mathf.Abs(_ScoreBonus[0]) + ")";
                color = true;
            }

            m_SortHand1TMP.text = text;

            if (color)
                m_SortHand1TMP.color = Color.yellow;
            else
                m_SortHand1TMP.color = Color.white;
        }
        else if (chi == 2)
        {
            if (rankchi == (int)TYPE_CARD_MAU_BINH.HIGH_CARD)
                text = Globals.Config.getTextConfig("binh_mauthau");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.PAIR)
                text = Globals.Config.getTextConfig("binh_doi");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.TWO_PAIR)
                text = Globals.Config.getTextConfig("binh_thu");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.THREE_OF_A_KIND)
                text = Globals.Config.getTextConfig("binh_xam");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.STRAIGHT)
                text = Globals.Config.getTextConfig("binh_sanh");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.FLUSH)
                text = Globals.Config.getTextConfig("binh_thung");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.FULL_HOUSE)
            {
                text += Globals.Config.getTextConfig("binh_culu");
                if (_ScoreBonus.Count > 0)
                    text += " (+" + _ScoreBonus[2] + ")";
                color = true;
            }
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.FOUR_OF_A_KIND)
            {
                text += Globals.Config.getTextConfig("binh_tuquy");
                if (_ScoreBonus.Count > 0)
                    text += " (+" + _ScoreBonus[3] + ")";
                color = true;
            }
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.STRAIGHT_FLUSH)
            {
                text += Globals.Config.getTextConfig("binh_tps");
                if (_ScoreBonus.Count > 0)
                    text += " (+" + _ScoreBonus[5] + ")";

                color = true;
            }

            m_SortHand2TMP.text = text;

            if (color)
                m_SortHand2TMP.color = Color.yellow;
            else
                m_SortHand2TMP.color = Color.white;
        }
        else if (chi == 3)
        {
            if (rankchi == (int)TYPE_CARD_MAU_BINH.HIGH_CARD)
                text = Globals.Config.getTextConfig("binh_mauthau");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.PAIR)
                text = Globals.Config.getTextConfig("binh_doi");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.TWO_PAIR)
                text = Globals.Config.getTextConfig("binh_thu");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.THREE_OF_A_KIND)
                text = Globals.Config.getTextConfig("binh_xam");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.STRAIGHT)
                text = Globals.Config.getTextConfig("binh_sanh");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.FLUSH)
                text = Globals.Config.getTextConfig("binh_thung");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.FULL_HOUSE)
                text = Globals.Config.getTextConfig("binh_culu");
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.FOUR_OF_A_KIND)
            {
                text += Globals.Config.getTextConfig("binh_tuquy");
                if (_ScoreBonus.Count > 0)
                    text += " (+" + _ScoreBonus[8] + ")";
                color = true;
            }
            else if (rankchi == (int)TYPE_CARD_MAU_BINH.STRAIGHT_FLUSH)
            {
                text += Globals.Config.getTextConfig("binh_tps");
                if (_ScoreBonus.Count > 0)
                    text += " (+" + _ScoreBonus[10] + ")";

                color = true;
            }

            m_SortHand3TMP.text = text;

            if (color)
                m_SortHand3TMP.color = Color.yellow;
            else
                m_SortHand3TMP.color = Color.white;
        }
    }

    public void showStar(List<List<Card>> listCard)
    {
        foreach (Card cardTemp in thisPlayer.vectorCard)
        {
            cardTemp.showStarBinh(false);
        }

        if (listCard.Count == 0)
        {
            return;
        }

        for (int i = 0; i < listCard.Count; i++)
        {
            foreach (Card cardTemp in listCard[i])
            {
                cardTemp.showStarBinh(true, i);
            }
        }
    }

    public void hideStar()
    {
        for (var i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            thisPlayer.vectorCard[i].showStarBinh(false);
        }
    }


    public void showHintForPlayer()
    {
        List<Card> listCard = new(thisPlayer.vectorCard);
        List<List<Card>> listTPS = GetHintTPS(listCard);
        List<List<Card>> listTuQuy = GetHintTuQuy(listCard);
        List<List<Card>> listCuLu = GetHintCuLu(listCard);
        List<List<Card>> listThung = GetHintThung(listCard);
        List<List<Card>> listSanh = GetHintSanh(listCard);

        _HintRankCs = new List<List<List<Card>>> { listTPS, listTuQuy, listCuLu, listThung, listSanh };

        int first = -1;
        // 0 - straight flush
        // 1 - four of a kind
        // 2 - full house
        // 3 - flush
        // 4 - straight
        if (listTPS.Count == 0)
        {
            m_HintRankImgs[0].sprite = m_ButtonSs[0];
            _StateButtonIds[0] = 0;
        }
        else
        {
            m_HintRankImgs[0].sprite = m_ButtonSs[1];
            if (first == -1)
                first = 0;
            _StateButtonIds[0] = 1;
        }

        if (listTuQuy.Count == 0)
        {
            m_HintRankImgs[1].sprite = m_ButtonSs[0];
            _StateButtonIds[1] = 0;
        }
        else
        {
            m_HintRankImgs[1].sprite = m_ButtonSs[1];
            if (first == -1)
                first = 1;
            _StateButtonIds[1] = 1;
        }

        if (listCuLu.Count == 0)
        {
            m_HintRankImgs[2].sprite = m_ButtonSs[0];
            _StateButtonIds[2] = 0;
        }
        else
        {
            m_HintRankImgs[2].sprite = m_ButtonSs[1];
            if (first == -1)
                first = 2;
            _StateButtonIds[2] = 1;
        }

        if (listThung.Count == 0)
        {
            m_HintRankImgs[3].sprite = m_ButtonSs[0];
            _StateButtonIds[3] = 0;
        }
        else
        {
            m_HintRankImgs[3].sprite = m_ButtonSs[1];
            if (first == -1)
                first = 3;
            _StateButtonIds[3] = 1;
        }

        if (listSanh.Count == 0)
        {
            m_HintRankImgs[4].sprite = m_ButtonSs[0];
            _StateButtonIds[4] = 0;
        }
        else
        {
            m_HintRankImgs[4].sprite = m_ButtonSs[1];
            if (first == -1)
                first = 4;
            _StateButtonIds[4] = 1;
        }

        showIcStar(false);

        if (first >= 0 && first < 5)
        {
            showIcStar(true, first);
            showStar(_HintRankCs[first]);
        }
    }

    void showIcStar(bool isShow, int index = 0)
    {
        m_Star.SetActive(isShow);

        if (!isShow) return;

        m_Star.transform.position = new Vector3(m_Star.transform.position.x, m_HintRankImgs[index].transform.position.y,
            m_Star.transform.position.z);
        //ic_star.GetComponent<RectTransform>().sizeDelta = new Vector2(10, 10);
        //ic_star.GetComponent<RectTransform>().rotation = Quaternion.Euler(0, 0, -180);
        //ic_star.GetComponent<RectTransform>().localScale = new Vector3(10, 10, 10);
        ////ic_star.GetComponent<RectTransform>().localOpacity = 0;

        //ic_star.GetComponent<RectTransform>().DOSizeDelta(new Vector2(1, 1), 0.5f).SetEase(Ease.OutCubic);
        //ic_star.GetComponent<RectTransform>().DOLocalRotate(new Vector3(0, 0, 0), 0.5f).SetEase(Ease.OutCubic);
        //ic_star.GetComponent<CanvasGroup>().DOFade(1, 0.3f);
    }

    public List<List<Card>> GetHintTPS(List<Card> _listCard)
    {
        List<Card> listCard = _listCard.ToList();
        List<List<Card>> result = new();

        for (int suit = 4; suit >= 1; suit--)
        {
            List<Card> test = listCard.Where(card => card.S == suit).ToList();
            List<Card> listSanh = GetSanh(ref test);

            while (listSanh.Count >= 5)
            {
                result.Add(listSanh);
                listSanh = GetSanh(ref test);
            }
        }

        return result;
    }

    public List<List<Card>> GetHintTuQuy(List<Card> _listCard)
    {
        List<Card> listCard = _listCard.ToList();
        List<List<Card>> result = new();
        int lastN = 15;

        listCard = listCard.OrderByDescending(card => card.N).ToList();

        foreach (Card cardTemp in listCard)
        {
            if (cardTemp.N >= lastN) continue;

            lastN = cardTemp.N;
            List<Card> test = listCard.Where(card => card.N == lastN).ToList();

            if (test.Count == 4)
            {
                result.Add(test);
            }
        }

        return result;
    }

    //public List<List<Card>> GetHintCuLu(List<Card> _listCard)
    //{
    //    List<Card> listCard = _listCard.ToList();
    //    List<List<Card>> result = new List<List<Card>>();
    //    int lastN = 15;

    //    listCard = listCard.OrderByDescending(card => card.N).ToList();

    //    List<List<Card>> listXam = new List<List<Card>>();
    //    foreach (Card cardTemp in listCard)
    //    {
    //        if (cardTemp.N >= lastN) continue;

    //        lastN = cardTemp.N;
    //        List<Card> test = listCard.Where(card => card.N == lastN).ToList();

    //        if (test.Count >= 3)
    //        {
    //            if (test.Count == 4)
    //            {
    //                test = test.OrderBy(card => card.S).ToList();
    //                test.RemoveAt(0);
    //            }
    //            listXam.Add(test);
    //        }
    //    }

    //    listCard = listCard.OrderBy(card => card.N).ToList();
    //    lastN = 0;
    //    List<List<Card>> listDoi = new List<List<Card>>();

    //    foreach (Card cardTemp in listCard)
    //    {
    //        if (cardTemp.N <= lastN) continue;

    //        lastN = cardTemp.N;
    //        List<Card> test = listCard.Where(card => card.N == lastN).ToList();

    //        if (test.Count == 2)
    //        {
    //            listDoi.Add(test);
    //        }
    //    }

    //    int len = Math.Min(listDoi.Count, listXam.Count);

    //    for (int i = 0; i < len; i++)
    //    {
    //        result.Add(listXam[i].Concat(listDoi[i]).ToList());
    //    }

    //    if (listXam.Count >= 2 && result.Count == 0)
    //    {
    //        List<Card> temp = new List<Card>(listXam[listXam.Count - 1]);
    //        temp.RemoveAt(0);
    //        result.Add(listXam[0].Concat(temp).ToList());
    //        listXam.RemoveAt(0);
    //        listXam.RemoveAt(listXam.Count - 1);
    //    }

    //    if (listXam.Count >= 2)
    //    {
    //        List<Card> temp = new List<Card>(listXam[listXam.Count - 1]);
    //        temp.RemoveAt(0);
    //        result.Add(listXam[0].Concat(temp).ToList());
    //    }

    //    return result;
    //}

    List<List<Card>> GetHintCuLu(List<Card> _listCard)
    {
        List<Card> listCard = new(_listCard);
        List<List<Card>> result = new();
        int lastN = 15;

        listCard.Sort((x, y) => y.N.CompareTo(x.N));

        List<List<Card>> listXam = new();

        foreach (var cardTemp in listCard)
        {
            if (cardTemp.N >= lastN) continue;
            lastN = cardTemp.N;
            var test = listCard.Where(card => card.N == lastN).ToList();
            if (test.Count >= 3)
            {
                if (test.Count == 4)
                {
                    test.Sort((x, y) => x.S.CompareTo(y.S));
                    test.RemoveAt(0);
                }

                listXam.Add(test);
            }
        }

        listCard.Sort((x, y) => x.N.CompareTo(y.N));
        lastN = 0;
        List<List<Card>> listDoi = new();

        foreach (var cardTemp in listCard)
        {
            if (cardTemp.N <= lastN) continue;
            lastN = cardTemp.N;
            var test = listCard.Where(card => card.N == lastN).ToList();
            if (test.Count == 2)
            {
                listDoi.Add(test);
            }
        }

        int len = Math.Min(listDoi.Count, listXam.Count);
        for (int i = 0; i < len; i++)
        {
            result.Add(listXam[i].Concat(listDoi[i]).ToList());
        }

        if (listXam.Count >= 2 && result.Count == 0)
        {
            var temp = new List<Card>(listXam[listXam.Count - 1]);
            temp.RemoveAt(0); // B? ?i m?t l� b�i
            result.Add(listXam[0].Concat(temp).ToList());
        }

        return result;
    }

    public List<List<Card>> GetHintThung(List<Card> _listCard)
    {
        List<Card> listCard = _listCard.ToList();
        List<List<Card>> result = new();

        for (int suit = 4; suit >= 1; suit--)
        {
            List<Card> test = listCard.Where(card => card.S == suit).OrderByDescending(card => card.N).ToList();

            while (test.Count >= 5)
            {
                result.Add(test.Take(5).ToList());
                test = test.Skip(5).ToList();
            }
        }

        return result;
    }

    public List<List<Card>> GetHintSanh(List<Card> _listCard)
    {
        List<Card> listCard = _listCard.ToList();
        List<List<Card>> result = new();
        listCard.Sort((x, y) => y.S.CompareTo(x.S));
        listCard.Sort((x, y) => y.N.CompareTo(x.N));

        List<Card> test = new();
        test = GetSanh(ref listCard);

        while (test.Count >= 5)
        {
            result.Add(new List<Card>(test));
            test = GetSanh(ref listCard);
        }

        return result;
    }

    public List<Card> GetSanh(ref List<Card> listCard)
    {
        List<Card> sanh = new();

        if (!_LogicManagerBLM.checkSanh(listCard, 5))
            return sanh;

        listCard = listCard.OrderBy(x => x.N).ToList();
        int index;

        for (int i = listCard.Count - 1; i > 3; i--)
        {
            index = 1;
            sanh.Clear();
            Card cardm = listCard[i];
            sanh.Add(cardm);

            for (int j = i - 1; j >= 0; j--)
            {
                Card cardn = listCard[j];
                if (cardn.N == cardm.N - 1)
                {
                    sanh.Add(cardn);
                    index++;
                    cardm = cardn;

                    if (index == 5)
                    {
                        for (int k = 0; k < sanh.Count; k++)
                        {
                            for (int l = 0; l < listCard.Count; l++)
                            {
                                if (sanh[k].code == listCard[l].code)
                                {
                                    listCard.RemoveAt(l);
                                    break;
                                }
                            }
                        }

                        sanh = sanh.OrderBy(x => x.N).ToList();
                        return sanh;
                    }
                }
            }
        }

        sanh.Clear();
        index = 2;
        Card card1 = listCard[listCard.Count - 1];
        Card card2 = listCard[0];

        if (card1.N == 14 && card2.N == 2)
        {
            sanh.Add(card1);
            sanh.Add(card2);
            card1 = card2;

            for (int i = 1; i < listCard.Count; i++)
            {
                card2 = listCard[i];

                if (card2.N == card1.N + 1)
                {
                    sanh.Add(card2);
                    index++;
                    card1 = card2;

                    if (index == 5)
                        break;
                }
            }
        }

        for (int i = 0; i < sanh.Count; i++)
        {
            for (int j = 0; j < listCard.Count; j++)
            {
                if (sanh[i].code == listCard[j].code)
                {
                    listCard.RemoveAt(j);
                    break;
                }
            }
        }

        return sanh;
    }

    public List<Card> GetThung(ref List<Card> listCard)
    {
        List<Card> thung = new();

        if (!_LogicManagerBLM.checkThung(listCard, 5))
            return thung;

        listCard = listCard.OrderBy(x => x.N).ToList();

        int index;

        for (int suit = 1; suit <= 4; suit++)
        {
            index = 0;
            thung.Clear();

            for (int i = listCard.Count - 1; i >= 0; i--)
            {
                Card card = listCard[i];

                if (card.S == suit)
                {
                    thung.Add(card);
                    index++;

                    if (index == 5)
                    {
                        for (int j = 0; j < thung.Count; j++)
                        {
                            for (int k = 0; k < listCard.Count; k++)
                            {
                                if (thung[j].code == listCard[k].code)
                                {
                                    listCard.RemoveAt(k);
                                    break;
                                }
                            }
                        }

                        thung = thung.OrderBy(x => x.N).ToList();
                        return thung;
                    }
                }
            }
        }

        return thung;
    }

    public List<Card> GetCuLu(ref List<Card> listCard)
    {
        List<Card> culu = new();

        if (!_LogicManagerBLM.checkCulu(listCard))
            return culu;

        listCard = listCard.OrderBy(x => x.N).ToList();

        for (int i = listCard.Count - 1; i > 1; i--)
        {
            if (listCard[i].N == listCard[i].N)
            {
                culu.Add(listCard[i]);
                culu.Add(listCard[i - 1]);
                culu.Add(listCard[i - 2]);
                break;
            }
        }

        for (int i = 0; i < culu.Count; i++)
        {
            for (int j = 0; j < listCard.Count; j++)
            {
                if (culu[i].code == listCard[j].code)
                {
                    listCard.RemoveAt(j);
                    break;
                }
            }
        }

        for (int i = listCard.Count - 1; i > 0; i--)
        {
            if (listCard[i].N == listCard[i - 1].N)
            {
                culu.Add(listCard[i]);
                culu.Add(listCard[i - 1]);
                break;
            }
        }

        for (int i = 0; i < culu.Count; i++)
        {
            for (int j = 0; j < listCard.Count; j++)
            {
                if (culu[i].code == listCard[j].code)
                {
                    listCard.RemoveAt(j);
                    break;
                }
            }
        }

        culu = culu.OrderBy(x => x.N).ToList();

        return culu;
    }

    public List<Card> GetTuQuy(ref List<Card> listCard)
    {
        List<Card> tuquy = new();

        if (!_LogicManagerBLM.checkTuQuy(listCard))
            return tuquy;

        listCard = listCard.OrderBy(x => x.N).ToList();

        for (int i = listCard.Count - 1; i > 0; i--)
        {
            if (listCard[i].N == listCard[i - 3].N)
            {
                tuquy.Add(listCard[i]);
                tuquy.Add(listCard[i - 1]);
                tuquy.Add(listCard[i - 2]);
                tuquy.Add(listCard[i - 3]);
                break;
            }
        }

        if (tuquy[0].N == listCard[0].N)
        {
            // add 1 l�
            tuquy.Add(listCard[12]);
        }
        else
        {
            tuquy.Add(listCard[0]);
        }

        for (int i = 0; i < tuquy.Count; i++)
        {
            for (int j = 0; j < listCard.Count; j++)
            {
                if (tuquy[i].code == listCard[j].code)
                {
                    listCard.RemoveAt(j);
                    break;
                }
            }
        }

        return tuquy;
    }

    public void swapCard(Player player, int time)
    {
        if (player.timeSwapCard == 0)
        {
            player.timeSwapCard = time - UnityEngine.Random.Range(1, 4);
        }

        if (time <= player.timeSwapCard && m_BgTimeRemainImg.IsActive())
        {
            player.timeSwapCard = time - UnityEngine.Random.Range(1, 3);

            int index1 = UnityEngine.Random.Range(0, 13);
            int index2 = UnityEngine.Random.Range(0, 13);

            var card1 = player.vectorCard[index1];
            var card2 = player.vectorCard[index2];

            var pos1 = card2.gameObject.transform.localPosition;
            var pos2 = card1.gameObject.transform.localPosition;
            Quaternion rot1 = card2.gameObject.transform.localRotation;
            Quaternion rot2 = card1.gameObject.transform.localRotation;
            int z1 = card2.transform.GetSiblingIndex();
            int z2 = card1.transform.GetSiblingIndex();

            card1.transform.DOLocalMove(pos1, 0.2f).SetEase(Ease.InOutCubic);
            card1.transform.DORotate(rot1.eulerAngles, 0.2f).SetEase(Ease.InOutCubic);
            card1.transform.SetSiblingIndex(z1);
            card2.transform.DOLocalMove(pos2, 0.2f).SetEase(Ease.InOutCubic);
            card2.transform.DORotate(rot2.eulerAngles, 0.2f).SetEase(Ease.InOutCubic);
            card2.transform.SetSiblingIndex(z2);

            var tempt = player.vectorCard[index1];
            player.vectorCard[index1] = player.vectorCard[index2];
            player.vectorCard[index2] = tempt;
        }
    }

    private Card getCard()
    {
        Card card;
        if (_CardPoolCs.Count > 0)
        {
            card = _CardPoolCs[0];
            _CardPoolCs.Remove(card);
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
        _CardPoolCs.Add(card);
        card.transform.SetParent(null);
        card.gameObject.SetActive(false);
    }

    public void clearAllCard(Player player)
    {
        if (!_CanClear)
            return;
        for (var i = 0; i < player.vectorCard.Count; i++)
        {
            var card = player.vectorCard[i];
            putCard(card);
        }

        player.vectorCard.Clear();
        player.vectorChi1.Clear();
        player.vectorChi2.Clear();
        player.vectorChi3.Clear();
    }

    private ChipBet getChip()
    {
        ChipBet chip;
        if (_ChipPoolCBs.Count > 0)
        {
            chip = _ChipPoolCBs[0];
            _ChipPoolCBs.Remove(chip);
            chip.transform.parent = m_Chips.transform;
        }
        else
        {
            chip = Instantiate(m_PrefabChipCB, m_Chips.transform);
        }

        chip.gameObject.SetActive(true);
        chip.transform.localScale = new Vector2(0.5f, 0.5f);
        return chip;
    }

    private void putChip(ChipBet chip)
    {
        _ChipPoolCBs.Add(chip);
        chip.transform.SetParent(null);
        chip.gameObject.SetActive(false);
    }

    public Vector2 getPositionPlayerCard(int index, Vector2 posCard)
    {
        var pos = new Vector2(0, 0);
        float y = CARD_HEIGHT * 0.32f;

        switch (index)
        {
            case 0:
            case 1:
            case 2:
                pos = posCard + new Vector2(0, y);
                break;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                pos = posCard;
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                pos = posCard - new Vector2(0, y);
                break;
            default:
                break;
        }


        return pos;
    }

    public Vector2 getPositionSortCard(int index)
    {
        var y = CARD_HEIGHT * ORG_CARD + 20;
        var x = CARD_WIDTH * ORG_CARD;
        var pos = new Vector2(-130, 40);

        switch (index)
        {
            case 0:
                pos = pos + new Vector2(0, y);
                pos = pos - new Vector2(2 * x, 0);
                break;
            case 1:
                pos = pos + new Vector2(0, y);
                pos = pos - new Vector2(x, 0);
                break;
            case 2:
                pos = pos + new Vector2(0, y);
                break;
            case 3:
                pos = pos - new Vector2(2 * x, 0);
                break;
            case 4:
                pos = pos - new Vector2(x, 0);
                break;
            case 5:
                pos = pos;
                break;
            case 6:
                pos = pos + new Vector2(x, 0);
                break;
            case 7:
                pos = pos + new Vector2(2 * x, 0);
                break;
            case 8:
                pos = pos - new Vector2(0, y);
                pos = pos - new Vector2(2 * x, 0);
                break;
            case 9:
                pos = pos - new Vector2(0, y);
                pos = pos - new Vector2(x, 0);
                break;
            case 10:
                pos = pos - new Vector2(0, y);
                break;
            case 11:
                pos = pos + new Vector2(x, 0);
                pos = pos - new Vector2(0, y);
                break;
            case 12:
                pos = pos + new Vector2(2 * x, 0);
                pos = pos - new Vector2(0, y);
                break;
            default:
                break;
        }

        return pos;
    }

    Vector2 getPositionShowCard(int index, Vector2 posCard)
    {
        Vector2 pos = posCard;
        float x = CARD_WIDTH * 0.3f;
        float y = CARD_HEIGHT * 0.3f;
        float del_y = 20;

        switch (index)
        {
            case 0:
                pos += new Vector2(-x, y + del_y);
                break;
            case 1:
                pos += new Vector2(0, y + del_y);
                break;
            case 2:
                pos += new Vector2(x, y + del_y);
                break;
            case 3:
                pos -= new Vector2(2 * x, 0);
                break;
            case 4:
                pos -= new Vector2(x, 0);
                break;
            case 5:
                // No modification for case 5
                break;
            case 6:
                pos += new Vector2(x, 0);
                break;
            case 7:
                pos += new Vector2(2 * x, 0);
                break;
            case 8:
                pos -= new Vector2(2 * x, y);
                break;
            case 9:
                pos -= new Vector2(x, y);
                break;
            case 10:
                pos -= new Vector2(0, y);
                break;
            case 11:
                pos += new Vector2(x, -y);
                break;
            case 12:
                pos += new Vector2(2 * x, -y);
                break;
            default:
                break;
        }

        return pos;
    }


    public int setRotationCard(int index)
    {
        var x = 0;

        switch (index)
        {
            case 3:
            case 8:
                x = 30;
                break;
            case 0:
            case 4:
            case 9:
                x = 15;
                break;
            case 1:
            case 5:
            case 10:
                x = 0;
                break;
            case 2:
            case 6:
            case 11:
                x = -15;
                break;
            case 7:
            case 12:
                x = -30;
                break;
            default:
                break;
        }

        return x;
    }

    private void OnPointerUp(PointerEventData eventData)
    {
        Card cardC = null;
        List<RaycastResult> rrs = new();
        EventSystem.current.RaycastAll(eventData, rrs);
        foreach (RaycastResult item in rrs)
            if (item.gameObject.TryGetComponent<Card>(out cardC))
                break;
        if (cardC == null) return;
        if (!thisPlayer.vectorCard.Contains(cardC)) return;
        int cardId = thisPlayer.vectorCard.IndexOf(cardC);
        if (m_ChosenCardsBCGC.ChosenIds.Count >= 5 && !m_ChosenCardsBCGC.ChosenIds.Contains(cardId))
        {
            foreach (Card card in thisPlayer.vectorCard) card.showBorder(false);
            m_ChosenCardsBCGC.ChosenIds.Clear();
        }

        bool isAlreadyChosen = m_ChosenCardsBCGC.ChosenIds.Contains(cardId);
        if (isAlreadyChosen) m_ChosenCardsBCGC.ChosenIds.Remove(cardId);
        else m_ChosenCardsBCGC.ChosenIds.Add(cardId);
        // cardC.setDark(!isChosen);
        cardC.showBorder(!isAlreadyChosen);
    }

    private void OnPointerDown(PointerEventData eventData)
    {
    }

    void OnBeginDrag(PointerEventData eventData)
    {
        if (m_ChosenCardsBCGC.ChosenIds.Count <= 0)
        {
            Card cardC = null;
            List<RaycastResult> rrs = new();
            EventSystem.current.RaycastAll(eventData, rrs);
            foreach (RaycastResult item in rrs)
                if (item.gameObject.TryGetComponent<Card>(out cardC))
                    break;
            if (cardC == null) return;
            if (!thisPlayer.vectorCard.Contains(cardC)) return;
            int cardId = thisPlayer.vectorCard.IndexOf(cardC);
            bool isChosen = m_ChosenCardsBCGC.ChosenIds.Contains(cardId);
            if (isChosen) m_ChosenCardsBCGC.ChosenIds.Remove(cardId);
            else m_ChosenCardsBCGC.ChosenIds.Add(cardId);
            // cardC.setDark(!isChosen);
            cardC.showBorder(!isChosen);
        }

        m_ChosenCardsBCGC.FakeChosenCs.Clear();
        foreach (Card itemCard in thisPlayer.vectorCard) DOTween.Complete(itemCard.transform);
        foreach (int id in m_ChosenCardsBCGC.ChosenIds)
        {
            Card card = thisPlayer.vectorCard[id];
            // card.setDark(true);
            card.showBorder(false);
            Card fakeCard = null;
            foreach (Transform tf in m_Cards1.transform)
            {
                if (!tf.gameObject.activeSelf)
                {
                    fakeCard = tf.GetComponent<Card>();
                    break;
                }
            }

            if (fakeCard == null) fakeCard = Instantiate(m_PrefabCardC, m_Cards1.transform);
            fakeCard.transform.SetSiblingIndex(m_Cards1.transform.childCount - 2); // cái cuối là UX manager
            fakeCard.transform.localScale = card.transform.localScale;
            fakeCard.transform.localPosition = card.transform.localPosition;
            fakeCard.setTextureWithCode(card.code);
            // fakeCard.setDark(false);
            fakeCard.showBorder(false);
            fakeCard.gameObject.SetActive(true);
            m_ChosenCardsBCGC.FakeChosenCs.Add(fakeCard);
        }

        _CardsCenterV2 = Vector2.zero;
        foreach (Card card in m_ChosenCardsBCGC.FakeChosenCs) _CardsCenterV2 += (Vector2)card.transform.localPosition;
        _CardsCenterV2 /= m_ChosenCardsBCGC.FakeChosenCs.Count;
    }

    void OnDrag(PointerEventData eventData)
    {
        if (m_ChosenCardsBCGC.FakeChosenCs.Count <= 0 || m_ChosenCardsBCGC.FakeChosenCs.Count > 5) return;
        Vector2 posTouch = m_Cards1.transform.InverseTransformPoint(eventData.pointerCurrentRaycast.worldPosition);
        if (_CanSortCard)
        {
            Mathf.Clamp(posTouch.x, _ScreenLeftClamp, _ScreenRightClamp);
            Mathf.Clamp(posTouch.y, _ScreenBotClamp, _ScreenTopClamp);
            Vector2 offset = posTouch - _CardsCenterV2;
            _CardsCenterV2 = posTouch;
            foreach (Card card in m_ChosenCardsBCGC.FakeChosenCs) card.transform.localPosition += (Vector3)offset;
        }

        m_ChosenCardsBCGC.TargetIds = _TryGetChiNearGroupCards(posTouch);
        if (m_ChosenCardsBCGC.TargetIds.Count <= 0) return;
        else if (m_ChosenCardsBCGC.TargetIds.Count < m_ChosenCardsBCGC.FakeChosenCs.Count) return;
        m_ChosenCardsBCGC.TargetIds = m_ChosenCardsBCGC.TargetIds
            .OrderBy(id => Mathf.Abs(thisPlayer.vectorCard[id].transform.localPosition.x - posTouch.x)).ToList();
        while (m_ChosenCardsBCGC.TargetIds.Count > m_ChosenCardsBCGC.FakeChosenCs.Count)
            m_ChosenCardsBCGC.TargetIds.Remove(m_ChosenCardsBCGC.TargetIds.Last());
        m_ChosenCardsBCGC.TargetIds = m_ChosenCardsBCGC.TargetIds.OrderBy(x => x).ToList();
        for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            bool isTarget = m_ChosenCardsBCGC.TargetIds.Contains(i);
            thisPlayer.vectorCard[i].showBorder(isTarget);
            // thisPlayer.vectorCard[i].setDark(isTarget);
        }
    }

    void OnEndDrag(PointerEventData eventData)
    {
        if (m_ChosenCardsBCGC.TargetIds.Count > 0)
        {
            if (m_ChosenCardsBCGC.TargetIds.Count >= m_ChosenCardsBCGC.FakeChosenCs.Count)
            {
                List<int> sameIds = new();
                foreach (int id in m_ChosenCardsBCGC.ChosenIds)
                    if (m_ChosenCardsBCGC.TargetIds.Contains(id))
                        sameIds.Add(id);
                foreach (int id in sameIds)
                {
                    m_ChosenCardsBCGC.ChosenIds.Remove(id);
                    m_ChosenCardsBCGC.TargetIds.Remove(id);
                }

                for (int i = 0; i < m_ChosenCardsBCGC.ChosenIds.Count; i++)
                {
                    Card card1 = thisPlayer.vectorCard[m_ChosenCardsBCGC.ChosenIds[i]],
                        card2 = thisPlayer.vectorCard[m_ChosenCardsBCGC.TargetIds[i]];
                    Vector3 card1V3 = card1.transform.localPosition, card2V3 = card2.transform.localPosition;
                    // card1.transform.DOLocalMove(card2V3, .3f).SetEase(Ease.InOutCubic);
                    // card2.transform.DOLocalMove(card1V3, .03f);
                    card1.transform.localPosition = card2V3;
                    card2.transform.localPosition = card1V3;
                    SwapIndex(ref thisPlayer.vectorCard, m_ChosenCardsBCGC.ChosenIds[i],
                        m_ChosenCardsBCGC.TargetIds[i]);
                }

                splitChi(thisPlayer);
                updateTextBinh();
            }
        }

        foreach (Card card in m_ChosenCardsBCGC.FakeChosenCs) card.gameObject.SetActive(false);
        foreach (Card card in thisPlayer.vectorCard)
        {
            // card.setDark(false);
            card.showBorder(false);
        }

        m_ChosenCardsBCGC.ChosenIds.Clear();
    }

    private void SwapIndex(ref List<Card> list, int n, int m)
    {
        Card card = list[n];
        list[n] = list[m];
        list[m] = card;
    }

    private List<int> _TryGetChiNearGroupCards(Vector2 posTouch)
    {
        for (int i = 0; i < thisPlayer.vectorCard.Count; i++)
        {
            if (m_ChosenCardsBCGC.FakeChosenCs.Contains(thisPlayer.vectorCard[i])) continue;
            Vector2 cardV2 = thisPlayer.vectorCard[i].transform.localPosition;
            if (Mathf.Abs(cardV2.x - posTouch.x) <= _CardsCheckOffset &&
                Mathf.Abs(cardV2.y - posTouch.y) <= _CardsCheckOffset)
            {
                if (i <= 2) return new() { 0, 1, 2 };
                else if (i <= 7) return new() { 3, 4, 5, 6, 7 };
                else return new() { 8, 9, 10, 11, 12 };
            }
        }

        return new List<int>();
    }

    protected override void Start()
    {
        base.Start();
        m_ChosenCardsBCGC.SetCallBacks(OnPointerUp, OnBeginDrag, OnDrag, OnEndDrag, OnPointerDown);
        UpdateJackPot();
        m_JackpotAnimA.Stop();
        m_JackpotAnimA.gameObject.SetActive(true);
        m_JackpotAnimA.transform.localScale = Vector2.zero;
        var pos = m_JackpotAnimA.transform.localPosition;
        var parent = m_JackpotAnimA.transform.parent.GetComponent<RectTransform>();
        DOTween.Sequence().Append(m_JackpotAnimA.transform.DOScale(Vector2.one, .2f).SetEase(Ease.OutBack))
            .AppendInterval(1).AppendCallback(() => { m_JackpotAnimA.Play(); });
        DOTween.Sequence().AppendCallback(() => { SocketSend.sendUpdateJackpot(Globals.Config.curGameId); })
            .AppendInterval(5.0f).SetLoops(-1).SetId("updateJackpot");
        SocketSend.sendUpdateJackpot((int)Globals.GAMEID.PUSOY);
    }

    protected override void Awake()
    {
        base.Awake();
        _TimeTMP = m_TimeRemain.transform.GetComponentInChildren<TextMeshProUGUI>();
        _ScreenLeftClamp = -Screen.currentResolution.width / 2 + 40;
        _ScreenRightClamp = Screen.currentResolution.width / 2 - 40;
        _ScreenBotClamp = -Screen.currentResolution.height / 2 + 65;
        _ScreenTopClamp = Screen.currentResolution.height / 2 - 78;
        _CardsCheckOffset = CARD_WIDTH * SCALE_CARD;
    }
}