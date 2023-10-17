/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class SharedCollisionFunctions
{
	// Fields
	private static readonly RaycastHitComparer rayHitComparer;
	private static readonly PhysicsCollisionDatasWrapper physicsCollisionWrapper;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Comparison<RaycastHit> __9__2_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _GetPhysicsCollisionData_b__2_0(RaycastHit hit0, RaycastHit hit1);
	}

	// Constructors
	static SharedCollisionFunctions();

	// Methods
	public static PhysicsCollisionDatasWrapper GetPhysicsCollisionData(Collider[] overlapResult, RaycastHit[] hits, Vector3 origin);
	public static PhysicsCollisionDatasWrapper GetPhysicsCollisionData(int overlapAmount, Collider[] overlapResult, int hitAmount, RaycastHit[] hits, Vector3 origin);
	public static void GetVoxelBounds(ref IntVector min, ref IntVector max, Bounds localSpaceBounds);
	public static void SetToNoneVoxelHit(ref VoxelHit voxelHit, PhysicsCollisionData hit, int woId);
	public static void SetToVoxelHit(ref VoxelHit voxelHit0, ref VoxelHit voxelHit1);
	public static bool IgnoreCollision(MVWorldObjectClient wo, HashSet<int> ignoreWoIds);
}

