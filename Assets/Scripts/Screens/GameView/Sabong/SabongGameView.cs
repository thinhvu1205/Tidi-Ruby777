using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Globals;
using DG.Tweening;
using Spine.Unity;
using System.Linq;
using System;
using UnityEngine.UI;
using Newtonsoft.Json;
using Random = UnityEngine.Random;

public class SabongGameView : GameView
{
    [Serializable]
    private struct ActionChipButton
    {
        public GameObject m_Parent, m_BorderChip;
        public Button m_ButtonBtn;
        public TextMeshProUGUI m_ChipValueTMP;
        public ActionChipButton SetTextChip(string value) { m_ChipValueTMP.text = value; return this; }
        public ActionChipButton ShowHideBorderChip(bool isShow) { m_BorderChip.SetActive(isShow); return this; }
        public ActionChipButton EnableClickButtonAction(bool isOn) { m_ButtonBtn.gameObject.SetActive(isOn); return this; }
        public ActionChipButton SetButtonInteractable(bool isOn) { m_ButtonBtn.interactable = isOn; return this; }
        public ActionChipButton MakeChipJump(Vector3 position) { m_Parent.transform.DOLocalJump(position, CHIP_BUTTON_JUMP_VALUE, 1, .05f); return this; }
        public ActionChipButton ShowHideThis(bool isShow) { m_Parent.SetActive(isShow); return this; }
    }
    [Serializable]
    private struct BetOption
    {
        public Transform m_ChipsTf;
        public Button m_ClickAreaBtn;
        public TextMeshProUGUI m_TotalChipsTMP, m_MineChipsTMP;
        public Vector2 GetChipsPosition() { return m_ChipsTf.position; }
        public BetOption SetTextTotalChips(int value) { m_TotalChipsTMP.text = value <= 0 ? "" : Config.FormatMoney3(value); return this; }
        public BetOption SetTextMyChips(int value) { m_MineChipsTMP.text = value <= 0 ? "" : Config.FormatMoney3(value); return this; }
    }
    [SerializeField] private List<BetOption> m_BetOptionsBOs;
    [SerializeField] private List<Card> m_CardCs;
    [SerializeField] private List<SkeletonGraphic> m_StartAnimSGs;
    [SerializeField] private List<ActionChipButton> m_ActionChipACBs;
    [SerializeField] private Transform m_ChipTemplateTf, m_ChipsContainerTf, m_PrefabWinHistoryTf, m_WinHistoryTf, m_RuleTf;
    [SerializeField] private TextMeshProUGUI m_HiddenPlayersTM, m_ClockTimeTMP;
    [SerializeField] private SkeletonGraphic m_DealerSG;
    [SerializeField] private NodePlayerSabong m_PrefabPopUpOtherPlayersNPS;
    [SerializeField] private HistorySabong m_PrefabPopUpHistoryHS;
    private Dictionary<int, List<int>> _myRebetDs = new();
    private List<Player> _HiddenPlayerPs = new();
    private List<Vector2> _CardsPosV2s = new() { new(0, 75), new(-75, 0), new(75, 0) };
    private List<int> _betChipValues = new(), _allBetsByOption = new(), _myBetsByOption = new(), _winHistory = new();
    private Vector2 _DealerPosV2 = new(0, 150);
    private const int LIMIT_WIN_HISTORY = 5;
    private const float SHOWING_CARD_DURATION = 0.2f, CHIP_BUTTON_JUMP_VALUE = 5f;
    private int _betValueNow;
    private float _baseChipPosY;

