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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeColorPickerRGB : ColorAttribute.Setter, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text label;
	[SerializeField]
	protected SettingsSlider sliderR;
	[SerializeField]
	protected SettingsSlider sliderG;
	[SerializeField]
	protected SettingsSlider sliderB;
	[SerializeField]
	protected RawImage previewImage;
	protected Action<Color> onChange;
	[CompilerGenerated]
	private static Action<Color> __f__am_cache0;

	// Constructors
	public ThemeColorPickerRGB();

	// Methods
	protected virtual void Reset();
	public override void Initialize(ColorAttribute attrib, Action<Color> onChange);
	public virtual void OnSettingChanged(string key, object value);
	protected void ChangeColor(Color c);
	[CompilerGenerated]
	private static void _Initialize_m__0(Color c);
}

