/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class JetPackMotor : MVRigidBody
{
	// Fields
	private float velocityConstant;
	private float thrust;
	private float thrustLeaveMode;
	private float leaveModeForward;
	private KeyValuePair<float, float> leaveModeRotationRange;
	private float runSpeed;
	private float speedSmoothing;
	private float speed;
	private AnimationCurve slopeSpeedMultiplier;
	private Vector3 velocityPrevFrame;
	private BounceState bounceState;
	private MVMovableMotorState movableMotorState;
	private ImpactState impactState;
	private MVInteractableBase interactable;
	private MVInteractableBase vehicleInteractable;
	private float HARDCODEDJETPACKAIRFRICTION;
	private float waterProximity;
	private SmoothCharacterController smoothController;
	protected StuckEvaluator stuckEvaluator;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Vector3 _InputMoveDirection_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _Thrust_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _InputRun_k__BackingField;
	private bool leaveMode;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _IsMovementLocked_k__BackingField;

	// Properties
	private MvCharacterController Controller { get; }
	public bool IsUnderWater { get; }
	public override Vector3 Velocity { get; }
	public Vector3 Impulses { get; }
	public Vector3 InputMoveDirection { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool Thrust { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool InputRun { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool LeaveMode { get; set; }
	public override bool Grounded { get; }
	public float WaterProximity { get; }
	public override bool IsMovementLocked { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public JetPackMotor();

	// Methods
	protected override void SuspendImpactDamage();
	public List<MVOverlapResult> GetOverlappingObjects();
	public bool IsStuck();
	public void Init(AvatarInteractable interactableLocal, VehicleInteractable vehicleInteractable, SmoothCharacterController avatarController, float thrustStrength, float density);
	public void FrameUpdate();
	public void FixedUpdateFunction(Quaternion setQuaternion, bool shouldSetRotation);
	private Vector3 GetVelocity(Vector3 velocity, Vector3 baseVelocity);
	private void ApplyJetImpulse(float jetpackThrust);
	protected void DealImpactDamage(Vector3 curVelocity, Vector3 prevVelocity);
	private GroundChange Move(Vector3 velocity, Vector3 basevelocity);
	private Vector3 ApplyInputVelocityChange(Vector3 velocity, Vector3 baseVelocity);
	private Vector3 GetDesiredHorizontalVelocity();
}

