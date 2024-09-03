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
	public class TouchInputDevice : InputDeviceBase
	{
		// Fields
		private int _maxNumberOfTouches;
	
		// Properties
		public int MaxNumberOfTouches { get; }
		public int TouchCount { get; }
		public override InputDeviceType DeviceType { get; }
	
		// Constructors
		public TouchInputDevice(int maxNumberOfTouches);
	
		// Methods
		public override Vector3 GetFrameDelta();
		public override Ray GetRay(Camera camera);
		public override Vector3 GetPositionYAxisUp();
		public override bool HasPointer();
		public override bool IsButtonPressed(int buttonIndex);
		public override bool WasButtonPressedInCurrentFrame(int buttonIndex);
		public override bool WasButtonReleasedInCurrentFrame(int buttonIndex);
		public override bool WasMoved();
		protected override void UpateFrameDeltas();
	}
}
