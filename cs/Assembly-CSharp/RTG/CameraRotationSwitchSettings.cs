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
	public class CameraRotationSwitchSettings : Settings
	{
		// Fields
		private static readonly float _minConstantDuration;
		[SerializeField]
		private CameraRotationSwitchMode _switchMode;
		[SerializeField]
		private CameraRotationSwitchType _switchType;
		[SerializeField]
		private float _constantSwitchDurationInSeconds;
		[SerializeField]
		private float _smoothValue;
	
		// Properties
		public CameraRotationSwitchMode SwitchMode { get; set; }
		public CameraRotationSwitchType SwitchType { get; set; }
		public float ConstantSwitchDurationInSeconds { get; set; }
		public float SmoothValue { get; set; }
	
		// Constructors
		public CameraRotationSwitchSettings();
		static CameraRotationSwitchSettings();
	}
}
