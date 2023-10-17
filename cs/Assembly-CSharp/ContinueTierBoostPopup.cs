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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private GameObject countdownGameObject;
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
	private Image buttonIcon;
	private const string rewardDescription = "Keep playing as Tier {0}?";
	private float timeLeft;
	private bool isWaitingForFreeTryTier;
	private bool shouldUpdate;
	private bool isSubscriber;
	private GamePassTier previousPreviewTier;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__24_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__33_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__33_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__33_2;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__34_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__35_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__36_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__36_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnClickSubscriber_b__24_0(IUIStack x, BaseEventData y);
		internal void _RewardedAdCallback_b__33_0(IUIStack x, BaseEventData y);
		internal void _RewardedAdCallback_b__33_1(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__33_2(IModalPopupCreator x, BaseEventData y);
		internal void _StopPreviewTier_b__34_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__35_0(IUIStack x, BaseEventData y);
		internal void _ExitContinuePopup_b__36_0(IUIStack x, BaseEventData y);
		internal void _ExitContinuePopup_b__36_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass28_0
	{
		// Fields
		public bool isBlocked;
		public ContinueTierBoostPopup __4__this;

		// Constructors
		public __c__DisplayClass28_0();

		// Methods
		internal void _Update_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass29_0
	{
		// Fields
		public TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public __c__DisplayClass29_0();

		// Methods
		internal void _ShowTierUnlock_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass30_0
	{
		// Fields
		public SpawnRoleMenu spawnRoleSelectionMenu;

		// Constructors
		public __c__DisplayClass30_0();

		// Methods
		internal void _ShowSpawnRoleSelectionMenu_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass31_0
	{
		// Fields
		public TeamMenu newTeamMenu;

		// Constructors
		public __c__DisplayClass31_0();

		// Methods
		internal void _ShowTeamSelectionMenu_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ContinueTierBoostPopup();

	// Methods
	public void OnClickWatchAd();
	public void OnClickSubscriber();
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
}

