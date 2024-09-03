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
	public class GizmoHandle : IGizmoHandle
	{
		// Fields
		public GizmoHandleCanHoverHandler CanHover;
		private int _id;
		private Gizmo _gizmo;
		private GizmoTransform _zoomFactorTransform;
		private Priority _genericHoverPriority;
		private Priority _hoverPriority2D;
		private Priority _hoverPriority3D;
		private List<GizmoHandleShape3D> _3DShapes;
		private List<GizmoHandleShape2D> _2DShapes;
		[CompilerGenerated]
		private IGizmoDragSession _DragSession_k__BackingField;
		[CompilerGenerated]
		private bool _Is2DHoverable_k__BackingField;
		[CompilerGenerated]
		private bool _Is3DHoverable_k__BackingField;
		[CompilerGenerated]
		private bool _Is2DVisible_k__BackingField;
		[CompilerGenerated]
		private bool _Is3DVisible_k__BackingField;
	
		// Properties
		public int Id { get; }
		public Gizmo Gizmo { get; }
		public IGizmoDragSession DragSession { [CompilerGenerated] get; [CompilerGenerated] set; }
		public Priority GenericHoverPriority { get; }
		public Priority HoverPriority2D { get; }
		public Priority HoverPriority3D { get; }
		public int Num3DShapes { get; }
		public int Num2DShapes { get; }
		public bool Has3DShapes { get; }
		public bool Has2DShapes { get; }
		public bool Is2DHoverable { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool Is3DHoverable { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool Is2DVisible { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool Is3DVisible { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass62_0
		{
			// Fields
			public Shape3D shape;
	
			// Constructors
			public __c__DisplayClass62_0();
	
			// Methods
			internal bool _Contains3DShape_b__0(GizmoHandleShape3D item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass63_0
		{
			// Fields
			public Shape2D shape;
	
			// Constructors
			public __c__DisplayClass63_0();
	
			// Methods
			internal bool _Contains2DShape_b__0(GizmoHandleShape2D item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass66_0
		{
			// Fields
			public Shape3D shape;
	
			// Constructors
			public __c__DisplayClass66_0();
	
			// Methods
			internal bool _Remove3DShape_b__0(GizmoHandleShape3D item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass67_0
		{
			// Fields
			public Shape2D shape;
	
			// Constructors
			public __c__DisplayClass67_0();
	
			// Methods
			internal bool _Remove2DShape_b__0(GizmoHandleShape2D item);
		}
	
		// Constructors
		public GizmoHandle(Gizmo gizmo, int id);
	
		// Methods
		public float GetZoomFactor(Camera camera);
		public void SetZoomFactorTransform(GizmoTransform transform);
		public void SetHoverable(bool isHoverable);
		public void SetVisible(bool isVisible);
		public Shape3D Get3DShape(int shapeIndex);
		public Shape2D Get2DShape(int shapeIndex);
		public void SetAll3DShapesVisible(bool visible);
		public void Set3DShapeVisible(int shapeIndex, bool isVisible);
		public bool Is3DShapeVisible(int shapeIndex);
		public void Set3DShapeHoverable(int shapeIndex, bool isHoverable);
		public void SetAll2DShapesVisible(bool visible);
		public void Set2DShapeVisible(int shapeIndex, bool isVisible);
		public bool Is2DShapeVisible(int shapeIndex);
		public void Set2DShapeHoverable(int shapeIndex, bool isHoverable);
		public bool Contains3DShape(Shape3D shape);
		public bool Contains2DShape(Shape2D shape);
		public int Add3DShape(Shape3D shape);
		public int Add2DShape(Shape2D shape);
		public void Remove3DShape(Shape3D shape);
		public void Remove2DShape(Shape2D shape);
		public void Render3DSolid();
		public void Render3DWire();
		public void Render3DSolid(int shapeIndex);
		public void Render3DWire(int shapeIndex);
		public void Render2DSolid(Camera camera);
		public void Render2DWire(Camera camera);
		public void Render2DSolid(Camera camera, int shapeIndex);
		public void Render2DWire(Camera camera, int shapeIndex);
		public GizmoHandleHoverData GetHoverData(Ray hoverRay);
	}
}
