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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GUILoginHandler : MonoBehaviour
{
	// Fields
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
	private Toggle embeddedToggle;
	[SerializeField]
	private Toggle touchToggle;
	[SerializeField]
	private Dropdown planetDropdown;
	[SerializeField]
	private Dropdown profileDropdown;
	[SerializeField]
	private Dropdown embeddedSiteDropdown;
	[SerializeField]
	private UnityEngine.UI.Button buildButton;
	[SerializeField]
	private UnityEngine.UI.Button avatarEditButton;
	private string profileId;
	private string serverip;
	private string planetId;
	private string embeddedSite;
	private string playerPrefKey;
	private readonly Dictionary<string, PlanetData> defaultPlanetData;
	private readonly Dictionary<string, object> gameSessionData;

	// Nested types
	private struct PlanetData
	{
		// Fields
		public readonly int planetID;
		public readonly int profileID;

		// Constructors
		public PlanetData(int planet, int profile);
	}

	public enum DevServerTarget
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
	public void Embedded(bool isEmbedded);
	public void OnEmbeddedSiteDropdownChanged();
	private void SetupPlanetID();
	private void SetupProfileID();
	private void Update();
	public void ComboboxChanged(int index);
	public void UIDropdownChanged(int index);
	public void EnterPlayOnClick();
	public void EnterSpacesPlayOnClick();
	public void EnterEditOnClick();
	public void EnterSpacesEditOnClick();
	public void EnterCharacterEditOnClick();
	public void Caching();
	public void TouchMode();
	private void StartGame(MVGameMode gameMode);
	private void SetValuesToPrefOrDefault();
	private void UpdatePrefValuesIfChanged();
	private string GetPrefOrDefault(string prefName, string target);
	private string UpdateIfChanged(string prefName, string current, string target);
	[CompilerGenerated]
	private void _SetupPlanetID_b__29_0(string value);
	[CompilerGenerated]
	private void _SetupProfileID_b__30_0(string value);
}

