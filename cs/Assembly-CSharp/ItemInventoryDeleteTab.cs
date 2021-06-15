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

public class ItemInventoryDeleteTab : ManageItemPage
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text itemName;
	[SerializeField]
	private RawImage preview;
	private InventoryItem previewedItem;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnConfirmation_c__AnonStorey0
	{
		// Fields
		internal string text;

		// Constructors
		public _OnConfirmation_c__AnonStorey0();

		// Methods
		internal void __m__0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public ItemInventoryDeleteTab();

	// Methods
	public override void Initialize(RawImage image, InventoryItem item);
	public void OnRemoveFromInventory();
	public void OnConfirmation(bool affirmative, ConfirmationPopup popup);
	[CompilerGenerated]
	private void _OnRemoveFromInventory_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnConfirmation_m__1(IUIStack x, BaseEventData y);
}

