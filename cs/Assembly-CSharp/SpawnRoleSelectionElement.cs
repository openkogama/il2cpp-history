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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private Image buttonAdImage;
	private GamePassTier tierRequirement;
	private MVTeam teamRequirement;
	private bool awaitingSpawn;
	private bool isWaitingForFreeTryTier;
	private bool haveShownFreeTryUnlock;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache5;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache6;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache7;

	// Properties
	public override GamePassTier Tier { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnShowSkillMenu_c__AnonStorey0
	{
		// Fields
		internal SpawnRoleSelectionSkillMenu skillMenu;

		// Constructors
		public _OnShowSkillMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnPlayerPlanetDataUpdated_c__AnonStorey1
	{
		// Fields
		internal SpawnRoleUnlockedPopupController spawnRoleUnlockPopup;

		// Constructors
		public _OnPlayerPlanetDataUpdated_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	public void OnPressFreePlay();
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
	[CompilerGenerated]
	private static void _Close_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowAd_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__2(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__3(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__4(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__5(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__6(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__7(IUIStack x, BaseEventData y);
}

