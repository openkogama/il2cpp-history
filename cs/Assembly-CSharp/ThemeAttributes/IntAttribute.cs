/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeSettings;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace ThemeAttributes
{
	[Serializable]
	public class IntAttribute : NamedThemeAttribute<int>
	{
		// Fields
		[SerializeField]
		private int min;
		[SerializeField]
		private int max;
		[Header("Dependencies")]
		[SerializeField]
		private Setter prefab;
	
		// Properties
		public override object Data { get; }
		public int Min { get; }
		public int Max { get; }
	
		// Nested types
		public abstract class Setter : MonoBehaviour
		{
			// Constructors
			protected Setter();
	
			// Methods
			public abstract void Initialize(IntAttribute attrib, Action<int> onChange);
		}
	
		// Constructors
		public IntAttribute();
	
		// Methods
		public override void Initialize(SettingsWrapper settings, string key, int groups, Action<int> onChange);
		private int Constrain(int value);
		protected override void OnSettingsChanged(int value);
		public override RectTransform GetSettingsUIObject();
	}
}
