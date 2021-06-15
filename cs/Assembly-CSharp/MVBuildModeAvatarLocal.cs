/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVBuildModeAvatarLocal : MVBuildModeAvatar, ILocalObject, ISpawnRoleLocal
{
	// Fields
	protected SpawnRoleDataReceiver spawnRoleDataReceiver;
	private AvatarLocalBuildMode avatarScriptObject;
	private BuildModeAvatarLocalModes buildModeAvatarLocalModes;
	private LaserPointer laserPoint;

	// Properties
	int ILocalObject.Id { get; }
	int ISpawnRoleLocal.Id { get; }

	// Nested types
	public enum AvatarBuildModes : byte
	{
		None = 0,
		Edit = 1
	}

	public abstract class AvatarBuildModeBase
	{
		// Fields
		protected readonly MVBuildModeAvatarLocal buildModeAvatar;

		// Properties
		public abstract AvatarBuildModes AvatarBuildModeRuntimeState { get; }

		// Constructors
		protected AvatarBuildModeBase(MVBuildModeAvatarLocal buildModeAvatar);

		// Methods
		public abstract void Activate(AvatarBuildModes fromMode);
		public abstract void DeActivate(AvatarBuildModes toMode);
		public abstract void FixedUpdate(IInputToPlayerMovement movementMap);
		public abstract void FrameUpdate(InputToInGameAction interactionMap);
	}

	public class EditMode : AvatarBuildModeBase
	{
		// Fields
		private AvatarBuildModes _avatarBuildModeRuntimeState;
		private readonly float maxSpeed;
		private readonly float speedModifier;
		private Vector3 jetPackTargetDeltaPos;
		private float targetSpeed;
		private float speed;
		private float speedSmoothingTime;
		private bool moveConstraintSet;
		private Vector3 moveConstraintCenter;
		private float moveConstraintRadius;
		private const float moveSlowDownPoint = 0.75f;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private float _YMovementSpeedScale_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private float _XZMovementSpeedScale_k__BackingField;
		private DoubleTapMovementChecker doubleTap;
		private Camera mainCamera;
		private float keyVelocity;
		private float keyAcceleration;
		private float keyDamping;
		private readonly float heightAdjustSpeed;

		// Properties
		public override AvatarBuildModes AvatarBuildModeRuntimeState { get; }
		private float YMovementSpeedScale { [CompilerGenerated] get; [CompilerGenerated] set; }
		private float XZMovementSpeedScale { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool MovementConstrained { get; set; }

		// Nested types
		public class CERoamUUISetupData
		{
			// Fields
			public readonly Vector3 centerPos;
			public readonly Vector3 lookAtPosition;

			// Constructors
			public CERoamUUISetupData(Vector3 centerPos, Vector3 lookAtPosition);
		}

		public class EditCubesSetupData
		{
			// Fields
			public readonly int focusWoId;

			// Constructors
			public EditCubesSetupData(int focusWoId);
		}

		public class CEEditBodyUUIData
		{
			// Fields
			public readonly int focusWoId;

			// Constructors
			public CEEditBodyUUIData(int focusWoId);
		}

		public class ESEditCubeTutorialData
		{
			// Fields
			public readonly int focusWoId;

			// Constructors
			public ESEditCubeTutorialData(int focusWoId);
		}

		// Constructors
		public EditMode(MVBuildModeAvatarLocal buildModeAvatar);

		// Methods
		public override void Activate(AvatarBuildModes fromMode);
		private void SetCamera(CameraType cameraType);
		private void AvatarCommandsBuildModeOnOnSetSpawn(Vector3 position, Quaternion rotation);
		public override void DeActivate(AvatarBuildModes toMode);
		public void ModifySpeed(float xz, float y);
		public override void FrameUpdate(InputToInGameAction interactionMap);
		public override void FixedUpdate(IInputToPlayerMovement movementMap);
		public void SetMoveConstraint(Vector3 center, float radius);
		private void UpdateRotationToCamera();
		protected void SetToEditMode();
		private void MoveCharacter(Vector3 moveDelta);
		protected Vector3 GetElevationVelocity();
		private void Move(Vector3 velocity);
		private Vector3 GetDirection(bool freeFlight);
		private static Vector3 GetInputDirection();
		private Vector3 GetMovementVelocity();
		private void AvatarCommandsBuildModeOnEnterBuildStateEvent(EditorEvent editorEvent, object data);
		private void ESLeaveCubeTutorialSetup();
		private void FocusOnPosition();
		private void ESEditCubeTutorialSetup(ESEditCubeTutorialData data);
		private void AvatarCommandsBuildModeOnExitBuildStateEvent(EditorEvent editorEvent, object data);
		private void EditCubesExitSetup();
		private void ESEditCubeTutorialExitSetup();
		private void CERoamUUIExitSetup();
		private void CEEditBodyUUIExitSetup();
		private void CEEditBodyUUIEnterSetup(CEEditBodyUUIData data);
		private void CERoamUUIEnterSetup(CERoamUUISetupData data);
		private void EditCubesDataEnterSetup(EditCubesSetupData data);
	}

	public class BuildModeAvatarLocalModes
	{
		// Fields
		private AvatarBuildModeBase currentMode;
		private MVBuildModeAvatarLocal avatar;

		// Constructors
		public BuildModeAvatarLocalModes(MVBuildModeAvatarLocal avatar);

		// Methods
		public void FrameUpdate(InputToInGameAction interactionMap);
		public void FixedUpdate(IInputToPlayerMovement movementMap);
		public void SetMode(AvatarBuildModes mode);
		private AvatarBuildModeBase BuildModeFactory(AvatarBuildModes avatarBuildModeRuntimeState);
	}

	// Constructors
	public MVBuildModeAvatarLocal(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public void Activate(int idFrom, SpawnRoleDataReceiver spawnRoleDataReceiver, Vector3 position, Quaternion rotation);
	public void Suspend();
	public void UnSuspend();
	public void DeActivate(int idTo, SpawnRoleDataReceiver spawnRoleDataReceiver);
	public InputToInGameAction Update(InputToInGameAction movementMap);
	public IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement movementMap);
	private void SetCamera(CameraType cameraType);
	private void SetToSpawn();
	private void HideEditCube();
	private new void OnPositionChanged(MVWorldObjectClient wo, PositionChangedEventArgs positionChangedEventArgs);
	private void OnScaleChanged(MVWorldObjectClient wo, ScaleChangedEventArgs scaleChangedEventArgs);
	protected override Vector3 GetLookDirection();
}

