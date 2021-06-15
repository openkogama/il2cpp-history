/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ObjectiveArrow : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float animationSpeed;
	[SerializeField]
	private Vector3 arrowOffset;
	[SerializeField]
	private AnimationCurve bobbleCurve;
	[SerializeField]
	private AnimationCurve animationSpawnCurve;
	[SerializeField]
	private float animationLerpTime;
	[SerializeField]
	private float distanceScale;
	private Vector3 initialScale;
	private Vector3 startPos;
	private Transform targetPickup;
	private Transform targetDropOff;
	private float initialHeight;
	private float farPlane;
	private float animationTimer;

	// Constructors
	public ObjectiveArrow();

	// Methods
	public void Initialize(Vector3 startPos, Transform dropOff, Transform pickup);
	public void OnPositionChanged(MVWorldObjectClient wo, PositionChangedEventArgs args);
	private void Update();
	private void UpdateLerpAnimation();
	private void UpdateArrowTransform();
	private void MoveInDirection(Vector3 dir, float dist);
	private void SetArrowBobbing(float dist);
	private void SetScaleFromDistance(float dist);
}

