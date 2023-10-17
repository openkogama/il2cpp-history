/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehicleCamera : PlaymodeCamera, IVehicleCamera
{
	// Fields
	private float rotationAroundY;
	private Transform originalTransformParent;
	[SerializeField]
	private Transform LookAtTransform;
	private const string mouseX = "Mouse X";
	private const string mouseY = "Mouse Y";

	// Properties
	public float RotationAroundY { get; set; }
	public override CameraType CameraType { get; }

	// Constructors
	public VehicleCamera();

	// Methods
	public override void Initialize(MVAvatarLocal avatarLocal);
	public override void Reset();
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	public override void Enter(MVCameraController cameraController);
	public override void Exit(MVCameraController camController);
	private void UpdateTargetRotation();
}

