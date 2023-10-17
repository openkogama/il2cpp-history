/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UGUI.Desktop.Scripts.EditMode.Inventories;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerInventoryController : MonoBehaviour, IPlayerInventory
{
	// Fields
	[SerializeField]
	private InventoryController inventoryControllerPrefab;
	[SerializeField]
	private int numberOfSlotsPrPage;
	[SerializeField]
	private PlayerInventoryPreviewItem previewItemPrefab;
	private Transform previewRootTransform;
	private Transform tempPreviewRoot;
	private InventoryController inventoryController;
	private int selectedTab;
	private readonly Dictionary<int, TabState> tabs;
	private readonly Dictionary<int, string> tabsNonLocalized;
	private readonly List<MVWorldObjectClient> previewedObjects;
	private PlayerShopInventoryRepository repository;
	private List<InventoryItem> items;
	private List<InventoryItem> itemsWithData;
	private PlayerInventoryPreviewItem draggedPreviewItem;
	private MVWorldObjectClient worldObjectDataCopy;
	private InventoryItemPreviewer draggedPreview;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass20_0
	{
		// Fields
		public PlayerInventoryController __4__this;
		public UIPushOption options;

		// Constructors
		public __c__DisplayClass20_0();

		// Methods
		internal void _Activate_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__20_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Activate_b__20_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public PlayerInventoryController();

	// Methods
	public void Initialize();
	private void InventoryChanged();
	private void UpdatePageCount();
	private static bool UsingDragAndDrop(InventoryCategoryType categoryType);
	public void Activate(UIPushOption options);
	public void OpenTab(UIPushOption options, int categoryId);
	public void OpenPage(UIPushOption options, int categoryId, int slotPosition);
	public void ActivateAtCategoryWithSlot(UIPushOption options, int categoryId, int slotPosition);
	private void OnPop();
	private void TabSelected(int tab);
	private void PageTurned(int dir);
	private void PreserveDraggedItemAcrossPages();
	public void UpdateContent();
	private void UpdateSlotsWithDragAndDrop(TabState tabState);
	private void UpdateSlots(TabState tabState);
	private void SlotChanged(int from, int to);
	private static MVWorldObjectClient GetWorldObjectFromItemData(InventoryItem item);
	public void SetCurrentDragTarget(GameObject draggingGameObject);
	public void DragFailed();
	public void ItemDataLoaded(PlayerInventoryPreviewItem itemPreview, InventoryItem inventoryItem);
}

