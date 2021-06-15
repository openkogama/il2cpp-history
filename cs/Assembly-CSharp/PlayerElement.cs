/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerElement : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text playerName;
	[SerializeField]
	private UnityEngine.UI.Text rank;
	[SerializeField]
	private UnityEngine.UI.Text score;
	[SerializeField]
	private GameObject memberUI;
	[SerializeField]
	private UnityEngine.UI.Text memberRank;
	[SerializeField]
	private Image nonMemberUI;
	[SerializeField]
	private Button playerNameAndScoreButton;
	[SerializeField]
	private List<Image> backgrounds;
	[SerializeField]
	private PlayerSocialPopup playerSocialPopupPrefab;
	[SerializeField]
	private Button dotsImage;
	[SerializeField]
	private Button incomingFriendRequestRedDot;
	[SerializeField]
	private Image underline;
	private string realPlayerName;
	private bool subscriber;
	private int profileId;

	// Properties
	public string PlayerName { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnPlayerClicked_c__AnonStorey0
	{
		// Fields
		internal PlayerSocialPopup popup;

		// Constructors
		public _OnPlayerClicked_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PlayerElement();

	// Methods
	public void Initialize(MVPlayer player, GameStatCounterType typeToDisplay, int scoreValue);
	public void OnPlayerClicked();
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	public void UpdateScoreIndex();
	private void ActivateSubscriberUI(bool isFriend);
}

