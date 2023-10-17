/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesViewCrystalsInInventory : MonoBehaviour
{
	// Fields
	private List<ShopItem> buyingItems;
	private int pending;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__3_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__9_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _HighlightObject_b__3_0(IUIStack x, BaseEventData y);
		internal void _PurchaseClientShopItem_b__9_0(IModalPopupCreator x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__10_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public int categoryId;
		public int itemSlot;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal void _OpenInventoryAtPosition_b__0(IPlayerInventory x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass10_0
	{
		// Fields
		public int returnCode;

		// Constructors
		public __c__DisplayClass10_0();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass10_1
	{
		// Fields
		public ShopItem currentlyBuyingItem;
		public __c__DisplayClass10_0 CS___8__locals1;

		// Constructors
		public __c__DisplayClass10_1();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__1(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public GamePassesViewCrystalsInInventory();

	// Methods
	public void OnClickGetCrystals();
	private void HighlightObject(WorldObjectType worldObjectType);
	private int GetItemSlot(WorldObjectType worldObjectType);
	private void OnInventoryItemAdded(int category, int slot);
	private void TryPurchaseCrystalItems();
	private void PurchaseItem(WorldObjectType woType);
	private void OpenInventoryAtPosition(int categoryId, int itemSlot);
	private void PurchaseClientShopItem(ShopItem item);
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> data);
}

