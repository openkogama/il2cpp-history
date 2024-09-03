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
	[Serializable]
	public class CameraZoomSettings : Settings
	{
		// Fields
		[SerializeField]
		private CameraZoomMode _zoomMode;
		[SerializeField]
		private float _orthoStandardZoomSensitivity;
		[SerializeField]
		private float _perspStandardZoomSensitivity;
		[SerializeField]
		private float _orthoSmoothZoomSensitivity;
		[SerializeField]
		private float _perspSmoothZoomSensitivity;
		[SerializeField]
		private float _orthoZoomSmoothValue;
		[SerializeField]
		private float _perspZoomSmoothValue;
		[SerializeField]
		private bool _invertZoomAxis;
		[SerializeField]
		private bool _isZoomEnabled;
	
		// Properties
		public CameraZoomMode ZoomMode { get; set; }
		public float OrthoStandardZoomSensitivity { get; set; }
		public float PerspStandardZoomSensitivity { get; set; }
		public float OrthoSmoothZoomSensitivity { get; set; }
		public float PerspSmoothZoomSensitivity { get; set; }
		public float OrthoZoomSmoothValue { get; set; }
		public float PerspZoomSmoothValue { get; set; }
		public bool InvertZoomAxis { get; set; }
		public bool IsZoomEnabled { get; set; }
	
		// Constructors
		public CameraZoomSettings();
	
		// Methods
		public float GetZoomSmoothValue(Camera camera);
		public float GetZoomSensitivity(Camera camera);
	}
}
