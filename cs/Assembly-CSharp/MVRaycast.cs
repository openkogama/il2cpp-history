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

public static class MVRaycast
{
	// Fields
	private const float HALF_VOXEL_SIZE = 0.5f;
	private const float LINE_FACET_TEST_DISTANCE = 300f;
	private static Bounds cubeBounds;
	private static Ray intersectRay;
	private static HashSet<int> foundWos;
	private static List<VoxelHit> voxelHits;
	private static List<UnityEngine.RaycastHit> sortedHits;
	private static List<Collider> colliderList;

	// Constructors
	static MVRaycast();

	// Methods
	public static bool MVHit(Ray ray, MVWorldObjectClient wo, out VoxelHit voxelHit, float distance = 1F / 0F);
	public static List<VoxelHit> MVHitAll(Ray ray, float distance = 1F / 0F, int layerMask = -5, HashSet<int> ignoreWoIds = null);
	public static bool MVHit(Ray ray, out VoxelHit voxelHit, float distance = 1F / 0F, int layerMask = -5, HashSet<int> ignoreWoIds = null);
	private static List<VoxelHit> MVHit(Ray ray, bool all, float distance, int layerMask, HashSet<int> ignoreWoIds);
	private static bool HitDetectOnWo(Ray ray, int i, MVWorldObjectClient wo, PhysicsCollisionDatasWrapper collisionData, bool handleObjectsInsideBoxCollider, out VoxelHit voxelHit, HashSet<int> ignoreWoIds, float distance = 1F / 0F);
	private static void HandleObjectsInsideBoxCollider(Ray ray, int indexOfFirstHit, PhysicsCollisionDatasWrapper collisionData, ref VoxelHit voxelHit, HashSet<int> ignoreWoIds, float distance);
	private static void SetFoundHitVariables(ref VoxelHit voxelHit, PhysicsCollisionData collisionData, ICubeModelCollider cubeModelBase);
	private static bool IsWithinDistance(float distance, Vector3 localOrigin, IntVector voxelPos);
	private static bool GetCellOnRay(Ray ray, ref VoxelHit vHit, GameObject chunk, ICubeModelCollider cmb, Vector3 hitPoint, float distance, Vector3 scale);
	private static bool GetHitPoint(Ray ray, Cube cube, ref VoxelHit vHit, IntVector voxelPos, Vector3 localBoundsHitPoint, Vector3 scale, float scaledDistance);
}

