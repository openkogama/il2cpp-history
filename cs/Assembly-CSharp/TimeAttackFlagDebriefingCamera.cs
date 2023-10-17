/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TimeAttackFlagDebriefingCamera : MVCameraBase
{
	// Fields
	[SerializeField]
	private Vector3 offset;
	[SerializeField]
	private float height;
	private Transform flagTransform;
	private HashSet<int> ignoreAvatarId;
	private MVAvatarLocal avatarLocal;

	// Properties
	public override CameraType CameraType { get; }

	// Constructors
	public TimeAttackFlagDebriefingCamera();

	// Methods
	public void Initialize(MVAvatarLocal avatarLocal);
	public override void Enter(MVCameraController camController);
	public override void Exit(MVCameraController camController);
	public override void Reset();
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	private Vector3 PositionAfterCollision(Vector3 desiredPosition, Vector3 moveToPosition);
	private Vector3 GetLookAtPosition();
	private Transform GetClosestTimeAttackFlag();
}

