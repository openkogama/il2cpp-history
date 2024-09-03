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
	public class GizmoLineSlider2DSettings
	{
		// Fields
		[SerializeField]
		private float _lineHoverEps;
		[SerializeField]
		private float _boxHoverEps;
		[SerializeField]
		private float _offsetSnapStep;
		[SerializeField]
		private float _rotationSnapStep;
		[SerializeField]
		private GizmoSnapMode _rotationSnapMode;
		[SerializeField]
		private float _scaleSnapStep;
		[SerializeField]
		private float _offsetSensitivity;
		[SerializeField]
		private float _rotationSensitivity;
		[SerializeField]
		private float _scaleSensitivity;
	
		// Properties
		public float LineHoverEps { get; set; }
		public float BoxHoverEps { get; set; }
		public float OffsetSnapStep { get; set; }
		public float RotationSnapStep { get; set; }
		public GizmoSnapMode RotationSnapMode { get; set; }
		public float ScaleSnapStep { get; set; }
		public float OffsetSensitivity { get; set; }
		public float RotationSensitivity { get; set; }
		public float ScaleSensitivity { get; set; }
	
		// Constructors
		public GizmoLineSlider2DSettings();
	}
}
