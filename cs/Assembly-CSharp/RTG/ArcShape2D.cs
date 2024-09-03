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
	public class ArcShape2D : Shape2D
	{
		// Fields
		private BorderRenderDescriptor _borderRenderDesc;
		private Rect _rect;
		private bool _forceShortestArc;
		private float _radius;
		private Vector2 _origin;
		private Vector2 _startPoint;
		private Vector2 _endPoint;
		private List<Vector2> _borderPoints;
		private float _degreeAngleFromStart;
		private int _numBorderPoints;
		private bool _areBorderPointsDirty;
		private ArcEpsilon _epsilon;
	
		// Properties
		public float Radius { get; set; }
		public bool ForceShortestArc { get; set; }
		public float DegreeAngleFromStart { get; set; }
		public float AbsDegreeAngleFromStart { get; }
		public Vector2 Origin { get; set; }
		public int NumBorderPoints { get; set; }
		public Vector2 StartPoint { get; }
		public Vector2 EndPoint { get; }
		public ArcEpsilon Epsilon { get; set; }
		public float AreaEps { get; set; }
		public BorderRenderDescriptor BorderRenderDesc { get; }
	
		// Nested types
		public enum BorderRenderFlags
		{
			None = 0,
			ExtremitiesBorder = 1,
			ArcBorder = 2,
			All = 3
		}
	
		public class BorderRenderDescriptor
		{
			// Fields
			private BorderRenderFlags _borderFlags;
	
			// Properties
			public BorderRenderFlags BorderFlags { get; set; }
	
			// Constructors
			public BorderRenderDescriptor();
		}
	
		// Constructors
		public ArcShape2D();
	
		// Methods
		public override void RenderArea(Camera camera);
		public override void RenderBorder(Camera camera);
		public void SetArcData(Vector2 startPoint, float radius);
		public override Rect GetEncapsulatingRect();
		public override bool ContainsPoint(Vector2 point);
		private void OnBorderPointsFoundDirty();
		private void CalculateEndPoint();
	}
}
