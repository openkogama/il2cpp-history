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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private Image buttonIcon;
	private GamePassTier tierToPurchase;
	private int price;
	private UnityAction OnPurchaseSuccessful;
	private bool isWaitingForFreeTryTier;
	private bool isSubscribed;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass16_0
	{
		// Fields
		public GamePassesShop gamePassesShop;

		// Constructors
		public __c__DisplayClass16_0();

		// Methods
		internal void _ShowTier_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass17_0
	{
		// Fields
		public TierPurchaseNotEnoughGoldErrorPopup tierErrorPopup;

		// Constructors
		public __c__DisplayClass17_0();

		// Methods
		internal void _Purchase_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__17_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__17_2;
		public static ExecuteEvents.EventFunction<IUIStack> __9__22_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__22_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__27_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__28_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__28_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__29_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__29_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__30_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__30_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Purchase_b__17_0(IModalPopupCreator x, BaseEventData y);
		internal void _Purchase_b__17_2(IUIStack x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__22_0(IUIStack x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__22_1(IUIStack x, BaseEventData y);
		internal void _ShowAd_b__27_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__28_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__28_1(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__29_0(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__29_1(IModalPopupCreator x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__30_0(IUIStack x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__30_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass22_0
	{
		// Fields
		public int returnCode;
		public TierUnlockDetailsPopup __4__this;

		// Constructors
		public __c__DisplayClass22_0();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__2(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass23_0
	{
		// Fields
		public TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public __c__DisplayClass23_0();

		// Methods
		internal void _ShowTierUnlock_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TierUnlockDetailsPopup();

	// Methods
	public void Initialize(GamePassTier tierToPurchase, int price, UnityAction OnPurchaseSuccessful);
	public void ShowTier();
	public void Purchase();
	public void OnClickFreeTryAd();
	public void OnClickFreeTrySubscriber();
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
}

