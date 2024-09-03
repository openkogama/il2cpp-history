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
	public class GizmoPlaneSlider3DLookAndFeel
	{
		// Fields
		[SerializeField]
		private GizmoPlane3DType _planeType;
		[SerializeField]
		private float _scale;
		[SerializeField]
		private bool _useZoomFactor;
		[SerializeField]
		private float _quadWidth;
		[SerializeField]
		private float _quadHeight;
		[SerializeField]
		private float _raTriangleXLength;
		[SerializeField]
		private float _raTriangleYLength;
		[SerializeField]
		private float _circleRadius;
		[SerializeField]
		private float _borderBoxHeight;
		[SerializeField]
		private float _borderBoxDepth;
		[SerializeField]
		private float _borderTorusThickness;
		[SerializeField]
		private int _numBorderTorusWireAxialSlices;
		[SerializeField]
		private float _borderCylTorusWidth;
		[SerializeField]
		private float _borderCylTorusHeight;
		[SerializeField]
		private GizmoShadeMode _shadeMode;
		[SerializeField]
		private Color _color;
		[SerializeField]
		private Color _hoveredColor;
		[SerializeField]
		private Color _borderColor;
		[SerializeField]
		private Color _hoveredBorderColor;
		[SerializeField]
		private float _borderCircleCullAlphaScale;
		[SerializeField]
		private GizmoShadeMode _borderShadeMode;
		[SerializeField]
		private GizmoFillMode3D _borderFillMode;
		[SerializeField]
		private GizmoQuad3DBorderType _quadBorderType;
		[SerializeField]
		private GizmoRATriangle3DBorderType _raTriangleBorderType;
		[SerializeField]
		private GizmoCircle3DBorderType _circleBorderType;
		[SerializeField]
		private bool _isRotationArcVisible;
		[SerializeField]
		private GizmoRotationArc3DLookAndFeel _rotationArcLookAndFeel;
	
		// Properties
		public GizmoShadeMode ShadeMode { get; set; }
		public GizmoPlane3DType PlaneType { get; set; }
		public float Scale { get; set; }
		public bool UseZoomFactor { get; set; }
		public float QuadWidth { get; set; }
		public float QuadHeight { get; set; }
		public float RATriangleXLength { get; set; }
		public float RATriangleYLength { get; set; }
		public float CircleRadius { get; set; }
		public float BorderCircleCullAlphaScale { get; set; }
		public float BorderBoxHeight { get; set; }
		public float BorderBoxDepth { get; set; }
		public float BorderTorusThickness { get; set; }
		public float BorderCylTorusWidth { get; set; }
		public float BorderCylTorusHeight { get; set; }
		public int NumBorderTorusWireAxialSlices { get; set; }
		public Color Color { get; set; }
		public Color HoveredColor { get; set; }
		public Color BorderColor { get; set; }
		public Color HoveredBorderColor { get; set; }
		public GizmoShadeMode BorderShadeMode { get; set; }
		public GizmoFillMode3D BorderFillMode { get; set; }
		public GizmoQuad3DBorderType QuadBorderType { get; set; }
		public GizmoCircle3DBorderType CircleBorderType { get; set; }
		public GizmoRATriangle3DBorderType RATriangleBorderType { get; set; }
		public bool IsRotationArcVisible { get; set; }
		public GizmoRotationArc3DLookAndFeel RotationArcLookAndFeel { get; }
	
		// Constructors
		public GizmoPlaneSlider3DLookAndFeel();
	}
}
