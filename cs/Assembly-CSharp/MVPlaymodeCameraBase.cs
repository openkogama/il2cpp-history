/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVPlaymodeCameraBase : MVCameraBase
{
	// Fields
	private float shakeStrength;
	private float shakeDuration;
	protected Vector3 shakeOffset;
	public float shakeMaxFactor;
	public float shakeTimeFactor;
	public float shakeStrengthFadeSpeed;
	public AnimationCurve shakeFactorSpeedCurve;

	// Constructors
	protected MVPlaymodeCameraBase();

	// Methods
	public override void Exit(MVCameraController camController);
	protected void Shake(float speed);
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
}

