/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class RTMesh
	{
		// Fields
		private Mesh _unityMesh;
		private Vector3[] _vertices;
		private int[] _vertIndices;
		private int _numTriangles;
		private AABB _aabb;
		private MeshTree _meshTree;
	
		// Properties
		public int NumTriangles { get; }
		public Mesh UnityMesh { get; }
		public AABB AABB { get; }
		public bool IsTreeBuilt { get; }
	
		// Constructors
		public RTMesh(Mesh unityMesh);
	
		// Methods
		public static RTMesh Create(Mesh unityMesh);
		public void BuildTree();
		public void SetDirty();
		public MeshTriangle GetTriangle(int triangleIndex);
		public MeshRayHit Raycast(Ray ray, Matrix4x4 meshTransform);
		public bool OverlapVerts(OBB obb, Transform meshObjectTransform, List<Vector3> verts);
		public bool OverlapModelVerts(OBB modelOBB, List<Vector3> verts);
		public bool OverlapModelVerts(AABB modelAABB, List<Vector3> verts);
		public void DebugDrawTree();
	}
}
