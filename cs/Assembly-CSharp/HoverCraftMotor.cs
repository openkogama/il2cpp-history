/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HoverCraftMotor : SimpleVehicleMotorBase
{
	// Fields
	private ImpactState impactState;
	private Vector3 velocityPrevFrame;
	private BounceState bounceState;
	private float thrustFactor;
	private float dragCoefficientXZ;
	private float dragCoefficentUp;
	private float dragCoefficentDown;
	private float mass;
	private float angularSpeed;
	private float waterProximityThresshold;
	private float waterDownVelocity;
	private float waterOffset;
	private float magnitudeDivider;
	private float frictionFactor;
	private float hullRotationFactorClassic;
	private float maxUnderWaterYMovement;
	private float recalibrateCameraFactor;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private IVehicleCamera _VehicleCamera_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _IsMovementLocked_k__BackingField;
	private const string horizontal = "Horizontal";
	private float driftCorrectionRotation;
	private const float verticalThrustTime = 0.6f;
	private float availableVerticalThrustTime;
	private bool wasJumping;
	private const float stoppedJumpingTimeOut = 0.3f;
	private float stoppedJumpingTime;
	private float regenerationFactor;
	private bool isVerticalThrusting;
	private float jumpForce;

	// Properties
	public IVehicleCamera VehicleCamera { [CompilerGenerated] private get; [CompilerGenerated] set; }
	public override Vector3 Velocity { get; }
	public override bool Grounded { get; }
	public override bool IsMovementLocked { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public HoverCraftMotor();

	// Methods
	protected override void SuspendImpactDamage();
	public override void Init(SmoothCharacterController characterController, VehicleInteractable interactableLocal);
	public override void Reset();
	public override void VehicleUpdateFunction();
	protected void DealImpactDamage(Vector3 curVelocity, Vector3 prevVelocity);
	private void Move(Vector3 velocity, Vector3 basevelocity);
	private Vector3 GetVehicleVelocity(Vector3 velocity, Vector3 baseVelocity);
	private float WaterProximity();
	protected Vector3 ApplyWaterGravity(Vector3 velocity, float waterProximity);
	private Vector3 GetVehicleInputVelocity(Vector3 velocity);
	private Vector3 GetVehicleInputVelocityClassicCam(Vector3 velocity);
	private Vector3 PlatformerDriftCorrection(Vector3 velocity, Vector3 targetDir);
	public static Vector3 RotateTowardsAroundY(Vector3 vec, Vector3 target, float speedInDegrees);
	private Vector3 HoverCraftFrictionXZ(Vector3 velocity);
	private Vector3 XZDrag(Vector3 velocityNormal, float velocitySquareMagnitude);
	private Vector3 HullRotationDrag(Vector3 velocityNormal, float velocitySquareMagnitude, float hullRotationFactor);
	private Vector3 VerticalDrag(Vector3 velocityNormal, float velocitySquareMagnitude);
	private Vector3 HandleVerticalThrust(Vector3 velocity);
	private float DragCoefficientXZHullRotationFactor(Vector3 velocity, float hullRotationFactor);
}

