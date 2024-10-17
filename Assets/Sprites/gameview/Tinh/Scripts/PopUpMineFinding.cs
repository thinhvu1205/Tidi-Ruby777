using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using System;

public class PopUpMineFinding : MonoBehaviour
{
    [SerializeField] private Button m_ButtonPlay;
    [SerializeField] private List<Slots> m_ListSlot;
    void Start()
    {
        m_ButtonPlay.onClick.AddListener(_ClickButtonPlay);
    }
    private void _ClickButtonPlay()
    {
        Debug.LogError($"ClickButtonPlay");
        RotateSequentially();
    }
    void RotateSequentially(int index = 0)
    {
        if (index >= m_ListSlot.Count) return;
        DOVirtual.DelayedCall(0.075f, () =>
        {
            m_ListSlot[index].unSelectable.gameObject.SetActive(false);
        }).OnComplete(() => { RotateSequentially(index + 1); });


        // m_ListSlot[index].unSelectable.transform
        //     .DORotate(new Vector3(0, 90, 0), 0.5f)
        //     .SetEase(Ease.Linear)
        //     .OnComplete(() =>
        //     {
        //         m_ListSlot[index].unSelectable.gameObject.SetActive(false);
        //         RotateSequentially(index + 1);
        //     });
    }
    void Update()
    {

    }
}
