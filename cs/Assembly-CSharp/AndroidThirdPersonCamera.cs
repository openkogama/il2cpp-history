/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AndroidThirdPersonCamera : MVCameraBase, ICameraSettings
{
	// Fields
	[SerializeField]
	private SmoothTouchAxis SmoothTouchAxis;
	[SerializeField]
	private AxisBias axisBias;
	[SerializeField]
	private TargetRotation targetRotation;
	[SerializeField]
	private InputMovementPrecisionModifier inputMovementPrecisionModifier;
	[SerializeField]
	private float minimumY;
	[SerializeField]
	private float maximumY;
	[SerializeField]
	private Vector3 lookAtOffsetBase;
	[SerializeField]
	private Vector3 lookAtHeightOffsetBase;
	[SerializeField]
	private CameraShake cameraShake;
	private readonly CameraCollisionWithSliding cameraCollision;
	private readonly CameraLerpToDesiredDistance cameraLerpToDesiredDistance;
	private const float pitchSensitivity = 0.167f;
	private const float yawSensitivity = 0.208f;
	private const float basePitch = 20f;
	private HashSet<int> ignoreAvatarId;
	private Transform lookAtTransform;
	private float distanceToAvatarBase;
	private float currentDistanceToAvatar;
	private float desiredDistanceToAvatar;
	private Vector3 lookAtOffset;
	private Vector3 lookAtHeightOffset;
	private MVAvatarLocal avatarLocal;
	private AvatarCameraDistTransparency avatarCameraDistTransparency;
	private const string mouseX = "Mouse X";
	private const string mouseY = "Mouse Y";

	// Properties
	public override CameraType CameraType { get; }

	// Constructors
	public AndroidThirdPersonCamera();

	// Methods
	public override void Awake();
	public void Initialize(MVAvatarLocal al);
	public override void Activate();
	public override void Deactivate();
	public void SetDefaultSettings();
	private void ResetScaledValues();
	public void ScaleCameraValues(float scale);
	public void UpdateFromCameraSettings(Dictionary<object, object> data);
	public override void Enter(MVCameraController cameraController);
	public override void Resume(MVCameraController camController);
	public override void Reset();
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	private void LerpCurrentDistanceToDesiredDistance();
	private void HandleCollision();
	private void UpdatePosition();
	private void UpdateTargetRotation();
	public override void Exit(MVCameraController camController);
}

