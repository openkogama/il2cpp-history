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
	public class GizmoRotationArc3D
	{
		// Fields
		private ArcShape3D _arc;
	
		// Properties
		public float RotationAngle { get; set; }
		public float Radius { get; set; }
	
		// Constructors
		public GizmoRotationArc3D();
	
		// Methods
		public void SetArcData(Vector3 rotationAxis, Vector3 arcOrigin, Vector3 arcStart, float radius);
		public void Render(GizmoRotationArc3DLookAndFeel lookAndFeel);
	}
}
