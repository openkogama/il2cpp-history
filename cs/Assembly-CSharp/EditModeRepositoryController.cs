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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class EditModeRepositoryController : MonoBehaviour
{
	// Fields
	private ShopItem currentlyBuyingItem;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__2_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__3_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__3_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__4_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnConfirmed_b__2_0(IUIStack x, BaseEventData y);
		internal void _PurchaseClientShopItem_b__3_0(IUIStack x, BaseEventData y);
		internal void _PurchaseClientShopItem_b__3_1(IModalPopupCreator x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__4_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public int returnCode;
		public EditModeRepositoryController __4__this;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__1(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass4_1
	{
		// Fields
		public InventoryItem inventoryItem;

		// Constructors
		public __c__DisplayClass4_1();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__2(IAddItemFromInventory x, BaseEventData y);
	}

	// Constructors
	public EditModeRepositoryController();

	// Methods
	public void PurchaseClientShopItem(ShopItem item, UnityAction UpdateContent);
	private void OnConfirmed(bool confirmed, ConfirmationPopup confirmationPopup);
	private void PurchaseClientShopItem();
	public void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> data);
	[CompilerGenerated]
	private void _PurchaseClientShopItem_b__1_0(IModalPopupCreator x, BaseEventData y);
}

