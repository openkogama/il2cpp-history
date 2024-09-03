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
	public class CameraFocusSettings : Settings
	{
		// Fields
		[SerializeField]
		private CameraFocusMode _focusMode;
		[SerializeField]
		private float _constantSpeed;
		[SerializeField]
		private float _smoothTime;
		[SerializeField]
		private float _focusDistanceAdd;
	
		// Properties
		public CameraFocusMode FocusMode { get; set; }
		public float ConstantSpeed { get; set; }
		public float SmoothTime { get; set; }
		public float FocusDistanceAdd { get; set; }
	
		// Constructors
		public CameraFocusSettings();
	}
}
