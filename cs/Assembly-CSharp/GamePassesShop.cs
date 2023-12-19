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
using UGUI.Framework.Scripts.Shared.GamePasses;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private GamePassesShopStatusFooter statusFooterObject;
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
	private Image buttonIcon;
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
	private bool isSubscribed;
	private static bool haveInitializedHighestTierRewardShown;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__83_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__84_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__84_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__85_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__85_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__86_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__87_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ShowAd_b__83_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__84_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__84_1(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__85_0(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__85_1(IModalPopupCreator x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__86_0(IUIStack x, BaseEventData y);
		internal void _Exit_b__87_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass73_0
	{
		// Fields
		public TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public __c__DisplayClass73_0();

		// Methods
		internal void _ShowTierUnlockedPopup_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass74_0
	{
		// Fields
		public GamePassesTouristInformationPopup touristInformationPopup;

		// Constructors
		public __c__DisplayClass74_0();

		// Methods
		internal void _ShowTouristInformationPopup_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass75_0
	{
		// Fields
		public TierPurchasePopup tierPurchasePopup;

		// Constructors
		public __c__DisplayClass75_0();

		// Methods
		internal void _ShowPurchaseConfirmPopup_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass76_0
	{
		// Fields
		public TierPurchaseNotEnoughGoldErrorPopup tierErrorPopup;

		// Constructors
		public __c__DisplayClass76_0();

		// Methods
		internal void _ShowPurchaseGoldErrorPopup_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass92_0
	{
		// Fields
		public GameObject gamePassesShopInformation;

		// Constructors
		public __c__DisplayClass92_0();

		// Methods
		internal void _ShowGamePassShopInformationPopup_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesShop();

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
	public void OnClickFreeTryAd();
	public void OnClickFreeTrySubcribed();
	public void ShowGamePassShopInformationPopup();
}

