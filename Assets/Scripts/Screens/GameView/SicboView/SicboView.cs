using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json.Linq;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using Spine.Unity;
using System.Linq;

public class SicboView : HiloView
{
    protected override void Awake()
    {
        base.Awake();
    }
    protected override void Start()
    {
        base.Start();
    }
    protected override void updatePositionPlayerView()
    {
        listPlayerSicbo = new List<Player>();
        players.Sort((a, b) =>
        {
            return b.ag.CompareTo(a.ag);
        });

        for (int i = 0; i < players.Count; i++)
        {
            if (thisPlayer == players[i])
            {
                players.RemoveAt(i);
            }
        }
        List<Player> newListPl = new List<Player> { thisPlayer };
        players = newListPl.Concat(players).ToList();
        for (int i = 0; i < players.Count; i++)
        {
            int index = getDynamicIndex(getIndexOf(players[i]));
            players[i]._indexDynamic = index;
            if (index < listPosView.Count)
            {
                players[i].playerView.transform.localPosition = listPosView[index];// new Vector2(listPosView[index].x / 1280 * Screen.width, listPosView[index].y / 720 * Screen.height);
            }

            //------- SET SCALE PLAYERVIEW ------//
            if (players[i] == thisPlayer)
                players[i].playerView.transform.localScale = new Vector2(0.8f, 0.8f);
            else
                players[i].playerView.transform.localScale = new Vector2(0.7f, 0.7f);
            //----------- END ----------//
            if (index >= 6)
            {
                listPlayerSicbo.Add(players[i]);
                players[i].playerView.gameObject.SetActive(false);
                players[i].playerView.transform.localPosition = avatar_chung.transform.localPosition;

            }
            else
            {
                players[i].playerView.gameObject.SetActive(true);
            }
            players[i].updateItemVip(players[i].vip);
        }
    }
}
