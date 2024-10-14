using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Newtonsoft.Json.Linq;
using DG.Tweening;
using System.Threading.Tasks;
using Unity.VisualScripting;

public class AlertShort : MonoBehaviour
{
    // Start is called before the first frame update
    public static AlertShort instance = null;
    [SerializeField]
    TextMeshProUGUI lbNickName;
    [SerializeField]
    TextMeshProUGUI lbContent;
    [SerializeField]
    Avatar avatar;
    [SerializeField]
    GameObject alertShortView;
    [SerializeField]
    RectTransform rectTfParent;
    [SerializeField]
    RectTransform rectTf;
    [SerializeField]
    GameObject skeBg;
    private Vector2 posInView;
    private Vector2 sizeAlertView;
    private Vector2 posInAlertShortView;
    private float alvWidth = 320f;
    private float alvHeight = 100f;
    public List<GameObject> listData = new List<GameObject>();
    private bool isChangeRotate = false;
    private int tweenId = 0;
    private bool isTweening = false;
    [HideInInspector]
    private POSITION_TYPE posType = POSITION_TYPE.BOTTOM_RIGHT;
    private enum POSITION_TYPE
    {

        CENTER_LEFT = 1,
        CENTER_RIGHT = 2,
        TOP_LEFT = 3,
        TOP_RIGHT = 4,
        TOP_NEAR_RIGHT = 5,
        TOP_RIGHT_TABLEVIEW = 6,
        BOTTOM_LEFT = 7,
        BOTTOM_RIGHT = 8,

    };
    void Start()
    {
        AlertShort.instance = this;
    }
    private Vector2 getPositionType()
    {
        Vector2 posAlert = Vector2.zero;
        posType = getTypePos();
        switch (posType)
        {
            case POSITION_TYPE.BOTTOM_RIGHT:
                posAlert = new Vector2(rectTf.rect.width / 2 + alvWidth / 2, -200);
                break;
            case POSITION_TYPE.BOTTOM_LEFT:
                posAlert = new Vector2(-rectTf.rect.width / 2 - alvWidth / 2, -200);
                break;
            case POSITION_TYPE.TOP_RIGHT:
                posAlert = new Vector2(rectTf.rect.width / 2 + alvWidth / 2, 300);
                break;
            case POSITION_TYPE.TOP_RIGHT_TABLEVIEW:
                posAlert = new Vector2(rectTf.rect.width / 2 + alvWidth / 2, 200);
                break;
            case POSITION_TYPE.TOP_NEAR_RIGHT:
                posAlert = new Vector2(rectTf.rect.width / 2 + alvWidth / 2, 220);
                break;
        }

        return posAlert;

    }
    private POSITION_TYPE getTypePos()
    {
        POSITION_TYPE posType = POSITION_TYPE.TOP_RIGHT;
        if (UIManager.instance.gameView != null && UIManager.instance.gameView.gameObject.activeSelf)
        {
            posType = POSITION_TYPE.TOP_RIGHT;
            if (Globals.Config.curGameId == (int)Globals.GAMEID.SLOT_SIXIANG)
            {
                posType = POSITION_TYPE.BOTTOM_LEFT;
            }
            if (Globals.Config.curGameId == (int)Globals.GAMEID.SICBO)
            {
                posType = POSITION_TYPE.TOP_RIGHT;
            }
            if (Globals.Config.curGameId == (int)Globals.GAMEID.BANDAR_QQ ||
                Globals.Config.curGameId == (int)Globals.GAMEID.BACCARAT ||
                Globals.Config.curGameId == (int)Globals.GAMEID.RONGHO)
            {
                posType = POSITION_TYPE.BOTTOM_RIGHT;
            }
            if (Globals.Config.curGameId == (int)Globals.GAMEID.KARTU_QIU ||
                Globals.Config.curGameId == (int)Globals.GAMEID.SLOTNOEL ||
                Globals.Config.curGameId == (int)Globals.GAMEID.SLOT_JUICY_GARDEN ||
                Globals.Config.curGameId == (int)Globals.GAMEID.SLOTTARZAN ||
                Globals.Config.curGameId == (int)Globals.GAMEID.SLOT20FRUIT)
            {
                posType = POSITION_TYPE.TOP_NEAR_RIGHT;
            }

        }
        else if (TableView.instance != null && TableView.instance.gameObject.activeSelf)
        {
            posType = POSITION_TYPE.TOP_RIGHT_TABLEVIEW;
        }
        return posType;

    }

    // Update is called once per frame

    void Update()
    {
        checkPosition();

    }
    public void updateChangeOrient()
    {
        alertShortView.SetActive(false);
        DOTween.Kill(alertShortView.transform);
        alertShortView.transform.localPosition = new Vector2(rectTf.rect.width / 2 + alvWidth, 0);
    }
    private void checkPosition()
    {
        if (alertShortView.gameObject.activeSelf)
        {
            if (UIManager.instance.isLoginShow())
            {
                alertShortView.SetActive(false);
                DOTween.Kill(alertShortView.transform);
                isTweening = false;
                return;
            }
            POSITION_TYPE typeCurrentView = getTypePos();
            if (posType != typeCurrentView)
            {
                alertShortView.SetActive(false);
                DOTween.Kill(alertShortView.transform);
                isTweening = false;
                posType = typeCurrentView;
            }
        }
    }
    public async Task showShortMessage()
    {
        //vip0,vip1 show all(sảnh game,sảnh bàn,ingame)
        //>=vip2 show sảnh bàn,in game

        bool isShowAlert = true;
        if (Globals.User.userMain.VIP > 1 && UIManager.instance.lobbyView.getIsShow())
        {
            isShowAlert = false;
        }
        if (!isShowAlert || isTweening)
        {
            return;
        }
        if (Globals.Config.list_AlertShort.Count > 0)
        {
            JObject data = Globals.Config.list_AlertShort[0];
            Globals.Config.list_AlertShort.RemoveAt(0);
            lbNickName.text = (string)data["title"];
            lbContent.text = (string)data["content"];
            string urlAvt = (string)data["urlAvatar"];
            if (urlAvt.Contains("fb."))
            {
                await avatar.loadAvatarAsync2(0, urlAvt);
            }
            else
            {
                avatar.setSpriteWithID(int.Parse(urlAvt));
            }
            avatar.setVip((int)data["vip"]);
            alertShortView.gameObject.SetActive(true);
            Vector2 posStart = getPositionType();

            alertShortView.transform.localPosition = posStart;
            Vector2 posTo = new Vector2(posStart.x > 0 ? posStart.x - alvWidth : posStart.x + alvWidth, posStart.y);
            skeBg.transform.localScale = posStart.x < 0 ? new Vector2(-1, 1) : new Vector2(1, 1);
            isTweening = true;
            DOTween.Sequence()
                  .Append(alertShortView.transform.DOLocalMove(posTo, 0.5f).SetEase(Ease.OutSine))
                  .AppendInterval(5.5f)
                  .Append(alertShortView.transform.DOLocalMove(posStart, 0.5f)
                  .SetEase(Ease.InSine))
                  .AppendCallback(() =>
                  {
                      alertShortView.gameObject.SetActive(false);
                      isTweening = false;
                      checkShowAlertShort();
                  }).SetTarget(alertShortView.transform);

        }

    }
    public async Task checkShowAlertShort()
    {
        if (Globals.Config.list_AlertShort.Count > 0)
        {
            await showShortMessage();
        }
    }


}
