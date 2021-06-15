/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RuntimePrototypeCubeModel
{
	// Fields
	private ILogger logger;
	private HashSet<IntVector> dirtyChunks;
	private MeshGeneratePriority meshGeneratePriority;
	private bool useMeshGeneratePrioritySystem;
	private int chunkSize;
	private PrototypeState prototypeState;
	private List<byte> pendingDeltaCubes;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private float _Scale_k__BackingField;
	protected int prototypeId;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private int _AuthorProfileID_k__BackingField;
	private DeltaCubes deltaCubes;
	private Dictionary<IntVector, CubeModelChunk> chunks;
	private HashSet<int> instances;
	public Action<HashSet<IntVector>> DirtyChunksRegenerated;
	public Action<IntVector> OnChunkRebuilt;

	// Properties
	public MeshGeneratePriority MeshGeneratePriority { get; }
	public int ChunkSize { get; }
	public PrototypeState PrototypeState { get; set; }
	public float Scale { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int PrototypeId { get; set; }
	public int AuthorProfileID { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int InstancesCount { get; }
	public int DeltaCubesCount { get; }
	public DeltaCubes DeltaCubes { get; }
	public Dictionary<IntVector, CubeModelChunk> Chunks { get; }
	public HashSet<int> Instances { get; }
	public int CubeCount { get; }
	public bool ContainsCubes { get; }

	// Constructors
	private RuntimePrototypeCubeModel();
	public RuntimePrototypeCubeModel(int id, int authorProfileId, float scale, byte[] data);
	public RuntimePrototypeCubeModel(int id, int authorProfileId, float scale, byte[] data, int chunkSize);

	// Methods
	private void FineGrainedTerrainOverrideChunkSize(int size);
	private void Create(int id, int authorProfileId, float scale, byte[] data);
	public RuntimePrototypeCubeModel CloneGeometry(bool withDeltaCubes = false);
	public void RemoveAllCubesLocal();
	public bool MeshGenerateDirtyChunksAll(ref int meshUpdates);
	public bool MeshGenerateDirtyChunks(ref int meshUpdates);
	private bool MeshGenerateStatus(HashSet<IntVector> generatedChunks);
	public GameObject GetMesh();
	private void SetVisibility();
	public Vector3 GetRandomCubePos(GameObject go);
	public Cube GetCube(IntVector cubePos);
	public bool AddCube(IntVector pos, Cube cube);
	public void UnIndentCubeFace(IntVector localPos, Face face, Cube cube);
	public void SetMaterial(IntVector iVector, Face face, byte materialId);
	public void ReplaceCube(IntVector iVector, byte materialId);
	public void CornersChangedDone(IntVector iVector, Cube cube);
	public void CornersChanged(IntVector iVector, Cube cube);
	public bool RemoveCube(IntVector iVector);
	public void CreateInstance(MVCubeModelBase cm);
	public void RemoveInstance(int id);
	public void ResetSharedMaterials(MVCubeModelInstance cm);
	private static void DecodeBytePacker(BytePacker bp, RuntimePrototypeCubeModel rpcm);
	public void UpdatePrototype(BytePacker bp);
	public void UpdatePrototypeScale(float scale);
	public void AddCubeNetworkUpdate(IntVector iVector, Cube cube, MeshGeneratePriority priority);
	public void RemoveCubeNetworkUpdate(IntVector iVector, MeshGeneratePriority priority);
	public void HandleDelta();
	private void RebuildChunk(IntVector chunkPos, Vector3 scale);
	private void RebuildPrototypeMesh();
	private void AddChunk(IntVector chunkPos);
	private void RemoveChunk(IntVector chunkPos);
	private void SetInstanceDataRef(IntVector chunkPos, MVCubeModelBase cubeInstance);
	private void CreateFromBytePackage(BytePacker bp);
	private void AddToChunk(IntVector iVector, Cube cube, MeshGeneratePriority meshGeneratePriority, bool setVisibility = true);
	private CubeModelChunk GetChunkFromCubePos(IntVector cubePos);
	private void RemoveFromChunk(IntVector iVector, MeshGeneratePriority meshGeneratePriority);
	private void AddToDirtyChunks(IntVector chunkPos, MeshGeneratePriority meshGeneratePriority);
	public static BytePacker GetBytePackerFromCubeDict(Dictionary<IntVector, Cube> cubesDict, bool addCount);
	public void CubePosToChunkPos(ref IntVector cubePos);
	public void AddRefenceToChunk(ref IntVector chunkPosition);
	public void RemoveRefenceFromChunk(ref IntVector chunkPosition);
	public int GetRefenceCountFromChunk(ref IntVector chunkPosition);
	public void AddReferenceToAllChunks();
	public void RemoveReferenceFromAllChunks();
	public bool CompareGeometry(RuntimePrototypeCubeModel rpcm);
	public void CompareGeometryDetailed(RuntimePrototypeCubeModel rpcm, bool visibleCubesOnly, ref int matchingCubeCount, ref int investigatedCubeCount);
	public void Destroy();
}

