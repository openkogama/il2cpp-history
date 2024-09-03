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
	public abstract class GizmoPlaneDrag3D : GizmoDragSession
	{
		// Fields
		private bool _isSnapEnabled;
		private float _sensitivity;
		protected InputDevicePlaneDragSession3D _planeDragSession;
	
		// Properties
		public bool IsSnapEnabled { get; set; }
		public float Sensitivity { get; set; }
		public override bool IsActive { get; }
	
		// Constructors
		protected GizmoPlaneDrag3D();
	
		// Methods
		protected override bool DoBeginSession();
		protected override bool DoUpdateSession();
		protected override void DoEndSession();
		protected bool CanSnap();
		protected abstract Plane CalculateDragPlane();
	}
}
