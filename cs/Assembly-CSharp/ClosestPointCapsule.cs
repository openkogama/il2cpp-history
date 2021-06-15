/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ClosestPointCapsule : ClosestPointBase
{
	// Fields
	[SerializeField]
	private CapsuleCollider capsule;

	// Properties
	private Transform Transform { get; }
	private Vector3 Position { get; }
	private Vector3 Scale { get; }

	// Constructors
	public ClosestPointCapsule(CapsuleCollider c);

	// Methods
	public override Vector3 GetClosestPoint(Vector3 from);
	private void OnValidate();
}

