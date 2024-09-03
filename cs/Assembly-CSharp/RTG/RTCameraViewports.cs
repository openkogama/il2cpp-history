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
	public class RTCameraViewports : Singleton<RTG.RTCameraViewports>
	{
		// Fields
		[CompilerGenerated]
		private CameraAddedHandler CameraAdded;
		[CompilerGenerated]
		private CameraRemovedHandler CameraRemoved;
		[CompilerGenerated]
		private FocusCameraChangedHandler FocusCameraChanged;
		private List<Camera> _cameras;
	
		// Properties
		public Camera FocusCamera { get; }
		public int NumCameras { get; }
	
		// Events
		public event CameraAddedHandler CameraAdded {
			add;
			remove;
		}
		public event CameraRemovedHandler CameraRemoved {
			add;
			remove;
		}
		public event FocusCameraChangedHandler FocusCameraChanged {
			add;
			remove;
		}
	
		// Nested types
		public delegate void CameraAddedHandler(Camera camera);
	
		public delegate void CameraRemovedHandler(Camera camera);
	
		public delegate void FocusCameraChangedHandler(Camera oldFocusCam, Camera newFocusCam);
	
		// Constructors
		public RTCameraViewports();
	
		// Methods
		public bool ContainsCamera(Camera camera);
		public void AddCamera(Camera camera, Rect normViewRect);
		public void AddCamera(Camera camera);
		public void RemoveCamera(Camera camera);
		public void SetFocusCamera(int cameraIndex);
		public void SetFocusCamera(Camera camera);
	}
}
