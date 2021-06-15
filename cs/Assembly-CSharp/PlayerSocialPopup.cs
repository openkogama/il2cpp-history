/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerSocialPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text playerName;
	[SerializeField]
	private GameObject subscriberFrame;
	[SerializeField]
	private GameObject viewProfileButton;
	[SerializeField]
	private GameObject addFriendButton;
	[SerializeField]
	private GameObject pendingFriendship;
	[SerializeField]
	private GameObject cancel;
	[SerializeField]
	private GameObject acceptFriendRequest;
	[SerializeField]
	private GameObject friendButtonsGameObject;
	[SerializeField]
	private GameObject isFriendTextObject;
	[SerializeField]
	private Button manageUserButton;
	[SerializeField]
	private AdminToolController adminToolsPrefab;
	[SerializeField]
	private OwnerToolController ownerToolsPrefab;
	private int profileId;
	private Friend friend;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnOpenAdminController_c__AnonStorey0
	{
		// Fields
		internal AdminToolController adminTools;

		// Constructors
		public _OnOpenAdminController_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnOpenAdminController_c__AnonStorey1
	{
		// Fields
		internal OwnerToolController ownerTools;

		// Constructors
		public _OnOpenAdminController_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _PostErrorPopup_c__AnonStorey2
	{
		// Fields
		internal string error;

		// Constructors
		public _PostErrorPopup_c__AnonStorey2();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public PlayerSocialPopup();

	// Methods
	public void Initialize(int remotePlayerProfileId, string name, bool isSubscriber);
	public void OnAcceptFriendClicked();
	public void OnFriendRequestCanceled();
	public void OnAddFriendClicked();
	public void OnViewProfileClicked();
	public void OnOpenAdminController();
	private void FriendRequestReceived();
	private void PendingCountChanged(int count);
	private void OnDestroy();
	private void SetupFriendButtons();
	private void PostErrorPopup(string error);
	private bool ValidateFriendRequest(ref string error);
}

