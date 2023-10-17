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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass13_0
	{
		// Fields
		public string txt;

		// Constructors
		public __c__DisplayClass13_0();

		// Methods
		internal void _AddToMarket_b__1(IModalPopupCreator x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__13_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__15_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__16_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__16_2;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _AddToMarket_b__13_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnRemoveFromMarketplace_b__15_0(IUIStack x, BaseEventData y);
		internal void _OnAddToMarketplaceReturn_b__16_0(IUIStack x, BaseEventData y);
		internal void _OnAddToMarketplaceReturn_b__16_2(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public string txt;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _OnRemoveFromMarketplace_b__1(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass16_0
	{
		// Fields
		public string txt;

		// Constructors
		public __c__DisplayClass16_0();

		// Methods
		internal void _OnAddToMarketplaceReturn_b__1(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass16_1
	{
		// Fields
		public string txt;

		// Constructors
		public __c__DisplayClass16_1();

		// Methods
		internal void _OnAddToMarketplaceReturn_b__3(IModalPopupCreator x, BaseEventData y);
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
}

