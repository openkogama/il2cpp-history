/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HamsterWheelVisualization : VehicleVisualizationBase
{
	// Fields
	public GameObject wheel;
	[SerializeField]
	private VehicleBlinker vehicleBlinker;
	[SerializeField]
	private Transform hamsterWheelVisualizationRoot;
	public AvatarBlobShadowController blobShadow;
	public AudioSource audioSourceRolling;
	public AudioSource audioSourceWind;
	private VehicleSeatManager vehicleSeatManager;
	private float curHealth;
	private Vector3 prevPosition;
	private Vector3 velocity;
	private SpeedState speedState;
	private bool vehicleIsUnoccupied;
	private float unoccupiedTime;
	private float vehicleAboutToBeRemovedTime;

	// Nested types
	public enum SpeedState
	{
		Idle = 0,
		Moving = 1
	}

	// Constructors
	public HamsterWheelVisualization();

	// Methods
	private void Awake();
	public void Init(VehicleSeatManager vehicleSeatManager, float fullHealth, MVRuntimeDataVariableClampedFloat health, MVRuntimeDataVariable isMovingForward, MVRuntimeDataVariable isMovingBackwards, MVRuntimeDataVariable isGrounded, bool isInSpawner);
	public void OnSeatOccupiedChange();
	private void Update();
	private void FixedUpdate();
	private void OnEnable();
	private void OnDisable();
	private void OnHealthChange(float newHealth);
	private void OnGroundedChange(bool val);
	private void HandleUnoccupiedVehicle();
	[CompilerGenerated]
	private void _Init_b__16_0(object healthVal);
	[CompilerGenerated]
	private void _Init_b__16_1(object val);
}

