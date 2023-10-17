/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.FirstTimeSystem
{
	public class FirstTimeGuiHandler
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass0_0
		{
			// Fields
			public int itemCategory;
	
			// Constructors
			public __c__DisplayClass0_0();
	
			// Methods
			internal void _OpenTab_b__0(IPlayerInventory x, BaseEventData y);
			internal void _OpenTab_b__1(IOpenClientShopTab x, BaseEventData y);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass1_0
		{
			// Fields
			public int itemCategory;
			public int itemSlot;
	
			// Constructors
			public __c__DisplayClass1_0();
	
			// Methods
			internal void _HighlightInCategoryAtSlot_b__0(IPlayerInventory x, BaseEventData y);
			internal void _HighlightInCategoryAtSlot_b__1(IHighLightClientShopItem x, BaseEventData y);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass2_0
		{
			// Fields
			public int itemCategory;
			public int slotsSlotCountPerPage;
	
			// Constructors
			public __c__DisplayClass2_0();
	
			// Methods
			internal void _OpenPage_b__0(IPlayerInventory x, BaseEventData y);
			internal void _OpenPage_b__1(IOpenClientShopPage x, BaseEventData y);
		}
	
		// Constructors
		public FirstTimeGuiHandler();
	
		// Methods
		public void OpenTab(GameObject gameObject, int itemCategory);
		public void HighlightInCategoryAtSlot(GameObject gameObject, int itemCategory, int itemSlot);
		public void OpenPage(GameObject gameObject, int itemCategory, int slotsSlotCountPerPage);
		public MVWorldObjectDocumentationType? GetDocumentationType(InventorySlot slot);
		public int GetItemSlot(MVWorldObjectDocumentationType docType, GameObject gameObject, int itemCategory, InventorySlots slots, int iteration);
	}
}
