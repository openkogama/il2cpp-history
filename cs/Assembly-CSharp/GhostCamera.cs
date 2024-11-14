/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GhostCamera : MVCameraBase
{
	// Fields
	[SerializeField]
	private Vector3 offset;
	[SerializeField]
	private float height;
	[SerializeField]
	private float desiredDistance;
	private Vector3 avatarHeadOffset;
	private MVAvatarLocal avatarLocal;
	private HashSet<int> ignoreAvatarId;
	protected AvatarCameraDistTransparency avatarCameraDistTransparency;
	protected Transform lookAtTransform;
	private float distance;
	private Vector3 currentLookAt;
	protected Vector3 lookAtPos;
	private Vector3 actualLookAt;
	private Vector3 prevLookAtTransformPos;

	// Properties
	public override CameraType CameraType { get; }

	// Constructors
	public GhostCamera();

	// Methods
	public void Initialize(MVAvatarLocal avatarLocal);
	public override void Enter(MVCameraController camController);
	public override void Exit(MVCameraController camController);
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	private void UpdatePosition();
	protected override void CameraCollision();
	private Vector3 GetLookAtPosition();
	public override void Reset();
}

