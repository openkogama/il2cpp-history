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
	public class FirstTimeActivatableClientShopInventoryGotoCategory : FirstTimeActivatableElementBase
	{
		// Fields
		[SerializeField]
		private bool insideInventory;
		private bool showing;
	
		// Properties
		public override bool CanShow { get; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static ExecuteEvents.EventFunction<InventoryController> __9__5_0;
			public static ExecuteEvents.EventFunction<InventoryController> __9__5_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal void _DoShowing_b__5_0(InventoryController x, BaseEventData y);
			internal void _DoShowing_b__5_1(InventoryController x, BaseEventData y);
		}
	
		// Constructors
		public FirstTimeActivatableClientShopInventoryGotoCategory();
	
		// Methods
		public override void OnShow();
		private void DoShowing();
		protected override void OnDestroy();
	}
}
