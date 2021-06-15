/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVSimpleOneSeatVehicle : MVVehicleBase, ICurrentItemOwner
{
	// Fields
	public MVRuntimeDataVariableClampedFloat Health;
	public MVRuntimeDataVariable Modifiers;
	public MVRuntimeDataVariable CurrentItem;
	public MVRuntimeDataVariable IsFiring;
	private MVRuntimeDataVariableClampedFloat shield;
	protected EditableCubeModelWrapper editableCubeModelWrapper;

	// Properties
	public MVRuntimeDataVariableClampedFloat Shield { get; set; }

	// Nested types
	protected class LocalObjectsSimpleVehicle : MVVehicleBase.LocalObjectsBase
	{
		// Fields
		protected VehiclePickupOwner pickupOwner;
		protected PickupGUI pickupGUI;
		protected MVTriggerHandler triggerHandler;
		protected SimpleVehicleMotorBase vehicleMotor;
		private MVSimpleOneSeatVehicle owner;

		// Properties
		public override int Id { get; }
		protected override MVVehicleBase Owner { get; }

		// Constructors
		public LocalObjectsSimpleVehicle(MVSimpleOneSeatVehicle vehicleBase, SmoothCharacterController smoothController, SimpleVehicleMotorBase motor);

		// Methods
		public override void Destroy();
		public override void Leave();
		public override void Enter();
		public override IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement movementMap);
		public override InputToInGameAction Update(InputToInGameAction interactionInput);
	}

	// Constructors
	protected MVSimpleOneSeatVehicle(Dictionary<object, object> data, VehicleBaseObject _vehiclePrefab, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void Select(Color color);
	public override void DeSelect();
	public override bool OnEnterObject(EditorStateMachine e);
	public override bool OnExitObject(EditorStateMachine e);
	public Dictionary<object, object> GetCurrentItemState();
	public void SetCurrentItemState(Dictionary<object, object> aNewState);
}

