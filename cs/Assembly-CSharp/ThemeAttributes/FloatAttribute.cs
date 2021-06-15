/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeSettings;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace ThemeAttributes
{
	[Serializable]
	public class FloatAttribute : NamedThemeAttribute<float>
	{
		// Fields
		[SerializeField]
		private float min;
		[SerializeField]
		private float max;
		[Header]
		[SerializeField]
		private Setter sliderPrefab;
	
		// Properties
		public override object Data { get; }
		public float Min { get; }
		public float Max { get; }
	
		// Nested types
		public abstract class Setter : MonoBehaviour
		{
			// Constructors
			protected Setter();
	
			// Methods
			public abstract void Initialize(FloatAttribute attrib, Action<float> onChange);
		}
	
		// Constructors
		public FloatAttribute();
	
		// Methods
		public override void Initialize(SettingsWrapper settings, string key, int groups, Action<float> onChange);
		public float Constrain(float value);
		protected override void OnSettingsChanged(float value);
		public override RectTransform GetSettingsUIObject();
	}
}
