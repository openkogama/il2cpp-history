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
	private ClientShopRepository repository;
	private EditModeRepositoryController repositoryController;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _Activate_c__AnonStorey0
	{
		// Fields
		internal UIPushOption pushOption;
		internal EditModeClientShopController _this;

		// Constructors
		public _Activate_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	[CompilerGenerated]
	private static void _Activate_m__0(IUIStack handler, BaseEventData data);
}

