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
	public class InputDeviceScreenDragSession
	{
		// Fields
		private Vector2 _dragPoint;
		private Vector2 _dragDelta;
		private Vector2 _accumDrag;
		private IInputDevice _inputDevice;
		private bool _isActive;
	
		// Properties
		public Vector2 DragPoint { get; }
		public Vector2 DragDelta { get; }
		public Vector2 AccumDrag { get; }
		public bool IsActive { get; }
	
		// Constructors
		public InputDeviceScreenDragSession(IInputDevice inputDevice);
	
		// Methods
		public bool Begin();
		public void End();
		public bool Update();
		private bool UpdateDragPoint();
	}
}
