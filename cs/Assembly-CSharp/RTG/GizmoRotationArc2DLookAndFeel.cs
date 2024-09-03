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
	[Serializable]
	public class GizmoRotationArc2DLookAndFeel
	{
		// Fields
		[SerializeField]
		private bool _useShortestRotation;
		[SerializeField]
		private GizmoRotationArcFillFlags _fillFlags;
		[SerializeField]
		private Color _color;
		[SerializeField]
		private Color _borderColor;
	
		// Properties
		public bool UseShortestRotation { get; set; }
		public GizmoRotationArcFillFlags FillFlags { get; set; }
		public Color Color { get; set; }
		public Color BorderColor { get; set; }
	
		// Constructors
		public GizmoRotationArc2DLookAndFeel();
	}
}
