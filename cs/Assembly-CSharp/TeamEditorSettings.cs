/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamEditorSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsInputField blueTeam;
	[SerializeField]
	private SettingsInputField redTeam;
	[SerializeField]
	private SettingsInputField greenTeam;
	[SerializeField]
	private SettingsInputField yellowTeam;
	[SerializeField]
	private GameObject blueTeamButton;
	[SerializeField]
	private GameObject redTeamButton;
	[SerializeField]
	private GameObject greenTeamButton;
	[SerializeField]
	private GameObject yellowTeamButton;
	private int woID;
	private Dictionary<object, object> teamData;

	// Constructors
	public TeamEditorSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	private void InitInputfield(SettingsInputField inputField, GameObject button, MVTeam team);
	public void OnSettingChanged(string key, object value);
	private void SetActiveButtons(Dictionary<object, object> teamData);
}

