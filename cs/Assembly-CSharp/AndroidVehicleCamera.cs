/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AndroidVehicleCamera : MVCameraBase, IVehicleCamera
{
	// Fields
	private MVAvatarLocal avatarLocal;
	private Transform originalTransformParent;
	private readonly CameraLerpToDesiredDistance cameraLerpToDesiredDistance;
	private readonly CameraCollision cameraCollision;
	private HashSet<int> ignoreAvatarId;
	[SerializeField]
	private TargetRotation targetRotation;
	[SerializeField]
	private Transform lookAtTransform;
	[SerializeField]
	private float mouseSensitivity;
	[SerializeField]
	private CameraShake cameraShake;
	[SerializeField]
	private float distanceToLookAt;
	[SerializeField]
	private float minimumY;
	[SerializeField]
	private float maximumY;
	[SerializeField]
	private float initialYRotation;
	[SerializeField]
	private float localPitch;
	[SerializeField]
	private Vector3 lookAtOffset;
	private float rotationX;

	// Properties
	public float RotationAroundY { get; set; }
	public override CameraType CameraType { get; }

	// Constructors
	public AndroidVehicleCamera();

	// Methods
	public void Initialize(MVAvatarLocal avatarLocal);
	public override void Enter(MVCameraController camController);
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	public override void Exit(MVCameraController camController);
	private void HandleCollision();
	private void HandlePos();
	private void UpdateTargetRotation();
}

