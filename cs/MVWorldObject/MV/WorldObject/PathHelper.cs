/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public class PathHelper
	{
		// Constructors
		public PathHelper();
	
		// Methods
		public static Vector3 GetPositionByTime(Vector3 position, Vector3[] waypoints, Dictionary<object, object> data, ref float pathTime, ref int oldWayPoint, ref int newWayPoint, ref bool shouldStop);
		public static float CalcRoundTripTime(Vector3[] waypoints, MoverPattern pattern, float moveSpeed);
		private static Vector3 GetPositionByTimeLoop(Vector3 position, Vector3[] waypoints, Dictionary<object, object> data, ref float pathTime, ref int oldWayPoint, ref int newWayPoint, ref bool shouldStop);
		private static Vector3 GetPositionByTimePingPong(Vector3 position, Vector3[] waypoints, Dictionary<object, object> data, ref float pathTime, ref int oldWayPoint, ref int newWayPoint, ref bool shouldStop);
	}
}