    #region Button
    public void DoClickListOtherPlayers()
    {
        playSound(SOUND_GAME.CLICK);
        NodePlayerSabong.Show(m_PrefabPopUpOtherPlayersNPS, transform, _HiddenPlayerPs);
    }
    public void DoClickButtonHistory()
    {
        playSound(SOUND_GAME.CLICK);
        if (_winHistory.Count <= 0) return;
        HistorySabong.Show(m_PrefabPopUpHistoryHS, transform, _winHistory);
    }
    public void DoClickSelectBetChip(int chipId)
    {
        _betValueNow = _betChipValues[chipId];
        playSound(SOUND_GAME.CLICK);
        for (int i = 0; i < m_ActionChipACBs.Count - 2; i++)
        {
            Vector3 localPos = m_ActionChipACBs[i].m_Parent.transform.localPosition;
            bool isThisChip = i == chipId;
            m_ActionChipACBs[i].ShowHideBorderChip(isThisChip);
            if (isThisChip) m_ActionChipACBs[i].MakeChipJump(new Vector3(localPos.x, _baseChipPosY + CHIP_BUTTON_JUMP_VALUE, localPos.z));
            else m_ActionChipACBs[i].m_Parent.transform.localPosition = new Vector3(localPos.x, _baseChipPosY, localPos.z);
        }
    }
    public void DoClickButtonBetOption(int betOptionId)
    {
        if (!m_ActionChipACBs[0].m_Parent.activeSelf) return;
        SocketSend.SendBetSabong(_betValueNow, betOptionId, false);
        m_ActionChipACBs[m_ActionChipACBs.Count - 2].EnableClickButtonAction(false); //không cho rebet nữa
    }
    public void DoClickButtonRebet()
    {
        playSound(SOUND_GAME.CLICK);
        m_ActionChipACBs[m_ActionChipACBs.Count - 2].EnableClickButtonAction(false);
        foreach (KeyValuePair<int, List<int>> kvp in _myRebetDs)
        {
            if (kvp.Value.Count <= 5)
            {
                foreach (int num in kvp.Value) SocketSend.SendBetSabong(num, kvp.Key + 1, false);
                continue;
            }
            int value = 0;
            foreach (int num in kvp.Value) value += num;
            SocketSend.SendBetSabong(value, kvp.Key + 1, false);
        }
    }
    public void DoClickButtonDoubleBet()
    {
        playSound(SOUND_GAME.CLICK);
        m_ActionChipACBs[m_ActionChipACBs.Count - 2].EnableClickButtonAction(false);
        foreach (KeyValuePair<int, List<Transform>> kvp in players[0].sabongBetChips)
        {
            if (kvp.Value.Count <= 5)
            {
                foreach (Transform tf in kvp.Value) SocketSend.SendBetSabong(GetBetValueOfChip(tf), kvp.Key + 1, false);
                continue;
            }
            int value = 0;
            foreach (Transform tf in kvp.Value) value += GetBetValueOfChip(tf);
            SocketSend.SendBetSabong(value, kvp.Key + 1, false);
        }
    }
    public override void onClickRule()
    {
        playSound(SOUND_GAME.CLICK);
        Transform ruleTf = m_RuleTf.GetChild(0);
        ruleTf.localPosition = new Vector2(0, 1000);
        m_RuleTf.gameObject.SetActive(true);
        ruleTf.DOLocalMoveY(0, .3f).SetEase(Ease.OutQuad);
    }
    #endregion

