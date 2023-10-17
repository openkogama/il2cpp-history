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

public static class MVElipsoidOverlapCheck
{
	// Fields
	private static Matrix4x4 worldToElipsoidSpace;
	private static Matrix4x4 elipsoidSpaceToWorld;
	private static Matrix4x4 localToElipsoidSpace;
	private static Vector3 localElipsoidPosition;
	private static Matrix4x4 worldToRadiusExtendedElipsoidSpace;
	private static Matrix4x4 radiusExtendedElipsoidSpaceToWorld;
	private static Matrix4x4 localToRadiusExtendedElipsoidSpace;
	private static bool reducedElipsoidSpaceExists;
	private static Matrix4x4 worldToRadiusReducedElipsoidSpace;
	private static Matrix4x4 radiusReducedElipsoidSpaceToWorld;
	private static Matrix4x4 localToRadiusReducedElipsoidSpace;
	private static Matrix4x4 localToWorld;
	private static Matrix4x4 worldToLocal;
	private static Vector3[] cachedCorners;
	private static Vector3[] cachedFace;
	private const float SQRT_3 = 1.7320508f;
	private static ElipsoidOverlapCheckType checkType;
	private static List<IntVector> cachedIntVectors;

	// Constructors
	static MVElipsoidOverlapCheck();

	// Methods
	public static bool ElipsoidOverlapCheckBool(Vector3 radius, Vector3 position, Quaternion rotation, int layerMask = -5, HashSet<int> ignoreWoIds = null);
	public static List<MVOverlapResult> ElipsoidOverlapCheckSector(Vector3 radius, Vector3 position, Quaternion rotation, int layerMask = -5, HashSet<int> ignoreWoIds = null);
	public static bool ElipsoidOverlapCheckBool(Vector3 position, Transform transform, Bounds localBounds, int layerMask = -5, HashSet<int> ignoreWoIds = null);
	public static List<MVOverlapResult> ElipsoidOverlapCheckSector(Vector3 position, Transform transform, Bounds localBounds, int layerMask = -5, HashSet<int> ignoreWoIds = null);
	private static List<MVOverlapResult> ElipsoidOverlapCheck(Vector3 position, Transform transform, Bounds localBounds, HashSet<int> ignoreWoIds, int layerMask = -5);
	private static List<MVOverlapResult> ElipsoidOverlapCheck(Vector3 radius, Vector3 position, Quaternion rotation, HashSet<int> ignoreWoIds, int layerMask = -5);
	private static bool ElipsoidOverlapCheckOnWo(Vector3 radius, Vector3 position, Quaternion rotation, BoxCollider chunk, MVWorldObjectClient wo, out MVOverlapResult elipsoidOverlapResult);
	private static bool ScanElipsoidBounds(Bounds localElipsoidBounds, BoxCollider chunk, ICubeModelCollider cmb, ref MVOverlapResult elipsoidOverlapResult);
	private static bool HandleCube(IntVector cubePos, ICubeModelCollider cmb, ref MVOverlapResult elipsoidOverlapResult);
	private static bool IsCenterPointWithinCube(Cube cube, Vector3 localPos);
	private static bool DoDetailedCheck(Cube cube, Vector3 localPos);
	private static bool HandleTriangleTest(Vector3 A, Vector3 B, Vector3 C, Vector3 P, float r);
	private static Vector3[] GetTangentNormalsLocalSpace();
	private static Bounds GetBoundsFromAxisAlignedVectors(Vector3[] vectors);
	private static Bounds GetBoundsFromVectors(Vector3[] vectors);
	private static Vector3 GetTangentNormal(Vector3 tangent0, Vector3 tangent1);
}

