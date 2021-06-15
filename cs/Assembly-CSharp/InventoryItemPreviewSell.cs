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

public class InventoryItemPreviewSell : ManageItemPage
{
	// Fields
	[SerializeField]
	private InputField itemName;
	[SerializeField]
	private InputField description;
	[SerializeField]
	private RawImage previewImage;
	[SerializeField]
	private Button removeFromMarketButton;
	[SerializeField]
	private UnityEngine.UI.Text sellButtonText;
	[SerializeField]
	private Button sellButton;
	[SerializeField]
	private ProgressBarAndroid compareSlider;
	[SerializeField]
	private RectTransform thresholdCaret;
	[SerializeField]
	private RectTransform sliderTransform;
	[SerializeField]
	private UnityEngine.UI.Text compareText;
	private InventoryItem previewItem;
	private bool addingToMarket;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache3;

	// Nested types
	[CompilerGenerated]
	private sealed class _AddToMarket_c__AnonStorey0
	{
		// Fields
		internal string txt;

		// Constructors
		public _AddToMarket_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnRemoveFromMarketplace_c__AnonStorey1
	{
		// Fields
		internal string txt;

		// Constructors
		public _OnRemoveFromMarketplace_c__AnonStorey1();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnAddToMarketplaceReturn_c__AnonStorey2
	{
		// Fields
		internal string txt;

		// Constructors
		public _OnAddToMarketplaceReturn_c__AnonStorey2();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnAddToMarketplaceReturn_c__AnonStorey3
	{
		// Fields
		internal string txt;

		// Constructors
		public _OnAddToMarketplaceReturn_c__AnonStorey3();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public InventoryItemPreviewSell();

	// Methods
	public override void Initialize(RawImage preview, InventoryItem item);
	public void AddToMarket();
	public void RemoveFromMarket();
	private void OnRemoveFromMarketplace(bool success);
	private void OnAddToMarketplaceReturn(bool success);
	private void OnLoadMarketPlaceItem(object sender, ReceivedItemFromQueryEventArgs e);
	[CompilerGenerated]
	private static void _AddToMarket_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnRemoveFromMarketplace_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnAddToMarketplaceReturn_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnAddToMarketplaceReturn_m__3(IUIStack x, BaseEventData y);
}

