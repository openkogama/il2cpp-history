/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.Inventories
{
	public class PlayerShopInventoryRepository
	{
		// Fields
		public Action OnFailedToAddItem;
		public Action OnInventoryChanged;
		public Action OnFailedToLoadItem;
		public Action<int, int, bool> OnInventoryItemAdded;
		public float ItemLoadingTick;
		[CompilerGenerated]
		private ClientShopRepository _clientShopRepository_k__BackingField;
		[CompilerGenerated]
		private PlayerInventoryRepository _playerInventoryRepository_k__BackingField;
	
		// Properties
		private ClientShopRepository clientShopRepository { [CompilerGenerated] get; [CompilerGenerated] set; }
		private PlayerInventoryRepository playerInventoryRepository { [CompilerGenerated] get; [CompilerGenerated] set; }
		public Dictionary<InventoryCategoryType, string> InventoryCategories { get; }
		public Dictionary<InventoryCategoryType, string> ShopCategories { get; }
	
		// Constructors
		public PlayerShopInventoryRepository();
	
		// Methods
		public int ShopCategoryItemCount(InventoryCategoryType category);
		public List<ShopItem> GetShopItemsInCategorySlow(string category);
		public void Setup(ExitGames.Client.Photon.EventData photonEvent);
		public void RemoveItemFromInventory(int itemID);
		public void AddShopItems(Dictionary<object, object> outData, bool isDone);
		public void FailedToAddItem();
		public void AddItemToInventory(InventoryItem item);
		public void UpdatePlayerShopInventoryID(int itemID, int shopInventoryID);
		public int HighestSlotIndex(InventoryCategoryType categoryID);
		public InventoryItem AddPurchasedItem(ShopItem shopItem);
		public bool HasShopWorldObjectType(WorldObjectType worldObjectType);
		public void RemoveInventoryItem(InventoryItem previewedItem);
		public int CountInventoryItemsWithOriginalID(InventoryItem item);
		public List<InventoryItem> GetInventoryItemsInCategorySlow(string s);
		public void SwapInventoryItemSlotPositions(InventoryItem source, InventoryItem destination);
		public string GetShopCategoryStringFromId(InventoryCategoryType inventoryCategoryType);
		public bool GetInventoryItemByWorldObjectTypeInCategory(InventoryCategoryType pickups, WorldObjectType worldObjectType, out InventoryItem item);
		public bool GetShopItemByWorldObjectTypeInCategory(InventoryCategoryType pickups, WorldObjectType woType, out ShopItem item);
		public void UpdateItemData(int itemID, int itemCategoryID, byte[] data);
	}
}
