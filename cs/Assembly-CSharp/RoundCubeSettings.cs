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

public class RoundCubeSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider slider;
	[SerializeField]
	private InputField minutes;
	[SerializeField]
	private InputField seconds;

	// Constructors
	public RoundCubeSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
	public void SliderChanged();
	public void OnInputFieldChanged();
	private int GetMinutes(string value);
	private int GetMinutes(int value);
	private int GetSeconds(string value);
	private int GetSeconds(int value);
}

