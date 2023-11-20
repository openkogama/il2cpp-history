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

public class EditModeClientShopController : MonoBehaviour, IPurchaseClientShopItem, IOpenClientShop, IHighLightClientShopItem, IOpenClientShopTab, IOpenClientShopPage
{
	// Fields
	[SerializeField]
	private InventoryController inventoryControllerPrefab;
	[SerializeField]
	private int numberOfSlotsPrPage;
	[SerializeField]
	private EditModeClientShopItem previewItemPrefab;
	private Transform previewRootTransform;
	private InventoryController inventoryController;
	private int selectedTab;
	private readonly Dictionary<int, TabState> tabs;
	private readonly Dictionary<int, string> tabsNonLocalized;
	private readonly List<MVWorldObjectClient> previewedObjects;
	private PlayerShopInventoryRepository playerShopInventoryRepository;
	private EditModeRepositoryController repositoryController;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Activate_b__12_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public EditModeClientShopController __4__this;
		public UIPushOption pushOption;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _Activate_b__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public EditModeClientShopController();

	// Methods
	public void Initialize(EditModeRepositoryController repositoryController);
	public void Activate(UIPushOption pushOption);
	private void OnPop();
	private void TabSelected(int tab);
	private void PageTurned(int dir);
	private void UpdateContent();
	private static MVWorldObjectClient GetWorldObjectFromItemData(ShopItem item);
	public void PurchaseItem(ShopItem item);
	public void HighlightAtCategoryWithSlot(UIPushOption options, int categoryId, int slotPosition);
	public void OpenTab(UIPushOption options, int categoryId);
	public void OpenPage(UIPushOption options, int categoryId, int slotPosition);
}

