/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AirCraftCamera : MVPlaymodeCameraBase
{
	// Fields
	public Transform lookAt;
	private float baseDistanceFromLookAt;
	private Vector3 initialLocalCamPosition;
	private Vector3 lookAtToCamDir;

	// Properties
	public override CameraType CameraType { get; }

	// Constructors
	public AirCraftCamera();

	// Methods
	public override void Enter(MVCameraController camController);
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	private void CameraCollision();
	private void UpdateCameraPosition();
}

