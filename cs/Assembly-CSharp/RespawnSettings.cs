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

public class RespawnSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider respawnTimeSlider;
	[SerializeField]
	private SettingsInputFieldSlider respawnTimeInputField;
	[SerializeField]
	private GameObject respawnTimeSettingsUI;
	[SerializeField]
	private GameObject respawnActiveCheckmark;
	[SerializeField]
	private Toggle activeToggle;
	private int woID;
	private bool isInitialized;
	private bool isRespawnActive;
	private const string respawnString = "respawnTime";
	private const int respawnMaxTime = 1800;
	private const int respawnMinTime = 30;

	// Constructors
	public RespawnSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
	public void HandleActiveToggle();
	private void AddRespawnTime();
	private void RemoveRespawnTime();
	private void SetRespawnUIVisibility(bool isRespawnActive);
}

