/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class GizmoPlaneSlider3DCollection
	{
		// Fields
		private List<GizmoPlaneSlider3D> _sliders;
		private Dictionary<int, GizmoPlaneSlider3D> _handleIdToSlider;
	
		// Properties
		public int Count { get; }
		public GizmoPlaneSlider3D this[int id] { get => default; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass19_0
		{
			// Fields
			public Vector3 cameraPos;
	
			// Constructors
			public __c__DisplayClass19_0();
	
			// Methods
			internal int _GetRenderSortedSliders_b__0(GizmoPlaneSlider3D s0, GizmoPlaneSlider3D s1);
		}
	
		// Constructors
		public GizmoPlaneSlider3DCollection();
	
		// Methods
		public bool Contains(GizmoPlaneSlider3D slider);
		public bool Contains(int sliderHandleId);
		public void Add(GizmoPlaneSlider3D slider);
		public void Remove(GizmoPlaneSlider3D slider);
		public void ApplyZoomFactor(Camera camera);
		public void SetZoomFactorTransform(GizmoTransform zoomFactorTransform);
		public void Make3DHoverPriorityLowerThan(Priority priority);
		public void Make3DHoverPriorityHigherThan(Priority priority);
		public void SetSnapEnabled(bool isEnabled);
		public void SetVisible(bool isVisible, bool includeBorder);
		public void SetBorderVisible(bool isVisible);
		public void SetHoverable(bool isHoverable, bool includeBorder);
		public void SetBorderHoverable(bool isHoverable);
		public List<GizmoPlaneSlider3D> GetRenderSortedSliders(Camera renderCamera);
	}
}
