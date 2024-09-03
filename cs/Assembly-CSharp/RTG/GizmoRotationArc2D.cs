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
	public class GizmoRotationArc2D
	{
		// Fields
		private ArcShape2D _arc;
		private ArcType _type;
		private PolygonShape2D _projectionPoly;
		private int _numProjectedPoints;
	
		// Properties
		public float RotationAngle { get; set; }
		public ArcType Type { get; set; }
		public PolygonShape2D ProjectionPoly { get; set; }
		public int NumProjectedPoints { get; set; }
	
		// Nested types
		public enum ArcType
		{
			Standard = 0,
			PolyProjected = 1
		}
	
		// Constructors
		public GizmoRotationArc2D();
	
		// Methods
		public void SetArcData(Vector2 arcOrigin, Vector2 arcStart, float radius);
		public void Render(GizmoRotationArc2DLookAndFeel lookAndFeel, Camera camera);
	}
}
