/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarMotor : MVRigidBody
{
	// Fields
	private float walkSpeedDefault;
	private float walkSpeed;
	private float speed;
	private AnimationCurve slopeSpeedMultiplier;
	private Vector3 velocityPrevFrame;
	private const float airAccelerationDefault = 3f;
	private JumpState jumpState;
	private BounceState bounceState;
	private WaterState waterState;
	private SmoothCharacterController smoothCharacterController;
	private ImpactState impactState;
	private MVMovableMotorState movableMotorState;
	private AvatarInteractable interactableLocal;
	private float speedBoostSetting;
	private float slowFallVelocityMultiplier;
	private float frictionMultiplier;
	protected StuckEvaluator stuckEvaluator;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private SizeState _GetSizeState_k__BackingField;
	public OnWallJumpDelegate OnWallJump;
	public OnActiveBounceDelegate OnActiveBounce;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private bool _IsMovementLocked_k__BackingField;
	private float currentLerp;
	private readonly float lerpTime;

	// Properties
	private MvCharacterController Controller { get; }
	public SizeState GetSizeState { [CompilerGenerated] get; [CompilerGenerated] private set; }
	private float FrictionCoefficient { get; }
	public override Vector3 Velocity { get; }
	public override bool Grounded { get; }
	public override bool IsMovementLocked { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Nested types
	public delegate void OnWallJumpDelegate();

	public delegate void OnActiveBounceDelegate();

	// Constructors
	public AvatarMotor();

	// Methods
	protected override void SuspendImpactDamage();
	public bool IsStuck();
	public void Init(AvatarInteractable interactableLocal, Vector3 centerOffset, MVWorldObjectClient worldObjectOwner, WorldObjectSkillDataManager skillDataManager);
	private void InitSkills(WorldObjectSkillDataManager skillDataManager);
	public void OverrideCharacterController(SmoothCharacterController controller);
	public override void Reset();
	public void UpdateFunction();
	public void FixedUpdateFunction(IMotorAPI motorApi);
	public void UpdateVelocity();
	private void HandleSoundEffects(bool inputJump);
	private void HandleMovementBoost();
	private void OnDestroy();
	private Vector3 GetVelocity(Vector3 velocity, Vector3 movableVelocity, bool inputJump, Vector3 inputDirection);
	protected void DealImpactDamage(Vector3 curVelocity, Vector3 prevVelocity);
	private void Move(Vector3 velocity, Vector3 movableVelocity);
	private Vector3 ApplyInputVelocityChangeGrounded(Vector3 velocity, Vector3 inputDirection);
	private Vector3 ApplyInputVelocityChange(Vector3 velocity, Vector3 inputDirection);
	private float GetSpeedGrounded(float currentSpeed, Vector3 inputDirection);
	private float GetSpeed(float currentSpeed, Vector3 inputDirection);
	public bool IsJumping();
	public bool IsAirJumping();
	[CompilerGenerated]
	private void _Init_m__0();
}

