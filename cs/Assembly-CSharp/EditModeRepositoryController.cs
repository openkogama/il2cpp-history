/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class EditModeRepositoryController : MonoBehaviour
{
	// Fields
	private ShopItem currentlyBuyingItem;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey0
	{
		// Fields
		internal int returnCode;
		internal EditModeRepositoryController _this;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public EditModeRepositoryController();

	// Methods
	public void PurchaseClientShopItem(ShopItem item, UnityAction UpdateContent);
	public void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> data);
	[CompilerGenerated]
	private static void _PurchaseClientShopItem_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _PurchaseClientShopItem_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__2(IUIStack x, BaseEventData y);
}

