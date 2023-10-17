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

internal static class SharedCubeFunctions
{
	// Fields
	private static readonly IntVector constraint;
	public const float LowestCubeSize = 0.0625f;
	public const float CubeSegmentSize = 0.25f;
	public const float Gridsize = 1f;
	public const float NoneGridSize = 0.0625f;
	private const float forceEdgeDistance = 0.15f;
	public static IntVector[][] LightTestOffsets;
	public static IntVector[][] LightTestOffsetsInside;

	// Properties
	public static IntVector CubeConstraint { get; }
	public static Vector3 CubeConstraintVector3 { get; }

	// Constructors
	static SharedCubeFunctions();

	// Methods
	public static void AddCubeMeshCubeLines(Mesh mesh, Vector3[] corners, float diagonalWidth);
	public static void AddCubeLine(Mesh mesh, Vector3 p0, Vector3 p1, float diagonalWidth);
	public static void AddCubeMesh(Mesh mesh, Vector3[] corners, bool insideOut);
	public static Vector3[] GetCorners();
	public static Vector3[] GetCorners(Bounds bounds);
	public static Vector3[] GetCorners(Vector3 min, Vector3 max);
	public static Vector3[] GetVertices();
	public static Vector3[] GetVertices(Vector3[] corners);
	public static Vector3 GetClosestGridPoint(Vector3 worldPosition, Quaternion rotation, float gridSize, Vector3 scale);
	public static IntVector WorldToLocal(GameObject gameObject, Vector3 point, bool floor = false);
	public static Vector3 WorldPosToValidGridPos(GameObject gameObject, Vector3 worldPos, int cubeSegments);
	public static Vector3 LocalToWorld(GameObject gameObject, IntVector iVector);
	public static Dictionary<IntVector, Cube> CreateFromBytePackage(BytePacker bp);
	public static Bounds? GetAxisAlignedBoundsRecursively(Transform transform);
	private static Vector3[] GetTriangleVertices(int triangleIndex, GameObject gameObject);
	public static float ScaleFactor(GameObject gameObject);
	public static float ScaleFactor(GameObject gameObject, Face face);
	public static CubeOutOfBoundState MoveEdge(MVCubeModelBase cmb, CubePickingInfo info, Vector3 mousePositionDelta, ref float delta, ref float deltaAccum, float mouseSensitivity, ref bool edgeMoved, bool edgeIndex0, bool edgeIndex1, ref EditCubeChange editCubeChange);
	public static void GetVertices(CubePickingInfo info, GameObject gameObject);
	public static Bounds? GetAxisAlignedBoundsRecursively(List<MVWorldObjectClient> wos);
	public static Bounds? GetAxisAlignedBoundsRecursively(List<Transform> transforms);
	public static Vector3 GetWorldCenter(List<Transform> transforms);
	public static Vector3 GetWorldCenter(Transform transform);
	public static void SetLayerRecursively(Transform t, bool select);
	public static IntVector CubePosToChunk(IntVector cubePos, int chunkSize);
}

