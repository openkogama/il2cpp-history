/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SoundEmitterSettings : MonoBehaviour, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	private SettingsBase settingsBase;
	[SerializeField]
	private SettingsSlider volumeSlider;
	[SerializeField]
	private SettingsSlider pitchSlider;
	[SerializeField]
	private SettingsSlider rangeSlider;
	private Keys keys;

	// Nested types
	private class Keys
	{
		// Fields
		private readonly string[] keys;

		// Properties
		public string this[Key key] { get => default; }

		// Nested types
		public enum Key
		{
			volume = 0,
			pitch = 1,
			range = 2
		}

		// Constructors
		public Keys();
	}

	// Constructors
	public SoundEmitterSettings();

	// Methods
	public void Initialize(int woID, GameObject root);
	public void OnSettingChanged(string key, object value);
	public void OnSettingChanged(string key, int value);
	public void OnSettingChanged(string key, float value);
}

