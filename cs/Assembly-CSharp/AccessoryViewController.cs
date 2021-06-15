/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryViewController : MonoBehaviour, IAccessoryClicked, IBundleController
{
	// Fields
	[SerializeField]
	private AvatarAccessoryPreviewer previewer;
	[SerializeField]
	private AccessoryView accessoryView;
	[SerializeField]
	private GameObject inventoryView;
	[SerializeField]
	private BundleView bundlePurchaseOptions;
	[SerializeField]
	private AccessoryShopToggleInventory backbackController;
	[SerializeField]
	private TabMenuAccessoryShop tabMenuAccessoryShop;
	[SerializeField]
	private GameObject featuredTabFlare;
	[SerializeField]
	private LevelProgressAccessoryShop levelProgress;
	[SerializeField]
	private GameObject playerGoldGameObject;
	private Color prevLight;
	private bool wasEnabled;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAccessoryInventoryControl> __f__am_cache0;

	// Constructors
	public AccessoryViewController();

	// Methods
	private void Start();
	private void OnDestroy();
	public void UpdateHighlightedTab(AccessoryCategoryClient category);
	public void OpenAccessoryManagementScreen(AccessoryDataClient accessoryData);
	public void OpenCategoryScreen(bool canSortByInventory);
	public void ShowBundle();
	private void HideScreens();
	public void PurchasedBundle();
	public void DisplayCategoryFeatures(AccessoryCategoryClient category);
	[CompilerGenerated]
	private static void _PurchasedBundle_m__0(IAccessoryInventoryControl x, BaseEventData y);
}

