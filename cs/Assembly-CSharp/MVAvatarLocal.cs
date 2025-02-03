/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator;
using Assets.Scripts.Tools;
using MV.Common;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.MetaData;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVAvatarLocal : MVAvatar, ILocalObject, IBulletImpactVisualizer, ICurrentItemOwner, ISpawnRoleLocal
{
	// Fields
	public Action<float, MVPlayer, PlayerKilledByType> OnDamageTaken;
	public Action<float, MVPlayer> OnHealing;
	protected SpawnRoleDataReceiver spawnRoleDataReceiver;
	private string currAnim;
	private const float exitVehicleMomentumModifier = 7f;
	private AvatarMotor avatarMotor;
	private AvatarInteractable interactableLocal;
	private UseInteractorHandler useInteractorHandler;
	private MVTriggerHandler triggerHandler;
	private AvatarEquipable avatarEquipable;
	private AvatarPickupOwner pickupOwner;
	private PickupGUI pickupGUI;
	private MVRigidBody vehicleRigidBody;
	private AvatarLocalModes avatarLocalModes;
	private AvatarRespawnHandler avatarRespawnHandler;
	private Action<int, int, PlayerKilledByType> OnKilled;
	private Action OnSuicide;
	private float previousHealth;
	private float previousShield;
	private float boostedHealthMultiplier;
	private int defaultBaseMaxHealth;
	[CompilerGenerated]
	private bool _ForceRotateAvatarToFiringDirection_k__BackingField;
	private bool suspended;
	private int spawnWorldObjectId;

	// Properties
	private Vector3 LookAtPos { get; }
	public AvatarInteractable InteractableLocal { get; }
	public override Vector3 VelocityAbsolute { get; }
	public AvatarPickupOwner PickupOwner { get; }
	public bool ForceRotateAvatarToFiringDirection { [CompilerGenerated] private get; [CompilerGenerated] set; }
	public MVRigidBody RigidBody { get; }
	public bool IsEnteringVehicle { get; }
	public bool IsInVehicle { get; }
	public Bounds Bounds { get; }
	public ColliderCollection TriggingColliders { get; }
	public AvatarMotor AvatarMotor { get; }
	public bool InFirstPersonGunMode { get; }
	public override Vector3 VelocityRelative { get; }
	public KogamaSettingWrapperBase Settings { get; }
	public int BaseMaxHealth { get; set; }
	private AvatarLocal AvatarLocal { get; }
	public int SpawnId { private get; set; }
	int ILocalObject.Id { get; }
	int ISpawnRoleLocal.Id { get; }

	// Nested types
	private class AvatarLocalModes
	{
		// Fields
		private readonly Dictionary<AvatarRuntimeState, AvatarMode> avatarModes;
		private AvatarMode currentMode;
		private AvatarRuntimeState currentState;

		// Properties
		public AvatarMode CurrentMode { get; }
		public AvatarRuntimeState CurrentState { get; }

		// Constructors
		public AvatarLocalModes(MVAvatarLocal avatar);

		// Methods
		public void FrameUpdate(InputToInGameAction interactionMap);
		public void FixedUpdate(IInputToPlayerMovement movementMap);
		public void SetMode(AvatarRuntimeState mode);
		public void SetToStartMode();
		private AvatarRuntimeState GetStartState();
		public bool HasDied();
	}

	public abstract class AvatarMode
	{
		// Fields
		protected readonly MVAvatarLocal mvAvatar;
		public int modeTypes;

		// Constructors
		protected AvatarMode(MVAvatarLocal mvAvatar, int modeTypes);

		// Methods
		public abstract void DeActivate(AvatarRuntimeState toMode);
		public abstract void FixedUpdate(IInputToPlayerMovement movementMap);
		public abstract void FrameUpdate(InputToInGameAction interactionMap);
		public virtual void Activate(AvatarRuntimeState fromMode);
		private void SetModeTypes();
	}

	protected class DeadMode : AvatarMode
	{
		// Fields
		protected float deadTime;
		protected float deadInterval;
		private bool setDeadCamDelayed;
		private readonly AvatarInputControllerDead inputController;

		// Nested types
		private class AvatarInputControllerDead : IMotorAPI
		{
			// Fields
			private Quaternion rot;

			// Properties
			public Vector3 Direction { get; set; }
			public Quaternion Rotation { get; set; }
			public bool Jump { get; }

			// Constructors
			public AvatarInputControllerDead();
		}

		// Constructors
		public DeadMode(MVAvatarLocal mvAvatar);

		// Methods
		public override void Activate(AvatarRuntimeState fromMode);
		private void HandleDeathBriefingPause(int localPlayerActorNr, int dmgDealerActorNr, PlayerKilledByType damageType);
		private void HandleDeathBriefingPause();
		private void HandleResetUIPause();
		public override void DeActivate(AvatarRuntimeState toMode);
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
		public override void FrameUpdate(InputToInGameAction interactionMap);
		public bool HasDied();
		private void RevivePlayer();
		private void OnEnterEditMode();
	}

	public abstract class EditAvatarModeBase : AvatarMode
	{
		// Constructors
		protected EditAvatarModeBase(MVAvatarLocal mvAvatar, int modeTypes);

		// Methods
		protected void SetToEditMode();
	}

	public class GhostMode : AvatarMode
	{
		// Fields
		private bool haveSetTransparency;

		// Constructors
		public GhostMode(MVAvatarLocal mvAvatar);

		// Methods
		public override void Activate(AvatarRuntimeState fromMode);
		public override void DeActivate(AvatarRuntimeState toMode);
		public override void FrameUpdate(InputToInGameAction interactionMap);
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
		private void ResetCamera();
		private void SendNotification();
		private void OnEnterEditMode();
		private IAvatarInputController CreateInputController();
	}

	protected class LobbyMode : AvatarMode
	{
		// Constructors
		public LobbyMode(MVAvatarLocal mvAvatar);

		// Methods
		public override void Activate(AvatarRuntimeState fromMode);
		public override void DeActivate(AvatarRuntimeState toMode);
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
		public override void FrameUpdate(InputToInGameAction interactionMap);
	}

	protected class ReviveMode : AvatarMode
	{
		// Fields
		protected float deadTime;
		protected float reviveInterval;
		private bool reviveElapsed;
		private bool setDeadCamDelayed;
		private AvatarInputControllerDead inputController;

		// Nested types
		private class AvatarInputControllerDead : IMotorAPI
		{
			// Fields
			private Quaternion rot;

			// Properties
			public Vector3 Direction { get; set; }
			public Quaternion Rotation { get; set; }
			public bool Jump { get; }

			// Constructors
			public AvatarInputControllerDead();
		}

		// Constructors
		public ReviveMode(MVAvatarLocal mvAvatar);

		// Methods
		public override void Activate(AvatarRuntimeState fromMode);
		public override void DeActivate(AvatarRuntimeState toMode);
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
		public override void FrameUpdate(InputToInGameAction interactionMap);
		private void NoButtonPressed();
		private void OnEnterEditMode();
	}

	protected class ReviveWaitMode : AvatarMode
	{
		// Constructors
		public ReviveWaitMode(MVAvatarLocal mvAvatar);

		// Methods
		public override void Activate(AvatarRuntimeState fromMode);
		public override void DeActivate(AvatarRuntimeState toMode);
		public override void FrameUpdate(InputToInGameAction interactionMap);
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
	}

	public class TimeAttackFlagDebriefingMode : AvatarMode
	{
		// Fields
		private readonly IAvatarInputController avatarInputController;
		private bool isInDebriefing;
		private Transform flagTransform;
		private Quaternion currentDirectionRotation;
		private float lastAngle;
		private float directionInterpolationStartTime;
		private const float walkAroundFlagAngle = 80f;
		private const float walkFromFlagAngle = 100f;
		private const float walkTowardsFlagAngle = 20f;
		private const float walkAroundCircleMinRadius = 1f;
		private const float walkAroundCircleMaxRadius = 1.3f;
		private const float maxFallBelow = 200f;
		private const float interpolationDuration = 0.4f;

		// Constructors
		public TimeAttackFlagDebriefingMode(MVAvatarLocal mvAvatar);

		// Methods
		public override void Activate(AvatarRuntimeState fromMode);
		public override void DeActivate(AvatarRuntimeState toMode);
		public override void FrameUpdate(InputToInGameAction interactionMap);
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
		private IAvatarInputController CreateInputController();
		private Transform GetClosestTimeAttackFlag();
		private Vector3 GetAvatarMoveDirection();
		private Vector3 RotateDirection(Vector3 direction, float angle);
		private void OnEnterTimeAttackFlagDebriefing(int score);
		private void OnExitTimeAttackFlagDebriefing();
		private void DieByFalling();
	}

	protected class WaitMode : AvatarMode
	{
		// Fields
		private readonly IAvatarInputController avatarInputController;

		// Constructors
		public WaitMode(MVAvatarLocal mvAvatar);

		// Methods
		public override void Activate(AvatarRuntimeState fromMode);
		public override void DeActivate(AvatarRuntimeState toMode);
		public override void FrameUpdate(InputToInGameAction interactionMap);
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
		private void ResetCamera();
		private void SendNotification();
		private IAvatarInputController CreateInputController();
	}

	protected class WalkMode : AvatarMode
	{
		// Fields
		private const float maxFallBelow = 200f;
		private const float respawnTimeOut = 2f;
		private readonly IAvatarInputController avatarInputController;
		private bool isFiring;
		private bool isJumping;
		private bool storedIsHandEquipableValue;
		private readonly AvatarSound avatarSound;
		private readonly float swimStartProximity;
		private float prevWaterProximity;

		// Properties
		private bool IsSwimming { get; }

		// Constructors
		public WalkMode(MVAvatarLocal mvAvatar);

		// Methods
		public override void Activate(AvatarRuntimeState fromMode);
		public override void DeActivate(AvatarRuntimeState toMode);
		public override void FrameUpdate(InputToInGameAction interactionMap);
		private void HandlePickupUpdate(InputToInGameAction interactionMap);
		private void HandleFireItem(InputToInGameAction interactionMap, bool isItemHolstered);
		private void HandlePointingItem(InputToInGameAction interactionMap, bool isItemHand, bool isItemHolstered);
		private void HandleHolsteringItem(InputToInGameAction interactionMap, bool isItemHand, bool isItemHolstered);
		private void HandleDroppingItem(InputToInGameAction interactionMap, bool isItemHand, bool isItemHolstered);
		private bool IsInJetpack();
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
		private void HandleFocus();
		private void HandleStuck();
		private void DieByFalling();
		private void OnHandleFiring(bool isFiring);
		private void HandleWaterplane();
		private void SetAnimationState(Vector3 moveDirection);
		private IAvatarInputController CreateInputController();
	}

	private delegate void SpawnRoleDataReceiverActionDelegate(SpawnRoleDataReceiver spawnRoleDataReceiver);

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static SpawnRoleDataReceiverActionDelegate __9__83_0;
		public static SpawnRoleDataReceiverActionDelegate __9__87_0;
		public static SpawnRoleDataReceiverActionDelegate __9__129_0;
		public static SpawnRoleDataReceiverActionDelegate __9__141_0;
		public static SpawnRoleDataReceiverActionDelegate __9__141_1;
		public static SpawnRoleDataReceiverActionDelegate __9__142_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _LeaveVehicle_b__83_0(SpawnRoleDataReceiver receiver);
		internal void _OnEnterVehicle_b__87_0(SpawnRoleDataReceiver receiver);
		internal void _Suicide_b__129_0(SpawnRoleDataReceiver receiver);
		internal void _GetSpawnTransform_b__141_0(SpawnRoleDataReceiver receiver);
		internal void _GetSpawnTransform_b__141_1(SpawnRoleDataReceiver receiver);
		internal void _OnCheckpointReachedResetRevive_b__142_0(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass125_0
	{
		// Fields
		public object shield;

		// Constructors
		public __c__DisplayClass125_0();

		// Methods
		internal void _InitializeShield_b__1(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass128_0
	{
		// Fields
		public object health;

		// Constructors
		public __c__DisplayClass128_0();

		// Methods
		internal void _InitializeHealth_b__1(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass131_0
	{
		// Fields
		public int localPlayerActorNr;
		public int dmgDealerActorNr;
		public PlayerKilledByType damageType;

		// Constructors
		public __c__DisplayClass131_0();

		// Methods
		internal void _RelayDamageEvent_b__0(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass133_0
	{
		// Fields
		public Vector3 lastSafePosition;
		public Transform cam;

		// Constructors
		public __c__DisplayClass133_0();

		// Methods
		internal void _RelayNewSafePosition_b__0(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass145_0
	{
		// Fields
		public PositionChangedEventArgs positionChangedEventArgs;

		// Constructors
		public __c__DisplayClass145_0();

		// Methods
		internal void _OnPositionChanged_b__0(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass146_0
	{
		// Fields
		public RotationChangedEventArgs rotationChangedEventArgs;

		// Constructors
		public __c__DisplayClass146_0();

		// Methods
		internal void _OnRotationChanged_b__0(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass147_0
	{
		// Fields
		public ScaleChangedEventArgs scaleChangedEventArgs;

		// Constructors
		public __c__DisplayClass147_0();

		// Methods
		internal void _OnScaleChanged_b__0(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass95_0
	{
		// Fields
		public bool isSeated;

		// Constructors
		public __c__DisplayClass95_0();

		// Methods
		internal void _OnSeatedChanged_b__0(SpawnRoleDataReceiver receiver);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass96_0
	{
		// Fields
		public object a;

		// Constructors
		public __c__DisplayClass96_0();

		// Methods
		internal void _AvatarStateChangedHandler_b__0(SpawnRoleDataReceiver receiver);
	}

	// Constructors
	public MVAvatarLocal(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public bool IsSpawnRoleActive();
	public bool IsPlaying();
	public bool HasDied();
	public float GetColliderRadius();
	public override void Initialize();
	private void OnResume();
	private void OnObserve();
	public void Activate(int idFrom, SpawnRoleDataReceiver spawnRoleDataReceiver, Vector3 position, Quaternion rotation);
	private void SubscribeToExternalEvents();
	private void UnsubscribeFromExternalEvents();
	public void DeActivate(int idTo, SpawnRoleDataReceiver spawnRoleDataReceiver);
	private void SetupSpawnroleReceiver(SpawnRoleDataReceiver spawnRoleDataReceiver);
	public void Suspend();
	public void UnSuspend();
	public void SetMode(AvatarRuntimeState localMode);
	public void SetCharacterController(SmoothCharacterController characterController);
	public void LeaveVehicle(bool leaveBecauseOfServer);
	private void SpawnRoleDataReceiverAction(SpawnRoleDataReceiverActionDelegate spawnRoleDataReceiverActionDelegate);
	public override void BeforeVehicleEntered();
	public override void OnEnterVehicle();
	public override void OnLeaveVehicle();
	public InputToInGameAction Update(InputToInGameAction interactionMap);
	public IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement movementMap);
	public Dictionary<object, object> GetCurrentItemState();
	public void SetCurrentItemState(Dictionary<object, object> aNewState);
	public void VisualizeBulletImpact(VoxelHit voxelHit, Ray lineOfFire, int shooterActorNumber, float damage = 100f);
	public void SetAnimation(string animationState);
	protected override void OnSeatedChanged(bool isSeated);
	protected override void AvatarStateChangedHandler(object a);
	protected override void AttachBody(MVBody newBody);
	private void AvatarCommandsPlayModeOnOnRemoveFromGame();
	private void AvatarCommandsPlayModeOnOnWinningConditionIntermediateDebriefing(WinningConditionType winningConditionType);
	private void AvatarCommandsOnSetToSpawnPoint();
	private void AvatarCommandsPlayModeOnOnSpawn();
	private void AvatarCommandsOnRespawn();
	private void AvatarCommandsOnSetToSpawnMode();
	private void AvatarCommandsPlayModeOnOnReadyScreenShot();
	private void GameStateTypeOnOnChange(MVGameStateType gameStateType);
	private void GameEventManagerOnOnXpRewarded(int obj);
	private void OnSetRespawnWhenPossible();
	private void OnSetSpawnAsGhost();
	private void OnSetToDeadMode();
	private void GameEventManagerOnOnFirstTimeEvent(FirstTimeEvent firstTimeEvent);
	private void OnHolsteredChanged(bool obj);
	private void OnUnequip(object sender, EventArgs e);
	public bool IsEquipped(AvatarItemType avatarItemType);
	private void KillSelf();
	private void SetToSpawnTransform();
	private void ResetAvatar();
	private int GetBoostedHealth(int unBoostedMaxHealth);
	private void OnHealthBoostedChanged();
	private void UpdateMaxHealth();
	private void Die();
	private void OnRespawn();
	private void SetTransform(Vector3 position, Quaternion rotation);
	private void InitializeShield();
	private void OnDisableVehicles(object sender, EventArgs args);
	private void OnCameraScale(object sender, ScaleArgs args);
	private void InitializeHealth();
	private void Suicide();
	private Vector3 CalculateVehicleExitMomentum(Vector3 velocity);
	private void RelayDamageEvent(float amount, MVPlayer damageDealer, PlayerKilledByType damageType);
	private void RelayHealingEvent(float amount, MVPlayer healer);
	private void RelayNewSafePosition(Vector3 lastSafePosition);
	private void AvatarCommandsOnMoveBodyToSafeSpot(int safeSpotIndex);
	private void AvatarCommandsOnSpawnAtSafeSpot(int safeSpotIndex);
	private void OnEquipItem(PickupItem equippeditem);
	private Transform GetSpawnTransform();
	private void OnCheckpointReachedResetRevive();
	private bool IsInTempTier();
	private GamePassTier GetTierRequirement();
	private new void OnPositionChanged(MVWorldObjectClient wo, PositionChangedEventArgs positionChangedEventArgs);
	private void OnRotationChanged(MVWorldObjectClient wo, RotationChangedEventArgs rotationChangedEventArgs);
	private void OnScaleChanged(MVWorldObjectClient wo, ScaleChangedEventArgs scaleChangedEventArgs);
	protected override void OnCurrentPickupChange(object newPickupDataData);
	private void HandleBlinkerVisibility();
	public void ToggleAudioListener(bool on);
	[CompilerGenerated]
	private void _OnHolsteredChanged_b__111_0(SpawnRoleDataReceiver receiver);
	[CompilerGenerated]
	private void _UpdateMaxHealth_b__119_0(SpawnRoleDataReceiver receiver);
	[CompilerGenerated]
	private void _InitializeShield_b__125_0(object shield);
	[CompilerGenerated]
	private void _InitializeHealth_b__128_0(object health);
	[CompilerGenerated]
	private void _OnEquipItem_b__136_0(SpawnRoleDataReceiver receiver);
}

