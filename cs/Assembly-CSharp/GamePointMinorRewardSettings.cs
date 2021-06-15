/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePointMinorRewardSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider gamePointsAwardedSlider;
	[SerializeField]
	private SettingsInputFieldSlider gamePointsAwardedInputField;
	private int woID;
	private const string gamePointAwardedString = "gamePointAmount";

	// Constructors
	public GamePointMinorRewardSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
	private void UpdateData();
	private void OnDestroy();
}

