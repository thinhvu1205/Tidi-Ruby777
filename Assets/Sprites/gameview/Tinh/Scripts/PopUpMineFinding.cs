using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using System;
using System.Text;
using TMPro;
using System.Linq;
using Globals;
using Newtonsoft.Json.Linq;
using System.Globalization;

public class PopUpMineFinding : MonoBehaviour
{
    private enum Mode { NORMAL, AUTO };
    [SerializeField] private Button m_StartNormalBtn, m_NormalBtn, m_AutoBntn, m_StartAutoBetBtn, m_StopAutoBtn, m_MinusBtn, m_PlusBtn;
    [SerializeField] private List<Slots> m_ListSlot;
    [SerializeField] private List<BetBonusButton> m_BetBBBs = new();
    [SerializeField] private TMP_Dropdown m_BombsDd;
    [SerializeField] private TextMeshProUGUI m_BetTMP;
    [SerializeField] private Image m_BgNormal, m_BgAuto;
    [SerializeField]
    private GameObject m_Bet, m_WithDraw, m_DropDownBomb, m_RandomChoose, m_TurnInputField, m_WinInputField, m_LoseInputField;
    private bool _OverListSlot = false;
    private int _CountBombs = 0;
     private long _BaseBet, _FinalChangedChips, _AdjustBet;

    #region Button
    private void _ClickButtonPlay()
    {
        _CountBombs = 3;
        Debug.LogError($"ClickButtonPlay");
        RotateSequentially();
        for (int i = 0; i < _CountBombs; i++)
        {
            int rnd = _RandomActiveBomb();
            Debug.LogError($"Bomb Active In Slot:{rnd}");
            m_ListSlot[rnd].AnimBom.gameObject.SetActive(true);
        }
    }
    private void _ClickButtonNormal()
    {
        m_BgAuto.gameObject.SetActive(false);
        m_Bet.SetActive(true);
        m_StartNormalBtn.gameObject.SetActive(true);
        m_DropDownBomb.SetActive(true);
        m_RandomChoose.SetActive(true);
        m_WithDraw.SetActive(false);
        m_StartAutoBetBtn.gameObject.SetActive(false);
        m_TurnInputField.SetActive(false);
        m_WinInputField.SetActive(false);
        m_LoseInputField.SetActive(false);
        m_StopAutoBtn.gameObject.SetActive(false);
    }
    private void _ClickButtonAuto()
    {
        m_BgAuto.gameObject.SetActive(true);
        m_StartAutoBetBtn.gameObject.SetActive(true);
        m_TurnInputField.SetActive(true);
        m_WinInputField.SetActive(true);
        m_LoseInputField.SetActive(true);
        m_StartNormalBtn.gameObject.SetActive(false);
        m_RandomChoose.SetActive(false);
    }
    private void _CLickButtonMinus()
    {
        // m_BetTMP.text = Config.FormatMoney3(_BaseBet += _AdjustBet);
        // _EnableAdjustBets(true).playSound(SOUND_GAME.CLICK);
        Debug.LogError($"Click Button Minus");
    }
    private void _CLickButtonPlus()
    {
        Debug.LogError($"Click Button Plus");
    }
    #endregion

    void setUpCountBombDropdown() => m_BombsDd.onValueChanged.AddListener((id) =>
           {
               if (id < 0) return;
               int.TryParse(m_BombsDd.options[id].text, out _CountBombs);
               for (int i = 0; i < m_BetBBBs.Count; i++)
               {
                   // bool show = i < _RatesByBomb[_CountBombs - 1].Count;
                   // _Turn(m_BetBBBs[i].gameObject, show);
                   // if (show) m_BetBBBs[i].SetData(_RatesByBomb[_CountBombs - 1][i]);
               }
               // m_TurnsIF.text = _GetMaxTurn().ToString();
           });
    private int _RandomActiveBomb()
    {
        List<int> rndList = new List<int>();
        for (int i = 1; i < m_ListSlot.Count; i++)
        {
            if (m_ListSlot[i].AnimBom.gameObject.activeSelf) continue;
            rndList.Add(i);
        }
        if (rndList.Count == 0)
        {
            _OverListSlot = true;
            return -1;
        }
        var rnd = UnityEngine.Random.Range(0, rndList.Count);
        return rndList[rnd];
    }
    void RotateSequentially(int index = 0)
    {
        if (index >= m_ListSlot.Count) return;
        DOVirtual.DelayedCall(0.075f, () =>
        {
            m_ListSlot[index].unSelectable.gameObject.SetActive(false);
        }).OnComplete(() => { RotateSequentially(index + 1); });
    }
    void Awake()
    {
        setUpCountBombDropdown();
    }
    void Start()
    {
        m_StartNormalBtn.onClick.AddListener(_ClickButtonPlay);
        m_NormalBtn.onClick.AddListener(_ClickButtonNormal);
        m_AutoBntn.onClick.AddListener(_ClickButtonAuto);
        m_MinusBtn.onClick.AddListener(_CLickButtonMinus);
        m_MinusBtn.onClick.AddListener(_CLickButtonPlus);
    }
    void Update()
    {

    }
}
