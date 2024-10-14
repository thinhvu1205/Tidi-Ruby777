using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.UI;

public class TestScene : MonoBehaviour
{
    [ContextMenu("abc")]
    public void Test()
    {
        List<int> test = new() { 1, 2, 3, 4, 5 };
        Debug.Log(test[10]);
    }
    private void Start()
    {
        Button[] buttons = FindObjectsByType<Button>(FindObjectsInactive.Include, FindObjectsSortMode.None);
        foreach (Button btn in buttons)
        {
            for (int i = 0; i < btn.onClick.GetPersistentEventCount(); i++)
            {
                Debug.Log("Listerner:" + btn.name + ", " + btn.gameObject.activeSelf + ", " + btn.onClick.GetPersistentMethodName(i));
            }
        }
    }
}
