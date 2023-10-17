/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BundlePurchasePopUp : MonoBehaviour
{
	// Fields
	private AccessoryBundleClient bundleDataClient;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private UnityEngine.UI.Text originalPriceText;
	[SerializeField]
	private GameObject discountTag;
	[SerializeField]
	private UnityEngine.UI.Text discountTagText;
	[SerializeField]
	private AccessoryTimeLimitDisplayer timeLimitDisplayer;
	[SerializeField]
	private GameObject freeLabel;
	private int originalPrice;
	private UnityAction<bool> resultCallback;

	// Nested types
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
		internal void _OnGoldPurchaseDialogResult_b__12_0(IUIStack x, BaseEventData y);
		internal void _Pop_b__13_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public BundlePurchasePopUp();

	// Methods
	public void Initialize(AccessoryBundleClient bundleDataClient, int price, int originalPrice, UnityAction<bool> resultCallback);
	public void Purchase();
	public void Exit();
	private void OnGoldPurchaseDialogResult(bool result);
	public void Pop();
	private void HandlePrices(AccessoryBundleClient bundleDataClient);
	private void HandleNotOwnedUI();
}

