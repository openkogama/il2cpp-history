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

public class Cube : CubeBase
{
	// Fields
	private static Vector3[] cornersBookkeeping;
	private byte hiddenSides;

	// Properties
	public byte HiddenSides { get; set; }

	// Constructors
	public Cube(byte[] byteCorners, byte[] faceMaterials);
	public Cube(BytePacker bp, byte byteFlags);
	static Cube();

	// Methods
	public Cube Clone();
	private bool IsSideVisible(FaceFlags face);
	public static Cube Clone(Cube original);
	public static byte[] CreateMaterialArray(byte material);
	public static Vector3[] GetCorners(Cube cube, Face face);
	public static void SetMaterial(Cube cube, Face face, byte materialId);
	public static Vector3[] GetVertices(Cube cube);
	public static IntVector GetCubePosAboveFace(IntVector localPos, Face face);
	public static Face GetFaceIdentityFromLocalDir(Vector3 localDir);
	public static Vector3 GetFaceAxis(Face face);
	public static List<Vector3> GetCorners(List<Vector2> clockwiseCorners, Face direction);
	public static void SetFace(Cube cube, Face face, Vector3[] faceVertices);
	public static bool IsFaceBoxSideAligened(Cube cube, Face face);
	public static void UnIndentFace(Cube cube, Face face);
	public static Vector3[] GetVerticesWorldAxisAligned(Cube cube, IntVector iVector);
	private static float CalculateAOLightCheap(Face face, int faceCornerIndex, Dictionary<IntVector, Cell> cells, IntVector cubePos, bool inside);
	private static float CalculateAOLightExpensive(Face face, int faceCornerIndex, Dictionary<IntVector, Cell> cells, IntVector cubePos, int[] cornerIndexToVertex, Vector3 normal);
	public static FaceData[] GenerateCubeFaces(Cube cube, IntVector cubePos, Dictionary<IntVector, Cell> cells);
	private static FaceData[] GenerateCubeFacesExpensive(Cube cube, IntVector cubePos, Dictionary<IntVector, Cell> cells);
	private static FaceData[] GenerateCubeFacesCheap(Cube cube, IntVector cubePos, Dictionary<IntVector, Cell> cells);
	private static FaceData GenerateFaceDataExpensive(Face face, IntVector cubePos, Dictionary<IntVector, Cell> cells);
	private static FaceData GenerateFaceDataCheap(Face face, IntVector cubePos, Dictionary<IntVector, Cell> cells, Func<int, bool> insideCheck);
	private static float CalculateAOBleed(FaceData faceData, int index);
	public static Face GetFace(Vector3[] corners, Vector3[] triangleVertices);
	public static Vector3[] GetFace(Vector3[] corners, Face face);
	public static Vector3[] GetFaceVerticesWorld(GameObject gameObject, Cube cube, Face face, IntVector iVector);
	public static Vector3[] GetEdge(Cube cube, Face face, Edge edge);
	public static void SetEdge(Cube cube, Face face, Edge edge, Vector3[] edgeVertices);
	public static Edge GetEdge(GameObject gameObject, Cube cube, Face face, Vector3 pos, IntVector iVector);
	public static Vector3[] GetEdgeVerticesWorld(GameObject gameObject, Cube cube, Face face, Edge edge, IntVector iVector);
	private static bool IsOutOfBound(Vector3[] corners);
	public static void MoveVertex(CubePickingInfo info, float value, Vector3 axis, bool edgeIndex0, bool edgeIndex1, ref CubeOutOfBoundState coob);
	public static void MoveEdge(CubePickingInfo info, float value, Vector3 axis, ref CubeOutOfBoundState coob);
	private static bool FaceIsOutOfCubeBoundery(Vector3[] faceVertices);
	private static void AddDeltaToFace(ref Vector3[] faceVertices, float delta, Vector3 axis);
	private static void ClampFace(ref Vector3[] faceVertices);
	public static void MoveFace(CubePickingInfo info, float delta, Vector3 axis, ref CubeOutOfBoundState outOfBoundState);
	private static List<Vector3> GetCorners(Vector3[] counterClockwiseFace, Face direction);
	public static Vector3[] GetNormals(Vector3[] corners, Face face);
	private static Vector3 GetDefaultNormal(Face face);
	private static Vector3[] GetVertices(Vector3[] corners);
	private static void SetFace(ref Vector3[] corners, Face face, Vector3[] faceVertices);
	private static List<Vector3> SquareCornersToCubeCorners(List<Vector2> corners, Face direction);
	private static List<Vector3> CreateCubeCornersFromTopFace(List<Vector3> cubeCorners, Face direction);
	private static Quaternion GetFromTopRotation(Face direction);
	private static Vector3[] RotateFaceToTop(Cube cube, Face direction);
	private static Quaternion GetToTopRotation(Face direction);
	private static void SetEdge(ref Vector3[] corners, Face face, Edge edge, Vector3[] edgeVertices);
	private static bool IsFaceCollapsed(Vector3[] faceIndices);
	private static bool IsFaceValid(Vector3[] faceIndices, Face face);
	public static bool IsCollapsed(Vector3[] corners);
	public static bool GetPlaneVertices(Vector3[] corners, ref Vector3[] planeVertices);
	public static bool IsLegal(Vector3[] corners);
	private static bool IsCornersValid(Vector3[] corners);
	private static void GetTriangle(int triangleNr, Vector3[] triangleVertices, Vector3[] corners);
	[CompilerGenerated]
	internal static bool _GenerateCubeFacesCheap_g__insideCheck_26_0(int i);
	[CompilerGenerated]
	internal static bool _GenerateCubeFacesCheap_g__insideCheck_26_1(int i);
	[CompilerGenerated]
	internal static bool _GenerateCubeFacesCheap_g__insideCheck_26_2(int i);
	[CompilerGenerated]
	internal static bool _GenerateCubeFacesCheap_g__insideCheck_26_3(int i);
	[CompilerGenerated]
	internal static bool _GenerateCubeFacesCheap_g__insideCheck_26_4(int i);
	[CompilerGenerated]
	internal static bool _GenerateCubeFacesCheap_g__insideCheck_26_5(int i);
}

