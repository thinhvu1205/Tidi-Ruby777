using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Spine.Unity;
using UnityEngine.UI;
using DG.Tweening;

public class Slots : MonoBehaviour
{
    [SerializeField] SkeletonGraphic animBomb;
    [SerializeField] Button buttonClick;
    [SerializeField] private Image selectedGold,unselectedGold,iconSelected,iconUnselected;
    [SerializeField] public Image selectable,unSelectable;
    void Start()
    {
        buttonClick.onClick.AddListener(ClickButton);
    }

    private void ClickButton()
    {
        Debug.LogError($"CLickButtonName: {buttonClick.name}");
        selectable.transform.DORotate(new Vector3(0,90,0),0.25f).SetEase(Ease.Linear).OnComplete(()=>selectable.gameObject.SetActive(false));
    }
    void Update()
    {

    }
}
