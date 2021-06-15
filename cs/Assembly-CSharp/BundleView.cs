/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BundleView : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text originalPriceText;
	[SerializeField]
	private UnityEngine.UI.Text discountedPriceText;
	[SerializeField]
	private UnityEngine.UI.Text bundlePriceWithoutDiscount;
	[SerializeField]
	private GameObject discountTag;
	[SerializeField]
	private UnityEngine.UI.Text discountTagText;
	[SerializeField]
	private UnityEngine.UI.Text goldSavedText;
	[SerializeField]
	private PurchasedAccessoryPreviewer previewSlideshowPrefab;
	[SerializeField]
	private Image levelLocked;
	[SerializeField]
	private BundlePurchasePopUp bundlePurchasePopup;
	[SerializeField]
	private BundleErrorPopUp bundleErrorPopUp;
	[SerializeField]
	private LevelErrorPopup levelErrorPopUp;
	[SerializeField]
	private GameObject claimText;
	[SerializeField]
	private Button purchaseButton;
	[SerializeField]
	private AccessoryShinyButton shineEffect;
	private AccessoryBundleClient bundleData;
	private int price;
	private int originalPrice;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IBundleController> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache3;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnBundlePurchaseClicked_c__AnonStorey0
	{
		// Fields
		internal LevelErrorPopup errorPopup;

		// Constructors
		public _OnBundlePurchaseClicked_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnBundlePurchaseClicked_c__AnonStorey1
	{
		// Fields
		internal BundleErrorPopUp errorPopup;

		// Constructors
		public _OnBundlePurchaseClicked_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnBundlePurchaseClicked_c__AnonStorey2
	{
		// Fields
		internal BundlePurchasePopUp popup;

		// Constructors
		public _OnBundlePurchaseClicked_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey6
	{
		// Fields
		internal int returnCode;
		internal BundleView _this;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey6();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey3
	{
		// Fields
		internal PurchasedAccessoryPreviewer popup;
		internal _ProductPurchaseResponseHandler_c__AnonStorey6 __f__ref_6;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey4
	{
		// Fields
		internal LevelErrorPopup errorPopup;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey4();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey5
	{
		// Fields
		internal BundleErrorPopUp errorPopup;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey5();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public BundleView();

	// Methods
	public void Initialize();
	public void OnBundlePurchaseClicked();
	private void OnPurchaseBundleConfirmation(bool confirmed);
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> purchaseResponseData);
	private void OnPop();
	private void OnInsufficientResourceCallback(bool confirmed);
	private void OnInsufficientLevelCallback();
	private void HandlePrices(AccessoryBundleClient accessoryData);
	private void HandleLevel(AccessoryBundleClient accessoryData);
	[CompilerGenerated]
	private static void _OnPurchaseBundleConfirmation_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPop_m__2(IBundleController x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnInsufficientResourceCallback_m__3(IUIStack x, BaseEventData y);
}

