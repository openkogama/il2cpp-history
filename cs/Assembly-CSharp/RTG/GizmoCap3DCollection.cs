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
	public class GizmoCap3DCollection
	{
		// Fields
		private List<GizmoCap3D> _caps;
		private Dictionary<int, GizmoCap3D> _handleIdToCap;
	
		// Properties
		public int Count { get; }
		public GizmoCap3D this[int id] { get => default; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass15_0
		{
			// Fields
			public Vector3 cameraPos;
	
			// Constructors
			public __c__DisplayClass15_0();
	
			// Methods
			internal int _GetRenderSortedCaps_b__0(GizmoCap3D c0, GizmoCap3D c1);
		}
	
		// Constructors
		public GizmoCap3DCollection();
	
		// Methods
		public bool Contains(GizmoCap3D cap);
		public bool Contains(int capHandleId);
		public void Add(GizmoCap3D cap);
		public void Remove(GizmoCap3D cap);
		public void ApplyZoomFactor(Camera camera);
		public void SetZoomFactorTransform(GizmoTransform zoomFactorTransform);
		public void Make3DHoverPriorityLowerThan(Priority priority);
		public void Make3DHoverPriorityHigherThan(Priority priority);
		public void SetVisible(bool visible);
		public List<GizmoCap3D> GetRenderSortedCaps(Camera renderCamera);
	}
}
