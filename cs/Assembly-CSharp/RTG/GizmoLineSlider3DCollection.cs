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
	public class GizmoLineSlider3DCollection
	{
		// Fields
		private List<GizmoLineSlider3D> _sliders;
		private Dictionary<int, GizmoLineSlider3D> _handleIdToSlider;
	
		// Properties
		public int Count { get; }
		public GizmoLineSlider3D this[int id] { get => default; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass20_0
		{
			// Fields
			public Camera renderCamera;
			public Vector3 cameraPos;
	
			// Constructors
			public __c__DisplayClass20_0();
	
			// Methods
			internal int _GetRenderSortedSliders_b__0(GizmoLineSlider3D s0, GizmoLineSlider3D s1);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0
		{
			// Fields
			public int capHandleId;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			internal bool _ContainsCapId_b__0(GizmoLineSlider3D item);
		}
	
		// Constructors
		public GizmoLineSlider3DCollection();
	
		// Methods
		public bool Contains(GizmoLineSlider3D slider);
		public bool Contains(int sliderHandleId);
		public bool ContainsCapId(int capHandleId);
		public void Add(GizmoLineSlider3D slider);
		public void Remove(GizmoLineSlider3D slider);
		public void ApplyZoomFactor(Camera camera);
		public void SetZoomFactorTransform(GizmoTransform zoomFactorTransform);
		public void Make3DHoverPriorityLowerThan(Priority priority);
		public void Make3DHoverPriorityHigherThan(Priority priority);
		public void SetSnapEnabled(bool isEnabled);
		public void SetVisible(bool visible);
		public void Set3DCapsVisible(bool visible);
		public void SetDragChannel(GizmoDragChannel dragChannel);
		public void RegisterScalerHandle(int handleId, IEnumerable<int> scaleDragAxisIndices);
		public List<GizmoLineSlider3D> GetRenderSortedSliders(Camera renderCamera);
	}
}