    public void ProcessResponseData(JObject jData)
    {
        switch ((string)jData["evt"])
        {
            case "startGame":
                HandleStartGame(jData);
                break;
            case "timeBet":
                HandleTimeBet(jData);
                break;
            case "bm":
                HandleBet(jData);
                break;
            case "finish":
                HandleFinishGame(jData);
                break;
            case "chatTable":
                handleChatTable(jData);
                break;
        }
    }
    public override void setGameInfo(int m, int id = 0, int maxBett = 0)
    {
        base.setGameInfo(m, id, maxBett);
        if (_betChipValues.Count > 0) return;
        List<int> coefficients = new() { 1, 5, 10, 50, 100 };
        for (int i = 0; i < m_ActionChipACBs.Count - 2; i++) _betChipValues.Add(agTable * coefficients[i]);
    }
    protected override void updatePositionPlayerView()
    {
        int countLoop = Mathf.Min(players.Count, listPosView.Count);
        for (int i = 0; i < countLoop; i++)
        {
            players[i].playerView.transform.localPosition = listPosView[i];
            players[i].updateItemVip(players[i].vip);
        }
        m_HiddenPlayersTM.text = _HiddenPlayerPs.Count <= 0 ? "" : _HiddenPlayerPs.Count.ToString();
    }
    public override void handleCTable(string strData)
    {
        base.handleCTable(strData);
        _winHistory.Clear();
        foreach (Transform tf in m_WinHistoryTf) tf.gameObject.SetActive(false);
        thisPlayer.playerView.transform.localScale = Vector3.one;
    }
    public override void handleCCTable(JObject data)
    {
        base.handleCCTable(data);
    }
    public override void handleVTable(string strData)
    {
        stateGame = STATE_GAME.VIEWING;
        JObject data = JObject.Parse(strData);
        setGameInfo(m: (int)data["M"], id: (int)data["Id"], maxBett: data.ContainsKey("maxBet") ? (int)data["maxBet"] : 0);
        for (int i = 0; i < players.Count; i++)
            if (players[i].playerView != null)
                Destroy(players[i].playerView.gameObject);
        int timeLeft = (int)data["timeLeft"];
        if (timeLeft > 0)
        {
            CallAsyncFunction(GetCards());
            CallAsyncFunction(ShowTime(timeLeft));
        }
        players.Clear();
        _HiddenPlayerPs.Clear();
        thisPlayer = new()
        {
            playerView = createPlayerView(),
            id = User.userMain.Userid,
            namePl = User.userMain.Username,
            displayName = User.userMain.displayName,
            ag = User.userMain.AG,
            vip = User.userMain.VIP,
            avatar_id = User.userMain.Avatar,
            is_ready = true,
        };
        thisPlayer.fid = User.userMain.Tinyurl.IndexOf("fb.") != -1 ? User.userMain.Tinyurl.Substring(3) : thisPlayer.fid;
        thisPlayer.updatePlayerView();
        thisPlayer.playerView.setDark(true);
        players.Add(thisPlayer);
        JArray listPlayer = (JArray)data["ArrP"];
        int countShowingAvatars = Mathf.Min(listPlayer.Count, listPosView.Count - 1); //trừ chỗ cho user 
        for (int i = 0; i < listPlayer.Count; i++)
        {
            Player player = new();
            readDataPlayer(player, (JObject)listPlayer[i]);
            player.setHost(i == 0);
            if (i < countShowingAvatars)
            {
                player.playerView = createPlayerView();
                player.updatePlayerView();
            }
            else _HiddenPlayerPs.Add(player);
            players.Add(player);
        }
        updatePositionPlayerView();
        for (int i = 0; i < listPlayer.Count; i++)
        {
            if (i < countShowingAvatars)
            {
                JArray bets = (JArray)listPlayer[i]["ArrCuoc"];
                foreach (JToken bet in bets)
                {
                    Player p = players.Find(x => x.id == (int)listPlayer[i]["id"]);
                    if (p != null) BetChip(players.IndexOf(p), (int)bet["boxBet"] - 1, (int)bet["moneyBet"], (long)listPlayer[i]["AG"], false);
                }
            }
        }
    }
    public override void handleSTable(string strData)
    {
        stateGame = STATE_GAME.WAITING;
        JObject data = JObject.Parse(strData);
        JArray dataWinHistory = (JArray)data["boxWinHistory"];
        _winHistory.Clear();
        foreach (JToken num in dataWinHistory) _winHistory.Add((int)num);
        SetUIWinHistory();
        setGameInfo(m: (int)data["M"], id: (int)data["Id"], maxBett: data.ContainsKey("maxBet") ? (int)data["maxBet"] : 0);
        for (int i = 0; i < players.Count; i++)
            if (players[i].playerView != null)
                Destroy(players[i].playerView.gameObject);
        CallAsyncFunction(ShowHideChipBetButtons(true));
        // có trường hợp đang chạy handleVTable chưa xong do async mà chạy luôn handleSTable nên phải giữ lại cái sabongbetchips
        List<Tuple<int, Dictionary<int, List<Transform>>>> tempList = new();
        foreach (Player player in players) tempList.Add(new(player.id, player.sabongBetChips));
        players.Clear();
        _HiddenPlayerPs.Clear();
        JArray listPlayer = (JArray)data["ArrP"];
        int count = 0, countShownedAvatars = Mathf.Min(listPlayer.Count, listPosView.Count) - 1; //trừ chỗ cho user là listPlayer.Last()
        for (int i = 0; i < listPlayer.Count; i++)
        {
            Player player = new();
            readDataPlayer(player, (JObject)listPlayer[i]);
            player.is_ready = true;
            player.setHost(i == 0);
            bool isShownedAvatar = count + 1 <= countShownedAvatars, isThisUser = player.id == User.userMain.Userid;
            if (isShownedAvatar || isThisUser)
            {
                player.playerView = createPlayerView();
                player.playerView.setDark(false);
                player.updatePlayerView();
                if (isShownedAvatar) count++;
            }
            else _HiddenPlayerPs.Add(player);
            if (isThisUser)
            {
                thisPlayer = player;
                players.Insert(0, thisPlayer);
            }
            else players.Add(player);
        }
        foreach (Player player in players)
            foreach (Tuple<int, Dictionary<int, List<Transform>>> item in tempList)
                if (player.id == item.Item1) player.sabongBetChips = item.Item2;
        thisPlayer.playerView.transform.localScale = Vector3.one;
        updatePositionPlayerView();
    }
    public override void handleJTable(string strData)
    {
        JObject listPlayer = JObject.Parse(strData);
        Player player = new();
        readDataPlayer(player, listPlayer);
        if (players.Count < listPosView.Count)
        {
            player.playerView = createPlayerView();
            player.updatePlayerView();
        }
        else _HiddenPlayerPs.Add(player);
        players.Add(player);
        updatePositionPlayerView();
    }
    public override void handleRJTable(string strData)
    {
        stateGame = STATE_GAME.PLAYING;
        JObject data = JObject.Parse(strData);
        setGameInfo(m: (int)data["M"], id: (int)data["Id"], maxBett: data.ContainsKey("maxBet") ? (int)data["maxBet"] : 0);
        for (int i = 0; i < players.Count; i++)
            if (players[i].playerView != null)
                Destroy(players[i].playerView.gameObject);
        int timeLeft = (int)data["timeLeft"];
        if (timeLeft > 0)
        {
            CallAsyncFunction(GetCards());
            CallAsyncFunction(ShowTime(timeLeft));
            CallAsyncFunction(ShowHideChipBetButtons(true));
        }
        players.Clear();
        _HiddenPlayerPs.Clear();
        JArray listPlayer = (JArray)data["ArrP"];
        int count = 0, countShownedAvatars = Mathf.Min(listPlayer.Count, listPosView.Count) - 1; //trừ chỗ cho user là listPlayer.Last()
        for (int i = 0; i < listPlayer.Count; i++)
        {
            Player p = new();
            readDataPlayer(p, (JObject)listPlayer[i]);
            p.is_ready = true;
            p.setHost(i == 0);
            bool isShownedAvatar = count + 1 <= countShownedAvatars, isThisUser = p.id == User.userMain.Userid;
            if (isShownedAvatar || isThisUser)
            {
                p.playerView = createPlayerView();
                p.playerView.setDark(false);
                p.updatePlayerView();
                if (isShownedAvatar) count++;
            }
            else _HiddenPlayerPs.Add(p);
            if (isThisUser)
            {
                thisPlayer = p;
                players.Insert(0, thisPlayer);
            }
            else players.Add(p);
        }
        thisPlayer.playerView.transform.localScale = Vector3.one;
        updatePositionPlayerView();
        for (int i = 0; i < listPlayer.Count; i++)
        {
            JArray bets = (JArray)listPlayer[i]["ArrCuoc"];
            foreach (JToken bet in bets)
            {
                Player player = players.Find(x => x.id == (int)listPlayer[i]["id"]);
                if (player != null) BetChip(players.IndexOf(player), (int)bet["boxBet"] - 1, (int)bet["moneyBet"], (long)listPlayer[i]["AG"], player == thisPlayer);
            }
        }
    }
    public override void handleLTable(JObject data)
    {
        string namePl = (string)data["Name"];
        Player player = getPlayer(namePl);
        if (player == null) return;
        if (player != thisPlayer)
        {
            players.Remove(player);
            if (player.playerView != null) Destroy(player.playerView.gameObject);
            else _HiddenPlayerPs.Remove(player);
            for (int i = 0; i < players.Count; i++)
            {
                if (i < listPosView.Count && players[i].playerView == null)
                {
                    players[i].playerView = createPlayerView();
                    players[i].setDark(false);
                    players[i].updatePlayerView();
                }
            }
            updatePositionPlayerView();
        }
    }
    public void HandleStartGame(JObject data)
    {
        playSound(SOUND_GAME.START_GAME);
        stateGame = STATE_GAME.WAITING;
        ShowAnimStartGame();
    }
    public void HandleTimeBet(JObject data)
    {
        foreach (Transform tf in m_ChipsContainerTf) tf.gameObject.SetActive(false);
        CallAsyncFunction(ShowTime((int)data["time"]));
        CallAsyncFunction(ShowHideChipBetButtons(true));
    }
    public void HandleBet(JObject data)
    {
        Player playerP = players.Find(x => x.id == (int)data["pid"]);
        if (playerP == null) return;
        bool isMyBet = playerP == thisPlayer;
        if (isMyBet) stateGame = STATE_GAME.PLAYING;
        BetChip(players.IndexOf(playerP), (int)data["betBox"] - 1, (int)data["agBet"], (long)data["ag"], isMyBet);
    }
    public void HandleFinishGame(JObject data)
    {
        CallAsyncFunction(OnFinishGame(data));
        async Awaitable OnFinishGame(JObject data)
        {
            string animationName = "chiabai";
            m_DealerSG.AnimationState.SetAnimation(0, animationName, false);
            CallAsyncFunction(ShowHideChipBetButtons(false));
            await Awaitable.WaitForSecondsAsync(m_DealerSG.SkeletonData.FindAnimation(animationName).Duration);
            List<int> boxesWin = new();
            foreach (JToken item in data["boxWin"]) boxesWin.Add((int)item - 1);
            JArray cards = (JArray)data["ArrCard"];
            bool isMeronWin = boxesWin.Contains(0), isWalaWin = boxesWin.Contains(6), isDraw = !isMeronWin && !isWalaWin;
            if (isMeronWin) _winHistory.Add(1);
            else if (isWalaWin) _winHistory.Add(7);
            else _winHistory.Add(-1);
            SetUIWinHistory();
            RevealCard(m_CardCs[0], (int)cards[0]["I"], isMeronWin || isDraw);
            RevealCard(m_CardCs[1], (int)cards[1]["I"], isWalaWin || isDraw);
            int countFlashTimes = 3;
            while (countFlashTimes-- > 0)
            {
                foreach (int num in boxesWin) m_BetOptionsBOs[num].m_ClickAreaBtn.enabled = false;
                await Awaitable.WaitForSecondsAsync(.3f);
                playSound(SOUND_GAME.WIN);
                foreach (int num in boxesWin) m_BetOptionsBOs[num].m_ClickAreaBtn.enabled = true;
                await Awaitable.WaitForSecondsAsync(.3f);
            }
            stateGame = STATE_GAME.WAITING;
            CallAsyncFunction(ClearTable(data));
            checkAutoExit();
        }
    }
    private int GetBetValueOfChip(Transform chipTf)
    {
        int.TryParse(chipTf.GetChild(0).GetComponent<TextMeshProUGUI>().text, out int countBet);
        return countBet;
    }
    private void RevealCard(Card card, int code, bool isWin)
    {
        Transform cardTf = card.transform;
        float duration = .3f;
        playSound(SOUND_GAME.CARD_FLIP_1);
        cardTf.DORotate(new Vector3(0, 90, 0), duration).SetEase(Ease.InQuad).OnComplete(() =>
        {
            card.setTextureWithCode(code);
            card.setEffect_Twinkle(isWin, 2f);
            cardTf.DORotate(Vector3.zero, duration).SetEase(Ease.OutQuad);
        });
    }
    private async Awaitable ClearTable(JObject data = null)
    {
        if (data != null)
        {
            List<DataResult> results = JsonConvert.DeserializeObject<List<DataResult>>(data["data"].ToString());
            List<int> boxesWin = new();
            foreach (JToken item in data["boxWin"]) boxesWin.Add((int)item - 1);
            List<Tuple<int, Transform>> winChipsTs = new();
            float timeUp = .5f, timeMove = .5f;
            for (int i = 0; i < players.Count; i++)
            {
                bool hasPlayerview = i < listPosView.Count;
                foreach (KeyValuePair<int, List<Transform>> kvp in players[i].sabongBetChips)
                {
                    if (hasPlayerview && boxesWin.Contains(kvp.Key))
                    {
                        foreach (Transform tf in kvp.Value) winChipsTs.Add(new(players[i].id, tf));
                        continue;
                    }
                    foreach (Transform tf in kvp.Value)
                    {
                        MoveChipsToTarget(tf, _DealerPosV2, timeUp, timeMove);
                        await Awaitable.WaitForSecondsAsync(.05f);
                    }
                }
                DataResult dr = results.Find(x => x.pid == players[i].id);
                if (dr != null && dr.agLostUser < 0 && hasPlayerview) players[i].playerView.effectFlyMoney(dr.agLostUser);
            }
            await Awaitable.WaitForSecondsAsync(timeUp + timeMove + 1);
            List<Action> cbShowChipsWin = new();
            foreach (Tuple<int, Transform> item in winChipsTs)
            {
                DataResult dr = results.Find(x => x.pid == item.Item1);
                if (dr == null) continue;
                Transform chipTf = ShowNewChip();
                Player targetPlayer = players.Find(x => x.id == item.Item1);
                chipTf.localPosition = _DealerPosV2;
                chipTf.DOLocalMove((Vector2)item.Item2.localPosition + new Vector2(.5f, .5f), timeMove).SetEase(Ease.InQuad).OnComplete(async () =>
                {
                    MoveChipsToTarget(item.Item2, (Vector2)targetPlayer.playerView.transform.localPosition, timeUp, timeMove);
                    MoveChipsToTarget(chipTf, (Vector2)targetPlayer.playerView.transform.localPosition, timeUp, timeMove);
                });
                await Awaitable.WaitForSecondsAsync(.05f);
                cbShowChipsWin.Add(() => { targetPlayer.playerView.effectFlyMoney(dr.agWinUser); });
            }
            cbShowChipsWin.Add(() => playSound(SOUND_GAME.REWARD));
            await Awaitable.WaitForSecondsAsync(timeUp + 2 * timeMove);
            foreach (Action action in cbShowChipsWin) action.Invoke();
            foreach (DataResult dr in results)
            {
                Player player = players.Find(x => x.id == dr.pid);
                if (player == null) break;
                player.ag = dr.agNew;
                if (player.playerView != null) player.updatePlayerView();
            }
        }
        foreach (Transform tf in m_ChipsContainerTf) tf.gameObject.SetActive(false);
        foreach (BetOption bo in m_BetOptionsBOs) bo.SetTextTotalChips(0).SetTextMyChips(0);
        for (int i = 0; i < _allBetsByOption.Count; i++) _allBetsByOption[i] = 0;
        for (int i = 0; i < _myBetsByOption.Count; i++) _myBetsByOption[i] = 0;
        _myRebetDs.Clear();
        if (players.Count <= 0) return;
        foreach (KeyValuePair<int, List<Transform>> kvp in players[0].sabongBetChips)
        {
            List<int> betValues = new();
            foreach (Transform tf in kvp.Value) betValues.Add(GetBetValueOfChip(tf));
            _myRebetDs.Add(kvp.Key, betValues);
        }
        foreach (Player player in players) player.sabongBetChips.Clear();
        void MoveChipsToTarget(Transform chipTf, Vector2 targetPosV2, float timeUp, float timeMove)
        {
            chipTf.DOLocalMove((Vector2)chipTf.localPosition + 10 * Vector2.up, timeUp).SetEase(Ease.OutBounce).OnComplete(() =>
            {
                playSound(SOUND_GAME.GET_CHIP);
                chipTf.DOLocalMove(targetPosV2, timeMove).SetEase(Ease.OutQuad).SetUpdate(false).OnComplete(() => { chipTf.gameObject.SetActive(false); });
            });
        }
    }
    private void SetUIWinHistory()
    {
        List<int> shownedList = new();
        if (_winHistory.Count > LIMIT_WIN_HISTORY)
            for (int i = _winHistory.Count - LIMIT_WIN_HISTORY; i < _winHistory.Count; i++)
                shownedList.Add(_winHistory[i]);
        else shownedList.AddRange(_winHistory);
        for (int i = 0; i < m_WinHistoryTf.childCount; i++)
        {
            Transform tf = m_WinHistoryTf.GetChild(i);
            bool isActive = i < shownedList.Count;
            tf.gameObject.SetActive(isActive);
            if (isActive)
            {
                tf.GetChild(0).gameObject.SetActive(shownedList[i] == 1); //meron
                tf.GetChild(1).gameObject.SetActive(shownedList[i] == 7); //wala
            }
        }
    }
    private void BetChip(int playerviewId, int betOptionId, int betValue, long chipNow, bool isMyBet)
    {
        Transform chipTf = ShowBetChip(playerviewId, betValue);
        ThrowBetChip(chipTf, betOptionId);
        m_BetOptionsBOs[betOptionId].SetTextTotalChips(_allBetsByOption[betOptionId] += betValue);
        Player player = players[playerviewId];
        player.ag = chipNow;
        if (player.playerView != null) player.updatePlayerView();
        Dictionary<int, List<Transform>> betChips = player.sabongBetChips;
        if (betChips.ContainsKey(betOptionId)) betChips[betOptionId].Add(chipTf);
        else betChips.Add(betOptionId, new List<Transform>() { chipTf });
        if (isMyBet)
        {
            int totalMyBets = 0;
            foreach (KeyValuePair<int, List<Transform>> kvp in betChips)
                foreach (Transform tf in kvp.Value)
                    totalMyBets += GetBetValueOfChip(tf);
            m_BetOptionsBOs[betOptionId].SetTextMyChips(_myBetsByOption[betOptionId] += betValue);
            for (int i = 0; i < m_ActionChipACBs.Count - 2; i++) m_ActionChipACBs[i].SetButtonInteractable(chipNow >= _betChipValues[i]);
            m_ActionChipACBs[m_ActionChipACBs.Count - 1].EnableClickButtonAction(chipNow >= totalMyBets); //double
            m_ActionChipACBs[m_ActionChipACBs.Count - 2].EnableClickButtonAction(false); //rebet
        }
        // local functions
        Transform ShowBetChip(int playerviewId, int betValue)
        {
            Transform chipTf = ShowNewChip();
            int idChipUI = _betChipValues.Count - 1;
            for (int i = 0; i < _betChipValues.Count; i++)
            {
                if (_betChipValues[i] >= betValue)
                {
                    idChipUI = i + 1;
                    break;
                }
            }
            chipTf.GetComponent<Image>().sprite = UIManager.instance.LoadChipImage(idChipUI);
            chipTf.GetChild(0).GetComponent<TextMeshProUGUI>().text = betValue.ToString(); //raw value
            chipTf.GetChild(1).GetComponent<TextMeshProUGUI>().text = Config.FormatMoney3(betValue); //shown value
            chipTf.position = playerviewId < listPosView.Count ? players[playerviewId].playerView.transform.position : (Vector2)m_HiddenPlayersTM.transform.parent.position;
            return chipTf;
        }
        void ThrowBetChip(Transform chipTf, int betOptionId)
        {
            float rad = 0.15f;
            Vector2 targetPosV2 = m_BetOptionsBOs[betOptionId].GetChipsPosition() + new Vector2(Random.Range(-rad, rad), Random.Range(-rad, rad));
            Vector2 dirrection = (targetPosV2 - (Vector2)chipTf.position).normalized;
            playSound(SOUND_GAME.THROW_CHIP);
            chipTf.DOJump(targetPosV2 - dirrection, .5f, 1, .4f).SetUpdate(false).OnComplete(() => { chipTf.DOJump(targetPosV2, .25f, 1, .2f); });
        }
    }
    private Transform ShowNewChip()
    {
        Transform chipTf = null;
        if (m_ChipsContainerTf.childCount > 0)
        {
            foreach (Transform tf in m_ChipsContainerTf)
            {
                if (!tf.gameObject.activeSelf)
                {
                    chipTf = tf;
                    break;
                }
            }
        }
        if (chipTf == null) chipTf = Instantiate(m_ChipTemplateTf, m_ChipsContainerTf);
        chipTf.gameObject.SetActive(true);
        return chipTf;
    }
    private async Awaitable ShowTime(int time)
    {
        GameObject clock = m_ClockTimeTMP.transform.parent.gameObject;
        clock.SetActive(true);
        while (time >= 0)
        {
            bool isHurry = time <= 5;
            playSound(isHurry ? SOUND_GAME.CLOCK_HURRY : SOUND_GAME.CLOCK_TICK);
            m_ClockTimeTMP.color = isHurry ? new(162, 0, 0, 255) : Color.white;
            m_ClockTimeTMP.text = time--.ToString();
            await Awaitable.WaitForSecondsAsync(1);
        }
        clock.SetActive(false);
        CallAsyncFunction(ShowHideChipBetButtons(false));
    }
    private async Awaitable ShowHideChipBetButtons(bool isShow)
    {
        int count = m_ActionChipACBs.Count;
        if (!isShow)
        {
            for (int i = 0; i < count; i++) m_ActionChipACBs[i].ShowHideThis(false);
            return;
        }
        for (int i = 0; i < count - 2; i++)
        { //chips
            bool isFirstChip = i == 0;
            Transform chipTf = m_ActionChipACBs[i].m_Parent.transform;
            Vector3 localPos = chipTf.localPosition;
            m_ActionChipACBs[i].SetTextChip(i >= m_ActionChipACBs.Count - 3 ? "Max" : Config.FormatMoney3(_betChipValues[i]))
                .ShowHideThis(true).ShowHideBorderChip(isFirstChip).SetButtonInteractable(thisPlayer != null && thisPlayer.ag >= _betChipValues[i])
                .MakeChipJump(isFirstChip ? new Vector3(localPos.x, localPos.y + CHIP_BUTTON_JUMP_VALUE, localPos.z) : chipTf.localPosition);
            await Awaitable.WaitForSecondsAsync(.05f);
        }
        int totalRebets = 0;
        foreach (KeyValuePair<int, List<int>> kvp in _myRebetDs)
            foreach (int num in kvp.Value)
                totalRebets += num;
        m_ActionChipACBs[count - 2].ShowHideThis(true).EnableClickButtonAction(_myRebetDs.Count > 0 && thisPlayer.ag >= totalRebets); //rebet
        m_ActionChipACBs[count - 1].ShowHideThis(true).EnableClickButtonAction(false); //double
        if (thisPlayer.ag >= _betChipValues[0]) DoClickSelectBetChip(0);
    }
    private async Awaitable GetCards()
    {
        m_DealerSG.AnimationState.SetAnimation(0, "chiabai", false);
        for (int i = 0; i < m_CardCs.Count; i++)
        {
            Vector2 finalPos = _CardsPosV2s[i + 1];
            Vector2 finalScale = new Vector3(.45f, .45f);
            m_CardCs[i].gameObject.SetActive(true);
            m_CardCs[i].setTextureWithCode(0);
            RectTransform cardRT = m_CardCs[i].GetComponent<RectTransform>();
            cardRT.anchoredPosition = _CardsPosV2s[0];
            cardRT.localScale = Vector2.zero;
            cardRT.rotation = Quaternion.identity;
            cardRT.DOLocalMove(finalPos, SHOWING_CARD_DURATION);
            cardRT.DOScale(finalScale, SHOWING_CARD_DURATION);
            playSound(SOUND_GAME.DISPATCH_CARD);
            await Awaitable.WaitForSecondsAsync(.1f);
            cardRT.localPosition = finalPos;
            cardRT.localScale = finalScale;
        }
    }
    private void ShowAnimStartGame()
    {
        m_StartAnimSGs[0].transform.parent.gameObject.SetActive(true);
        int lastAnimIndex = m_StartAnimSGs.Count - 1;
        for (int i = 0; i <= lastAnimIndex; i++) m_StartAnimSGs[i].AnimationState.SetAnimation(0, (i >= lastAnimIndex) ? "animation" : "challenge", false);
    }
    private async void CallAsyncFunction(Awaitable function)
    {
        try { await function; }
        catch (Exception e) { if (e.GetType() != typeof(MissingReferenceException)) Debug.LogError("Error on calling async function: " + e.Message); }
    }
    private void OnDisable()
    {
        stateGame = STATE_GAME.VIEWING;
    }
    protected override void Start()
    {
        base.Start();
        m_DealerSG.AnimationState.Complete += (x) => m_DealerSG.AnimationState.SetAnimation(0, "normal", true);
        GameObject _ParentStartAnim = m_StartAnimSGs[0].transform.parent.gameObject;
        m_StartAnimSGs.First().AnimationState.Complete += (x) =>
        {
            _ParentStartAnim.SetActive(false);
            CallAsyncFunction(GetCards());
        };
        _ParentStartAnim.SetActive(false);
        CallAsyncFunction(ClearTable());
    }
    protected override void Awake()
    {
        base.Awake();
        stateGame = STATE_GAME.VIEWING;
        _baseChipPosY = m_ActionChipACBs[0].m_Parent.transform.localPosition.y;
        foreach (BetOption bo in m_BetOptionsBOs)
        {
            _allBetsByOption.Add(0);
            _myBetsByOption.Add(0);
        }
        for (int i = 0; i < LIMIT_WIN_HISTORY; i++) Instantiate(m_PrefabWinHistoryTf, m_WinHistoryTf);
    }
    private class DataResult
    {
        public int pid, agNew;
        public long agWinUser, agLostUser;
        public List<int> boxWinUser = new(), boxLostUser = new();
    }
}
