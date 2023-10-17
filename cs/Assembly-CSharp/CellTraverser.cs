/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CellTraverser
{
	// Fields
	private Ray intersectRay;
	private Vector3 tMax;
	private Vector3 initialtMax;
	private IntVector localChunkSpaceVoxelPos;
	private int stepX;
	private int stepY;
	private int stepZ;
	private int chunkSize;
	private IntVector voxelPos;
	private IntVector stepDir;
	private Vector3 tDelta;
	public RuntimePrototypeCubeModel debugRpcm;

	// Properties
	public IntVector VoxelPos { get; }
	public IntVector StepDir { get; }

	// Constructors
	public CellTraverser();

	// Methods
	public void Init(Vector3 localOrigin, CollisionState collisionState);
	public void DebugAll();
	public bool Step();
}

