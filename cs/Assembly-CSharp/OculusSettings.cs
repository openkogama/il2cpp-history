/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class OculusSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider rangeSlider;
	[SerializeField]
	private SettingsSlider aggresionSlider;
	[SerializeField]
	private SettingsSlider numOfLivesSlider;
	[SerializeField]
	private SettingsInputFieldSlider numOfLivesInputSlider;
	private const int maxLives = 100;
	private MVWorldObjectClient target;

	// Nested types
	public static class Strings
	{
		// Fields
		public const string Radius = "Radius";
		public const string Speed = "Speed";
		public const string Lives = "Lives";
	}

	// Constructors
	public OculusSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
}

