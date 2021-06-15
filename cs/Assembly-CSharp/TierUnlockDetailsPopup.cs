/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using MV.Common;
using MV.WorldObject.GamePassSystem;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockDetailsPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tierText;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private ProgressBar tierProgressBar;
	[SerializeField]
	private UnityEngine.UI.Text progressText;
	[SerializeField]
	private GameObject progressBarDivider;
	[SerializeField]
	private GameObject freeTryButton;
	[SerializeField]
	private GamePassesShop gamePassesShopPrefab;
	[SerializeField]
	private TierPurchaseNotEnoughGoldErrorPopup tierPurchaseGoldErrorPopupPrefab;
	[SerializeField]
	private TierUnlockedPopupController TierUnlockedPopupControllerPrefab;
	[SerializeField]
	private Image buttonAdImage;
	private GamePassTier tierToPurchase;
	private int price;
	private UnityAction OnPurchaseSuccessful;
	private bool isWaitingForFreeTryTier;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache5;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache6;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache7;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache8;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache9;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cacheA;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowTier_c__AnonStorey0
	{
		// Fields
		internal GamePassesShop gamePassesShop;

		// Constructors
		public _ShowTier_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _Purchase_c__AnonStorey1
	{
		// Fields
		internal TierPurchaseNotEnoughGoldErrorPopup tierErrorPopup;

		// Constructors
		public _Purchase_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey2
	{
		// Fields
		internal int returnCode;
		internal TierUnlockDetailsPopup _this;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey2();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowTierUnlock_c__AnonStorey3
	{
		// Fields
		internal TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public _ShowTierUnlock_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TierUnlockDetailsPopup();

	// Methods
	public void Initialize(GamePassTier tierToPurchase, int price, UnityAction OnPurchaseSuccessful);
	public void ShowTier();
	public void Purchase();
	public void FreeTryTier();
	private void OnEnable();
	private void OnDestroy();
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> purchaseResponseData);
	private void ShowTierUnlock(bool wasPurchased, bool wasTempUnlocked);
	private void HandleSuccessfulPurchase();
	private void UpdateTierProgressBar();
	private int ReduceGamePointsWithPreviousTierRequirements(GamePassTier gamePassTierToDisplay, int gamePoints, Dictionary<GamePassTier, PlayerTierState> gameTierShopStatus);
	private void ShowAd();
	private void RewardedAdCallback(RewardedAdResult result);
	private void PreviewTier();
	private void OnPlayerPlanetDataUpdated();
	[CompilerGenerated]
	private static void _Purchase_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _Purchase_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__3(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ShowAd_m__4(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__5(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__6(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__7(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__8(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__9(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__A(IUIStack x, BaseEventData y);
}

