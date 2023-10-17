/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.MVDoor
{
	public class MVDoorBlueprint : MVBlueprintBase
	{
		// Fields
		private MVDoor doorLogic;
		private EditableCubeModelWrapper editableCubeModelWrapper;
		private MVCubeModelInstance editableCubeModel;
	
		// Properties
		public override MVWorldObjectDocumentationType DocumentationType { get; }
		public MVDoor DoorLogic { get; }
	
		// Constructors
		public MVDoorBlueprint(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	
		// Methods
		public override void InitializeInventory();
		public override void Initialize();
		private void SetCubeSize();
		public override void OnDataUpdate();
		public override void Select(Color color);
		public override void DeSelect();
		public override bool OnEnterObject(EditorStateMachine e);
		public override bool OnExitObject(EditorStateMachine e);
	}
}
