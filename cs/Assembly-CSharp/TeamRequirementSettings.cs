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

public class TeamRequirementSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsButton buttonTeamNone;
	[SerializeField]
	private SettingsButton buttonTeamBlue;
	[SerializeField]
	private SettingsButton buttonTeamRed;
	[SerializeField]
	private SettingsButton buttonTeamGreen;
	[SerializeField]
	private SettingsButton buttonTeamYellow;
	[SerializeField]
	private UnityEngine.UI.Text buttonTeamBlueName;
	[SerializeField]
	private UnityEngine.UI.Text buttonTeamRedName;
	[SerializeField]
	private UnityEngine.UI.Text buttonTeamGreenName;
	[SerializeField]
	private UnityEngine.UI.Text buttonTeamYellowName;
	[SerializeField]
	private Outline outlineTeamNone;
	[SerializeField]
	private Outline outlineTeamRed;
	[SerializeField]
	private Outline outlineTeamBlue;
	[SerializeField]
	private Outline outlineTeamGreen;
	[SerializeField]
	private Outline outlineTeamYellow;
	private Outline currentOutline;

	// Constructors
	public TeamRequirementSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
}

