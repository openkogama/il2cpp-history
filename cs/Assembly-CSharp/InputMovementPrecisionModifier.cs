/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InputMovementPrecisionModifier : MonoBehaviour
{
	// Fields
	[SerializeField]
	private AnimationCurve inputMovementModificationCurve;
	private float maxMagnitude;

	// Constructors
	public InputMovementPrecisionModifier();

	// Methods
	private void Start();
	private void SetReferenceResolution(Vector2 referenceResolution);
	public Vector3 GetPrecisionInput(Vector3 input);
}

