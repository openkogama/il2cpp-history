/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using WorldObjectTypes.VehicleEnergy;
using WorldObjectTypes.VehiclesBase.Shared;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVVehicleBase : MVBlueprintBase, IBulletImpactVisualizer
{
	// Fields
	protected MVWorldObjectDocumentationType documentationType;
	[CompilerGenerated]
	private bool _IsInSpawner_k__BackingField;
	public MVRuntimeDataVariable IsVehicleDead;
	protected VehicleSeatManager seatManager;
	protected LocalObjectsBase localObjects;
	protected VehicleVisualizationBase visualization;
	protected VehicleBaseObject vehicleBaseObject;
	[CompilerGenerated]
	private readonly VehicleEnergyContainerConfig _VehicleEnergyContainerConfig_k__BackingField;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public virtual bool IsDead { get; }
	public virtual bool IsInSpawner { [CompilerGenerated] get; [CompilerGenerated] private set; }
	protected VehicleEnergyContainerConfig VehicleEnergyContainerConfig { [CompilerGenerated] get; }
	public VehicleVisualizationBase Visualization { get; }

	// Nested types
	protected struct HealthChangeAffects
	{
		// Fields
		public bool detachAvatar;
		public bool causeVehicleDestruction;
	}

	protected abstract class LocalObjectsBase : ILocalObject
	{
		// Fields
		public Action onDestroy;
		public Action onLeave;
		public Action onEnter;
		protected float timeBeforeUnregisterAfterDeath;
		protected List<Component> localComponents;

		// Properties
		public abstract int Id { get; }
		protected abstract MVVehicleBase Owner { get; }

		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass15_0
		{
			// Fields
			public MVAvatarLocal localAvatar;

			// Constructors
			public __c__DisplayClass15_0();

			// Methods
			internal void _OnHealthChange_g__DetachLocalAvatar_0(MVWorldObjectClient wo);
		}

		// Constructors
		protected LocalObjectsBase();

		// Methods
		public List<T> GetLocalComponents<T>()
			where T : Component;
		public virtual void Destroy();
		public virtual void Enter();
		public virtual void Leave();
		public abstract InputToInGameAction Update(InputToInGameAction interactionInput);
		public abstract IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement movementMap);
		protected void OnHealthChange(object v);
		public abstract void RefillEnergy(VehicleEnergyRefill vehicleEnergyRefill);
		public abstract bool UsesEnergy();
		public abstract void RollbackVehicleRefillEnergyPrediction(int spawnerId);
	}

	// Constructors
	protected MVVehicleBase(Dictionary<object, object> data, ObjectPrefab vehiclePrefab, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	protected abstract VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig();
	public override void OnDataUpdate();
	public override void Initialize();
	public void LeaveLocal();
	public void Enter(MVAvatar vehicleUser, int seatID);
	protected abstract LocalObjectsBase CreateLocalObjects(int seatID, MVAvatarLocal vehicleUser);
	protected virtual void VehicleEntered(MVAvatar vehicleUser, int seatID);
	public void VisualizeBulletImpact(VoxelHit voxelHit, Ray lineOfFire, int shooterActorNumber, float damage);
	protected virtual HealthChangeAffects HealthChangeResult(float health);
	public MVAvatar GetDriver();
	public void RefillEnergy(VehicleEnergyRefill vehicleEnergyRefill);
	public bool UsesEnergy();
	public void RollbackRefillEnergyPrediction(int spawnerId);
	public bool IsPlayerInVehicle(int playerId, bool onlyDriver = false);
}

