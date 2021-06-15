/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RotatorSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider slider;
	[SerializeField]
	private SettingsInputFieldSlider inputField;
	private Dictionary<object, object> blueprintData;
	private int woID;

	// Constructors
	public RotatorSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
}

