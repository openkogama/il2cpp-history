/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeSettings;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace ThemeAttributes
{
	[Serializable]
	public class ColorAttribute : NamedThemeAttribute<Color>
	{
		// Fields
		[Header]
		[SerializeField]
		private Setter prefab;
	
		// Properties
		public override object Data { get; }
	
		// Nested types
		public abstract class Setter : MonoBehaviour
		{
			// Constructors
			protected Setter();
	
			// Methods
			public abstract void Initialize(ColorAttribute attrib, Action<Color> onChange);
		}
	
		private class ColorKeys
		{
			// Fields
			public const string r = "Red";
			public const string g = "Green";
			public const string b = "Blue";
			public const string a = "Alpha";
	
			// Constructors
			public ColorKeys();
		}
	
		// Constructors
		public ColorAttribute();
	
		// Methods
		public override void Initialize(SettingsWrapper settings, string key, int groups, Action<Color> onChange);
		private Dictionary<object, object> ToSerializable(Color c);
		private static Color ConvertToColor(Dictionary<object, object> value);
		private float Constrain(float value);
		private Color Constrain(Color value);
		protected override void OnSettingsChanged(Color value);
		public override RectTransform GetSettingsUIObject();
	}
}
