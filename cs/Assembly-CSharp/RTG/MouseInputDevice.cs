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
	public class MouseInputDevice : InputDeviceBase
	{
		// Fields
		private Vector3 _frameDelta;
		private Vector3 _mousePosInLastFrame;
	
		// Properties
		public override InputDeviceType DeviceType { get; }
	
		// Constructors
		public MouseInputDevice();
	
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
