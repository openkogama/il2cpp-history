/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class GizmoCollectionEnabledStateSnapshot
	{
		// Fields
		private Dictionary<Gizmo, bool> _gizmoToState;
	
		// Constructors
		public GizmoCollectionEnabledStateSnapshot();
	
		// Methods
		public void Snapshot(IEnumerable<Gizmo> gizmos);
		public void Apply();
	}
}
