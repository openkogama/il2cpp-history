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

public class CubeModelChunk
{
	// Fields
	public const bool UseAOShadows = true;
	private readonly IntVector chunkPos;
	private readonly Dictionary<Guid, ChunkInstances.ChunkInstanceVariables> instances;
	private SharedMeshData sharedMeshData;
	private Bounds meshBounds;
	private readonly string name;
	private int cubeCount;
	private int triangleCount;
	private int activeInstances;
	private readonly Dictionary<IntVector, Cell> cells;
	private static FaceData[] faceData;
	private static readonly Vector2[] uvs;
	private static readonly Vector2 uvOffsetVector0;
	private static readonly Vector2 uvOffsetVector1;
	private static Vector2 uvOffsetVector;

	// Properties
	public int TriangleCount { get; }
	public int ActiveInstances { get; set; }
	public int CubeCount { get; }

	// Nested types
	public class FaceData
	{
		// Fields
		public Vector3[] faceVertices;
		public Color[] colors;
		public Face face;

		// Constructors
		public FaceData();
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<string, Guid, string> __9__27_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal string _Guids_b__27_0(string current, Guid instancesKey);
	}

	// Constructors
	public CubeModelChunk(IntVector iVector);
	static CubeModelChunk();

	// Methods
	public CubeModelChunk CloneGeometry(Vector3 scale);
	public bool CompareGeometry(CubeModelChunk chunk);
	public bool CompareGeometry(CubeModelChunk chunk, ref int matchingCubeCount, ref int investigatedCubeCount, bool visibleCubesOnly);
	public Cube GetCube(IntVector iVector);
	public bool ContainsCube(IntVector iVector);
	public void AddToChunk(IntVector iVector, Cube cube, bool setVisibility = true);
	public IntVector GetFirstSolidCubePos();
	public void RemoveFromChunk(IntVector iVector);
	public void Destroy();
	public string Guids();
	public void RebuildChunk(Vector3 scale);
	public SharedMeshData GetMeshData();
	private void EvaluateReferenceCount(int oldReferenceCount, int newReferenceCount);
	private void RevokeSharedMeshOnInstances();
	private void RestoreSharedMeshOnInstances();
	private void UpdateInstances();
	public void SetInstanceDataRef(IntVector chunkPos, MVCubeModelBase cubeInstance);
	private void ChunkInstancesChanged(object sender, ChunkInstancesChanged e);
	private void SetCubeVisibilityWithNeighbors(IntVector pos);
	private void SetCubeVisibility(IntVector iVector);
	public void SetCubeVisibility();
	private static void SetCubeVisibility(Dictionary<IntVector, Cell> cells);
	private static void SetCubeVisibility(Dictionary<IntVector, Cell> cells, IntVector pos, Cube cube);
	private static void SimpleFaceVisibilityTest(FaceFlags faceFlagCube, FaceFlags faceFlagOpposite, ref Cube cube, ref Cube neighborCube);
	private static bool AllFaceCornersIsTouchingCubeBorder(Face face, ref Vector3[] faceIndices);
	private static void AdvancedFaceVisibilityTest(FaceFlags faceFlagCube, FaceFlags faceFlagOpposite, ref Cube cube, ref Cube neighborCube);
	private static void GetMeshBounds(ref Bounds bounds, Dictionary<IntVector, Cell> cells, Vector3 scale);
	private static int RebuildMesh(Dictionary<IntVector, Cell> cells, Vector3 scale);
	private static Vector2[] GetFaceUvs(Vector3[] faceVertices, Face face, Vector3 scale);
}

