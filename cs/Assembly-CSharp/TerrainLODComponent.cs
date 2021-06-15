/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TerrainLODComponent
{
	// Fields
	private List<MVTerrainLOD> LODBookkeeping;
	private int currentLODPosition;
	private readonly TriangleCounter triangleCounter;
	private readonly ChunkInstances chunkInstances;
	private readonly RuntimePrototypeCubeModel prototypeCubeModel;
	private readonly DynamicLODDistance dynamicLodDistance;
	private bool debug;
	private float scale;

	// Nested types
	private class TriangleCounter
	{
		// Fields
		private HashSet<IntVector> enabledChunks;

		// Constructors
		public TriangleCounter();

		// Methods
		public void Add(IntVector localPos);
		public void Remove(IntVector localPos);
		public int GetEnabledTriangleCount(RuntimePrototypeCubeModel prototypeCubeModel);
	}

	// Constructors
	public TerrainLODComponent(RuntimePrototypeCubeModel prototypeCubeModel, ChunkInstances chunkInstances, DynamicLODDistance dynamicLodDistance, float scale, bool debug);

	// Methods
	public void ChangeLODTerrain();
	private void chunkInstances_Changed(object sender, ChunkInstancesChanged e);
	private void AddToLOD(IntVector localPos);
	private void ChangeLODChunk(ChunkInstances.ChunkInstanceVariables chunk, ref IntVector chunkPosition, float distance, float renderDistance);
}

