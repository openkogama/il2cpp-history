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

public class ItemPurchasePopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text cost;
	[SerializeField]
	private UnityEngine.UI.Text nonSubscriberCost;
	[SerializeField]
	private UnityEngine.UI.Text itemName;
	[SerializeField]
	private RawImage itemImage;
	[SerializeField]
	private UnityEngine.UI.Text description;
	[SerializeField]
	private ItemPurchaseConfirmationPopup confirmationPopup;
	private ShopItem item;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass10_0
	{
		// Fields
		public ItemPurchaseConfirmationPopup popup;

		// Constructors
		public __c__DisplayClass10_0();

		// Methods
		internal void _OnPurchaseClicked_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_2;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ConfirmationCallback_b__12_1(IUIStack handler, BaseEventData data);
		internal void _ConfirmationCallback_b__12_2(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public ItemPurchasePopup();

	// Methods
	private void Initialize(RawImage image, string nameText, string priceGold, string desc);
	public void Initialize(RawImage image, ShopItem shopItem);
	public void Initialize(RawImage image, InventoryItem invItem);
	public void OnPurchaseClicked();
	private void PurchaseItem(IPurchaseClientShopItem x);
	private void ConfirmationCallback(bool result);
	[CompilerGenerated]
	private void _OnPurchaseClicked_b__10_0(IPurchaseClientShopItem x, BaseEventData y);
	[CompilerGenerated]
	private void _ConfirmationCallback_b__12_0(IPurchaseClientShopItem x, BaseEventData y);
}

