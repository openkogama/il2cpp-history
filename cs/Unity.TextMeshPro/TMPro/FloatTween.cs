/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	internal struct FloatTween : ITweenValue
	{
		// Fields
		private FloatTweenCallback m_Target;
		private float m_StartValue;
		private float m_TargetValue;
		private float m_Duration;
		private bool m_IgnoreTimeScale;
	
		// Properties
		public float startValue { get; set; }
		public float targetValue { get; set; }
		public float duration { get; set; }
		public bool ignoreTimeScale { get; set; }
	
		// Nested types
		public class FloatTweenCallback : UnityEvent<float>
		{
			// Constructors
			public FloatTweenCallback();
		}
	
		// Methods
		public void TweenValue(float floatPercentage);
		public void AddOnChangedCallback(UnityAction<float> callback);
		public bool GetIgnoreTimescale();
		public float GetDuration();
		public bool ValidTarget();
	}
}
