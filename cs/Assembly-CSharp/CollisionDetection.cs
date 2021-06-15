/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class CollisionDetection
{
	// Fields
	private const bool IGNORE_ALL = false;

	// Methods
	public static bool MVSphereCast(Ray ray, float radius, out VoxelHit voxelHit, float distance = 1F / 0F, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static List<VoxelHit> MVSphereCastAll(Ray ray, float radius, float distance = 1F / 0F, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static bool MVHit(Ray ray, MVWorldObjectClient wo, out VoxelHit voxelHit, float distance = 1F / 0F);
	public static List<VoxelHit> MVHitAll(Ray ray, float distance = 1F / 0F, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static bool MVHit(Ray ray, out VoxelHit voxelHit, float distance = 1F / 0F, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static List<VoxelHit> MVElipsoidCastAll(Ray ray, Vector3 radius, float distance, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static bool MVElipsoidCast(Ray ray, Vector3 radius, float distance, out VoxelHit voxelHit, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static List<VoxelHit> MVElipsoidCastAll(Ray ray, Transform transform, Bounds localBounds, float distance, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static bool MVElipsoidCast(Ray ray, Transform transform, Bounds localBounds, float distance, out VoxelHit voxelHit, HashSet<int> ignoreWoIds = null, int layerMask = -5);
	public static List<MVOverlapResult> ElipsoidOverlapSector(Vector3 position, Quaternion rotation, Vector3 radius, HashSet<int> ignoreWoIds = null, int layerMask = -5);
}

