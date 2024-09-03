/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class MeshVertexChunkCollectionDb : Singleton<RTG.MeshVertexChunkCollectionDb>
	{
		// Fields
		private Dictionary<Mesh, MeshVertexChunkCollection> _meshToVChunkCollection;
	
		// Properties
		public MeshVertexChunkCollection this[Mesh mesh] { get => default; }
	
		// Constructors
		public MeshVertexChunkCollectionDb();
	
		// Methods
		public void SetMeshDirty(Mesh mesh);
		public bool HasChunkCollectionForMesh(Mesh mesh);
		private bool CreateMeshVertChunkCollection(Mesh mesh);
	}
}
