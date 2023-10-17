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
	public class MVWorldObjectSpawnerVehicleEnergy : MVWorldObjectSpawner
	{
		// Fields
		private CullingSubscriberBase cullingSubscriberBase;
		private GameObject lodGameObject;
		private GameObject visualsGameObject;
		private bool initFlag;
		private GreyOutObjectScript pickupItemObjectScript;
		private readonly SpawnerObject spawnerObject;
		private MVVehicleEnergy vehicleEnergyChild;
	
		// Properties
		public int SpawnWorldObjectID { get; }
	
		// Constructors
		public MVWorldObjectSpawnerVehicleEnergy(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	
		// Methods
		public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
		public override void OnDataUpdate();
		public override void Destroy();
		public override void Initialize();
		private void SetupCulling();
		private new void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
		private void OnStateChanged(CullingGroupEvent cullingGroupEvent);
		public override void InitializeInventory();
		private void InitializeCommon();
		public override void SetupTierInventory();
		protected override void OnSpawnStateChange(SpawnState spawnState);
		public override void Select(Color color);
		protected override bool CheckCanUse(int woId, MVInteractableBase avatarInteractable);
		protected override bool Use(int userWoID);
		private void OnEnterTriggerBox(object sender, TriggerEventArgs e);
		public VehicleEnergyRefill CreateVehicleEnergyRefill(bool prediction);
		public override bool OnEnterObject(EditorStateMachine e);
		public override bool OnExitObject(EditorStateMachine e);
		public override bool CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref int insertedByProfileId);
	}
}
