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
	public abstract class ThemeAttribute
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Key_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int _Groups_k__BackingField;
		private SettingsWrapper themeSettings;
		protected const string valueOutOfBoundsMsg = "Theme attribute is out of expected range.";
	
		// Properties
		public string Key { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int Groups { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public abstract object Data { get; }
	
		// Constructors
		protected ThemeAttribute();
	
		// Methods
		public abstract RectTransform GetSettingsUIObject();
		public abstract void ApplyValue();
		protected virtual void Initialize(SettingsWrapper settings, string key, int groups);
		protected void UpdateSettings(string key, object value);
	}
}
