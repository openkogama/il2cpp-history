/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public struct MVControllerColliderHit
{
	// Fields
	public Vector3 positionTouchingHit;
	public Vector3 moveDirection;
	public Vector3 elipsoidNormal;
	public Vector3 slopeNormal;
	public Vector3 impactVelocity;
	public VoxelHit hit;
	public MVMaterial material;
	public bool testWithOutMoving;

	// Constructors
	public MVControllerColliderHit(VoxelHit hit, Vector3 position, Vector3 elipsoidRadius, Vector3 R3Velocity, bool testWithOutMoving);
}

