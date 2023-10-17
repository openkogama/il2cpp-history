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

public class InventoryItemCubeModelHandler : InventoryItemPreview
{
	// Fields
	[SerializeField]
	private InventoryItemPreviewSell inventoryItemPreviewSellPrefab;
	private InventoryItem previewedItem;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__3_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__7_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnSellClicked_b__3_0(IModalPopupCreator x, BaseEventData y);
		internal void _OnDeleteConfirmation_b__7_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public string text;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _OnDeleteConfirmation_b__1(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public InventoryItemCubeModelHandler();

	// Methods
	public override void Initialize(InventoryItem item, RawImage image);
	public void OnSellClicked();
	private void OnSellUpdated();
	public void OnDeleteClicked();
	private void Update();
	public void OnDeleteConfirmation(bool affirmative, ConfirmationPopup popup);
	[CompilerGenerated]
	private void _OnDeleteClicked_b__5_0(IModalPopupCreator x, BaseEventData y);
}

