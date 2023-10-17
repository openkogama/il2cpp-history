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

public class JetPackMotor : MVRigidBody
{
	// Fields
	private const float VelocityConstant = 40f;
	private float thrust;
	private const float ThrustLeaveMode = 1000f;
	private const float LeaveModeForward = 4.5f;
	private readonly KeyValuePair<float, float> leaveModeRotationRange;
	private const float RunSpeed = 12f;
	private const float SpeedSmoothing = 10f;
	private float speed;
	private readonly AnimationCurve slopeSpeedMultiplier;
	private Vector3 velocityPrevFrame;
	private BounceState bounceState;
	private MVMovableMotorState movableMotorState;
	private readonly ImpactState impactState;
	private MVInteractableBase interactable;
	private MVInteractableBase vehicleInteractable;
	private const float JetpackAirFriction = 0.43f;
	private float waterProximity;
	private SmoothCharacterController smoothController;
	protected StuckEvaluator stuckEvaluator;
	public const bool DefaultVehicleEnergyOn = false;
	public const int DefaultVehicleEnergyStorage = 20;
	public const int MinVehicleEnergyStorage = 4;
	public const int MaxVehicleEnergyStorage = 45;
	public const int DefaultVehicleEnergyConsumption = 3;
	public const int MinVehicleEnergyConsumption = 1;
	public const int MaxVehicleEnergyConsumption = 8;
	private float thrustOutOfEnergyMax;
	private VehicleEnergyContainer vehicleEnergyContainer;
	[CompilerGenerated]
	private Vector3 _InputMoveDirection_k__BackingField;
	[CompilerGenerated]
	private bool _Thrust_k__BackingField;
	[CompilerGenerated]
	private bool _InputRun_k__BackingField;
	private bool leaveMode;
	[CompilerGenerated]
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
	public bool OutOfEnergy { get; }

	// Nested types
	public struct JetPackMotorConfig
	{
		// Fields
		public AvatarInteractable interactableLocal;
		public VehicleInteractable vehicleInteractable;
		public SmoothCharacterController avatarController;
		public float thrustStrength;
		public float density;
		public VehicleEnergyContainerConfig vehicleEnergyContainerConfig;
		public float outOfEnergyThrustMax;
	}

	// Constructors
	public JetPackMotor();

	// Methods
	protected override void SuspendImpactDamage();
	public List<MVOverlapResult> GetOverlappingObjects();
	public bool IsStuck();
	public void Init(MVRuntimeDataVariable jetMode, JetPackMotorConfig jetPackMotorConfig);
	private void OnJetModeChange(MVJetPack.JetModeType jetModeType);
	public void FrameUpdate();
	public void FixedUpdateFunction(Quaternion setQuaternion, bool shouldSetRotation);
	private Vector3 GetVelocity(Vector3 velocity, Vector3 baseVelocity);
	private void ApplyJetImpulse(float jetpackThrust);
	protected void DealImpactDamage(Vector3 curVelocity, Vector3 prevVelocity);
	private GroundChange Move(Vector3 velocity, Vector3 baseVelocity);
	private Vector3 ApplyInputVelocityChange(Vector3 velocity, Vector3 baseVelocity);
	private Vector3 GetDesiredHorizontalVelocity();
	public void RefillEnergy(VehicleEnergyRefill vehicleEnergyRefill);
	public bool UsesEnergy();
	public void RollbackRefillEnergyPrediction(int spawnerId);
	[CompilerGenerated]
	private void _Init_b__65_0(object jetModeVal);
}

