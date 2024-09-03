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
	public class GizmoScalerHandle
	{
		// Fields
		private int _handleId;
		private List<int> _scaleDragAxisIndices;
	
		// Properties
		public int HandleId { get; }
		public List<int> ScaleDragAxisIndices { get; }
	
		// Constructors
		public GizmoScalerHandle(int handleId, IEnumerable<int> scaleDragAxisIndices);
	
		// Methods
		public bool ContainsScaleDragAxisIndex(int scaleDragAxisIndex);
	}
}
