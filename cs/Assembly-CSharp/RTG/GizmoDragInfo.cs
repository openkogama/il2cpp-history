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
	public struct GizmoDragInfo
	{
		// Fields
		private bool _isDragged;
		private int _handleId;
		private Vector3 _dragBeginPoint;
		private GizmoDragChannel _dragChannel;
		private GizmoDimension _handleDimension;
		private Vector3 _totalOffset;
		private Quaternion _totalRotation;
		private Vector3 _totalScale;
		private Vector3 _relativeOffset;
		private Quaternion _relativeRotation;
		private Vector3 _relativeScale;
	
		// Properties
		public bool IsDragged { get; set; }
		public int HandleId { get; set; }
		public Vector3 DragBeginPoint { get; set; }
		public GizmoDragChannel DragChannel { get; set; }
		public GizmoDimension HandleDimension { get; set; }
		public Vector3 TotalOffset { get; set; }
		public Quaternion TotalRotation { get; set; }
		public Vector3 TotalScale { get; set; }
		public Vector3 RelativeOffset { get; set; }
		public Quaternion RelativeRotation { get; set; }
		public Vector3 RelativeScale { get; set; }
	
		// Methods
		public void Reset();
	}
}
