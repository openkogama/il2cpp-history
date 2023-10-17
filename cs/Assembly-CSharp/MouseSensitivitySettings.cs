/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MouseSensitivitySettings : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Slider slider;
	[SerializeField]
	private InputField inputField;
	[SerializeField]
	private float interval;
	[SerializeField]
	private float mouseSensitivityMaxModifier;
	[SerializeField]
	private float mouseSensitivityMinModifier;
	private const float middleValue = 50f;
	private float mouseSensitivity;

	// Constructors
	public MouseSensitivitySettings();

	// Methods
	private void Start();
	public void SyncMouseSensitivity();
	public void SliderValueChanged();
	public void InputFieldValueChanged();
	private float CalculateMouseSensitivityValueFromValue(float value);
	private float CalculateSliderValueFromMouseSensitivityValue();
	private float RoundValue(float value);
}

