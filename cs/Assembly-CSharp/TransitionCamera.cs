/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TransitionCamera : MVCameraBase
{
	// Fields
	private float fieldOfView;
	private float transitionPercentage;
	private bool superSoft;
	private Vector3 prevCameraPosition;
	private Quaternion prevCameraRotation;
	private float time;

	// Properties
	public override float FieldOfView { get; }
	public float TransitionPercentage { get; }
	public override CameraType CameraType { get; }

	// Constructors
	public TransitionCamera();

	// Methods
	public void InitTransition(Transform targetCameraTransform, float transitionTime = 2f, bool soft = false);
	public void AbortTransition();
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	private Quaternion RotateTowardsY(Vector3 eulerFrom, Vector3 eulerTo, float percentage);
	private Quaternion RotateTowardsX(Vector3 eulerFrom, Vector3 eulerTo, float percentage);
}

