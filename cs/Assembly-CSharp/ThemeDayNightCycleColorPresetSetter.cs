/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeAttributes;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeDayNightCycleColorPresetSetter : IntAttribute.Setter
{
	// Fields
	[SerializeField]
	private DayNightCycleColorPresets colorPresets;
	[SerializeField]
	private UnityEngine.UI.Text settingNameLabel;
	[SerializeField]
	private UnityEngine.UI.Text presetNameLabel;
	private Action<int> onChange;
	private int colorPresetIndex;

	// Constructors
	public ThemeDayNightCycleColorPresetSetter();

	// Methods
	public override void Initialize(IntAttribute attrib, Action<int> onChange);
	public void Decrement();
	public void Increment();
	private int Constrain(int value);
	public void OnSettingChanged();
}

