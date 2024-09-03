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
	public interface IGizmoCap
	{
		// Properties
		Gizmo Gizmo { get; }
		int HandleId { get; }
		Priority HoverPriority3D { get; }
		Priority HoverPriority2D { get; }
		Priority GenericHoverPriority { get; }
	
		// Methods
		void SetHoverable(bool isHoverable);
		void SetVisible(bool isVisible);
		void Render(Camera camera);
	}
}
