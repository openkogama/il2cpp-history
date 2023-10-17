/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CullingSubscriberTerrainChunk : ICullingSubscriber
{
	// Fields
	private readonly IntVector chunkPosition;
	private readonly MVCubeModelBase cubeModelBase;
	private int distanceBand;
	[CompilerGenerated]
	private int _CullingIndex_k__BackingField;

	// Properties
	public int CullingIndex { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public CullingSubscriberTerrainChunk(MVCubeModelBase cubeModelBase, IntVector chunkPosition, Bounds bounds);

	// Methods
	public void Setup(Bounds bounds);
	public void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	public void HandleChange();
	public void Destroy();
}

