/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeadCamera : MVCameraBase
{
	// Fields
	[SerializeField]
	private Vector3 avatarLocalLookAtOffset;
	private MVAvatarLocal avatarLocal;
	private Vector3 lookAtPos;

	// Properties
	public override CameraType CameraType { get; }

	// Constructors
	public DeadCamera();

	// Methods
	public void Initialize(MVAvatarLocal avatarLocal);
	public override void Enter(MVCameraController camController);
	public override void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform);
	private void UpdateRotation();
}

