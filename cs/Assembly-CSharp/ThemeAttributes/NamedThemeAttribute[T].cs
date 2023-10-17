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
	public abstract class NamedThemeAttribute<T> : ThemeAttribute<T>
	{
		// Fields
		[SerializeField]
		private string name;
	
		// Properties
		public string Name { get; }
	
		// Constructors
		protected NamedThemeAttribute();
	
		// Methods
		public override void Initialize(SettingsWrapper settings, string key, int groups, Action<T> onChange);
		public void LanguageLoadedCallback();
		protected void OnValidate();
		private string Validate(string str);
	}
}
