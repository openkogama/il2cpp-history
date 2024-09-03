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
	public class CameraLookAroundSettings : Settings
	{
		// Fields
		[SerializeField]
		private CameraLookAroundMode _lookAroundMode;
		[SerializeField]
		private float _standardLookAroundSensitivity;
		[SerializeField]
		private float _smoothLookAroundSensitivity;
		[SerializeField]
		private float smoothValue;
		[SerializeField]
		private bool _invertX;
		[SerializeField]
		private bool _invertY;
		[SerializeField]
		private bool _isLookAroundEnabled;
	
		// Properties
		public CameraLookAroundMode LookAroundMode { get; set; }
		public float StandardLookAroundSensitivity { get; set; }
		public float SmoothLookAroundSensitivity { get; set; }
		public float Sensitivity { get; }
		public float SmoothValue { get; set; }
		public bool InvertX { get; set; }
		public bool InvertY { get; set; }
		public bool IsLookAroundEnabled { get; set; }
	
		// Constructors
		public CameraLookAroundSettings();
	}
}
