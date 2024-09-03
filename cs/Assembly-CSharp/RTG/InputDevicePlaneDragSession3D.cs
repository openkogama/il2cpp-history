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
	public class InputDevicePlaneDragSession3D
	{
		// Fields
		private Plane _plane;
		private Camera _raycastCamera;
		private Vector3 _dragPoint;
		private Vector3 _dragDelta;
		private Vector3 _accumDrag;
		private IInputDevice _inputDevice;
		private bool _isActive;
	
		// Properties
		public Plane Plane { get; set; }
		public Camera RaycastCamera { get; set; }
		public Vector3 DragPoint { get; }
		public Vector3 DragDelta { get; }
		public Vector3 AccumDrag { get; }
		public bool IsActive { get; }
	
		// Constructors
		public InputDevicePlaneDragSession3D(IInputDevice inputDevice, Camera raycastCamera);
	
		// Methods
		public bool Begin();
		public void End();
		public bool Update();
		private bool UpdateDragPoint();
	}
}
