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
	public interface IInputDevice
	{
		// Properties
		bool DidDoubleTap { get; }
		float DoubleTapDelay { get; set; }
		InputDeviceType DeviceType { get; }
	
		// Events
		event InputDeviceDoubleTapHandler DoubleTap {
			add;
			remove;
		}
	
		// Methods
		Ray GetRay(Camera camera);
		Vector3 GetPositionYAxisUp();
		bool HasPointer();
		bool IsButtonPressed(int buttonIndex);
		bool WasButtonPressedInCurrentFrame(int buttonIndex);
		bool WasButtonReleasedInCurrentFrame(int buttonIndex);
		bool WasMoved();
		bool CreateDeltaCapture(Vector3 deltaOrigin, out int deltaCaptureId);
		void RemoveDeltaCapture(int deltaCaptureId);
		Vector3 GetCaptureDelta(int deltaCaptureId);
		Vector3 GetFrameDelta();
		void Update();
	}
}
