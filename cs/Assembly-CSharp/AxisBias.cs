/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AxisBias : MonoBehaviour
{
	// Fields
	[SerializeField]
	private AnimationCurve horizontalBias;

	// Constructors
	public AxisBias();

	// Methods
	public Vector3 GetBiasedVector(Vector3 inputVector);
	private Vector3 GetBiased(float dotVal, Vector3 normalizedInputVector, Vector3 biasVector);
}

