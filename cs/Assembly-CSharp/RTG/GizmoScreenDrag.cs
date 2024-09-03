/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public abstract class GizmoScreenDrag : GizmoDragSession
	{
		// Fields
		private bool _isSnapEnabled;
		private float _sensitivity;
		protected InputDeviceScreenDragSession _screenDragSession;
	
		// Properties
		public bool IsSnapEnabled { get; set; }
		public float Sensitivity { get; set; }
		public override bool IsActive { get; }
	
		// Constructors
		protected GizmoScreenDrag();
	
		// Methods
		protected override bool DoBeginSession();
		protected override bool DoUpdateSession();
		protected override void DoEndSession();
		protected bool CanSnap();
	}
}
