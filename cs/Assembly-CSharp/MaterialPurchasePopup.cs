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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__12_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__13_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__13_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnConfirmed_b__12_0(IUIStack x, BaseEventData y);
		internal void _OnConfirmed_b__12_1(IModalPopupCreator x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__13_0(IUIStack x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__13_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass13_0
	{
		// Fields
		public int returnCode;
		public MaterialPurchasePopup __4__this;

		// Constructors
		public __c__DisplayClass13_0();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__2(IModalPopupCreator x, BaseEventData y);
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
	private void _OnPurchaseClick_b__11_0(IModalPopupCreator x, BaseEventData y);
}

