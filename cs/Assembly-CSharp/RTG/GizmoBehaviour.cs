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
	[Serializable]
	public abstract class GizmoBehaviour : IGizmoBehaviour
	{
		// Fields
		protected Gizmo _gizmo;
		protected bool _isEnabled;
	
		// Properties
		public Gizmo Gizmo { get; }
		public bool IsEnabled { get; }
	
		// Constructors
		protected GizmoBehaviour();
	
		// Methods
		public void Init_SystemCall(GizmoBehaviorInitParams initParams);
		public void SetEnabled(bool enabled);
		public virtual void OnAttached();
		public virtual void OnDetached();
		public virtual void OnGizmoEnabled();
		public virtual void OnGizmoDisabled();
		public virtual void OnEnabled();
		public virtual void OnDisabled();
		public virtual void OnGizmoHandlePicked(int handleId);
		public virtual bool OnGizmoCanBeginDrag(int handleId);
		public virtual void OnGizmoAttemptHandleDragBegin(int handleId);
		public virtual void OnGizmoDragBegin(int handleId);
		public virtual void OnGizmoDragUpdate(int handleId);
		public virtual void OnGizmoDragEnd(int handleId);
		public virtual void OnGizmoHoverEnter(int handleId);
		public virtual void OnGizmoHoverExit(int handleId);
		public virtual void OnGizmoUpdateBegin();
		public virtual void OnGizmoUpdateEnd();
		public virtual void OnGUI();
		public virtual void OnGizmoRender(Camera camera);
		protected void CheckRequiredBehaviours(List<System.Type> reqBehaviourTypes);
		private void ThrowReqBehaviourExeception(System.Type reqBehaviorType);
	}
}
