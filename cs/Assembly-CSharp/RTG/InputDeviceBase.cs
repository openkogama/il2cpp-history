/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public abstract class InputDeviceBase : IInputDevice
	{
		// Fields
		[CompilerGenerated]
		private InputDeviceDoubleTapHandler DoubleTap;
		private float _doubleTapDelay;
		private float _lastTapTime;
		private bool _didDoubleTap;
		private int _maxNumDeltaCaptures;
		private InputDeviceDeltaCapture[] _deltaCaptures;
	
		// Properties
		public bool DidDoubleTap { get; }
		public float DoubleTapDelay { get; set; }
		public abstract InputDeviceType DeviceType { get; }
	
		// Events
		public event InputDeviceDoubleTapHandler DoubleTap {
			add;
			remove;
		}
	
		// Constructors
		public InputDeviceBase();
	
		// Methods
		public void SetMaxNumDeltaCaptures(int maxNumDeltaCaptures);
		public bool CreateDeltaCapture(Vector3 deltaOrigin, out int deltaCaptureId);
		public void RemoveDeltaCapture(int deltaCaptureId);
		public Vector3 GetCaptureDelta(int deltaCaptureId);
		public abstract Vector3 GetFrameDelta();
		public abstract Ray GetRay(Camera camera);
		public abstract Vector3 GetPositionYAxisUp();
		public abstract bool HasPointer();
		public abstract bool IsButtonPressed(int buttonIndex);
		public abstract bool WasButtonPressedInCurrentFrame(int buttonIndex);
		public abstract bool WasButtonReleasedInCurrentFrame(int buttonIndex);
		public abstract bool WasMoved();
		public void Update();
		protected abstract void UpateFrameDeltas();
		private void UpdateDeltaCaptures();
		private void DetectAndHandleDoubleTap();
	}
}
