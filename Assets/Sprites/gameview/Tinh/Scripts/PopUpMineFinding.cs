using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using System;
using System.Text;
using TMPro;

public class PopUpMineFinding : MonoBehaviour
{
    private enum Mode { NORMAL, AUTO };
    [SerializeField]
    private Button m_StartNormalBtn, m_NormalBtn, m_AutoBntn, m_WithDrawBtn,
    m_StartAutoBetBtn, m_StopAutoBtn, m_MinusBtn, m_PlusBtn, m_RandomChooseBtn;
    [SerializeField] private List<Slots> m_ListSlot;
    [SerializeField] private List<BetBonusButton> m_BetBBBs = new();
    [SerializeField] private TMP_Dropdown m_BombsDd;
    [SerializeField] private TextMeshProUGUI m_BetTMP, m_TotalChipTMP, m_WithDrawTMP;
    [SerializeField] private Image m_BgNormal, m_BgAuto;
    [SerializeField]
    private GameObject m_Dialog, m_Bet, m_DropDownBomb, m_RandomChoose, m_TurnInputField, m_WinInputField, m_LoseInputField;
    private bool _OverListSlot = false;
    private int _StartBetCount = 100000;
    private const string _TotalChipKey = "_TotalChipKey";
    private long _BaseBet, _FinalChangedChips, _AdjustBet;
    public int _BetCount = 100000;
    public int _CountBombs = 0;
    public int BetCountLose;
    public int CountClickMouse = 0;
    public bool isWinGame = false;
    public int TotalChip
    {
        get => PlayerPrefs.GetInt(_TotalChipKey, 20000000);
        set => PlayerPrefs.SetInt(_TotalChipKey, value);
    }
    public static PopUpMineFinding instance = null;
     private IEnumerator _WaitActiveBomb()
    {
        yield return new WaitForSeconds(1.25f);
        for (int i = 0; i < _CountBombs; i++)
        {
            int rnd = _RandomActiveBomb();
            Debug.LogError($"Bomb Active In Slot:{rnd}");
            m_ListSlot[rnd].AnimBom.gameObject.SetActive(true);
        }
    }
    #region Button
    private void _ClickButtonPlayNormal()
    {
        Debug.LogError($"_BetCount: {_BetCount}");
        CountClickMouse = 0;
        _BetCount = _StartBetCount;
        BetCountLose = _StartBetCount;
        TotalChip -= _StartBetCount;
        m_TotalChipTMP.text = _FormatTMP(TotalChip);
        m_WithDrawTMP.text = _FormatTMP(_StartBetCount);
        m_RandomChooseBtn.interactable = true;
        m_StartNormalBtn.gameObject.SetActive(false);
        m_WithDrawBtn.gameObject.SetActive(true);
        RotateSequentially(0);
        StartCoroutine(_WaitActiveBomb());
    }
    private void _ClickButtonStartAuto(){
        Debug.LogError($"Start Auto Mode");
    }
   
    private void _ClickButtonNormal()
    {
        m_BgAuto.gameObject.SetActive(false);
        m_Bet.SetActive(true);
        m_StartNormalBtn.gameObject.SetActive(true);
        m_DropDownBomb.SetActive(true);
        m_RandomChoose.SetActive(true);
        m_WithDrawBtn.gameObject.SetActive(false);
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
        if (_BetCount <= 100000) return;
        _BetCount -= 50000;
        _StartBetCount = _BetCount;
        m_BetTMP.text = _FormatTMP(_StartBetCount);
    }
    private void _CLickButtonPlus()
    {
        _BetCount += 50000;
        _StartBetCount = _BetCount;
        m_BetTMP.text = _FormatTMP(_StartBetCount);
    }
   
