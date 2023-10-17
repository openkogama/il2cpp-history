/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SkinnedMeshOptimizeManager : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private List<SkinnedMeshOptimizationData> optimizationDataList;
	private const int allowedSkinnedMeshAmount = 5;

	// Nested types
	public struct SkinnedMeshOptimizationData
	{
		// Fields
		public List<SkinnedMeshRenderer> skinnedMesh;
		public List<MeshRenderer> mesh;
	}

	// Constructors
	public SkinnedMeshOptimizeManager();

	// Methods
	public void AddOptimizationData(SkinnedMeshOptimizationData optimizationData);
	public void RemoveoptimizationData(SkinnedMeshOptimizationData optimizationData);
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
	private bool IsNewMeshCloser(SkinnedMeshOptimizationData newMesh, List<SkinnedMeshOptimizationData> oldMeshes, out int index);
}

