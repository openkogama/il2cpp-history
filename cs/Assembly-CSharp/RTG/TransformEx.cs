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
	public static class TransformEx
	{
		// Methods
		public static List<Transform> GetGameObjectTransformCollection(IEnumerable<GameObject> gameObjects);
		public static List<Transform> FilterParentsOnly(IEnumerable<Transform> transforms);
	
		// Extension methods
		public static void TransformPoints(this Transform transform, List<Vector3> points);
		public static void SetWorldScale(this Transform transform, Vector3 worldScale);
		public static void ScaleFromPivot(this Transform transform, Vector3 scaleFactor, Vector3 pivot);
		public static void RotateAroundPivot(this Transform transform, Quaternion rotation, Vector3 pivot);
		public static Vector3 GetLocalAxis(this Transform transform, AxisDescriptor axisDesc);
		public static Plane GetLocalPlane(this Transform transform, PlaneDescriptor planeDesc);
		public static Quaternion Align(this Transform transform, Vector3 normAlignVector, TransformAxis alignmentAxis);
	}
}
