/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SmoothTouchAxis
{
	// Fields
	private readonly int sampleLength;
	private readonly Queue<Vector3> prevVelocities;

	// Constructors
	public SmoothTouchAxis(int sampleLength);

	// Methods
	public void Reset();
	public Vector3 UpdateSmoothVelocity(Vector3 movement);
}

