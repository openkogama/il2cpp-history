/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SmokeSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	private float[] color;
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider colorR;
	[SerializeField]
	private SettingsSlider colorG;
	[SerializeField]
	private SettingsSlider colorB;
	[SerializeField]
	private SettingsSlider alpha;
	[SerializeField]
	private SettingsSlider wind;
	[SerializeField]
	private SettingsSlider range;
	[SerializeField]
	private Image preview;

	// Constructors
	public SmokeSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
}

