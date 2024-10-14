using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowGroupBanner : MonoBehaviour
{
    public Image true_banner;
    public Image false_banner;
    public Image joker_banner;
    public GameObject specified;
    public float Stret, PosX;
    [HideInInspector] public bool IsTrue, IsJoker, IsDropped, IsSpecified, IsValidSpecified, IsValidPure;

    void Awake()
    {
        true_banner.gameObject.SetActive(false);
        false_banner.gameObject.SetActive(false);
        joker_banner.gameObject.SetActive(false);
    }
    public void RefreshUI(bool canHaveJokerGroup)
    {
        if (IsTrue && IsJoker && !IsDropped && !IsValidSpecified)
        {
            if (canHaveJokerGroup) SetTrueGroup();
            else SetJokerGroup();
        }
        else if (!IsTrue) SetFalseGroup();
        else SetTrueGroup();
        specified.transform.localPosition = new Vector2(PosX, -342);
        if (IsTrue)
            specified.SetActive(IsSpecified);
    }
    public void SetInfo(float stret, float posX, bool isTrue, bool isJoker, bool isDropped, bool isSpecified, bool isValidSpecified, bool isValidPure)
    {
        Stret = stret;
        PosX = posX;
        IsTrue = isTrue;
        IsJoker = isJoker;
        IsDropped = isDropped;
        IsSpecified = isSpecified;
        IsValidSpecified = isValidSpecified;
        IsValidPure = isValidPure;
    }

    void SetTrueGroup()
    {
        true_banner.gameObject.SetActive(true);
        false_banner.gameObject.SetActive(false);
        joker_banner.gameObject.SetActive(false);
        true_banner.rectTransform.sizeDelta = new Vector2(Stret, true_banner.rectTransform.sizeDelta.y);
        true_banner.transform.localPosition = new Vector2(PosX, -340);
    }

    void SetFalseGroup()
    {
        Debug.Log(" BANNER === false");
        false_banner.gameObject.SetActive(true);
        true_banner.gameObject.SetActive(false);
        joker_banner.gameObject.SetActive(false);
        false_banner.rectTransform.sizeDelta = new Vector2(Stret, false_banner.rectTransform.sizeDelta.y);
        false_banner.transform.localPosition = new Vector2(PosX, -340);
    }

    void SetJokerGroup()
    {
        Debug.Log(" BANNER === joker");
        false_banner.gameObject.SetActive(false);
        true_banner.gameObject.SetActive(false);
        joker_banner.gameObject.SetActive(true);
        joker_banner.rectTransform.sizeDelta = new Vector2(Stret, joker_banner.rectTransform.sizeDelta.y);
        joker_banner.transform.localPosition = new Vector2(PosX, -340);
    }

    public void MoveBanner()
    {
        false_banner.transform.localPosition = new Vector2(PosX, -340);
        true_banner.transform.localPosition = new Vector2(PosX, -340);
    }

    internal void SetInfo(object bannerInfo)
    {
        throw new NotImplementedException();
    }
}
