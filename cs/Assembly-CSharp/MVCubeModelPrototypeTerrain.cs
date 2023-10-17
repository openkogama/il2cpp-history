/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCubeModelPrototypeTerrain : MVCubeModelBase
{
	// Fields
	private Dictionary<IntVector, CubeBase> removedCubes;

	// Properties
	public bool RequiresResetToEdit { get; }

	// Constructors
	public MVCubeModelPrototypeTerrain(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);

	// Methods
	public override void Initialize();
	public override void Destroy();
	public override void Select(Color color);
	public override void DeSelect();
	public ChunkInstances.ChunkInstanceVariables GetChunkInstance(IntVector chunkPos);
	public Vector3 GetRandomCubePos();
	public override void RemoveCubeNetworkUpdate(IntVector pos);
	public override void Reset();
	public bool RemovedCubesContainsKey(IntVector intVector);
}

