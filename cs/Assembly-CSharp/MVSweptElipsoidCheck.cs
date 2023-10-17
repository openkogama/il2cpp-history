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

public static class MVSweptElipsoidCheck
{
	// Fields
	private const int RECT_NUM = 4;
	private const float SQUARE_ROOT_2 = 1.414214f;
	private const float MOVEBACK_FROM_BOX_COLLIDER = 1E-05f;
	private const bool DEBUG_MODE = false;
	private const bool DEBUG_DRAW = false;
	private static HashSet<IntVector> debugTestedIntVector;
	private static CellTraverser cellTraverser;
	private static Plane collisionPlane;
	private static Plane collisionPlane0;
	private static Matrix4x4 worldToElipsoidSpace;
	private static Matrix4x4 elipsoidSpaceToWorld;
	private static HashSet<int> foundWos;
	private static List<VoxelHit> voxelHits;
	private static Vector3[] cachedCornersElipsoidSpace;
	private static Vector3[] cachedFaceElipsoidSpace;
	private static VoxelHit vhCached;
	private static Vector3[] cornerPointsLocalSpaceCalculateAxisAlignedRect;
	private static Vector3[] minMaxCalculateAxisAlignedRect;
	private static Vector3[] testVectorGetMaxAngleLocalAxisVector;
	private static Ray[] raysGetBoundRays;
	private static Vector3[] circleCornersGetBoundRays;
	private static readonly Vector3[] pointsOnPlane;

	// Constructors
	static MVSweptElipsoidCheck();

	// Methods
	public static bool MVElipsoidCast(Ray ray, Transform transform, Bounds localBounds, float distance, out VoxelHit voxelHit, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static List<VoxelHit> MVElipsoidCastAll(Ray ray, Transform transform, Bounds localBounds, float distance, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static bool MVElipsoidCast(Ray ray, Vector3 radius, Quaternion rotation, float distance, out VoxelHit voxelHit, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static List<VoxelHit> MVElipsoidCastAll(Ray ray, Vector3 radius, Quaternion rotation, float distance, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	private static List<VoxelHit> MVElipsoidCast(Ray ray, Transform transform, Bounds localBounds, bool all, float distance, HashSet<int> ignoreWoIds, int layerMask = -5);
	private static List<VoxelHit> MVElipsoidCast(Ray ray, Vector3 radius, Quaternion rotation, float distance, bool all, HashSet<int> ignoreWoIds, int layerMask = -5);
	private static bool SphereHitDetectOnWo(Ray ray, Vector3 radius, Quaternion rotation, float maxRadius, float distance, int i, MVWorldObjectClient wo, PhysicsCollisionDatasWrapper collisionData, bool handleObjectsInsideBoxCollider, out VoxelHit voxelHit, HashSet<int> ignoreWoIds);
	private static void HandleObjectsInsideBoxCollider(Ray ray, Vector3 radius, Quaternion rotation, float maxRadius, float distance, int indexOfFirstHit, PhysicsCollisionDatasWrapper collisionData, ref VoxelHit voxelHit, Ray[] boundRays, HashSet<int> ignoreWoIds);
	private static bool LayerScan(ref VoxelHit vh, Vector3 radius, float maxRadius, BoxCollider chunk, float distance, ICubeModelCollider wo, PhysicsCollisionData collisionData, Ray ray, Ray[] boundRays);
	private static bool LayerScan(Vector3 radius, Vector3[] alignedRect, ref VoxelHit vh, float distance, ref CollisionState collisionState);
	private static void HandleCube(ref VoxelHit vh, IntVector pos, Vector3 radius, float distance, ref CollisionState collisionState);
	private static bool HandleTriangleTest(Vector3 p1, Vector3 p2, Vector3 p3, ref VoxelHit currentVoxelHit, float distance, Face face, Cube cube, Vector3 radiusVec, IntVector pos, CollisionState collisionState);
	private static void SetFoundHitVariables(ref VoxelHit voxelHit, PhysicsCollisionData collisionData, int woId, InteractionFlags interactionFlag);
	private static void MoveAxisAlignedRectBackward(Vector3[] pointsOnProjectPlane, Vector3 startOrigin, Vector3 dir);
	private static void DebugTest();
	private static bool IsWithinBounds(IntVector pos, ref CollisionState collisionState);
	private static void MoveAxisAlignedRectOutOfBox(Vector3[] axisAlignedRect, Vector3 localNormal, Vector3 localHit, Vector3 localDir);
	private static bool CubeIsWithinFirstHitRadius(IntVector pos, float moveDistance, ref CollisionState collisionState);
	private static bool CubeIsWithinSphereRadius(IntVector pos, ref CollisionState collisionState);
	public static Vector3 GetPlaneNormal(Vector3 localDir);
	private static bool RayCast(Ray ray, ref Vector3 hit, Plane collPlane);
	private static void CalculateAxisAlignedRect(Vector3[] hitsClockwise, Transform t);
	private static Vector3 GetMaxAngleLocalAxisVector(Ray ray, ICubeModelCollider cmb);
	private static void GetBoundRays(Ray ray, ICubeModelCollider cmb);
	public static void GetRaysProjectedOnPlane(Ray[] boundRays, ref Plane projectPlane, Vector3 planeOrigin, Vector3 planeNormal);
	private static int GetScanAxis(Vector3 scanRectNormal);
	private static void DrawAxisAlignedRect(Vector3 min, Vector3 max, int ignoreAxis, Transform t, float localIgnoreAxisValue);
}

