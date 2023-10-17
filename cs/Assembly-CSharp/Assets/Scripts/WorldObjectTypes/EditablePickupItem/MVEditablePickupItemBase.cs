/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.EditablePickupItem
{
	public abstract class MVEditablePickupItemBase : MVPickupItemBase
	{
		// Fields
		private MVEditablePickupItemBaseBlueprint blueprint;
	
		// Properties
		public new MVEditablePickupItemBaseObject BaseObject { get; private set; }
	
		// Constructors
		public MVEditablePickupItemBase(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	
		// Methods
		private new void SetupUseInteractor();
		public override void Initialize();
		public override void OnDataUpdate();
		private void OnDataUpdateBlueprintReq();
		public void UpdateUseInteractor(Dictionary<object, object> useInteractorData);
		protected override bool IsSameWeapon(PickupItem pickupItem);
		public abstract ValueTuple<IntVector, IntVector> GetEditPoints();
	}
}
