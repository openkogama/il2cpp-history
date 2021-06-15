/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ClosestPointSphere : ClosestPointBase
{
	// Fields
	[SerializeField]
	private Vector3 offset;
	[SerializeField]
	private float radius;

	// Constructors
	public ClosestPointSphere();

	// Methods
	protected void OnDrawGizmos();
	public override Vector3 GetClosestPoint(Vector3 spectator);
}

