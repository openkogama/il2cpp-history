/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CullingTerrainManager
{
	// Fields
	private readonly ChunkInstances chunkInstances;
	private readonly MVCubeModelBase cubeModelBase;
	private Dictionary<IntVector, CullingSubscriberTerrainChunk> terrainCullingSubscriberBases;

	// Constructors
	public CullingTerrainManager(ChunkInstances chunkInstances, MVCubeModelBase cubeModelBase);

	// Methods
	private void ChunkInstancesOnChanged(object sender, ChunkInstancesChanged chunkInstancesChanged);
	private void OnChanged(HashSet<IntVector> chunksChanged);
	private void CreateCullingSubscriber(IntVector chunkPos, ChunkInstances.ChunkInstanceVariables chunk);
	public void Clear();
	private void DestroyCullingSubscribers();
}

