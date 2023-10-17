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
	public class BoolAttribute : NamedThemeAttribute<bool>
	{
		// Fields
		[Header("Dependencies")]
		[SerializeField]
		private Setter togglePrefab;
	
		// Properties
		public override object Data { get; }
	
		// Nested types
		public abstract class Setter : MonoBehaviour
		{
			// Constructors
			protected Setter();
	
			// Methods
			public abstract void Initialize(BoolAttribute attrib, Action<bool> onChange);
		}
	
		// Constructors
		public BoolAttribute();
	
		// Methods
		public override void Initialize(SettingsWrapper settings, string key, int groups, Action<bool> onChange);
		protected override void OnSettingsChanged(bool value);
		public override RectTransform GetSettingsUIObject();
	}
}
