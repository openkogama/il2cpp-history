/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierPurchasePopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tierText;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	private GamePassTier tierToPurchase;
	private int price;
	private UnityAction OnPurchaseSuccessful;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__6_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__7_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__8_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__8_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Purchase_b__6_0(IModalPopupCreator x, BaseEventData y);
		internal void _Cancel_b__7_0(IUIStack x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__8_0(IUIStack x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__8_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public int returnCode;
		public TierPurchasePopup __4__this;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__2(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public TierPurchasePopup();

	// Methods
	public void Initialize(GamePassTier tierToPurchase, int price, UnityAction OnPurchaseSuccessful);
	public void Purchase();
	public void Cancel();
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> purchaseResponseData);
	private void HandleSuccessfulPurchase();
}

