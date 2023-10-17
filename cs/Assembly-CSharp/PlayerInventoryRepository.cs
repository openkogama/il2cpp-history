/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerInventoryRepository
{
	// Fields
	private readonly Dictionary<int, List<InventoryItem>> repository;
	public readonly Dictionary<InventoryCategoryType, string> categories;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public InventoryItem item;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal bool _CountItemsWithOriginalID_b__0(InventoryItem p);
	}

	// Constructors
	public PlayerInventoryRepository();

	// Methods
	public void AddItem(InventoryItem item);
	public void RemoveItem(InventoryItem item);
	public int CountItemsWithOriginalID(InventoryItem item);
	public void RemoveItem(int itemID);
	public void SwapItemSlotPositions(InventoryItem from, InventoryItem to);
	public void UpdateShopInventoryID(int itemID, int shopInventoryID);
	public List<InventoryItem> GetItemsInCategory(InventoryCategoryType category);
	public List<InventoryItem> GetItemsInCategorySlow(string category);
	public bool GetItemByWorldObjectTypeInCategory(InventoryCategoryType inventoryCategory, WorldObjectType wo, out InventoryItem item);
	public int CategoryItemCount(int category);
	public int HighestSlotIndex(InventoryCategoryType category);
	public InventoryItem AddPurchasedItem(ShopItem purchasedItem);
	public void UpdateItemData(int itemID, int itemCategoryID, byte[] data);
	private InventoryItem GetInventoryItem(int itemID, int itemCategoryID);
}

