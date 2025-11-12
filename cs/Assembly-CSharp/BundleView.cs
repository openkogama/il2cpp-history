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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private UnityEngine.UI.Button purchaseButton;
	[SerializeField]
	private AccessoryShinyButton shineEffect;
	private AccessoryBundleClient bundleData;
	private int price;
	private int originalPrice;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__19_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__20_0;
		public static ExecuteEvents.EventFunction<IBundleController> __9__21_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__22_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnPurchaseBundleConfirmation_b__19_0(IUIStack x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__20_0(IUIStack x, BaseEventData y);
		internal void _OnPop_b__21_0(IBundleController x, BaseEventData y);
		internal void _OnInsufficientResourceCallback_b__22_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass18_0
	{
		// Fields
		public LevelErrorPopup errorPopup;

		// Constructors
		public __c__DisplayClass18_0();

		// Methods
		internal void _OnBundlePurchaseClicked_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass18_1
	{
		// Fields
		public BundleErrorPopUp errorPopup;

		// Constructors
		public __c__DisplayClass18_1();

		// Methods
		internal void _OnBundlePurchaseClicked_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass18_2
	{
		// Fields
		public BundlePurchasePopUp popup;

		// Constructors
		public __c__DisplayClass18_2();

		// Methods
		internal void _OnBundlePurchaseClicked_b__2(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_0
	{
		// Fields
		public BundleView __4__this;
		public int returnCode;

		// Constructors
		public __c__DisplayClass20_0();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__1(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_1
	{
		// Fields
		public PurchasedAccessoryPreviewer popup;
		public __c__DisplayClass20_0 CS___8__locals1;

		// Constructors
		public __c__DisplayClass20_1();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__2(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_2
	{
		// Fields
		public LevelErrorPopup errorPopup;

		// Constructors
		public __c__DisplayClass20_2();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__3(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_3
	{
		// Fields
		public BundleErrorPopUp errorPopup;

		// Constructors
		public __c__DisplayClass20_3();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__4(IUIStack x, BaseEventData y);
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
}

