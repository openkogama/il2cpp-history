/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public struct CollisionState
{
	// Fields
	public Vector3 localOrigin;
	public Vector3 localHitPoint;
	public Vector3 localNormal;
	public Vector3 localDirection;
	public Vector3 origin;
	public Vector3 direction;
	public ICubeModelCollider cmb;
	public Matrix4x4 localToElipsoidSpace;
	public int scanAxis;
	public IntVector minBounds;
	public IntVector maxBounds;
	public int firstHitScanAxis;
	public bool firstHitDetected;
	public float scaledMaxRadius;
	public Vector3 elipsoidSpaceOrigin;
	public Vector3 elipsoidSpaceDirection;
	public float elipsoidSpaceDistance;
}

