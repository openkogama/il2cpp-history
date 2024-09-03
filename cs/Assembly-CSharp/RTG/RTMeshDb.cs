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
	public class RTMeshDb : Singleton<RTG.RTMeshDb>
	{
		// Fields
		private Dictionary<Mesh, RTMesh> _meshes;
	
		// Constructors
		public RTMeshDb();
	
		// Methods
		public bool Contains(RTMesh rtMesh);
		public bool Contains(Mesh unityMesh);
		public void SetMeshDirty(Mesh unityMesh);
		public RTMesh GetRTMesh(Mesh unityMesh);
		public void OnMeshWillBeDestroyed(Mesh unityMesh);
		private RTMesh CreateRTMesh(Mesh unityMesh);
	}
}
