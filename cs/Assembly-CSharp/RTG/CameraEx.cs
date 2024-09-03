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
	public static class CameraEx
	{
		// Fields
		private static List<GameObject> _objectBuffer;
	
		// Constructors
		static CameraEx();
	
		// Extension methods
		public static bool IsCurrent(this Camera camera);
		public static float GetFrustumDistanceFromHeight(this Camera camera, float frustumHeight);
		public static float GetFOVFromDistanceAndHeight(this Camera camera, float frustumHeight, float distance);
		public static float GetFrustumWidthFromDistance(this Camera camera, float distance);
		public static float GetFrustumHeightFromDistance(this Camera camera, float distance);
		public static AABB CalculateVolumeAABB(this Camera camera);
		public static AABB CalculateFrustumAABB(this Camera camera);
		public static AABB CalculateOrthoAABB(this Camera camera);
		public static bool IsPointInFrontNearPlane(this Camera camera, Vector3 position);
		public static Plane GetNearPlaneForward(this Camera camera);
		public static Vector3 GetFarMidPoint(this Camera camera);
		public static Vector3 GetFarMidOrthoTop(this Camera camera);
		public static float GetOrthoFOV(this Camera camera);
		public static bool IsPointFacingCamera(this Camera camera, Vector3 point, Vector3 pointNormal);
		public static float GetPointZDistance(this Camera camera, Vector3 point);
		public static List<Vector3> GetVisibleSphereExtents(this Camera camera, Sphere sphere);
		public static List<Vector2> ConvertWorldToScreenPoints(this Camera camera, List<Vector3> worldPoints);
		public static float ScreenToEstimatedWorldSize(this Camera camera, Vector3 worldPos, float screenSize);
		public static float EstimateZoomFactor(this Camera camera, Vector3 worldPos);
		public static float EstimateZoomFactorSpherical(this Camera camera, Vector3 worldPos);
		public static void GetVisibleObjects(this Camera camera, CameraViewVolume viewVolume, List<GameObject> visibleObjects);
	}
}
