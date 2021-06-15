/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVJetPack : MVVehicleBase
{
	// Fields
	private CullingSubscriberDynamic cullingSubscriberDynamic;
	private EditableCubeModelWrapper editableCubeModelWrapper;
	private MVRuntimeDataVariableClampedFloat shield;
	public MVRuntimeDataVariableClampedFloat Health;
	public MVRuntimeDataVariable Modifiers;
	public MVRuntimeDataVariable JetMode;
	private JetPackParameters jetPackParameters;
	private JetPackType jetPackType;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public MVRuntimeDataVariableClampedFloat Shield { get; set; }

	// Nested types
	public enum JetModeType : byte
	{
		Off = 0,
		On = 1,
		Overheating = 2,
		NotSet = 3
	}

	public enum JetPackType : byte
	{
		JetPack = 0,
		JetPackDeluxe = 1
	}

	protected class LocalObjectsJetPack : MVVehicleBase.LocalObjectsBase
	{
		// Fields
		private float thrustTimeOverheatThreshold;
		private float thrustTimeWarning;
		private float thrustTime;
		private float coolDownFactor;
		private JetPackMotor vehicleMotor;
		private MVJetPack owner;
		private MVTriggerHandler triggerHandler;
		private MVPickupOwner avatarPickupOwner;
		private bool walkMode;
		private bool leaveMode;
		private SmoothCharacterController avatarController;
		private Camera mainCamera;
		private JetPackVisualization jetPackVisualization;
		private MVAvatarLocal vehicleUser;
		private bool wasFiring;
		private int framesGrounded;
		private int framesGroundedThreshold;

		// Properties
		public override int Id { get; }
		protected override MVVehicleBase Owner { get; }

		// Constructors
		public LocalObjectsJetPack(MVJetPack vehicleBase, MVAvatarLocal vehicleUser, JetPackParameters jetPackTypeParameters, VehicleSeatBase seat);

		// Methods
		private void OnFiring(bool isFiring);
		public override void Destroy();
		public override void Leave();
		public override InputToInGameAction Update(InputToInGameAction interactionInput);
		public override void Enter();
		public override IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement movementMap);
		private bool WalkMode(bool thrust);
		private bool EvaluateThrust(bool thrust);
		private void OverheatUpdate(bool thrust);
		private Quaternion FiringDirectionRotation();
		public IInputToPlayerMovement HandleWalkMode(IInputToPlayerMovement movementMap);
	}

	// Constructors
	public MVJetPack(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	public override bool OnEnterObject(EditorStateMachine e);
	public override bool OnExitObject(EditorStateMachine e);
	public override void Destroy();
	public override bool CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref int insertedByProfileId);
	protected override void VehicleEntered(MVAvatar vehicleUser, int seatID);
	protected override LocalObjectsBase CreateLocalObjects(int seatID, MVAvatarLocal vehicleUser);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	private void OnIsDeadChange(object isDead);
	private static JetPackType GetJetPackType(Dictionary<object, object> data);
	private static VehicleBaseObject GetPickupPrefabName(Dictionary<object, object> data);
}

