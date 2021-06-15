/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CameraShake : MonoBehaviour
{
	// Fields
	private float shakeStrength;
	private float shakeDuration;
	private Vector3 shakeOffset;
	[SerializeField]
	private float shakeMaxFactor;
	[SerializeField]
	private float shakeTimeFactor;
	[SerializeField]
	private float shakeStrengthFadeSpeed;
	[SerializeField]
	private AnimationCurve shakeFactorSpeedCurve;

	// Constructors
	public CameraShake();

	// Methods
	public Vector3 Shake(Vector3 position, float speed);
	private Vector3 Shake(float speed);
}

