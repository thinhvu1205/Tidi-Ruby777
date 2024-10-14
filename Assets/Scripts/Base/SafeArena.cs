using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SafeArena : MonoBehaviour
{
    public static SafeArena instance = null;
    bool isChange = true;
    // Start is called before the first frame update
    void Start()
    {
        SafeArena.instance = this;
        changeOrient();
    }
    public void changeOrientation()
    {

    }
    private void Update()
    {
        if (Screen.orientation == ScreenOrientation.Portrait)
        {
            isChange = false;
            Rect safeAreaRect = Screen.safeArea;

            var minAnchor = safeAreaRect.position;
            var maxAnchor = minAnchor + safeAreaRect.size;
            minAnchor.x /= Screen.width;
            minAnchor.y /= Screen.height;
            maxAnchor.x /= Screen.width;
            maxAnchor.y /= Screen.height;

            var rectTransform = GetComponent<RectTransform>();
            rectTransform.anchorMin = minAnchor;
            rectTransform.anchorMax = maxAnchor;
        }
        else if (Screen.orientation == ScreenOrientation.LandscapeLeft)
        {
            //Rect safeAreaRect = Screen.safeArea;
            isChange = true;

            var rectTransform = GetComponent<RectTransform>();
            rectTransform.anchorMin = Vector2.zero;
            rectTransform.anchorMax = Vector2.one;
        }
    }
    public void changeOrient()
    {
        //if (Screen.orientation == ScreenOrientation.Portrait)
        //{
        //    isChange = false;
        //    Rect safeAreaRect = Screen.safeArea;

        //    var minAnchor = safeAreaRect.position;
        //    var maxAnchor = minAnchor + safeAreaRect.size;
        //    minAnchor.x /= Screen.width;
        //    minAnchor.y /= Screen.height;
        //    maxAnchor.x /= Screen.width;
        //    maxAnchor.y /= Screen.height;

        //    var rectTransform = GetComponent<RectTransform>();
        //    rectTransform.anchorMin = minAnchor;
        //    rectTransform.anchorMax = maxAnchor;
        //}
        //else if (Screen.orientation == ScreenOrientation.LandscapeLeft)
        //{
        //    //Rect safeAreaRect = Screen.safeArea;
        //    isChange = true;

        //    var rectTransform = GetComponent<RectTransform>();
        //    rectTransform.anchorMin = Vector2.zero;
        //    rectTransform.anchorMax = Vector2.one;
        //}
    }


}
