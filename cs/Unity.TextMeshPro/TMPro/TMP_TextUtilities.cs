/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public static class TMP_TextUtilities
	{
		// Fields
		private static Vector3[] m_rectWorldCorners;
		private const string k_lookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";
		private const string k_lookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";
	
		// Nested types
		private struct LineSegment
		{
			// Fields
			public Vector3 Point1;
			public Vector3 Point2;
	
			// Constructors
			public LineSegment(Vector3 p1, Vector3 p2);
		}
	
		// Constructors
		static TMP_TextUtilities();
	
		// Methods
		public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera);
		public static int GetCursorIndexFromPosition(TMP_Text textComponent, Vector3 position, Camera camera, out CaretPosition cursor);
		public static int FindNearestLine(TMP_Text text, Vector3 position, Camera camera);
		public static int FindNearestCharacterOnLine(TMP_Text text, Vector3 position, int line, Camera camera, bool visibleOnly);
		public static bool IsIntersectingRectTransform(RectTransform rectTransform, Vector3 position, Camera camera);
		public static int FindIntersectingCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly);
		public static int FindNearestCharacter(TMP_Text text, Vector3 position, Camera camera, bool visibleOnly);
		public static int FindIntersectingWord(TMP_Text text, Vector3 position, Camera camera);
		public static int FindNearestWord(TMP_Text text, Vector3 position, Camera camera);
		public static int FindIntersectingLine(TMP_Text text, Vector3 position, Camera camera);
		public static int FindIntersectingLink(TMP_Text text, Vector3 position, Camera camera);
		public static int FindNearestLink(TMP_Text text, Vector3 position, Camera camera);
		private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d);
		public static bool ScreenPointToWorldPointInRectangle(Transform transform, Vector2 screenPoint, Camera cam, out Vector3 worldPoint);
		private static bool IntersectLinePlane(LineSegment line, Vector3 point, Vector3 normal, out Vector3 intersectingPoint);
		public static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point);
		public static char ToLowerFast(char c);
		public static char ToUpperFast(char c);
		internal static uint ToUpperASCIIFast(uint c);
		public static int GetHashCode(string s);
		public static int GetSimpleHashCode(string s);
		public static uint GetSimpleHashCodeLowercase(string s);
		public static uint GetHashCodeCaseInSensitive(string s);
		public static int HexToInt(char hex);
		public static int StringHexToInt(string s);
	}
}
