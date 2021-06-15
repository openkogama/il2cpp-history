/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierTestDetailsPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tierText;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private GamePassesShop gamePassesShopPrefab;
	private GamePassTier tierToPurchase;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowTier_c__AnonStorey0
	{
		// Fields
		internal GamePassesShop gamePassesShop;

		// Constructors
		public _ShowTier_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TierTestDetailsPopup();

	// Methods
	public void Initialize(GamePassTier tierToPurchase, int price);
	public void ShowTier();
	public void Test();
	private void OnEnable();
	[CompilerGenerated]
	private static void _Test_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnEnable_m__1(IUIStack x, BaseEventData y);
}

