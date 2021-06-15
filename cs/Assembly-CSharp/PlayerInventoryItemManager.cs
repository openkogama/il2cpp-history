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

public class PlayerInventoryItemManager : MonoBehaviour, ITabSelected
{
	// Fields
	[SerializeField]
	private TabMenuButton tabMenuButtonPrefab;
	[SerializeField]
	private RectTransform tabsRoot;
	[SerializeField]
	private RectTransform pageContentRoot;
	[SerializeField]
	private ItemInfoTab infoTabPrefab;
	[SerializeField]
	private InventoryItemPreviewSell itemSellTabPrefab;
	[SerializeField]
	private ItemInventoryDeleteTab ItemRemovalPrefab;
	private readonly List<ItemManagePageDef> tabList;
	private int currentTab;
	private InventoryItem previewedItem;
	private ManageItemPage currentManageItemPage;
	private RawImage itemImage;

	// Nested types
	private class ItemManagePageDef
	{
		// Fields
		public readonly TabMenuButton Button;
		public readonly ManageItemPage PageItemPrefab;

		// Constructors
		public ItemManagePageDef(TabMenuButton button, ManageItemPage pageItemPrefab);
	}

	// Constructors
	public PlayerInventoryItemManager();

	// Methods
	public void Initialize(InventoryItem item, RawImage itemPreview);
	private void AddTabMenuButton(int categoryIndex, string categoryName, ManageItemPage pageItem);
	public void TabSelected(int tabId);
	public void UpdateContent();
}

