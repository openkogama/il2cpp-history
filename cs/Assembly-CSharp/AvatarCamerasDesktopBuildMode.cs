/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarCamerasDesktopBuildMode : MonoBehaviour
{
	// Fields
	private AvatarCamerasWrapper avatarCamerasWrapper;
	private MVCameraController cameraController;
	[SerializeField]
	private JetPackCamera jetPackCamera;
	[SerializeField]
	private AvatarEditModeCamera avatarEditModeCamera;

	// Constructors
	public AvatarCamerasDesktopBuildMode();

	// Methods
	public void Initialize(MVBuildModeAvatarLocal avatarLocal);
	public void ActivateCameraController();
	public void SetCamera(CameraType cameraType);
	public void SetCamera(MVCameraBase cameraBase);
	public void PushCamera(CameraType cameraType);
	public void PushCamera(MVCameraBase cameraBase);
	public void RemoveCamera(CameraType cameraType);
	public void RemoveCamera(MVCameraBase cameraBase);
	public List<MVCameraBase> GetCameraBases();
}

