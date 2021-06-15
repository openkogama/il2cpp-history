/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableTriggerAreaInventoryHighlight : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private TabMenu tabGroup;
	[SerializeField]
	private InventorySlots slots;
	private bool showing;
	private InventoryCategoryType itemCategory;
	private bool haveCheckedItemAvailability;
	private bool itemAvailable;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DoShowing_c__AnonStorey0
	{
		// Fields
		internal int itemSlot;
		internal FirstTimeActivatableTriggerAreaInventoryHighlight _this;

		// Constructors
		public _DoShowing_c__AnonStorey0();

		// Methods
		internal void __m__0(IOpenClientShopTab x, BaseEventData y);
		internal void __m__1(IHighLightClientShopItem x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _GetItemSlot_c__AnonStorey1
	{
		// Fields
		internal int iteration;
		internal FirstTimeActivatableTriggerAreaInventoryHighlight _this;

		// Constructors
		public _GetItemSlot_c__AnonStorey1();

		// Methods
		internal void __m__0(IOpenClientShopPage x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatableTriggerAreaInventoryHighlight();

	// Methods
	public override void OnShow();
	private void DoShowing();
	protected int GetItemSlot(int iteration);
	private bool IsItemInShop(WorldObjectType worldObjectType);
	private bool CheckItemAvailability(WorldObjectType worldObjectType);
	protected override void OnDestroy();
	protected override void OnFirstTimeState(FirstTimeState firstTimeState, FirstTimeEvent latestFirstTimeEvent);
	private void Register();
	[CompilerGenerated]
	private new void _OnFirstTimeState_m__0(IFirstTimeElementActivator x, BaseEventData y);
	[CompilerGenerated]
	private void _Register_m__1(IFirstTimeElementActivator x, BaseEventData y);
}

