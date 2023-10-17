/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WorldObjectTypes.VehicleEnergy
{
	public class MVVehicleEnergy : MVBlueprintBase
	{
		// Fields
		public const string DefaultName = "Vehicle Energy";
		public const int DefaultSpawnOption = 10;
		public const int MinSpawnOption = 1;
		public const int MaxSpawnOption = 10;
		public const int DefaultSpawnTime = 15;
		public const int MinSpawnTime = 5;
		public const int MaxSpawnTime = 240;
		public const int DefaultEnergyAmount = 30;
		public const int MinEnergyAmount = 5;
		public const int MaxEnergyAmount = 100;
		private EditableCubeModelWrapper editableCubeModelWrapper;
		[CompilerGenerated]
		private GameObject _VehicleEnergyVisualsGameObject_k__BackingField;
		private MVVehicleEnergyObject vehicleEnergyObject;
		[CompilerGenerated]
		private VehicleEnergyConfiguration _VehicleEnergyConfig_k__BackingField;
	
		// Properties
		public override MVWorldObjectDocumentationType DocumentationType { get; }
		public MVCubeModelInstance CubeModelInstance { get; }
		public GameObject VehicleEnergyVisualsGameObject { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public VehicleEnergyConfiguration VehicleEnergyConfig { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		public struct VehicleEnergyConfiguration
		{
			// Fields
			public string name;
			public int spawnOption;
			public int spawnTime;
			public int energyAmount;
		}
	
		// Constructors
		public MVVehicleEnergy(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	
		// Methods
		public override void Initialize();
		private void UpdateVehicleEnergyConfig();
		public override void OnDataUpdate();
		private VehicleEnergyConfiguration ReadWorldObjectData();
		private static VehicleEnergyConfiguration CreateDefaultVehicleEnergyConfig();
		public void Taken();
		public void Spawned();
		private void ToggleColliders(bool val);
		public override void Select(Color color);
		public override void DeSelect();
		public override bool OnEnterObject(EditorStateMachine e);
		public override bool OnExitObject(EditorStateMachine e);
	}
}
