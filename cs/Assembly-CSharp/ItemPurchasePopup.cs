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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnPurchaseClicked_c__AnonStorey0
	{
		// Fields
		internal ItemPurchaseConfirmationPopup popup;

		// Constructors
		public _OnPurchaseClicked_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ItemPurchasePopup();

	// Methods
	public void Initialize(RawImage image, ShopItem item);
	public void OnPurchaseClicked();
	private void ConfirmationCallback(bool result);
	[CompilerGenerated]
	private void _OnPurchaseClicked_m__0(IPurchaseClientShopItem x, BaseEventData y);
	[CompilerGenerated]
	private void _ConfirmationCallback_m__1(IPurchaseClientShopItem x, BaseEventData y);
	[CompilerGenerated]
	private static void _ConfirmationCallback_m__2(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _ConfirmationCallback_m__3(IUIStack handler, BaseEventData data);
}

