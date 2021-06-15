/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using MV.Common;
using MV.WorldObject;
using MV.WorldObject.GamePassSystem;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesShop : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text headerText;
	[SerializeField]
	private UnityEngine.UI.Text progressHeader;
	[SerializeField]
	private UnityEngine.UI.Text progressText;
	[SerializeField]
	private ProgressBar progressBar;
	[SerializeField]
	private ProgressBar endResultProgressBar;
	[SerializeField]
	private ProgressBar disabledProgressBar;
	[SerializeField]
	private GameObject progressBarDivider;
	[SerializeField]
	private UnityEngine.UI.Text gameTierIconText;
	[SerializeField]
	private GameObject unlockedText;
	[SerializeField]
	private RectTransform tierListContainer;
	[SerializeField]
	private RectTransform tierList;
	[SerializeField]
	private SpawnPointInfo spawnPointInfoPrefab;
	[SerializeField]
	private GamePassesXpRewardInfo xpRewardInfoPrefab;
	[SerializeField]
	private TierUnlockedItemsRewardInfo tierUnlockedItemsRewardInfoPrefab;
	[SerializeField]
	private TierUnlockedAccessItemsRewardInfo tierUnlockedAccessItemsRewardInfoPrefab;
	[SerializeField]
	private GamePassesSpawnRoleRewardInfo spawnRoleRewardInfoPrefab;
	[SerializeField]
	private GamePassesPurchaseButton purchaseButton;
	[SerializeField]
	private GameObject purchaseButtonObject;
	[SerializeField]
	private GameObject freeTryUI;
	[SerializeField]
	private UnityEngine.UI.Text unlockTimeText;
	[SerializeField]
	private UnityEngine.UI.Text unlockPriceText;
	[SerializeField]
	private UnityEngine.UI.Text crystalAmount;
	[SerializeField]
	private GameObject editModeInformationObject;
	[SerializeField]
	private GameObject gameTierProgressObject;
	[SerializeField]
	private GameObject statusFooterObject;
	[SerializeField]
	private GamePassesShopContentCuller contentCuller;
	[SerializeField]
	private TierUnlockedPopupController TierUnlockedPopupControllerPrefab;
	[SerializeField]
	private TierPurchasePopup tierPurchasePopupPrefab;
	[SerializeField]
	private TierPurchaseNotEnoughGoldErrorPopup tierPurchaseGoldErrorPopupPrefab;
	[SerializeField]
	private GamePassesTouristInformationPopup touristInformationPopupPrefab;
	[SerializeField]
	private GameObject gamePassesShopInformationPrefab;
	[SerializeField]
	private Image buttonAdImage;
	[SerializeField]
	private Image lockedTierIcon;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private GamePassTier gamePassTierDisplayed;
	private float lerpStartTime;
	private int oldGamePointValue;
	private int newGamePointValue;
	private bool shouldLerp;
	private bool isWaitingForFreeTryTier;
	private bool haveShownFreeTryUnlock;
	private bool delayedInit;
	private static bool haveInitializedHighestTierRewardShown;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache5;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache6;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowTierUnlockedPopup_c__AnonStorey0
	{
		// Fields
		internal TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public _ShowTierUnlockedPopup_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowTouristInformationPopup_c__AnonStorey1
	{
		// Fields
		internal GamePassesTouristInformationPopup touristInformationPopup;

		// Constructors
		public _ShowTouristInformationPopup_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowPurchaseConfirmPopup_c__AnonStorey2
	{
		// Fields
		internal TierPurchasePopup tierPurchasePopup;

		// Constructors
		public _ShowPurchaseConfirmPopup_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowPurchaseGoldErrorPopup_c__AnonStorey3
	{
		// Fields
		internal TierPurchaseNotEnoughGoldErrorPopup tierErrorPopup;

		// Constructors
		public _ShowPurchaseGoldErrorPopup_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowGamePassShopInformationPopup_c__AnonStorey4
	{
		// Fields
		internal GameObject gamePassesShopInformation;

		// Constructors
		public _ShowGamePassShopInformationPopup_c__AnonStorey4();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesShop();
	static GamePassesShop();

	// Methods
	public static void UpdateHighestTierRewardShown(GamePassTier newHighestTierRewardShown);
	public void Initialize(GamePassTier gamePassTierToDisplay);
	private void DelayedInitialize();
	private void Start();
	private void OnDestroy();
	private TierLockState GetTierLockState(GamePassTier gamePassTierToDisplay);
	private void HandlePurchaseButtonVisibility(GamePassTier gamePassTierToDisplay);
	private void HandleEditModeUI();
	private void Update();
	private void UpdateProgressBar(GamePassTier gamePassTierToDisplay);
	private void ActivateBar();
	private void DeactivateBar();
	private void UpdateUI();
	private void UpdateTierCostTets();
	private void UpdateFreeTryUI();
	private int ReduceGamePointsWithPreviousTierRequirements(GamePassTier gamePassTierToDisplay, int gamePoints, Dictionary<GamePassTier, PlayerTierState> gameTierShopStatus);
	private void AddTierContent(GamePassTier gamePassTierToDisplay);
	private void CreateSpawnPointInfo(MVTeam team);
	private void CreateXPRewardInfo(GamePassTier tier);
	private void CreateUnlockedItemsInfo(GamePassTier tier, Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData);
	private Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> SortOutNonLootItemsInShopData(Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData);
	private bool IsTierItemALootItem(MVWorldObjectClient item);
	private void CreateUnlockedAccessItemsInfo(GamePassTier tier, Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData);
	private Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> SortOutNonAccessItemsInShopData(Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData);
	private bool IsTierItemAnAccessItem(MVWorldObjectDocumentationType worldObjectType, MVWorldObjectClient item);
	private void CreateSpawnRoleContent(GamePassTier gamePassTierToDisplay);
	private List<MVAvatarSpawnRoleCreator> GetSortedSpawnRoles(GamePassTier gamePassTierToDisplay);
	private int CalculateTotalSpawnRoleCost(MVAvatarSpawnRoleCreator spawnRoleCreator);
	private void CreateSpawnRoleInfo(int spawnRoleIndex, MVAvatarSpawnRoleCreator spawnRole, GamePassTier tier);
	private void ShowTierUnlockedPopup(bool wasPurchased, bool wasTempUnlocked);
	private void ShowTouristInformationPopup();
	private void ShowPurchaseConfirmPopup(int price);
	private void ShowPurchaseGoldErrorPopup();
	private void HandlePurchase();
	private void OnSuccessfulPurchase();
	private void TestTier();
	private bool ShouldShowTierReward(GamePassTier tierToShow);
	private bool IsProgressBarEnabled();
	private int GetTotalGamePointRequirementForTier(GamePassTier tier);
	private void ShowAd();
	private void RewardedAdCallback(RewardedAdResult result);
	private void PreviewTier();
	private void OnPlayerPlanetDataUpdated();
	public void Exit();
	public void OnButtonPress();
	public void OnTestTierPress();
	public void OnFreeTryPressed();
	public void ShowGamePassShopInformationPopup();
	[CompilerGenerated]
	private static void _ShowAd_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__2(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__3(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__4(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__5(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _Exit_m__6(IUIStack x, BaseEventData y);
}

