/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarLocal : Avatar
{
	// Fields
	private IAvatarCameraController avatarCameraController;
	[SerializeField]
	private AvatarCamerasTouch avatarCamerasMobile;
	[SerializeField]
	private AvatarCamerasDesktop avatarCamerasDesktop;
	[SerializeField]
	private GameObject earsGameObject;

	// Properties
	public IAvatarCameraController CameraController { get; }

	// Constructors
	public AvatarLocal();

	// Methods
	public override void Initialize(MVAvatar mvAvatar, bool isLocal);
	private void OnDestroy();
	private void PrewarmXPParticles();
	private void CreateXPParticlesWithLayer(int xp, int layer);
	public void OnXpProgressing(int xp);
	public void SetLocalAvatarEarsState(bool activeState);
}

