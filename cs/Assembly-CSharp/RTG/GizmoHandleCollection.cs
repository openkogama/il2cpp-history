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
	public class GizmoHandleCollection
	{
		// Fields
		private Gizmo _gizmo;
		private List<IGizmoHandle> _handles;
		private Dictionary<int, IGizmoHandle> _idToHandle;
	
		// Properties
		public Gizmo Gizmo { get; }
		public int Count { get; }
		public IGizmoHandle this[int index] { get => default; }
	
		// Constructors
		public GizmoHandleCollection(Gizmo gizmo);
	
		// Methods
		public void Clear();
		public IGizmoHandle GetHandleById(int handleId);
		public bool Contains(IGizmoHandle handle);
		public bool Contains(int handleId);
		public void Add(IGizmoHandle handle);
		public void Remove(IGizmoHandle handle);
		public List<IGizmoHandle> GetAll();
		public List<GizmoHandleHoverData> GetAllHandlesHoverData(Ray hoverRay);
	}
}
