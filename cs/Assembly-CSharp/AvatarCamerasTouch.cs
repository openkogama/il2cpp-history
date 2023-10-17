/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarCamerasTouch : MonoBehaviour, IAvatarCameraController
{
	// Fields
	private AvatarCamerasWrapper avatarCamerasWrapper;
	private MVCameraController cameraController;
	[SerializeField]
	private AndroidFirstPersonCamera firstPersonMobileCamera;
	[SerializeField]
	private AndroidThirdPersonCamera thirdPersonMobileCamera;
	[SerializeField]
	private LobbyStateCamera lobbyStateCamera;
	[SerializeField]
	private TimeAttackFlagDebriefingCamera timeAttackFlagDebriefingCamera;
	[SerializeField]
	private TimeAttackFlagCountdownCamera timeAttackFlagCountdownCamera;
	[SerializeField]
	private GhostCamera ghostCamera;
	[SerializeField]
	private DeadCamera deadCamera;

	// Constructors
	public AvatarCamerasTouch();

	// Methods
	public void Initialize(MVAvatarLocal avatarLocal);
	public void ActivateCameraController();
	public void SetCamera(CameraType cameraType);
	public void SetCamera(MVCameraBase cameraBase);
	public void PushCamera(CameraType cameraType);
	public void PushCamera(MVCameraBase cameraBase);
	public void RemoveCamera(CameraType cameraType);
	public void RemoveCamera(MVCameraBase cameraBase);
	public List<MVCameraBase> GetCameraBases();
}

