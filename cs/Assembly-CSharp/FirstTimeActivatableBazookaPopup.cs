/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableBazookaPopup : FirstTimeActivatableElementBase
{
	// Fields
	private Dictionary<MVWorldObjectDocumentationType, int> priorityDictionary;
	[SerializeField]
	private TabMenu tabGroup;
	[SerializeField]
	private InventorySlots slots;
	private bool showing;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public InventoryItem prioritizedItem;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _DoShowing_b__1(IPlayerInventory x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IPlayerInventory> __9__7_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _DoShowing_b__7_0(IPlayerInventory x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatableBazookaPopup();

	// Methods
	public override void OnShow();
	private void DoShowing();
	protected override void OnDestroy();
}

