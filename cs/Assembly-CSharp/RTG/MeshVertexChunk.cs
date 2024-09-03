/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class MeshVertexChunk : IEnumerable<Vector3>
	{
		// Fields
		private List<Vector3> _modelSpaceVerts;
		private AABB _modelSpaceAABB;
		private Mesh _mesh;
	
		// Properties
		public Vector3 this[int vertexIndex] { get => default; }
		public Mesh Mesh { get; }
		public int VertexCount { get; }
		public AABB ModelSpaceAABB { get; }
	
		// Constructors
		public MeshVertexChunk(List<Vector3> modelSpaceVerts, Mesh mesh);
	
		// Methods
		public IEnumerator<Vector3> GetEnumerator();
		IEnumerator IEnumerable.GetEnumerator();
		public Vector3 GetWorldVertClosestToScreenPt(Vector2 screenPoint, Matrix4x4 worldMtx, Camera camera);
	}
}
