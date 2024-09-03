/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public struct GizmoHoverInfo
	{
		// Fields
		private bool _isHovered;
		private int _handleId;
		private GizmoDimension _handleDimension;
		private Vector3 _hoverPoint;
	
		// Properties
		public bool IsHovered { get; set; }
		public int HandleId { get; set; }
		public GizmoDimension HandleDimension { get; set; }
		public Vector3 HoverPoint { get; set; }
	
		// Methods
		public void Reset();
	}
}
