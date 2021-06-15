/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CameraCollision
{
	// Fields
	private const float verySmallDistance = 0.005f;

	// Constructors
	public CameraCollision();

	// Methods
	public bool Collide(out Vector3 newPos, float cameraRadius, float baseDistance, Vector3 targetPosition, Vector3 cameraPosition, HashSet<int> ignoreIDs);
	protected bool Collide(out VoxelHit hit, out Vector3 newPos, float cameraRadius, float baseDistance, Vector3 targetPosition, Vector3 cameraPosition, HashSet<int> ignoreIDs);
}

