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

public class AvatarAccessoryPurchasePopup : MonoBehaviour
{
	// Fields
	private AccessoryDataClient accessoryDataClient;
	[SerializeField]
	private StreamedSpriteToImageManual preview;
	[SerializeField]
	private GameObject loadingWheel;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private UnityEngine.UI.Text originalPriceText;
	[SerializeField]
	private GameObject discountTag;
	[SerializeField]
	private GameObject freeItemTag;
	[SerializeField]
	private UnityEngine.UI.Text discountTagText;
	[SerializeField]
	private AccessoryItemBackground accessoryItemBackground;
	[SerializeField]
	private AccessoryTimeLimitDisplayer timeLimitDisplayer;
	[SerializeField]
	private GameObject newAccessoryImage;
	[SerializeField]
	private AvatarAccessorySuccesPopup avatarAccessorySuccesPopup;
	[SerializeField]
	private AvatarAccessoryErrorPopup insufficientResourcesPopup;
	[SerializeField]
	private PurchasedAccessoryPreviewer successPreviewer;
	[SerializeField]
	private GameObject emptyFrame;
	private int price;
	private string previewImageUrl;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache3;

	// Nested types
	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey0
	{
		// Fields
		internal int returnCode;
		internal AvatarAccessoryPurchasePopup _this;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _HandleInsufficientResources_c__AnonStorey1
	{
		// Fields
		internal AvatarAccessoryErrorPopup confirmationPopup;

		// Constructors
		public _HandleInsufficientResources_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _SuccessfulPopupCallBack_c__AnonStorey2
	{
		// Fields
		internal PurchasedAccessoryPreviewer popup;
		internal AvatarAccessoryPurchasePopup _this;

		// Constructors
		public _SuccessfulPopupCallBack_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AvatarAccessoryPurchasePopup();

	// Methods
	public void Initialize(AccessoryDataClient accessoryDataClient, string previewImageUrl);
	public void Purchase();
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> purchaseResponseData);
	private void HandleInsufficientResources(string header, string buttonText);
	private void OnGoldPurchaseDialogResult(bool result);
	private void HandleSuccessfulPurchase(Dictionary<object, object> purchaseResponseData);
	private void SuccessfulPopupCallBack(int streamingAssetId);
	public void Pop();
	private void HandlePrices(AccessoryDataClient streamingAssetInfo);
	private void HandleNotOwnedUI();
	private void OnPreviewImageDownLoaded();
	[CompilerGenerated]
	private static void _Purchase_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnGoldPurchaseDialogResult_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _Pop_m__3(IUIStack x, BaseEventData y);
}

