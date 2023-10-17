/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IAccessoryInventoryControl> __9__18_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _PurchasedBundle_b__18_0(IAccessoryInventoryControl x, BaseEventData y);
	}

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
}

