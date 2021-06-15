/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ClosestPointPoint : ClosestPointBase
{
	// Fields
	[SerializeField]
	private Transform transform;

	// Constructors
	public ClosestPointPoint();

	// Methods
	public void Init(Transform t);
	public override Vector3 GetClosestPoint(Vector3 from);
	public Vector3 GetClosestPoint();
	private void OnValidate();
}

