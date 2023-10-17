/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThirdPersonCamera : PlaymodeCamera, ICameraSettings
{
	// Fields
	private float baseDistanceSettings;
	private const string mouseX = "Mouse X";
	private const string mouseY = "Mouse Y";

	// Properties
	public override CameraType CameraType { get; }

	// Constructors
	public ThirdPersonCamera();

	// Methods
	public override void Activate();
	public override void Deactivate();
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	public void UpdateFromCameraSettings(Dictionary<object, object> data);
	public void SetDefaultSettings();
	public void ScaleCameraValues(float scale);
	private void ResetScaleValues();
	private void UpdateTargetRotation();
}

