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

public class KillLimitSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider killLimitSlider;
	[SerializeField]
	private SettingsInputFieldSlider killLimitInputField;
	[SerializeField]
	private UnityEngine.UI.Text killLimitHeader;

	// Constructors
	public KillLimitSettings();

	// Methods
	public void Initialize(int woID, GameObject root, string header);
	public void OnSettingChanged(string key, object value);
}

