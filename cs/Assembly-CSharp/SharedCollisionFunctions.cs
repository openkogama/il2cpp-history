/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class SharedCollisionFunctions
{
	// Fields
	private static readonly RaycastHitComparer rayHitComparer;
	private static readonly PhysicsCollisionDatasWrapper physicsCollisionWrapper;
	[CompilerGenerated]
	private static Comparison<RaycastHit> __f__am_cache0;

	// Constructors
	static SharedCollisionFunctions();

	// Methods
	public static PhysicsCollisionDatasWrapper GetPhysicsCollisionData(Collider[] overlapResult, RaycastHit[] hits, Vector3 origin);
	public static PhysicsCollisionDatasWrapper GetPhysicsCollisionData(int overlapAmount, Collider[] overlapResult, int hitAmount, RaycastHit[] hits, Vector3 origin);
	public static void GetVoxelBounds(ref IntVector min, ref IntVector max, Bounds localSpaceBounds);
	public static void SetToNoneVoxelHit(ref VoxelHit voxelHit, PhysicsCollisionData hit, int woId);
	public static void SetToVoxelHit(ref VoxelHit voxelHit0, ref VoxelHit voxelHit1);
	public static bool IgnoreCollision(MVWorldObjectClient wo, HashSet<int> ignoreWoIds);
	[CompilerGenerated]
	private static int _GetPhysicsCollisionData_m__0(RaycastHit hit0, RaycastHit hit1);
}

