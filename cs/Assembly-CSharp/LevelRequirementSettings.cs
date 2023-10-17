/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelRequirementSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	public const string DataKey = "levelAmount";
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider slider;
	[SerializeField]
	private SettingsInputFieldSlider inputField;

	// Constructors
	public LevelRequirementSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
}

