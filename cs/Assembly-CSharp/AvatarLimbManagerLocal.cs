/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarLimbManagerLocal : AvatarLimbManager
{
	// Fields
	private AvatarHeadRotationHandlerLocal headRotationHandler;
	private AvatarHeadRotationCalculator headRotationCalculator;
	private AvatarPointingHandlerLocal pointingHandler;
	private AvatarPointingRotationCalculator pointingRotationCalculator;
	private AvatarLimbDataManagerLocal dataManager;
	public Action<float> DelayHeadRotationNetworkMessage;
	public Action<float> DelayPointingNetworkMessage;

	// Nested types
	private class AvatarEmoteHandlerLocal : AvatarLimbManager.AvatarEmoteHandler
	{
		// Fields
		private Dictionary<EmoteTypes, AvatarEmoteRecogniser> emoteRecognisers;

		// Constructors
		public AvatarEmoteHandlerLocal();

		// Methods
		protected override void CreateLimbEvents(AvatarLimbManager limbManager, AvatarLimbManager.AvatarLookDirectionHandler lookDirectionHandler, AvatarLimbManager.AvatarPointingHandler pointingHandler, AvatarLimbManager.AvatarHeadRotationHandler headRotationHandler, AvatarLimbManager.LimbRotator limbRotator);
		public override void UpdateEmotes();
		private void OnShakeEmoteStart();
		private void OnNodEmoteStart();
		private void OnWaveEmoteStart();
		public void StartEmoteAndNetworkIt(EmoteTypes emoteType);
	}

	private class AvatarEmoteRecogniser
	{
		// Fields
		public Action OnStartEvent;
		private bool isActive;
		private float angleSensitivity;
		private float previousAngle;
		private short eventRecognitioner;
		private short recognitionsBeforeEvent;
		private float resetInterval;
		private float resetCooldown;
		private short startModulusOffset;
		private const float maxRotationMovement = 45f;

		// Constructors
		public AvatarEmoteRecogniser();

		// Methods
		public void Initlialize(AvatarLimbManager limbManager, float angleSensitivity, float resetInterval, short recognitionsBeforeEvent, bool shouldRecognisePositiveAngleFirst, bool isActive);
		public void HandleNewAngle(float angle);
		private void HandleRecognition(float newAngle, float previousAngle, bool checkPositiveRotation);
		private bool IsRotationPositive(float newAngle, float previousAngle);
		private bool IsEventRecognitionDone();
		public void Update();
		private void ResetRecognition();
		public void SetIsActive(bool shouldBeActive);
		public void Deactivate();
		public void Activate();
	}

	public struct HeadRotationCalculationResult
	{
		// Fields
		public Quaternion YawRotation;
		public Quaternion PitchRotation;
		public bool ShouldLean;
	}

	public class AvatarHeadRotationCalculator
	{
		// Fields
		private const float maxYaw = 90f;
		private const float maxPitch = 45f;
		private const float cameraPitchOffset = 40f;
		private const float maxCameraPitch = 80f;
		private const float yawDeadzone = 135f;
		private bool shouldLean;

		// Constructors
		public AvatarHeadRotationCalculator();

		// Methods
		public HeadRotationCalculationResult CalculateHeadRotation(Vector3 localLookDirection);
		private Quaternion GetClampedYawRotation(Vector3 localDirection);
		private Quaternion GetClampedPitchRotation(Vector3 localDirection);
		private float HandleCameraPitchOffset(float pitch);
		private float HandleYawDeadZone(float yaw);
	}

	private class AvatarHeadRotationHandlerLocal : AvatarLimbManager.AvatarHeadRotationHandler
	{
		// Fields
		private const float networkMessageInterval = 1f;
		private float networkMessageCooldown;
		private bool shouldSendNetworkMessage;
		private Quaternion yawRotation;
		private Quaternion pitchRotation;
		public Action<Quaternion> OnUpdateHeadRotationValue;

		// Constructors
		public AvatarHeadRotationHandlerLocal();

		// Methods
		public override void UpdateRotation();
		public override void Initialize(AvatarLimbManager limbManager, AvatarLimbManager.LimbRotator limbRotator, AvatarLimbManager.AvatarLookDirectionHandler lookDirectionHandler);
		private void UpdateNetworkMessage(Quaternion rotation);
		public void ResetNetworkMessageCooldown(float networkMessageDelay);
		public void HandleResult(HeadRotationCalculationResult result);
		protected void HandleOnRotationChange();
	}

	private class AvatarLimbDataManagerLocal
	{
		// Fields
		private LimbRotationRuntimeData limbRotationRuntimeData;

		// Constructors
		public AvatarLimbDataManagerLocal();

		// Methods
		public void Initialize(LimbRotationRuntimeData limbRotationRuntimeData);
		public void SynchronizeHeadRotationUpdate(Quaternion newHeadRotation);
		public void SynchronizePointRotationUpdate(Quaternion newPointRotation);
		public void SynchronizeHasHandEquippableUpdate(bool newIsPoingtingWeaponValue);
		public void SynchronizeEmoteUpdate(int newEmote);
	}

	private class AvatarPointingHandlerLocal : AvatarLimbManager.AvatarPointingHandler
	{
		// Fields
		private float networkMessageCooldown;
		private Quaternion yawRotation;
		private Quaternion pitchRotation;
		private PointState storedState;
		private const float lArmYawRotationOffset = -30f;
		private const float rArmYawRotationOffset = 20f;
		public Action<bool> OnIsPointingChange;
		public Action<bool> OnHasHandEquippableItemChange;
		public Action<Quaternion> OnUpdatePointingValue;

		// Properties
		public Vector3 PointingDirection { get; }

		// Constructors
		public AvatarPointingHandlerLocal();

		// Methods
		public void StartPointing();
		public void StartPointingWeapon();
		public void StartPointingWeaponOnlyNetworked();
		public void SetHandEquipableItem(bool hasHandEquipableItem);
		public override void UpdatePointing(Vector3 localLookDirection);
		private void UpdateNetworkMessage(Quaternion rotation);
		public void ResetNetworkMessageDelay(float networkMessageDelay);
		public void HandleResult(PointingRotationCalculationResult result);
		private Quaternion ApplyYawOffset(Quaternion newYawRotation);
	}

	public struct PointingRotationCalculationResult
	{
		// Fields
		public Quaternion YawRotation;
		public Quaternion PitchRotation;
		public bool ShouldPoint;
	}

	public class AvatarPointingRotationCalculator
	{
		// Fields
		private const float smallOffset = 0.5f;
		private const float minYaw = -80f;
		private const float maxYaw = 130f;
		private const float minPitch = -90f;
		private const float maxPitch = 90f;
		public float previousYawRotation;

		// Constructors
		public AvatarPointingRotationCalculator();

		// Methods
		public PointingRotationCalculationResult CalculateRotation(Vector3 pointingDirection);
		private Quaternion GetClampedYawRotation(Vector3 localDirection);
		private Quaternion GetClampedPitchRotation(Vector3 localDirection);
	}

	// Constructors
	public AvatarLimbManagerLocal();

	// Methods
	public override void Initialize(MVWorldObjectClient avatarWO, MVBody body, AvatarEnabledChangeHandler enabledChangeHandler, LimbRotationRuntimeData limbRotationRuntimeData);
	public override void UpdateLimbRotations(Vector3 lookDirection);
	public override void StartEmote(EmoteTypes emoteType);
	public void StartPointing();
	public void StartPointingWeapon();
	public void StartPointingWeaponOnlyNetworked();
	public void SetHandEquippableItem(bool value);
	private void OnShakeChatCommand();
	private void OnNodChatCommand();
	private void OnWaveChatCommand();
	private void SynchronizeHeadRotation(Quaternion newHeadRotation);
	private void SynchronizePointing(Quaternion newPointRotation);
	private void SynchronizeHasHandEquippableValue(bool newHasHandEquippableItemValue);
	private void SynchronizeEmote(int newEmote);
}

