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
	public static class RectEx
	{
		// Methods
		public static Rect FromCenterAndSize(Vector2 center, Vector2 size);
		public static Rect FromPoints(IEnumerable<Vector2> points);
		public static Rect FromTexture2D(Texture2D texture2D);
	
		// Extension methods
		public static List<Vector2> GetCornerPoints(this Rect rect);
		public static Rect PlaceBelowCenterHrz(this Rect rect, Rect other);
		public static Rect InvertScreenY(this Rect rect);
		public static Rect Inflate(this Rect rect, float inflateAmount);
		public static bool ContainsAllPoints(this Rect rect, IEnumerable<Vector2> points);
	}
}
