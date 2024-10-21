using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine.SceneManagement;

public class TinhDialogLose : MonoBehaviour
{
    [SerializeField] Button m_ButtonX, m_ButtonOke;
    [SerializeField] TextMeshProUGUI m_ContentTMP;
    public static event Action OnHideDialogLose;
    void OnEnable()
    {
        if (PopUpMineFinding.instance.isWinGame)
        {
            m_ContentTMP.text = $"Win {PopUpMineFinding.instance._BetCount / 1000}k chips";
        }
        else
        {
            m_ContentTMP.text = $"Lose {PopUpMineFinding.instance.BetCountLose / 1000}k chips";
        }
    }
    void Start()
    {
        m_ButtonX.onClick.AddListener(_ClickToCloseDialogLose);
        m_ButtonOke.onClick.AddListener(_ClickToCloseDialogLose);
    }
    private void _ClickToCloseDialogLose()
    {
        gameObject.SetActive(false);
        OnHideDialogLose?.Invoke();
        SceneManager.LoadScene("TestScene");
    }
}
