/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class EditModeClientShopItem : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage previewImage;
	[SerializeField]
	private int previewWidth;
	[SerializeField]
	private int previewHeight;
	[SerializeField]
	private ItemPurchasePopup popup;
	[SerializeField]
	private InventoryItemPreviewer objectPreviewerPrefab;
	private ShopItem item;
	private InventoryItemPreviewer objectPreviewer;
	private bool initialized;
	private MVWorldObjectDocumentationType documentationType;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Properties
	public MVWorldObjectDocumentationType DocumentationType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _SlotPressed_c__AnonStorey0
	{
		// Fields
		internal InventoryItem inventoryItem;

		// Constructors
		public _SlotPressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IAddItemFromInventory x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowPurchasePopUp_c__AnonStorey1
	{
		// Fields
		internal ItemPurchasePopup purchasePopup;

		// Constructors
		public _ShowPurchasePopUp_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public EditModeClientShopItem();

	// Methods
	public void Initialize(Transform rootTransform, ShopItem item, MVWorldObjectClient woPreviewObject);
	public void SlotPressed();
	public void ShowPurchasePopUp();
	public void Update();
	public InventoryItem GetItem();
	[CompilerGenerated]
	private static void _SlotPressed_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ShowPurchasePopUp_m__1(IUIStack handler, BaseEventData data);
}

