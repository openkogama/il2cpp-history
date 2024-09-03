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
	public interface IGizmoBehaviour
	{
		// Properties
		Gizmo Gizmo { get; }
		bool IsEnabled { get; }
	
		// Methods
		void Init_SystemCall(GizmoBehaviorInitParams initParams);
		void SetEnabled(bool enabled);
		void OnAttached();
		void OnDetached();
		void OnEnabled();
		void OnDisabled();
		void OnGizmoEnabled();
		void OnGizmoDisabled();
		void OnGizmoHandlePicked(int handleId);
		bool OnGizmoCanBeginDrag(int handleId);
		void OnGizmoAttemptHandleDragBegin(int handleId);
		void OnGizmoHoverEnter(int handleId);
		void OnGizmoHoverExit(int handleId);
		void OnGizmoDragBegin(int handleId);
		void OnGizmoDragUpdate(int handleId);
		void OnGizmoDragEnd(int handleId);
		void OnGizmoUpdateBegin();
		void OnGizmoUpdateEnd();
		void OnGUI();
		void OnGizmoRender(Camera camera);
	}
}
