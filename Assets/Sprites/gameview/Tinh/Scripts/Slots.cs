using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Spine.Unity;
using UnityEngine.UI;
using DG.Tweening;
using System;

public class Slots : MonoBehaviour
{
    [HideInInspector] public SkeletonGraphic AnimBom => m_AnimBomb;
    [HideInInspector] public Image UnselectedGold => m_UnselectedGold;
    [HideInInspector] public Image SelectedGold => m_SelectedGold;
    [SerializeField] SkeletonGraphic m_AnimBomb;
    [SerializeField] Button buttonClick;
    [SerializeField] private Image m_SelectedGold, m_UnselectedGold, iconSelected, iconUnselected;
    [SerializeField] public Image selectable, unSelectable;

    private void ClickButton()
    {
        PopUpMineFinding.instance.CountClickMouse++;
        if (!m_AnimBomb.gameObject.activeSelf)
        {
            Debug.LogError($"CLickButtonName: {buttonClick.name}");
            PopUpMineFinding.instance.UpdateWithDraw(PopUpMineFinding.instance.CountClickMouse);
            selectable.gameObject.SetActive(false);
            m_UnselectedGold.gameObject.SetActive(false);
            m_SelectedGold.transform.DORotate(new Vector3(0, 180, 0), 0.25f).SetEase(Ease.Linear).OnComplete(() => selectable.gameObject.SetActive(false));
            if (25 - (PopUpMineFinding.instance._CountBombs + PopUpMineFinding.instance.CountClickMouse) == 0)
            {
                 //TODO win game
                 PopUpMineFinding.instance.isWinGame = true;
                 PopUpMineFinding.instance._EnableDialog();
                 PopUpMineFinding.instance.TotalChip+=PopUpMineFinding.instance._BetCount;
                Debug.LogError($"Win Game");
            }
        }
        else
        {
            m_AnimBomb.AnimationState.SetAnimation(0, "animation", true);
            selectable.gameObject.SetActive(false);
            m_UnselectedGold.gameObject.SetActive(false);
            m_SelectedGold.gameObject.SetActive(false);
            PopUpMineFinding.instance.isWinGame = false;
            PopUpMineFinding.instance._EnableDialog();
        }
    }
    private void _ShowEndGame()
    {
        if (m_AnimBomb == null) return;
        if (!m_AnimBomb.gameObject.activeSelf)
        {
            selectable.gameObject.SetActive(false);
        }
        else
        {
            selectable.gameObject.SetActive(false);
            unSelectable.gameObject.SetActive(false);
            m_UnselectedGold.gameObject.SetActive(false);
            m_SelectedGold.gameObject.SetActive(false);
            PopUpMineFinding.instance.EndGame();
            // animBomb.AnimationState.SetAnimation(0, "normal", true);
        }
    }
    void Start()
    {
        buttonClick.onClick.AddListener(ClickButton);
        TinhDialogLose.OnHideDialogLose += _ShowEndGame;
    }
    void Update()
    {

    }
}
