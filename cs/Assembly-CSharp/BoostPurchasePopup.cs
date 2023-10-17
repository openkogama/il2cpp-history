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
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostPurchasePopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text headerText;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private RectTransform boostImageParent;
	[SerializeField]
	private List<BoosterDef> boosterList;
	private string boostKey;
	private int price;
	private UnityAction OnPurchaseSuccessful;

	// Nested types
	[Serializable]
	private struct BoosterDef
	{
		// Fields
		public BoostType type;
		public GameObject iconPrefab;
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__8_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Purchase_b__8_0(IModalPopupCreator x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__9_0(IUIStack x, BaseEventData y);
		internal void _ProductPurchaseResponseHandler_b__9_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public int returnCode;
		public BoostPurchasePopup __4__this;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _ProductPurchaseResponseHandler_b__2(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public BoostPurchasePopup();

	// Methods
	public void Initialize(BoostType boostType, string boostKey, string boostName, int price, UnityAction OnPurchaseSuccessful);
	public void Purchase();
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> purchaseResponseData);
	private void HandleSuccessfulPurchase();
	private void CreateBoostImage(BoostType boostType);
}

