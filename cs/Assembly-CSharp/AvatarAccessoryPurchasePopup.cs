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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__18_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__19_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__21_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__24_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Purchase_b__18_0(IModalPopupCreator x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__19_0(IUIStack x, BaseEventData y);
		internal void _OnGoldPurchaseDialogResult_b__21_0(IUIStack x, BaseEventData y);
		internal void _Pop_b__24_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public int returnCode;
		public AvatarAccessoryPurchasePopup __4__this;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__1(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_0
	{
		// Fields
		public AvatarAccessoryErrorPopup confirmationPopup;

		// Constructors
		public __c__DisplayClass20_0();

		// Methods
		internal void _HandleInsufficientResources_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass23_0
	{
		// Fields
		public PurchasedAccessoryPreviewer popup;
		public AvatarAccessoryPurchasePopup __4__this;

		// Constructors
		public __c__DisplayClass23_0();

		// Methods
		internal void _SuccessfulPopupCallBack_b__0(IUIStack x, BaseEventData y);
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
}

