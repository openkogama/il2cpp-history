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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[Serializable]
	private struct BoosterDef
	{
		// Fields
		public BoostType type;
		public GameObject iconPrefab;
	}

	[CompilerGenerated]
	private sealed class _ProductPurchaseResponseHandler_c__AnonStorey0
	{
		// Fields
		internal int returnCode;
		internal BoostPurchasePopup _this;

		// Constructors
		public _ProductPurchaseResponseHandler_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public BoostPurchasePopup();

	// Methods
	public void Initialize(BoostType boostType, string boostKey, string boostName, int price, UnityAction OnPurchaseSuccessful);
	public void Purchase();
	private void ProductPurchaseResponseHandler(int returnCode, Dictionary<object, object> purchaseResponseData);
	private void HandleSuccessfulPurchase();
	private void CreateBoostImage(BoostType boostType);
	[CompilerGenerated]
	private static void _Purchase_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ProductPurchaseResponseHandler_m__2(IUIStack x, BaseEventData y);
}

