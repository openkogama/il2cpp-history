/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GUILoginHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private KoGaMaSettingsContainer kogamaSettings;
	[SerializeField]
	private Dropdown serverDropdown;
	[SerializeField]
	private InputField serverIp;
	[SerializeField]
	private InputField profileIdTextField;
	[SerializeField]
	private InputField planetIdTextField;
	[SerializeField]
	private Toggle disableCacheToggle;
	[SerializeField]
	private Dropdown planetDropdown;
	[SerializeField]
	private Dropdown profileDropdown;
	[SerializeField]
	private Button buildButton;
	[SerializeField]
	private Button avatarEditButton;
	private string _profileId;
	private string _serverip;
	private string _planetId;
	private Dictionary<string, PlanetData> defaultPlanetData;
	private Dictionary<string, object> gameSessionData;
	private string playerPrefKey;

	// Nested types
	private struct PlanetData
	{
		// Fields
		public int planetID;
		public int profileID;

		// Constructors
		public PlanetData(int planet, int profile);
	}

	private enum DevServerTarget
	{
		Dev = 0,
		Test = 1,
		Local = 2
	}

	// Constructors
	public GUILoginHandler();

	// Methods
	private static string GetIPFromDevServerTarget(DevServerTarget devTarget);
	protected void Awake();
	private void Start();
	private void SetupServerDropdown(int savedChoice);
	public void OnProfileDropdownChanged();
	public void OnPlanetDropdownChanged();
	private void SetupPlanetID();
	private void SetupProfileID();
	private void Update();
	public void ComboboxChanged(int index);
	public void UIDropdownChanged(int index);
	public void EnterPlayOnClick();
	public void EnterEditOnClick();
	public void EnterCharacterEditOnClick();
	public void Embedded(bool isEmbedded);
	public void Caching();
	private void StartGame(MVGameMode gameMode);
	private void SetValuesToPrefOrDefault();
	private void UpdatePrefValuesIfChanged();
	private string GetPrefOrDefault(string prefName, string target);
	private string UpdateIfChanged(string prefName, string current, string target);
	[CompilerGenerated]
	private void _SetupPlanetID_m__0(string value);
	[CompilerGenerated]
	private void _SetupProfileID_m__1(string value);
}

