/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.Events;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCubeModelInstance : MVCubeModelBase
{
	// Fields
	protected CullingSubscriberBase cullingSubscriberBase;
	private bool isVisible;
	private Vector3 positionOffset;

	// Properties
	public bool IsVisibleSet { get; private set; }

	// Constructors
	public MVCubeModelInstance(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);

	// Methods
	public override void Initialize();
	public void SetCullDistanceBand(int distanceBandIndex);
	public void EnableCulling();
	public void SetupCulling(UnityAction<CullingGroupEvent> onStateChanged);
	private void OnRotationChanged(MVWorldObjectClient wo, RotationChangedEventArgs rotationChangedEventArgs);
	private void OnChanged(HashSet<IntVector> chunks);
	private void OnPositionChanged(MVWorldObjectClient wo, PositionChangedEventArgs positionChangedEventArgs);
	private void SetCullSphereToMeshBounds();
	public override bool CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref int insertedByProfileId);
	public override void Compare(MVWorldObjectClient wo, bool visibleCubesOnly, ref int matchingCubeCount, ref int investigatedCubeCount);
	public void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	public bool IsLodVisible(CullingGroupEvent cullingGroupEvent);
	public void ChangeLODVisible();
	private void SetLod(bool enabled);
	public override void Destroy();
	public override void Select(Color color);
	public override void AddSelectionBox();
	public override void AddPreviewBox();
	private Vector3[] GetCorners(Bounds bounds);
	public override void DeSelect();
	public ChunkInstances.ChunkInstanceVariables GetChunkInstance(IntVector chunkPos);
	public override bool OnEnterObject(EditorStateMachine e);
}

