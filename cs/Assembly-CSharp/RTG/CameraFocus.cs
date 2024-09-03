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
	public static class CameraFocus
	{
		// Nested types
		public class Data
		{
			// Fields
			private Vector3 _cameraWorldPosition;
			private Vector3 _focusPoint;
			private float _focusPointOffset;
	
			// Properties
			public Vector3 CameraWorldPosition { get; }
			public Vector3 FocusPoint { get; }
			public float FocusPointOffset { get; }
	
			// Constructors
			public Data(Vector3 cameraWorldPosition, Vector3 focusPoint);
		}
	
		// Methods
		public static Data CalculateFocusData(Camera camera, AABB focusAABB, CameraFocusSettings focusSettings);
	}
}
