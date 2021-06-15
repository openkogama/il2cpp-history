/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVCameraController
{
	// Fields
	private CameraStack cameraStack;

	// Properties
	public MVCameraBase CurCamera { get; }

	// Nested types
	private class CameraStack
	{
		// Fields
		private readonly List<MVCameraBase> activeCameras;
		private readonly Dictionary<CameraType, MVCameraBase> cameras;

		// Properties
		public MVCameraBase CurCamera { get; }

		// Constructors
		public CameraStack(List<MVCameraBase> camerasList, MVCameraController cameraController);

		// Methods
		public void Activate();
		public void Deactivate();
		public void UpdateCamera(MVCameraController cameraController, ProtectedTransform protectedTransform);
		public void SetCamera(CameraType cameraType, MVCameraController cameraController);
		public void SetCamera(MVCameraBase newCamera, MVCameraController cameraController);
		private void EnterCamera(MVCameraBase newCamera, MVCameraController cameraController);
		private void ClearStack(MVCameraController cameraController);
		public T GetCamera<T>()
			where T : MVCameraBase;
		public void PushCamera(CameraType cameraType, MVCameraController cameraController);
		public void PushCamera(MVCameraBase cameraBase, MVCameraController cameraController);
		public void RemoveCamera(CameraType cameraType, MVCameraController cameraController);
		public void RemoveCamera(MVCameraBase cameraBase, MVCameraController cameraController);
	}

	// Constructors
	public MVCameraController();

	// Methods
	public T GetCamera<T>()
		where T : MVCameraBase;
	public void Initialize(List<MVCameraBase> cameraBases);
	public void Activate();
	public void Deactivate();
	public void Respawn();
	public void SetCamera(CameraType cameraType);
	public void SetCamera(MVCameraBase cameraBase);
	public void PushCamera(CameraType cameraType);
	public void PushCamera(MVCameraBase cameraBase);
	public void RemoveCamera(CameraType cameraType);
	public void RemoveCamera(MVCameraBase cameraBase);
	public void UpdateCamera(ProtectedTransform protectedTransform);
}

