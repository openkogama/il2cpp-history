/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PhysicsCollisionData
{
	// Fields
	public Vector3 point;
	public Transform transform;
	public bool isInsideCollider;
	public float distance;
	public Vector3 normal;
	public Collider collider;

	// Constructors
	public PhysicsCollisionData();

	// Methods
	public void Set(RaycastHit hit);
	public void Set(Collider collider, Vector3 origin);
	public void Clear();
}

