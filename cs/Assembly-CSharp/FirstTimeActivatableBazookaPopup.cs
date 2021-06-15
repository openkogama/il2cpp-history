/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableBazookaPopup : FirstTimeActivatableElementBase
{
	// Fields
	private Dictionary<MVWorldObjectDocumentationType, int> priorityDictionary;
	[SerializeField]
	private TabMenu tabGroup;
	[SerializeField]
	private InventorySlots slots;
	private bool showing;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IPlayerInventory> __f__am_cache0;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoShowing_c__AnonStorey0
	{
		// Fields
		internal InventoryItem prioritizedItem;

		// Constructors
		public _DoShowing_c__AnonStorey0();

		// Methods
		internal void __m__0(IPlayerInventory x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatableBazookaPopup();

	// Methods
	public override void OnShow();
	private void DoShowing();
	protected override void OnDestroy();
	[CompilerGenerated]
	private static void _DoShowing_m__0(IPlayerInventory x, BaseEventData y);
}

