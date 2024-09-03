/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.EditablePickupItem
{
	public abstract class MVEditablePickupItemBaseBlueprint : MVBlueprintBase
	{
		// Fields
		public const string ItemBaseKey = "ItemBase";
		public const string ItemCubeModelKey = "ItemCubeModel";
		protected MVEditablePickupItemBase itemBase;
		protected EditableCubeModelWrapper editableCubeModelWrapper;
		protected MVCubeModelInstance editableCubeModel;
		protected Transform cubeModelBaseParent;
		private int cubeModelId;
		private int cubeModelPid;
	
		// Properties
		public MVEditablePickupItemBase ItemBase { get; }
		public int CubeModelId { get; }
		public int CubeModelPid { get; }
		protected virtual float CubeModelScale { get; }
	
		// Constructors
		public MVEditablePickupItemBaseBlueprint(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	
		// Methods
		public override void InitializeInventory();
		public override void Initialize();
		public virtual void OnStartEditing();
		public virtual void OnEndEditing();
		public override void OnDataUpdate();
		protected void ToggleCubeModelColliders(bool state);
		public override void Select(Color color);
		public override void DeSelect();
		public override bool OnEnterObject(EditorStateMachine e);
		public override bool OnExitObject(EditorStateMachine e);
		protected virtual void SetCubeSize();
	}
}
