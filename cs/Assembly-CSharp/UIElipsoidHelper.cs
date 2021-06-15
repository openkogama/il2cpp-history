/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class UIElipsoidHelper
{
	// Fields
	private readonly Matrix4x4 elipsoidSpaceToWorld;
	private readonly Matrix4x4 worldToElipsoidSpace;
	private readonly float width;
	private readonly float height;

	// Constructors
	public UIElipsoidHelper(float width, float height);

	// Methods
	public bool IsIdentical(float width, float height);
	public Vector3 Clamp(Vector3 deltaDir);
	public float NormalizedDistance(Vector3 deltaDir);
}

