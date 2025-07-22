/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[ExecuteInEditMode]
public class SafeAreaPadding : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float cutoutAreaThreshold;
	[SerializeField]
	private RectTransform canvasRect;

	// Nested types
	private struct MinMaxArea
	{
		// Fields
		public Vector2 min;
		public Vector2 max;
		public float area;
	}

	// Constructors
	public SafeAreaPadding();

	// Methods
	private void Start();
	private ValueTuple<Vector2, Vector2> CalculateMinMaxSafeAreas();
	private MinMaxArea CalculateMinMaxWithLargestArea(Vector2 min, Vector2 max, MinMaxArea bestSetup);
}

