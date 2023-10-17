/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AndroidFirstPersonCamera : FirstPersonCamera
{
	// Fields
	[SerializeField]
	private AxisBias axisBias;
	[SerializeField]
	private InputMovementPrecisionModifier inputMovementPrecisionModifier;

	// Constructors
	public AndroidFirstPersonCamera();

	// Methods
	protected override void UpdateCameraRotation();
	private float DegreesBetween(float eulerA, float eulerB);
	private float EulerClamp(float a, float min, float max);
}

