/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public struct TMP_MeshInfo
	{
		// Fields
		private static readonly Color32 s_DefaultColor;
		private static readonly Vector3 s_DefaultNormal;
		private static readonly Vector4 s_DefaultTangent;
		private static readonly Bounds s_DefaultBounds;
		public Mesh mesh;
		public int vertexCount;
		public Vector3[] vertices;
		public Vector3[] normals;
		public Vector4[] tangents;
		public Vector4[] uvs0;
		public Vector2[] uvs2;
		public Color32[] colors32;
		public int[] triangles;
		public Material material;
	
		// Constructors
		public TMP_MeshInfo(Mesh mesh, int size);
		public TMP_MeshInfo(Mesh mesh, int size, bool isVolumetric);
		static TMP_MeshInfo();
	
		// Methods
		public void ResizeMeshInfo(int size);
		public void ResizeMeshInfo(int size, bool isVolumetric);
		public void Clear();
		public void Clear(bool uploadChanges);
		public void ClearUnusedVertices();
		public void ClearUnusedVertices(int startIndex);
		public void ClearUnusedVertices(int startIndex, bool updateMesh);
		public void SortGeometry(VertexSortingOrder order);
		public void SortGeometry(IList<int> sortingOrder);
		public void SwapVertexData(int src, int dst);
	}
}
