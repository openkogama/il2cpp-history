/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GhostBody : MonoBehaviour
{
	// Fields
	private float angularMaxRotationBase;
	private float angularMaxRotation;
	private float currentAngularRotation;
	private float timeBeforeTargetRotation;

	// Constructors
	public GhostBody();

	// Methods
	private void Update();
	public void SetRotationSpeed(float rotationSpeed);
	private void UpdateRotation();
	private float RotationWithInertia(float desiredAngularRotation);
}

