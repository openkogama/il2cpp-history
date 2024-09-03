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
	public class GizmoLineSlider2DCollection
	{
		// Fields
		private List<GizmoLineSlider2D> _sliders;
		private Dictionary<int, GizmoLineSlider2D> _handleIdToSlider;
	
		// Properties
		public int Count { get; }
		public GizmoLineSlider2D this[int id] { get => default; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0
		{
			// Fields
			public int capHandleId;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			internal bool _ContainsCapId_b__0(GizmoLineSlider2D item);
		}
	
		// Constructors
		public GizmoLineSlider2DCollection();
	
		// Methods
		public bool Contains(GizmoLineSlider2D slider);
		public bool Contains(int sliderHandleId);
		public bool ContainsCapId(int capHandleId);
		public void Add(GizmoLineSlider2D slider);
		public void Remove(GizmoLineSlider2D slider);
		public void Make2DHoverPriorityLowerThan(Priority priority);
		public void Make2DHoverPriorityHigherThan(Priority priority);
		public void SetSnapEnabled(bool isEnabled);
		public void SetVisible(bool visible);
		public void Set2DCapsVisible(bool visible);
		public void SetOffsetDragOrigin(Vector3 dragOrigin);
		public void Render(Camera camera);
	}
}
