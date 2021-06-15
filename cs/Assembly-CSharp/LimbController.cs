/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LimbController
{
	// Fields
	private MVWorldObjectClient avatarWO;
	private Transform limbTransform;
	private Quaternion limbsOriginalRotation;
	private Quaternion modelRotationOffset;
	private Quaternion interpolateTowardsYawRotation;
	private Quaternion interpolateTowardsPitchRotation;
	private Quaternion previousLimbRotation;
	private float interpolationSpeed;
	private float elapsedInterpolationTime;
	private float maxYaw;
	private float maxPitch;
	private float rotationDuration;
	private float elapsedInterpolateAnimationTime;
	private bool shouldRotate;
	private string currentAnimation;
	private List<string> blendAnimations;
	private List<string> cancelAnimations;
	private bool isEventControllingLimb;

	// Properties
	public Quaternion InterpolateTowardsYawRotation { get; }
	public Quaternion InterpolateTowardsPitchRotation { get; }
	public float InterpolationSpeed { get; set; }
	public bool IsEventControllingLimb { set; }
	public string CurrentAnimation { set; }

	// Constructors
	public LimbController();

	// Methods
	public void Initialize(AvatarLimbManager limbManager, MVWorldObjectClient avatarWO, MVBody body, BodyData.PartIndex partIndex, Quaternion modelRotationOffset, Quaternion originalRotation, List<string> blendAnimations, List<string> cancelAnimations, float maxYaw, float maxPitch);
	public void TrySetNewRotation(Quaternion yawRotation, Quaternion PitchRotation);
	public void TrySetNewRotation(Quaternion yawRotation, Quaternion PitchRotation, float duration);
	public void SetNewRotation(Quaternion yawRotation, Quaternion PitchRotation);
	public void SetNewRotation(Quaternion yawRotation, Quaternion PitchRotation, float duration);
	public void StopRotating();
	public void UpdateRotation();
	private void UpdateRotationDuration();
	private bool IsCancelRotation(string currentAnimation);
	private bool ShouldBlendWithAnimation(string currentAnimation);
	private Quaternion CalculateBlendedRotation();
	private void UpdateInterpolation(Quaternion interpolateTowardsRotation);
	private void InterpolateTowardsAnimation(string currentAnimation);
	private Quaternion GetYawRotation(Vector3 localDirection);
	private Quaternion GetPitchRotation(Vector3 localDirection);
	private Quaternion AddAndClampRotations(Quaternion rotation1, Quaternion rotation2);
	public void StartBlendingWithAnimation(string animation);
	public void StopBlendingWithAnimation(string animation);
	public void ResetInterpolation();
	private void FinishInterpolation();
}

