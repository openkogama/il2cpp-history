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

public class MVCubeModelBase : MVWorldObjectClient, ICubeModel, ICubeModelCollider
{
	// Fields
	private static readonly int TransparencyShaderProperty;
	protected RuntimePrototypeCubeModel prototypeCubeModel;
	protected readonly ChunkInstances chunkInstances;
	[CompilerGenerated]
	private Func<IModelingConstraint> _ModelingConstraintBuilder_k__BackingField;
	private bool beingEdited;
	private Queue<CubeModelChangedEventArgs> changedEventArgsQueue;
	public Action<CubeModelChangedEventArgs> Changed;
	public Action<HashSet<IntVector>> ChunksChanged;
	[CompilerGenerated]
	private EventHandler<EditStateEventArgs> BeingEditedChanged;

	// Properties
	public ChunkInstances ChunkInstances { get; }
	public RuntimePrototypeCubeModel PrototypeCubeModel { get; set; }
	public int Pid { get; }
	public Func<IModelingConstraint> ModelingConstraintBuilder { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool BeingEdited { get; set; }
	public bool ContainsCubes { get; }
	public int CubeCount { get; }
	public float PrototypeScale { get; }
	public MeshFilter[] MeshFilters { get; }
	public override Vector3 WorldPivot { get; }
	int ICubeModelCollider.Id { get; }

	// Events
	public event EventHandler<EditStateEventArgs> BeingEditedChanged {
		add;
		remove;
	}

	// Nested types
	private struct CurrentTransparencySettings
	{
		// Fields
		public bool active;
		public float alphaToUse;
	}

	// Constructors
	public MVCubeModelBase(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	static MVCubeModelBase();

	// Methods
	public override void Initialize();
	public override string ToString();
	public void HandleDelta();
	public CubeBase GetCubeBase(IntVector pos);
	public Cube GetCube(IntVector pos);
	public bool ContainsCube(IntVector pos);
	protected void MakeUnique();
	private bool HasInstances();
	public void RemoveCube(IntVector pos);
	public void AddCube(IntVector pos, CubeBase cube);
	public void SetMaterial(IntVector iVector, Face face, byte material);
	public void ReplaceCube(IntVector iVector, byte materialId);
	public void CornersChangedDone(IntVector iVector, Cube cube);
	public void CornersChanged(IntVector iVector, Cube cube);
	public void UnIndentCubeFace(IntVector localPos, Face face, Cube cube);
	public virtual void RemoveCubeNetworkUpdate(IntVector pos);
	public virtual void AddCubeNetworkUpdate(IntVector pos, CubeBase cube);
	public void CubePosToChunkPos(ref IntVector pos);
	public Bounds GetWorldBounds();
	public Bounds GetBounds();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public Vector3 GetWorldCenterPos();
	public override void OnObjectLinkChanged(ObjectLinkChangeType changeType, ObjectLink objectLink);
	public void ObjectLinkChanged(bool visible);
	public void ObjectLinkTransparency();
	private CurrentTransparencySettings CalculateCurrentTransparencySettings();
	protected virtual void DirtyChunksRegeneratedHandler(HashSet<IntVector> chunksChanged);
	public override void Destroy();
	public void UpdatePrototypeScale(float scale);
	public void AddToChunkInstances(IntVector chunkPos, ChunkInstances.ChunkInstanceVariables civ);
	[CompilerGenerated]
	private IModelingConstraint _.ctor_b__28_0();
}

