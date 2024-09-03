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
	public interface IGizmoDragSession
	{
		// Properties
		bool IsActive { get; }
		GizmoDragChannel DragChannel { get; }
		Vector3 TotalDragOffset { get; }
		Quaternion TotalDragRotation { get; }
		Vector3 TotalDragScale { get; }
		Vector3 RelativeDragOffset { get; }
		Quaternion RelativeDragRotation { get; }
		Vector3 RelativeDragScale { get; }
	
		// Methods
		bool ContainsTargetTransform(GizmoTransform transform);
		void AddTargetTransform(GizmoTransform transform);
		void RemoveTargetTransform(GizmoTransform transform);
		bool Begin();
		bool Update();
		void End();
	}
}
