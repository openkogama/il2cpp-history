/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

// Image 16: DOTween.dll - Assembly: DOTween, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace DG.Tweening.Core
{
	public static class DOTweenUtils
	{
		// Fields
		private static Assembly[] _loadedAssemblies;
		private static readonly string[] _defAssembliesToQuery;
	
		// Constructors
		static DOTweenUtils();
	
		// Methods
		internal static Vector3 Vector3FromAngle(float degrees, float magnitude);
		internal static float Angle2D(Vector3 from, Vector3 to);
		public static Vector2 GetPointOnCircle(Vector2 center, float radius, float degrees);
		internal static bool Vector3AreApproximatelyEqual(Vector3 a, Vector3 b);
		internal static System.Type GetLooseScriptType(string typeName);
	}
}
