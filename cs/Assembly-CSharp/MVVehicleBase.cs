/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVVehicleBase : MVBlueprintBase, IBulletImpactVisualizer
{
	// Fields
	protected MVWorldObjectDocumentationType documentationType;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _IsInSpawner_k__BackingField;
	public MVRuntimeDataVariable IsVehicleDead;
	protected VehicleSeatManager seatManager;
	protected LocalObjectsBase localObjects;
	protected VehicleVisualizationBase visualization;
	protected VehicleBaseObject vehicleBaseObject;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public virtual bool IsDead { get; }
	public virtual bool IsInSpawner { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public VehicleVisualizationBase Visualization { get; }

	// Nested types
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
		private sealed class _OnHealthChange_c__AnonStorey0
		{
			// Fields
			internal MVAvatarLocal localAvatar;

			// Constructors
			public _OnHealthChange_c__AnonStorey0();

			// Methods
			internal void __m__0(MVWorldObjectClient wo);
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
	}

	// Constructors
	protected MVVehicleBase(Dictionary<object, object> data, ObjectPrefab vehiclePrefab, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void OnDataUpdate();
	public override void Initialize();
	public void LeaveLocal();
	public void Enter(MVAvatar vehicleUser, int seatID);
	protected abstract LocalObjectsBase CreateLocalObjects(int seatID, MVAvatarLocal vehicleUser);
	protected virtual void VehicleEntered(MVAvatar vehicleUser, int seatID);
	public void VisualizeBulletImpact(VoxelHit voxelHit, Ray lineOfFire, int shooterActorNumber, float damage);
}

