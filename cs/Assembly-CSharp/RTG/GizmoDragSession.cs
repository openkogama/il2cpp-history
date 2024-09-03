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
	public abstract class GizmoDragSession : IGizmoDragSession
	{
		// Fields
		private List<GizmoTransform> _targetTransforms;
		protected Vector3 _totalDragOffset;
		protected Quaternion _totalDragRotation;
		protected Vector3 _totalDragScale;
		protected Vector3 _relativeDragOffset;
		protected Quaternion _relativeDragRotation;
		protected Vector3 _relativeDragScale;
	
		// Properties
		public int NumTargetTransforms { get; }
		public Vector3 TotalDragOffset { get; }
		public Quaternion TotalDragRotation { get; }
		public Vector3 TotalDragScale { get; }
		public Vector3 RelativeDragOffset { get; }
		public Quaternion RelativeDragRotation { get; }
		public Vector3 RelativeDragScale { get; }
		public abstract bool IsActive { get; }
		public abstract GizmoDragChannel DragChannel { get; }
	
		// Constructors
		protected GizmoDragSession();
	
		// Methods
		public bool ContainsTargetTransform(GizmoTransform transform);
		public void AddTargetTransform(GizmoTransform transform);
		public void RemoveTargetTransform(GizmoTransform transform);
		public bool Begin();
		public bool Update();
		public void End();
		protected abstract bool DoBeginSession();
		protected abstract bool DoUpdateSession();
		protected abstract void DoEndSession();
		protected abstract void CalculateDragValues();
		protected void ApplyDrag();
		protected virtual bool CanBegin();
		protected virtual void OnSessionBegin();
		protected virtual void OnSessionEnd();
	}
}
