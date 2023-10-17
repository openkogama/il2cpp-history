/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeAttributes;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeFloatSlider : FloatAttribute.Setter, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsSlider slider;
	[SerializeField]
	private UnityEngine.UI.Text label;
	private Action<float> onChange;
	private bool initialized;

	// Constructors
	public ThemeFloatSlider();

	// Methods
	public override void Initialize(FloatAttribute attrib, Action<float> onChange);
	public void OnSettingChanged(string key, object value);
}

