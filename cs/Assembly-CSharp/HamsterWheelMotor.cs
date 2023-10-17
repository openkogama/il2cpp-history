/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using WorldObjectTypes.VehicleEnergy;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HamsterWheelMotor : SimpleVehicleMotorBase
{
	// Fields
	private HamsterWheelBounceState bounceState;
	private JumpState jumpState;
	private Vector3 curVelocity;
	private float speed;
	private const float MaxSpeed = 38.8f;
	private const float MinSpeed = -10f;
	private const float AccelerationSpeed = 48f;
	private const float AngularSpeed = 1.4f;
	private const float RecalibrateCameraFactor = 1.05f;
	public const bool DefaultVehicleEnergyOn = false;
	public const int DefaultVehicleEnergyStorage = 35;
	public const int MinVehicleEnergyStorage = 10;
	public const int MaxVehicleEnergyStorage = 75;
	public const int DefaultVehicleEnergyConsumption = 4;
	public const int MinVehicleEnergyConsumption = 2;
	public const int MaxVehicleEnergyConsumption = 11;
	private MVInteractableBase interactable;
	[CompilerGenerated]
	private bool _IsMovementLocked_k__BackingField;

	// Properties
	public override Vector3 Velocity { get; }
	public override bool IsMovementLocked { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public HamsterWheelMotor();

	// Methods
	public override void Init(SmoothCharacterController smoothCharacterController, VehicleInteractable interactableLocalParam, VehicleEnergyContainerConfig vehicleEnergyContainerConfig);
	public override void VehicleUpdateFunction();
	public override void Reset();
	private Vector3 GetVehicleVelocity(Vector3 velocity, Vector3 baseVelocity);
	private Vector3 GetVehicleVelocityClassicCam(Vector3 velocity, Vector3 movableVelocity);
}

