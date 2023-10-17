/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using WorldObjectTypes.VehicleEnergy;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class SimpleVehicleMotorBase : MVRigidBody
{
	// Fields
	private ImpactState impactState;
	protected MVMovableMotorState movableMotorState;
	protected MVInteractableBase interactableLocal;
	protected SmoothCharacterController smoothController;
	protected StuckEvaluator stuckEvaluator;
	protected VehicleEnergyContainer vehicleEnergyContainer;
	protected const float WaterProximityThreshold = 0.01f;
	protected const float WaterDownVelocity = 50f;
	protected const float WaterOffset = -0.6f;
	protected const float MaxUnderWaterYMovement = 40f;
	[CompilerGenerated]
	private IVehicleCamera _VehicleCamera_k__BackingField;
	public Vector3 DirectInputMoveMap;
	public bool Jump;
	public bool HandleInput;

	// Properties
	protected MvCharacterController Controller { get; }
	public IVehicleCamera VehicleCamera { [CompilerGenerated] protected get; [CompilerGenerated] set; }
	public override bool Grounded { get; }

	// Constructors
	protected SimpleVehicleMotorBase();

	// Methods
	public virtual void Init(SmoothCharacterController smoothController, VehicleInteractable interactableLocalParam, VehicleEnergyContainerConfig vehicleEnergyContainerConfig);
	public virtual void OnLocalVehicleLeave();
	public virtual void OnLocalVehicleEnter();
	public bool IsStuck();
	public abstract void VehicleUpdateFunction();
	public override void Reset();
	protected override void SuspendImpactDamage();
	public void UpdateFunction();
	protected float WaterProximity();
	protected static Vector3 ApplyWaterGravity(Vector3 velocity, float waterProximity, float deltaTime);
	protected void DealImpactDamage(Vector3 curVelocity, Vector3 prevVelocity);
	protected void Move(Vector3 velocity, Vector3 baseVelocity, float deltaTime);
	public void RefillEnergy(VehicleEnergyRefill vehicleEnergyRefill);
	public bool UsesEnergy();
	public void RollbackRefillEnergyPrediction(int spawnerId);
}

