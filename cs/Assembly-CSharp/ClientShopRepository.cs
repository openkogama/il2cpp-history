/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ClientShopRepository
{
	// Fields
	private readonly Dictionary<int, List<ShopItem>> repository;
	public readonly Dictionary<InventoryCategoryType, string> categories;
	[CompilerGenerated]
	private static Func<ShopItem, int> __f__am_cache0;

	// Constructors
	public ClientShopRepository();

	// Methods
	public void AddItem(ShopItem item);
	public void RemoveItem(ShopItem item);
	public List<ShopItem> GetItemsInCategory(InventoryCategoryType category);
	public List<ShopItem> GetItemsInCategorySlow(string category);
	public string GetCategoryStringFromId(InventoryCategoryType category);
	public int CategoryItemCount(InventoryCategoryType category);
	public bool GetItemByWorldObjectTypeInCategory(InventoryCategoryType inventoryCategory, WorldObjectType wo, out ShopItem item);
	public bool IsItemShopInventory(string itemName, InventoryCategoryType inventoryCategory);
	public void ReorganizeBySlotPositions();
	[CompilerGenerated]
	private static int _ReorganizeBySlotPositions_m__0(ShopItem o);
}

