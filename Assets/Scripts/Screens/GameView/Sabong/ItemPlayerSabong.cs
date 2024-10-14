using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ItemPlayerSabong : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI m_NameTMP, m_ChipsTMP, m_IdTMP;
    [SerializeField] Avatar m_AvatarA;
    [SerializeField] VipContainer m_VipVC;
    private int _thisId;

    #region Button
    public void DoClick()
    {
        if (_thisId == Globals.User.userMain.Userid) return;
        SocketSend.searchFriend(_thisId.ToString());
    }
    #endregion

    public void SetData(Player data)
    {
        m_AvatarA.loadAvatar(data.avatar_id, data.namePl, data.fid);
        m_AvatarA.setVip(data.vip);
        m_VipVC.setVip(data.vip);
        _thisId = data.id;
        string name = data.namePl;
        name = name.Length > 15 ? name[..Mathf.Min(name.Length, 15)] + "..." : name;
        m_NameTMP.text = name;
        m_IdTMP.text = _thisId.ToString();
        m_ChipsTMP.text = Globals.Config.FormatMoney(data.ag);
    }
}
