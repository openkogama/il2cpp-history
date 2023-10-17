/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Properties
	public MVWorldObjectDocumentationType DocumentationType { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public InventoryItem inventoryItem;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _SlotPressed_b__1(IAddItemFromInventory x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__13_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _SlotPressed_b__12_0(IUIStack handler, BaseEventData data);
		internal void _ShowPurchasePopUp_b__13_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass13_0
	{
		// Fields
		public ItemPurchasePopup purchasePopup;

		// Constructors
		public __c__DisplayClass13_0();

		// Methods
		internal void _ShowPurchasePopUp_b__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public EditModeClientShopItem();

	// Methods
	public void Initialize(Transform rootTransform, ShopItem item, MVWorldObjectClient woPreviewObject);
	public void SlotPressed();
	public void ShowPurchasePopUp();
	public void Update();
	public InventoryItem GetItem();
}

