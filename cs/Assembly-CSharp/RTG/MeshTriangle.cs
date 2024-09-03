/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class MeshTriangle
	{
		// Fields
		private Vector3[] _vertices;
		private Vector3 _normal;
		private int _triangleIndex;
		private int[] _vertIndices;
	
		// Properties
		public int TriangleIndex { get; }
		public Vector3[] Vertices { get; }
		public Vector3 Vertex0 { get; }
		public Vector3 Vertex1 { get; }
		public Vector3 Vertex2 { get; }
		public Vector3 Normal { get; }
		public int[] VertIndices { get; }
		public int VertIndex0 { get; }
		public int VertIndex1 { get; }
		public int VertIndex2 { get; }
	
		// Constructors
		public MeshTriangle(Vector3[] vertices, int triangleIndex, int vertIndex0, int vertIndex1, int vertIndex2);
	
		// Methods
		public int GetVertIndex(int arrayIndex);
	}
}
