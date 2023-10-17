/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PointLightSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	private float[] color;
	private int intType;
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider colorR;
	[SerializeField]
	private SettingsSlider colorG;
	[SerializeField]
	private SettingsSlider colorB;
	[SerializeField]
	private SettingsSlider range;
	[SerializeField]
	private SettingsSlider intensity;
	[SerializeField]
	private SettingsSlider HaloTextures;
	[SerializeField]
	private SettingsToggle hide;
	[SerializeField]
	private Image preview;

	// Constructors
	public PointLightSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
}

