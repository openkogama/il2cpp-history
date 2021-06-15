/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MeshDataPool
{
	// Fields
	private const int maxVertices = 786432;
	private const int maxIndices = 1179648;
	private int vertexPos;
	private readonly Vector3[] vertices;
	private int uvPos;
	private readonly Vector2[] uvs;
	private int colorPos;
	private readonly Color[] colors;
	private int indicesPos;
	private readonly int[] indices;
	private static MeshDataPool instance;

	// Properties
	private static int VertexPos { get; set; }
	private static Vector3[] Vertices { get; }
	private static int UvPos { get; set; }
	private static Vector2[] Uvs { get; }
	private static int ColorPos { get; set; }
	private static Color[] Colors { get; }
	private static int IndicesPos { get; set; }
	private static int[] Indices { get; }

	// Constructors
	public MeshDataPool();
	static MeshDataPool();

	// Methods
	public static void Create();
	public static void Destroy();
	public static void AddVertex(Vector3 vertex);
	public static Vector3[] GetVertices();
	public static void AddUv(Vector2 uv);
	public static Vector2[] GetUvs();
	public static void AddUvRange(Vector2[] uvRange);
	public static void AddColor(Color color);
	public static Color[] GetColors();
	public static void AddIndex(int index);
	public static int[] GetIndices();
	public static void Reset();
}

