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
	public class CameraPanSettings : Settings
	{
		// Fields
		[SerializeField]
		private CameraPanMode _panMode;
		[SerializeField]
		private float _standardPanSensitivity;
		[SerializeField]
		private float _smoothPanSensitivity;
		[SerializeField]
		private float _smoothValue;
		[SerializeField]
		private bool _invertX;
		[SerializeField]
		private bool _invertY;
		[SerializeField]
		private bool _isPanningEnabled;
	
		// Properties
		public CameraPanMode PanMode { get; set; }
		public float StandardPanSensitivity { get; set; }
		public float SmoothPanSensitivity { get; set; }
		public float Sensitivity { get; }
		public float SmoothValue { get; set; }
		public bool InvertX { get; set; }
		public bool InvertY { get; set; }
		public bool IsPanningEnabled { get; set; }
	
		// Constructors
		public CameraPanSettings();
	}
}
