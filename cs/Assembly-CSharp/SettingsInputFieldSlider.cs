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

[RequireComponent]
public class SettingsInputFieldSlider : MonoBehaviour
{
	// Fields
	[SerializeField]
	private InputField inputField;
	[SerializeField]
	private SettingsSlider settingsSlider;
	[SerializeField]
	private bool round;
	private string key;

	// Properties
	public InputField InputField { get; }
	public Slider Slider { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _ValueChanged_c__AnonStorey0
	{
		// Fields
		internal float floatValue;
		internal SettingsInputFieldSlider _this;

		// Constructors
		public _ValueChanged_c__AnonStorey0();

		// Methods
		internal void __m__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsInputFieldSlider();

	// Methods
	public void SetText(string text);
	public void Initialize(string key, float value);
	public void Initialize(string key, int value);
	private void Update();
	public void SliderValueChanged();
	public void InputFieldValueChanged();
	private void ValueChanged(string value);
	private void Reset();
	private float GetInputFieldValue(float value);
}

