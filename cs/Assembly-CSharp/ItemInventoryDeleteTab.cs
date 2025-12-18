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

public class ItemInventoryDeleteTab : ManageItemPage
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text itemName;
	[SerializeField]
	private RawImage preview;
	[SerializeField]
	private UnityEngine.UI.Button deleteButton;
	private InventoryItem previewedItem;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__6_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnConfirmation_b__6_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public string text;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _OnConfirmation_b__1(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public ItemInventoryDeleteTab();

	// Methods
	public override void Initialize(RawImage image, InventoryItem item);
	public void OnRemoveFromInventory();
	public void OnConfirmation(bool affirmative, ConfirmationPopup popup);
	[CompilerGenerated]
	private void _OnRemoveFromInventory_b__5_0(IModalPopupCreator x, BaseEventData y);
}

