/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesHighScoreElement : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text userRankText;
	[SerializeField]
	private UnityEngine.UI.Text userNameText;
	[SerializeField]
	private UnityEngine.UI.Text userAmountOfGamePointText;
	[SerializeField]
	private Image backgroundImage;
	[SerializeField]
	private GameObject topBorderGameObject;
	[SerializeField]
	private GameObject subscriberUI;
	[SerializeField]
	private UnityEngine.UI.Button buttonElement;
	[SerializeField]
	private PlayerSocialPopup playerSocialPopup;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private int profileId;
	private bool isLocalPlayerElement;
	private bool subscriber;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public PlayerSocialPopup popup;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _OnClick_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesHighScoreElement();

	// Methods
	public void Initialize(int userRank, string userName, int amountOfGamePoints, int profileID, bool isSubscriber);
	private void FriendRequestAccepted(Friend friend);
	private void OnDestroy();
	public void OnClick();
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	public void DeactivateTopBorder();
}

