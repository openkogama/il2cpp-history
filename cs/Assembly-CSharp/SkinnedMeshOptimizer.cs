/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SkinnedMeshOptimizer : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<MeshData> meshData;
	private SkinnedMeshOptimizeManager.SkinnedMeshOptimizationData optimizationData;
	private bool isEnabled;

	// Nested types
	[Serializable]
	private struct MeshData
	{
		// Fields
		public SkinnedMeshRenderer skinnedMesh;
		public MeshRenderer mesh;
	}

	// Constructors
	public SkinnedMeshOptimizer();

	// Methods
	public void TurnOffMesh();
	public void DisableOptimizer();
	private void Start();
	private void OnDestroy();
}

