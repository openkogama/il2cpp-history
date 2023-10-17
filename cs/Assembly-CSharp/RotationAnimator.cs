/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RotationAnimator : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform rotateTarget;
	[SerializeField]
	[Tooltip("Rotation animation curve, value 1 = full rotation")]
	private AnimationCurve rotateCurve;
	[SerializeField]
	private float rotateSpeed;

	// Constructors
	public RotationAnimator();

	// Methods
	private void Update();
}

