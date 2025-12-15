/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	internal struct ColorTween : ITweenValue
	{
		// Fields
		private ColorTweenCallback m_Target;
		private Color m_StartColor;
		private Color m_TargetColor;
		private ColorTweenMode m_TweenMode;
		private float m_Duration;
		private bool m_IgnoreTimeScale;
	
		// Properties
		public Color startColor { get; set; }
		public Color targetColor { get; set; }
		public ColorTweenMode tweenMode { get; set; }
		public float duration { get; set; }
		public bool ignoreTimeScale { get; set; }
	
		// Nested types
		public enum ColorTweenMode
		{
			All = 0,
			RGB = 1,
			Alpha = 2
		}
	
		public class ColorTweenCallback : UnityEvent<Color>
		{
			// Constructors
			public ColorTweenCallback();
		}
	
		// Methods
		public void TweenValue(float floatPercentage);
		public void AddOnChangedCallback(UnityAction<Color> callback);
		public bool GetIgnoreTimescale();
		public float GetDuration();
		public bool ValidTarget();
	}
}
