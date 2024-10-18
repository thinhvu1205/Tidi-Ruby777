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
    [SerializeField] private Image selectedGold, unselectedGold, iconSelected, iconUnselected;
    [SerializeField] public Image selectable, unSelectable;

    [HideInInspector]public SkeletonGraphic AnimBom => animBomb;
    private void ClickButton()
    {
        if (!animBomb.gameObject.activeSelf)
        {
            Debug.LogError($"CLickButtonName: {buttonClick.name}");
            selectable.gameObject.SetActive(false);
            unselectedGold.gameObject.SetActive(false);
            selectedGold.transform.DORotate(new Vector3(0, 180, 0), 0.25f).SetEase(Ease.Linear).OnComplete(() => selectable.gameObject.SetActive(false));
        }
        else{
            animBomb.AnimationState.SetAnimation(0,"animation",true);
            selectable.gameObject.SetActive(false);
            unselectedGold.gameObject.SetActive(false);
            selectedGold.gameObject.SetActive(false);
        }
    }
    void Start()
    {
        buttonClick.onClick.AddListener(ClickButton);
    }
    void Update()
    {

    }
}