    private void ClickDropDownBomb(int index)
    {
        _CountBombs = index + 1;
    }
    private void _ClickButtonWithDraw()
    {
        isWinGame = true;
        _EnableDialog();
        _UpdateTotoalChip();
    }
    private void _ClickButtonRandomChoose()
    {
        CountClickMouse++;
        int rnd = _RandomChoose();
        Debug.LogError($"IndexRamdomChoose: {rnd}");
        Debug.LogError($"CountClickMouse: {CountClickMouse}");
        UpdateWithDraw(CountClickMouse);
        for (int i = 0; i < m_ListSlot.Count; i++)
        {
            if (!m_ListSlot[rnd].AnimBom.gameObject.activeSelf)
            {
                m_ListSlot[rnd].selectable.gameObject.SetActive(false);
                m_ListSlot[rnd].UnselectedGold.gameObject.SetActive(false);
                m_ListSlot[rnd].SelectedGold.transform.DORotate(new Vector3(0, 180, 0), 0.25f).SetEase(Ease.Linear).OnComplete(() => m_ListSlot[rnd].selectable.gameObject.SetActive(false));
                if (25 - (_CountBombs + CountClickMouse) == 0)
                {
                    //TODO win game
                    isWinGame = true;
                    _EnableDialog();
                    _UpdateTotoalChip();
                    Debug.LogError($"Win Game");
                }
            }
            else
            {
                m_ListSlot[rnd].AnimBom.AnimationState.SetAnimation(0, "animation", true);
                m_ListSlot[rnd].selectable.gameObject.SetActive(false);
                m_ListSlot[rnd].UnselectedGold.gameObject.SetActive(false);
                m_ListSlot[rnd].SelectedGold.gameObject.SetActive(false);
                isWinGame = false;
                _EnableDialog();
            }
        }
    }
    #endregion
     private string _FormatTMP(int index)
    {
        if (index < 1000000)
        {
            // Định dạng 000k (ví dụ: 7k, 045k, 999k)
            return $"{index / 1000:D3}k";
        }
        else
        {
            // Định dạng 1.xM (ví dụ: 1.2M, 5.0M)
            float millions = index / 1000000f;
            return $"{millions:0.00}M";
        }
    }
    public void _UpdateTotoalChip()
    {
        TotalChip += _BetCount;
        m_TotalChipTMP.text = _FormatTMP(TotalChip);
    }
    private int _RandomActiveBomb()
    {
        List<int> rndList = new List<int>();
        for (int i = 0; i < m_ListSlot.Count; i++)
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
    private int _RandomChoose()
    {
        List<int> rndList = new List<int>();
        for (int i = 0; i < m_ListSlot.Count; i++)
        {
            if (!m_ListSlot[i].UnselectedGold.gameObject.activeSelf) continue;
            rndList.Add(i);
        }
        var rnd = UnityEngine.Random.Range(0, rndList.Count);
        return rndList[rnd];
    }
    public void _EnableDialog()
    {
        m_Dialog.SetActive(true);
    }
    public void UpdateWithDraw(int countClickMouse)
    {
        if (countClickMouse <= 1)
        {
            m_WithDrawTMP.text = _FormatTMP(_BetCount);
        }
        else
        {
            _BetCount += (countClickMouse * (_BetCount / 100)) + (_CountBombs * 1000);
            m_WithDrawTMP.text = _FormatTMP(_BetCount);
        }
    }
    public void EndGame()
    {
        m_WithDrawBtn.gameObject.SetActive(false);
        m_StartNormalBtn.gameObject.SetActive(true);
        m_RandomChooseBtn.interactable = false;
    }
    void RotateSequentially(int index = 0)
    {
        if (index >= m_ListSlot.Count)
        {
            return;
        }
        DOVirtual.DelayedCall(0.05f, () =>
        {
            m_ListSlot[index].unSelectable.gameObject.SetActive(false);
            m_ListSlot[index].selectable.gameObject.SetActive(true);
            m_ListSlot[index].UnselectedGold.gameObject.SetActive(true);
            m_ListSlot[index].SelectedGold.gameObject.SetActive(true);
            m_ListSlot[index].AnimBom.AnimationState.SetAnimation(0, "normal", true);
            m_ListSlot[index].AnimBom.gameObject.SetActive(false);
            m_ListSlot[index].SelectedGold.transform.DORotate(new Vector3(0, 0, 0), 0);
        }).OnComplete(() => { RotateSequentially(index + 1); });
    }
    void Awake()
    {
        _CountBombs = 1;
        m_BetTMP.text = _FormatTMP(_BetCount);
        m_TotalChipTMP.text = _FormatTMP(TotalChip);
        instance = this;
    }
    void Start()
    {

        m_BombsDd.onValueChanged.AddListener(ClickDropDownBomb);
        m_StartNormalBtn.onClick.AddListener(_ClickButtonPlayNormal);
        m_NormalBtn.onClick.AddListener(_ClickButtonNormal);
        m_AutoBntn.onClick.AddListener(_ClickButtonAuto);
        m_MinusBtn.onClick.AddListener(_CLickButtonMinus);
        m_PlusBtn.onClick.AddListener(_CLickButtonPlus);
        m_RandomChooseBtn.onClick.AddListener(_ClickButtonRandomChoose);
        m_WithDrawBtn.onClick.AddListener(_ClickButtonWithDraw);
        m_StartAutoBetBtn.onClick.AddListener(_ClickButtonStartAuto);
    }
    void Update()
    {

    }
}
