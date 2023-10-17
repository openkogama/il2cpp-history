/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TargetRotation : MonoBehaviour
{
	// Fields
	private Vector3 eulerAngles;
	[SerializeField]
	private float lerpSpeedX;
	[SerializeField]
	private float lerpSpeedY;

	// Properties
	public Vector3 EulerAngles { get; }

	// Constructors
	public TargetRotation();

	// Methods
	public void SetTargetRotation(Vector2 pitchYaw);
	public void SetTargetRotation(float pitch, float yaw);
	public void SetTargetRotation(Quaternion q);
	public Quaternion GetLerpRotation(Quaternion from);
}

