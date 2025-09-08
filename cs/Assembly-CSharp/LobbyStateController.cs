/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LobbyStateController : LobbyFlowMenu
{
	// Fields
	[SerializeField]
	private GameObject touristRegisterButton;
	[SerializeField]
	private GameObject accessoryShop;
	[SerializeField]
	private LobbyStateButton lobbyStatePlayButton;
	[SerializeField]
	private LobbyStateButton playButton;
	[SerializeField]
	private GameObject goldIconOnPlayButton;
	[SerializeField]
	private GamePassesUI gamePassesUIPrefab;
	[SerializeField]
	private GameObject startGoldRewardPopupPrefab;
	[SerializeField]
	private BoostMenuController boosterMenu;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private GamePassesUI gamePassesUI;

	// Properties
	protected override LobbyFlowMenuType MenuType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass17_0
	{
		// Fields
		public BoostMenuController boostMenu;

		// Constructors
		public __c__DisplayClass17_0();

		// Methods
		internal void _ShowBoostMenu_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass18_0
	{
		// Fields
		public GameObject startGoldRewardPopup;

		// Constructors
		public __c__DisplayClass18_0();

		// Methods
		internal void _CreateStartGoldRewardPopup_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public LobbyStateController();

	// Methods
	public override void Start();
	private void InitializeLobbyMenuButtons(bool isTourist);
	private void InitializeGamePassesUI();
	private void InitializeGoldReward(bool isTourist);
	public void SetShouldPopOnExit(bool shouldPop);
	public void ShowBoostMenu();
	public void CreateStartGoldRewardPopup();
	private void OnEnable();
}

