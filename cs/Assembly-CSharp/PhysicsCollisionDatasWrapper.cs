/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PhysicsCollisionDatasWrapper
{
	// Fields
	private int length;
	private readonly List<PhysicsCollisionData> physicsCollisionDatas;

	// Properties
	public int Length { get; }
	public PhysicsCollisionData this[int key] { get => default; }

	// Constructors
	public PhysicsCollisionDatasWrapper();

	// Methods
	public void Clear();
	public void Add(UnityEngine.RaycastHit hit);
	public void Add(Collider collider, Vector3 origin);
}

