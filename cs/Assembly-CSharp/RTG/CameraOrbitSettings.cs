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
	public class CameraOrbitSettings : Settings
	{
		// Fields
		[SerializeField]
		private CameraOrbitMode _orbitMode;
		[SerializeField]
		private float _standardOrbitSensitivity;
		[SerializeField]
		private float _smoothOrbitSensitivity;
		[SerializeField]
		private float _smoothValue;
		[SerializeField]
		private bool _invertX;
		[SerializeField]
		private bool _invertY;
		[SerializeField]
		private bool _isOrbitEnabled;
	
		// Properties
		public CameraOrbitMode OrbitMode { get; set; }
		public float StandardOrbitSensitivity { get; set; }
		public float SmoothOrbitSensitivity { get; set; }
		public float OrbitSensitivity { get; }
		public float SmoothValue { get; set; }
		public bool InvertX { get; set; }
		public bool InvertY { get; set; }
		public bool IsOrbitEnabled { get; set; }
	
		// Constructors
		public CameraOrbitSettings();
	}
}
