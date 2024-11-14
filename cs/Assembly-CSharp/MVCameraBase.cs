/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVCameraBase : MonoBehaviour
{
	// Fields
	private CameraImpact cameraImpact;
	protected IgnoreInputTypes ignoreInputTypes;
	public float cameraRadius;

	// Properties
	protected bool InputActive { get; }
	public abstract CameraType CameraType { get; }
	public virtual float FieldOfView { get; }

	// Constructors
	protected MVCameraBase();

	// Methods
	public virtual void Awake();
	public void camController_onIgnoreInputTypes(object sender, OnIgnoreInputTypesArgs e);
	public virtual void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	protected void UpdateImpactSimulation(ProtectedTransform targetTransform);
	public void SimulateImpact(Vector3 impactDirection, AnimationCurve impactCurve, float forceMultiplier = 1f, Space impactSpace = Space.World);
	private void SimulateImpact(Transform targetTransform);
	private void SimulateImpact(Transform targetTransform, Vector3 impactDirection, AnimationCurve impactCurve, float forceMultiplier, Space impactSpace = Space.World);
	protected virtual void CameraCollision();
	public virtual void Enter(MVCameraController camController);
	public virtual void Exit(MVCameraController camController);
	public virtual void Suspend(MVCameraController camController);
	public virtual void Resume(MVCameraController camController);
	public virtual void Reset();
	public virtual void FocusOnObject(MVWorldObjectClient wo, float transitionTime = 2f, Vector3 avatarOffset = default, Vector3 cameraOffset = default);
	public virtual void Activate();
	public virtual void Deactivate();
}

