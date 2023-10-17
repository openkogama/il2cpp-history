/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IAvatarCameraController
{
	// Methods
	void Initialize(MVAvatarLocal avatarLocal);
	void ActivateCameraController();
	void SetCamera(CameraType cameraType);
	void SetCamera(MVCameraBase cameraBase);
	void PushCamera(CameraType cameraType);
	void PushCamera(MVCameraBase cameraBase);
	void RemoveCamera(CameraType cameraType);
	void RemoveCamera(MVCameraBase cameraBase);
	List<MVCameraBase> GetCameraBases();
}

