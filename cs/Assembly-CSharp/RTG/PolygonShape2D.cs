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
	public class PolygonShape2D : Shape2D
	{
		// Fields
		private Rect _rect;
		private bool _isRectDirty;
		private bool _isClosed;
		private List<Vector2> _cwPolyPoints;
		private List<Vector2> _thickCwBorderPoints;
		private bool _isThickBorderDirty;
		private PolygonEpsilon _epsilon;
		private Shape2DPtContainMode _ptContainMode;
		private BorderRenderDescriptor _borderRenderDesc;
	
		// Properties
		public int NumPoints { get; }
		public PolygonEpsilon Epsilon { get; set; }
		public float AreaEps { get; set; }
		public float WireEps { get; set; }
		public float ThickWireEps { get; set; }
		public bool IsClosed { get; }
		public Shape2DPtContainMode PtContainMode { get; set; }
		public BorderRenderDescriptor BorderRenderDesc { get; }
	
		// Nested types
		public enum ThickBorderFillMode
		{
			Filled = 0,
			Border = 1
		}
	
		public class BorderRenderDescriptor
		{
			// Fields
			private Shape2DBorderType _borderType;
			private float _thickness;
			private Shape2DBorderDirection _direction;
			private ThickBorderFillMode _fillMode;
	
			// Properties
			public Shape2DBorderType BorderType { get; set; }
			public float Thickness { get; set; }
			public Shape2DBorderDirection Direction { get; set; }
			public ThickBorderFillMode FillMode { get; set; }
	
			// Constructors
			public BorderRenderDescriptor();
		}
	
		// Constructors
		public PolygonShape2D();
	
		// Methods
		public Vector2 GetExtentPoint(Shape2DExtentPoint extentPt);
		public override void RenderArea(Camera camera);
		public override void RenderBorder(Camera camera);
		public List<Vector2> GetPoints();
		public override Rect GetEncapsulatingRect();
		public void CopyPoints(PolygonShape2D sourcePoly);
		public void SetClockwisePoints(List<Vector2> cwBorderPoints, bool isClosed);
		public void MakeSphereBorder(Vector3 sphereCenter, float sphereRadius, int numPoints, Camera camera);
		public override bool ContainsPoint(Vector2 point);
		private void CalculateRect();
		private void CalculateThickBorderPoints();
	}
}
