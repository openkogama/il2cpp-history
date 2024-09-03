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
	public class GizmoQuad3DBorder
	{
		// Fields
		private GizmoPlaneSlider3D _planeSlider;
		private GizmoHandle _targetHandle;
		private QuadShape3D _targetQuad;
		private bool _isVisible;
		private bool _isHoverable;
		private int _borderQuadIndex;
		private QuadShape3D _borderQuad;
		private int _topBoxIndex;
		private BoxShape3D _topBox;
		private int _rightBoxIndex;
		private BoxShape3D _rightBox;
		private int _bottomBoxIndex;
		private BoxShape3D _bottomBox;
		private int _leftBoxIndex;
		private BoxShape3D _leftBox;
		private int _topLeftBoxIndex;
		private BoxShape3D _topLeftBox;
		private int _topRightBoxIndex;
		private BoxShape3D _topRightBox;
		private int _bottomRightBoxIndex;
		private BoxShape3D _bottomRightBox;
		private int _bottomLeftBoxIndex;
		private BoxShape3D _bottomLeftBox;
		private List<int> _sortedBoxIndices;
		private GizmoQuad3DBorderControllerData _controllerData;
		private IGizmoQuad3DBorderController[] _controllers;
	
		// Properties
		public bool IsVisible { get; }
		public bool IsHoverable { get; }
		public Gizmo Gizmo { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass39_0
		{
			// Fields
			public GizmoQuad3DBorder __4__this;
			public Vector3 camPos;
	
			// Constructors
			public __c__DisplayClass39_0();
	
			// Methods
			internal int _Render_b__0(int i0, int i1);
		}
	
		// Constructors
		public GizmoQuad3DBorder(GizmoPlaneSlider3D planeSlider, GizmoHandle targetHandle, QuadShape3D targetQuad);
	
		// Methods
		public void SetVisible(bool isVisible);
		public void SetHoverable(bool isHoverable);
		public float GetZoomFactor(Camera camera);
		public float GetRealBoxHeight(float zoomFactor);
		public float GetRealBoxDepth(float zoomFactor);
		public void OnQuadShapeChanged();
		public void Render(Camera camera);
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
	}
}
