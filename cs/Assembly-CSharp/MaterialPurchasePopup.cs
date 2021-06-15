/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialPurchasePopup : MonoBehaviour
{
	// Fields
	private Dictionary<object, object> purchaseResponseData;
	private UnityAction<bool, Dictionary<object, object>> callback;
	private byte materialID;
	[SerializeField]
	private UnityEngine.UI.Text price;
	[SerializeField]
	private UnityEngine.UI.Text productName;
	[SerializeField]
	private UnityEngine.UI.Text description;
	[SerializeField]
	private RawImage materialPreviewImage;
	[SerializeField]
	private MaterialPreviewer materialPreviewer;
	[SerializeField]
	private GameObject purchaseButton;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
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
		internal MaterialPurchasePopup _this;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public MaterialPurchasePopup();

	// Methods
	public void Initialize(byte materialID, UnityAction<bool, Dictionary<object, object>> callback);
	private void OnDestroy();
	public void OnPurchaseClick();
	private void OnConfirmed(bool confirmed, ConfirmationPopup confirmationPopup);
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> purchaseResponseData);
	[CompilerGenerated]
	private void _OnPurchaseClick_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnConfirmed_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnConfirmed_m__2(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__3(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__4(IUIStack x, BaseEventData y);
}

