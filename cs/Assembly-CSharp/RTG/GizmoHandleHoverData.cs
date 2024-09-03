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
	public class GizmoHandleHoverData
	{
		// Fields
		private int _handleId;
		private Gizmo _gizmo;
		private GizmoDimension _handleDimension;
		private Ray _hoverRay;
		private Vector3 _hoverPoint;
		private float _hoverEnter3D;
	
		// Properties
		public int HandleId { get; }
		public Gizmo Gizmo { get; }
		public GizmoDimension HandleDimension { get; }
		public Ray HoverRay { get; }
		public Vector3 HoverPoint { get; }
		public float HoverEnter3D { get; }
	
		// Constructors
		public GizmoHandleHoverData(Ray hoverRay, IGizmoHandle gizmoHandle, float hoverEnter3D);
		public GizmoHandleHoverData(Ray hoverRay, IGizmoHandle gizmoHandle, Vector2 hoverPt2D);
	}
}
