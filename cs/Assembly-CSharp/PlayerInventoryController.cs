/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private PlayerInventoryRepository repository;
	private List<InventoryItem> items;
	private PlayerInventoryPreviewItem draggedPreviewItem;
	private MVWorldObjectClient worldObjectDataCopy;
	private InventoryItemPreviewer draggedPreview;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _Activate_c__AnonStorey0
	{
		// Fields
		internal UIPushOption options;
		internal PlayerInventoryController _this;

		// Constructors
		public _Activate_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PlayerInventoryController();

	// Methods
	public void Initialize();
	private void InventoryChanged();
	private void UpdatePageCount();
	public void Activate(UIPushOption options);
	public void OpenTab(UIPushOption options, int categoryId);
	public void ActivateAtCategoryWithSlot(UIPushOption options, int categoryId, int slotPosition);
	private void OnPop();
	private void TabSelected(int tab);
	private void PageTurned(int dir);
	private void PreserveDraggedItemAcrossPages();
	public void UpdateContent();
	private void SlotChanged(int from, int to);
	private static MVWorldObjectClient GetWorldObjectFromItemData(InventoryItem item);
	public void SetCurrentDragTarget(GameObject draggingGameObject);
	public void DragFailed();
	[CompilerGenerated]
	private static void _Activate_m__0(IUIStack handler, BaseEventData data);
}

