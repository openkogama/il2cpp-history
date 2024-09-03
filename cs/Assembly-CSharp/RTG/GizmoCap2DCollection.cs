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
	public class GizmoCap2DCollection
	{
		// Fields
		private List<GizmoCap2D> _caps;
		private Dictionary<int, GizmoCap2D> _handleIdToCap;
	
		// Properties
		public int Count { get; }
		public GizmoCap2D this[int id] { get => default; }
	
		// Constructors
		public GizmoCap2DCollection();
	
		// Methods
		public bool Contains(GizmoCap2D cap);
		public bool Contains(int capHandleId);
		public void Add(GizmoCap2D cap);
		public void Remove(GizmoCap2D cap);
		public void Make2DHoverPriorityLowerThan(Priority priority);
		public void Make2DHoverPriorityHigherThan(Priority priority);
		public void SetVisible(bool visible);
		public void SetHoverable(bool hoverable);
		public void SetDragSession(IGizmoDragSession dragSession);
		public void Render(Camera camera);
	}
}
