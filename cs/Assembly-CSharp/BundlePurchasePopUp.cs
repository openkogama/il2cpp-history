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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

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
	[CompilerGenerated]
	private static void _OnGoldPurchaseDialogResult_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _Pop_m__1(IUIStack x, BaseEventData y);
}

