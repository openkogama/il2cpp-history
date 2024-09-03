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
	public class MeshVertexChunkCollection : IEnumerable<RTG.MeshVertexChunk>
	{
		// Fields
		private Mesh _mesh;
		private List<MeshVertexChunk> _vertexChunks;
	
		// Properties
		public MeshVertexChunk this[int chunkIndex] { get => default; }
		public int Count { get; }
	
		// Nested types
		private struct VertexChunkIndices
		{
			// Fields
			private int _XIndex;
			private int _YIndex;
			private int _ZIndex;
	
			// Properties
			public int XIndex { get; }
			public int YIndex { get; }
			public int ZIndex { get; }
	
			// Constructors
			public VertexChunkIndices(int xIndex, int yIndex, int zIndex);
		}
	
		// Constructors
		public MeshVertexChunkCollection();
	
		// Methods
		public IEnumerator<MeshVertexChunk> GetEnumerator();
		IEnumerator IEnumerable.GetEnumerator();
		public List<MeshVertexChunk> GetWorldChunksHoveredByPoint(Vector3 hoverPoint, Matrix4x4 worldMtx, Camera camera);
		public MeshVertexChunk GetWorldVertChunkClosestToScreenPt(Vector2 screenPoint, Matrix4x4 worldMtx, Camera camera);
		public bool FromMesh(Mesh mesh);
	}
}
