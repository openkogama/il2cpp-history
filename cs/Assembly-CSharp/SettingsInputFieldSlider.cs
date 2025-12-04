/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(InputField))]
public class SettingsInputFieldSlider : MonoBehaviour
{
	// Fields
	[SerializeField]
	private InputField inputField;
	[SerializeField]
	private SettingsSlider settingsSlider;
	[SerializeField]
	private bool round;
	[SerializeField]
	private string suffix;
	private string key;

	// Properties
	public InputField InputField { get; }
	public Slider Slider { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public SettingsInputFieldSlider __4__this;
		public float floatValue;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal void _ValueChanged_b__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsInputFieldSlider();

	// Methods
	public void SetText(string text);
	public void Initialize(string key, Dictionary<object, object> itemData, Func<string, ValueTuple<float, float>> minMaxFunc, float conversionValue = 1f);
	public void Initialize(string key, Dictionary<object, object> itemData, float min, float max, float conversionValue = 1f);
	public void Initialize(string key, float value);
	public void Initialize(string key, int value);
	private void Update();
	public void SliderValueChanged();
	private static string ConvertFloatToString(float inputFieldValue);
	public void InputFieldValueChanged();
	private float ConvertStringToFloat(string inputFieldText);
	private void ValueChanged(string value);
	private void Reset();
	private float GetInputFieldValue(float value);
}

