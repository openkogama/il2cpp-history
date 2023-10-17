/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using MV.Common;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleSelectionElement : DefaultSpawnRoleSelectionElement
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text spawnRoleCostAmount;
	[SerializeField]
	private GameObject spawnRoleCostObject;
	[SerializeField]
	private NotificationFade spawnRoleCostFader;
	[SerializeField]
	private GameObject moreInfoButton;
	[SerializeField]
	private NotificationFade moreInfoButtonFader;
	[SerializeField]
	private NotificationFade playButtonFader;
	[SerializeField]
	private GameObject playButton;
	[SerializeField]
	private GameObject freeTryButton;
	[SerializeField]
	private GameObject lockedButton;
	[SerializeField]
	private ContinueButtonHandler continueButtonHandler;
	[SerializeField]
	private GamePassesTextBubble lockedTierBubble;
	[SerializeField]
	private SpawnRoleSelectionSkillMenu skillMenuPrefab;
	[SerializeField]
	private SpawnRoleUnlockedPopupController spawnRoleUnlockPopupPrefab;
	[SerializeField]
	private GameObject backgroundTier1;
	[SerializeField]
	private GameObject backgroundTier2;
	[SerializeField]
	private GameObject backgroundTier3;
	[SerializeField]
	private Image tryFreeButtonIcon;
	private GamePassTier tierRequirement;
	private MVTeam teamRequirement;
	private bool awaitingSpawn;
	private bool isWaitingForFreeTryTier;
	private bool haveShownFreeTryUnlock;
	private bool isSubscriber;

	// Properties
	public override GamePassTier Tier { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass28_0
	{
		// Fields
		public SpawnRoleSelectionSkillMenu skillMenu;

		// Constructors
		public __c__DisplayClass28_0();

		// Methods
		internal void _OnShowSkillMenu_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__39_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__41_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__42_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__42_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__43_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__43_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__44_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__44_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Close_b__39_0(IUIStack handler, BaseEventData data);
		internal void _ShowAd_b__41_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__42_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__42_1(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__43_0(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__43_1(IModalPopupCreator x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__44_0(IUIStack x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__44_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass44_0
	{
		// Fields
		public SpawnRoleUnlockedPopupController spawnRoleUnlockPopup;

		// Constructors
		public __c__DisplayClass44_0();

		// Methods
		internal void _OnPlayerPlanetDataUpdated_b__2(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleSelectionElement();

	// Methods
	private void ChangeBackground(GamePassTier tier);
	public override void Initialize(int spawnRoleIndex, int woId, GamePassTier tierRequirement, MVTeam team, UnityAction<int> onSelectedCallback, UnityAction<int> onActivatedCallback);
	public void ShowSkillMenu();
	public void OnShowSkillMenu();
	public override void UpdateButtonUI();
	public void OnPressPlay();
	public void OnPressFreePlayAd();
	public void OnPressFreePlaySubscriber();
	public void OnPressLockedPlay();
	private int CalculateTotalSpawnRoleCost(int spawnRoleId);
	private void HandlePlayButtonVisibility();
	private bool CanShowFreeTry();
	private void HandleTeamSwitching();
	private void StartPlaying();
	private void Close(int spawnRoleID = 0);
	private void AwaitSpawnThenClose();
	private void ShowAd();
	private void RewardedAdCallback(RewardedAdResult result);
	private void PreviewTier();
	private void OnPlayerPlanetDataUpdated();
	protected override void OnDestroy();
	public override void OnSelctionHighlight();
	public override void OnSelected();
	public override void OnUnSelected();
}

