/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeAttributes;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeColorPickerRGBA : ThemeColorPickerRGB, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsSlider sliderA;
	[CompilerGenerated]
	private static Action<Color> __f__am_cache0;

	// Constructors
	public ThemeColorPickerRGBA();

	// Methods
	protected override void Reset();
	public override void Initialize(ColorAttribute attrib, Action<Color> onChange);
	public override void OnSettingChanged(string key, object value);
	[CompilerGenerated]
	private static new void _Initialize_m__0(Color c);
}

