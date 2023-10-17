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

public class DesktopLobbyStateController : LobbyFlowMenu
{
	// Fields
	[SerializeField]
	private GameObject respawnButton;
	[SerializeField]
	private GameObject avatarAccessoriesButton;
	[SerializeField]
	private GameObject touristRegisterButton;
	[SerializeField]
	private LobbyStateButton playButton;
	[SerializeField]
	private GameObject goldIconOnPlayButton;
	[SerializeField]
	private AdOfferGold adOfferGold;
	[SerializeField]
	private LobbyStateButton lobbyStatePlayButton;
	[SerializeField]
	private GamePassesUI gamePassesUIPrefab;
	[SerializeField]
	private GameObject startGoldRewardPopupPrefab;
	[SerializeField]
	private BoostMenuController boosterMenu;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	[SerializeField]
	private GameObject adminObserveButton;
	[SerializeField]
	private Image lobbyStateBlockingOverlay;
	private GamePassesUI gamePassesUI;

	// Properties
	protected override LobbyFlowMenuType MenuType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass18_0
	{
		// Fields
		public BoostMenuController boostMenu;

		// Constructors
		public __c__DisplayClass18_0();

		// Methods
		internal void _ShowBoostMenu_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public GameObject startGoldRewardPopup;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal void _CreateStartGoldRewardPopup_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public DesktopLobbyStateController();

	// Methods
	public override void Start();
	public void SetShouldPopOnExit(bool shouldPop);
	public void ShowBoostMenu();
	public void CreateStartGoldRewardPopup();
	private void Update();
	private void SetCamMaskMode();
	private void EnableGoldReward();
	private void OnEnable();
	private void OnDisable();
}

