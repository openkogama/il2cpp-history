/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.FirstTimeSystem
{
	public class FirstTimeActivatableSpawnRolesInventoryHighlight : FirstTimeActivatableElementBase
	{
		// Fields
		[SerializeField]
		private bool insideInventory;
		[SerializeField]
		private TabMenu tabGroup;
		[SerializeField]
		private InventorySlots slots;
		private bool showing;
		private const InventoryCategoryType ItemCategory = InventoryCategoryType.Blueprints;
		private readonly WorldObjectTypeInShopChecker inShopChecker;
		private readonly FirstTimeGuiHandler firstTimeGuiHandler;
	
		// Properties
		public override bool CanShow { get; }
	
		// Constructors
		public FirstTimeActivatableSpawnRolesInventoryHighlight();
	
		// Methods
		public override void OnShow();
		private void DoShowing();
		protected override void OnDestroy();
		protected override void OnFirstTimeState(FirstTimeState firstTimeState, FirstTimeEvent latestFirstTimeEvent);
		private void Register();
		[CompilerGenerated]
		private void _OnFirstTimeState_b__12_0(IFirstTimeElementActivator x, BaseEventData y);
		[CompilerGenerated]
		private void _Register_b__13_0(IFirstTimeElementActivator x, BaseEventData y);
	}
}
