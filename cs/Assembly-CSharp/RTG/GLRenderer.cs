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
	public static class GLRenderer
	{
		// Methods
		public static void DrawQuads2D(List<Vector2> quadPoints, Camera camera);
		public static void DrawLineLoop2D(List<Vector2> linePoints, Camera camera);
		public static void DrawLineLoop2D(List<Vector2> linePoints, Vector2 translation, Vector2 scale, Camera camera);
		public static void DrawLines2D(List<Vector2> linePoints, Camera camera);
		public static void DrawLines2D(List<Vector2> linePoints, Vector2 translation, Vector2 scale, Camera camera);
		public static void DrawLine2D(Vector2 startPoint, Vector2 endPoint, Camera camera);
		public static void DrawLine3D(Vector3 startPoint, Vector3 endPoint);
		public static void DrawLines3D(List<Vector3> linePoints);
		public static void DrawLineLoop3D(List<Vector3> linePoints);
		public static void DrawLineStrip3D(List<Vector3> linePoints);
		public static void DrawLineLoop3D(List<Vector3> linePoints, Vector3 pointOffset);
		public static void DrawLinePairs3D(List<Vector3> pairPoints);
		public static void DrawRectBorder2D(Rect rect, Camera camera);
		public static void DrawRect2D(Rect rect, Camera camera);
		public static void DrawCircleBorder2D(Vector2 circleCenter, float circleRadius, int numPoints, Camera camera);
		public static void DrawCircle2D(Vector2 circleCenter, float circleRadius, int numPoints, Camera camera);
		public static void DrawCircleBorder3D(Vector3 circleCenter, float circleRadius, Vector3 circleRight, Vector3 circleUp, int numPoints);
		public static void DrawCircle3D(Vector2 circleCenter, float circleRadius, Vector3 circleRight, Vector3 circleUp, int numPoints);
		public static void DrawSphereBorder(Camera camera, Vector3 sphereCenter, float sphereRadius, int numPoints);
		public static void DrawTriangleFan2D(Vector2 origin, List<Vector2> points, Vector2 translation, Vector2 scale, Camera camera);
		public static void DrawTriangleFan2D(Vector2 origin, List<Vector2> points, Camera camera);
		public static void DrawTriangleFan3D(Vector3 origin, List<Vector3> points, Vector3 translation, Vector3 scale);
		public static void DrawTriangleFan3D(Vector3 origin, List<Vector3> points);
	}
}
