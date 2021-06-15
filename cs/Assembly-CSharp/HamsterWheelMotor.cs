/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HamsterWheelMotor : SimpleVehicleMotorBase
{
	// Fields
	private ImpactState impactState;
	private HamsterWheelBounceState bounceState;
	private JumpState jumpState;
	private Vector3 curVelocity;
	private float speed;
	private float maxSpeed;
	private float minSpeed;
	private const float accelerationSpeed = 48f;
	private float angularSpeed;
	private float recalibrateCameraFactor;
	private float waterProximityThresshold;
	private float waterDownVelocity;
	private float waterOffset;
	private float maxUnderWaterYMovement;
	private MVInteractableBase interactable;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private IVehicleCamera _VehicleCamera_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _IsMovementLocked_k__BackingField;

	// Properties
	public IVehicleCamera VehicleCamera { [CompilerGenerated] private get; [CompilerGenerated] set; }
	public override bool Grounded { get; }
	public override Vector3 Velocity { get; }
	public override bool IsMovementLocked { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public HamsterWheelMotor();

	// Methods
	public override void Init(SmoothCharacterController smoothCharacterController, VehicleInteractable interactableLocal);
	public override void VehicleUpdateFunction();
	public override void Reset();
	protected override void SuspendImpactDamage();
	private Vector3 GetVehicleVelocity(Vector3 velocity, Vector3 baseVelocity);
	private Vector3 GetVehicleVelocityClassicCam(Vector3 velocity, Vector3 movableVelocity);
	private void DealImpactDamage(Vector3 curVelocity, Vector3 prevVelocity);
	private void Move(Vector3 velocity, Vector3 basevelocity);
	private float WaterProximity();
	protected Vector3 ApplyWaterGravity(Vector3 velocity, float waterProximity);
}

