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
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ContinueTierBoostPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tierNumber;
	[SerializeField]
	private UnityEngine.UI.Text continueRewardDescriptionText;
	[SerializeField]
	private UnityEngine.UI.Text tempClassContinueRewardDescriptionText;
	[SerializeField]
	private Image countdownFillImage;
	[SerializeField]
	private UnityEngine.UI.Text countdownText;
	[SerializeField]
	private GameObject defaultUI;
	[SerializeField]
	private GameObject tempClassUI;
	[SerializeField]
	private CurrentSpawnRolePreviewer spawnRolePreviewer;
	[SerializeField]
	private GameObject backgroundTier1;
	[SerializeField]
	private GameObject backgroundTier2;
	[SerializeField]
	private GameObject backgroundTier3;
	[SerializeField]
	private TierUnlockedPopupController TierUnlockedPopupControllerPrefab;
	[SerializeField]
	private SpawnRoleMenu spawnRoleSelectionMenuPrefab;
	[SerializeField]
	private TeamMenu teamMenuPrefab;
	[SerializeField]
	private float countDownDuration;
	[SerializeField]
	private Image buttonAdImage;
	private float timeLeft;
	private const string rewardDescription = "Keep playing as Tier {0}?";
	private GamePassTier previousPreviewTier;
	private bool isWaitingForFreeTryTier;
	private bool shouldUpdate;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache5;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache6;

	// Nested types
	[CompilerGenerated]
	private sealed class _Update_c__AnonStorey0
	{
		// Fields
		internal bool isBlocked;
		internal ContinueTierBoostPopup _this;

		// Constructors
		public _Update_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowTierUnlock_c__AnonStorey1
	{
		// Fields
		internal TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public _ShowTierUnlock_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowSpawnRoleSelectionMenu_c__AnonStorey2
	{
		// Fields
		internal SpawnRoleMenu spawnRoleSelectionMenu;

		// Constructors
		public _ShowSpawnRoleSelectionMenu_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowTeamSelectionMenu_c__AnonStorey3
	{
		// Fields
		internal TeamMenu newTeamMenu;

		// Constructors
		public _ShowTeamSelectionMenu_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ContinueTierBoostPopup();

	// Methods
	public void OnWatchAd();
	public void OnDeclinePressed();
	public void Initialize(int tier);
	private void Start();
	private void Update();
	private void ShowTierUnlock(bool wasPurchased, bool wasTempUnlocked);
	private void ShowSpawnRoleSelectionMenu();
	private void ShowTeamSelectionMenu();
	private void ShowAd();
	private void RewardedAdCallback(RewardedAdResult result);
	public void StopPreviewTier();
	private void OnPlayerPlanetDataUpdated();
	private void ExitContinuePopup();
	private bool IsInTempClass();
	private bool CanSpawnInTeam(MVTeam team);
	private void ChangeBackground(GamePassTier tier);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__2(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _StopPreviewTier_m__3(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__4(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ExitContinuePopup_m__5(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ExitContinuePopup_m__6(IUIStack x, BaseEventData y);
}

