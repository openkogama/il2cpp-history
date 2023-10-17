/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LobbyStateCamera : MVCameraBase
{
	// Fields
	[SerializeField]
	private Vector3 offset;
	[SerializeField]
	private float height;
	private Vector3 avatarHeadOffset;
	private MVAvatarLocal avatarLocal;
	private HashSet<int> ignoreAvatarId;
	protected AvatarCameraDistTransparency avatarCameraDistTransparency;

	// Properties
	public override CameraType CameraType { get; }

	// Constructors
	public LobbyStateCamera();

	// Methods
	public void Initialize(MVAvatarLocal avatarLocal);
	public override void Enter(MVCameraController camController);
	public void SetRotation(Quaternion rotation);
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	private Vector3 PositionAfterCollision(Vector3 desiredPosition, Vector3 moveToPosition);
	private Vector3 GetLookAtPosition();
	public override void Exit(MVCameraController camController);
	public override void Reset();
}

