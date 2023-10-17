/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FallBehindPitch
{
	// Fields
	private Vector3 prevCameraRotatedPosition;
	private Vector3 prevPosition;
	private const float distanceBeforeFallBehind = 2f;
	private const float degreesPrMeter = 3f;
	private State state;

	// Nested types
	private enum State
	{
		FallingBehind = 0,
		RotationSet = 1
	}

	// Constructors
	public FallBehindPitch();

	// Methods
	public Quaternion Update(Quaternion rotation, Vector3 position, float basePitch);
	private Quaternion FallBehind(Quaternion rotation, Vector3 position, float basePitch);
	private float DoFallBehind(float currentPitch, Vector3 position, float basePitch);
	public void SetCameraRotatePos(Vector3 position);
}

