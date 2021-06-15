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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesViewCrystalsInInventory : MonoBehaviour
{
	// Fields
	private List<ShopItem> buyingItems;
	private int pending;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _OpenInventoryAtPosition_c__AnonStorey0
	{
		// Fields
		internal int categoryId;
		internal int itemSlot;

		// Constructors
		public _OpenInventoryAtPosition_c__AnonStorey0();

		// Methods
		internal void __m__0(IPlayerInventory x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey1
	{
		// Fields
		internal int returnCode;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey1();
	}

	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey2
	{
		// Fields
		internal ShopItem currentlyBuyingItem;
		internal _ProductPurchaseResponseHandler_c__AnonStorey1 __f__ref_1;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey2();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
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
	[CompilerGenerated]
	private static void _HighlightObject_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _PurchaseClientShopItem_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__2(IUIStack x, BaseEventData y);
}

