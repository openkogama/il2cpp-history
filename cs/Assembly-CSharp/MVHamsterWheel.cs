/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using WorldObjectTypes.VehicleEnergy;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVHamsterWheel : MVSimpleOneSeatVehicle
{
	// Fields
	private CullingSubscriberDynamic cullingSubscriberDynamic;
	private float deathExplosionDamageValue;
	private float deathExplosionRadius;
	private float deathExplosionImpulse;
	public MVRuntimeDataVariable IsMovingForward;
	private bool wasMovingForward;
	public MVRuntimeDataVariable IsMovingBackwards;
	private bool wasMovingBackwards;
	public MVRuntimeDataVariable IsGrounded;
	private bool wasGrounded;

	// Properties
	public override bool IsDead { get; }

	// Nested types
	protected class LocalObjectsHamsterWheel : MVSimpleOneSeatVehicle.LocalObjectsSimpleVehicle
	{
		// Constructors
		public LocalObjectsHamsterWheel(MVHamsterWheel vehicle, SmoothCharacterController smoothController, SimpleVehicleMotorBase hamsterWheelMotor);

		// Methods
		public override void Leave();
		public override IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement movementMap);
	}

	// Constructors
	public MVHamsterWheel(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	protected override VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig();
	public override void Initialize();
	public override void InitializeInventory();
	public override void Destroy();
	private void OnIsDeadChange(object isDead);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	protected override LocalObjectsBase CreateLocalObjects(int seatID, MVAvatarLocal vehicleUser);
}

