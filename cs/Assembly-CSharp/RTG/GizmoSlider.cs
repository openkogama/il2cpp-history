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
	public abstract class GizmoSlider : IGizmoSlider
	{
		// Fields
		private GizmoHandle _handle;
		private Gizmo _gizmo;
		private bool _isVisible;
		private bool _isHoverable;
	
		// Properties
		protected GizmoHandle Handle { get; }
		public Gizmo Gizmo { get; }
		public int HandleId { get; }
		public bool IsVisible { get; }
		public bool IsHoverable { get; }
		public bool IsHovered { get; }
		public Priority HoverPriority3D { get; }
		public Priority HoverPriority2D { get; }
		public Priority GenericHoverPriority { get; }
	
		// Constructors
		public GizmoSlider(Gizmo gizmo, int handleId);
	
		// Methods
		public void SetVisible(bool isVisible);
		public void SetHoverable(bool isHoverable);
		public abstract void SetSnapEnabled(bool isEnabled);
		public abstract void Render(Camera camera);
		protected abstract void OnVisibilityStateChanged();
		protected abstract void OnHoverableStateChanged();
	}
}
