/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class RTCameraBackground : MonoSingleton<RTG.RTCameraBackground>
	{
		// Fields
		[SerializeField]
		private CameraBackgroundSettings _bkSettings;
		[SerializeField]
		private List<Camera> _renderIgnoreCameras;
		private Dictionary<Camera, CameraBackgroundSettings> _cameraToBkSettings;
	
		// Properties
		public CameraBackgroundSettings Settings { get; }
	
		// Constructors
		public RTCameraBackground();
	
		// Methods
		public void SetCameraBkSettings(Camera camera, CameraBackgroundSettings bkSettings);
		public List<Camera> GetAllRenderIgnoreCameras();
		public bool IsRenderIgnoreCamera(Camera camera);
		public void AddRenderIgnoreCamera(Camera camera);
		public void RemoveRenderIgnoreCamera(Camera camera);
		public void Render_SystemCall(Camera renderCamera);
	}
}
