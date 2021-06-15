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

public class InventoryItemCubeModelHandler : InventoryItemPreview
{
	// Fields
	[SerializeField]
	private InventoryItemPreviewSell inventoryItemPreviewSellPrefab;
	private InventoryItem previewedItem;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnDeleteConfirmation_c__AnonStorey0
	{
		// Fields
		internal string text;

		// Constructors
		public _OnDeleteConfirmation_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
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
	private static void _OnSellClicked_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private void _OnDeleteClicked_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnDeleteConfirmation_m__2(IUIStack x, BaseEventData y);
}

