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
	public abstract class ThemeAttribute<T> : ThemeAttribute
	{
		// Fields
		[Header]
		[SerializeField]
		protected T value;
		protected Action<T> themeCallback;
	
		// Properties
		public T Value { get; }
	
		// Constructors
		protected ThemeAttribute();
	
		// Methods
		public virtual void Initialize(SettingsWrapper settings, string key, int groups, Action<T> onChange);
		protected abstract void OnSettingsChanged(T arg);
		public override void ApplyValue();
	}
}
