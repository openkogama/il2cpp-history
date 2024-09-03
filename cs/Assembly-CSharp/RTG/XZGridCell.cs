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
	public class XZGridCell
	{
		// Fields
		private IXZGrid _parentGrid;
		private int _xIndex;
		private int _zIndex;
		private Vector3 _min;
		private Vector3 _max;
	
		// Properties
		public IXZGrid ParentGrid { get; }
		public int XIndex { get; }
		public int ZIndex { get; }
		public Vector3 Min { get; }
		public Vector3 Max { get; }
		public Vector3 Center { get; }
	
		// Constructors
		public XZGridCell(int xIndex, int zIndex, Vector3 min, Vector3 max, IXZGrid parentGrid);
	
		// Methods
		public static XZGridCell FromPoint(Vector3 point, float cellSizeX, float cellSizeZ, IXZGrid parentGrid);
		public List<Vector3> GetCenterAndCorners();
	}
}
