/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CameraCollisionWithSliding : CameraCollision
{
	// Fields
	private float slideDir;
	private int prevFrameCount;
	private float checkDistanceFactor;

	// Constructors
	public CameraCollisionWithSliding();

	// Methods
	public bool CollideWithSliding(out Vector3 newCameraPosition, float cameraRadius, float distanceToAvatar, Vector3 targetPosition, Vector3 cameraPosition, HashSet<int> ignoreAvatarId);
	private void ResetIfNotUpdate();
	private bool DoCollideWithSliding(out Vector3 newPos, float cameraRadius, float baseDistance, Vector3 targetPosition, Vector3 cameraPosition, HashSet<int> ignoreIDs);
	private void Reset();
	private Vector3 GetSlideVector(Vector3 newPos, Vector3 hitPoint, Vector3 targetPosition, Vector3 cameraPosition, float baseDistance);
	private Vector3 GetSlideVectorXZPlane(Vector3 newPos, Vector3 hitPoint, Vector3 targetPosition, Vector3 cameraPosition, float baseDistance);
	private Vector3 GetSlideDir(Vector3 newPos, Vector3 hitPoint, Vector3 targetPosition, Vector3 cameraPosition);
	private static float GetSlideVectorLength(Vector3 slideVector, Vector3 newPos, Vector3 targetPosition, float baseDistance);
}

