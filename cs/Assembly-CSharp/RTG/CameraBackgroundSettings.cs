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
	public class CameraBackgroundSettings : Settings
	{
		// Fields
		[SerializeField]
		private Color _firstColor;
		[SerializeField]
		private Color _secondColor;
		[SerializeField]
		private float _gradientOffset;
		[SerializeField]
		private bool _isVisible;
	
		// Properties
		public Color FirstColor { get; set; }
		public Color SecondColor { get; set; }
		public float GradientOffset { get; set; }
		public bool IsVisible { get; set; }
	
		// Constructors
		public CameraBackgroundSettings();
	}
}
