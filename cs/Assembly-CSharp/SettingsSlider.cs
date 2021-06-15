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
public class SettingsSlider : MonoBehaviour
{
	// Fields
	public Slider slider;
	public float interval;
	[SerializeField]
	private bool round;
	private string key;

	// Properties
	public float Value { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _ValueChanged_c__AnonStorey0
	{
		// Fields
		internal float value;
		internal SettingsSlider _this;

		// Constructors
		public _ValueChanged_c__AnonStorey0();

		// Methods
		internal void __m__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsSlider();

	// Methods
	public void Initialize(string key, float value, float minValue, float maxValue);
	public void Initialize(string key, int value, int minValue, int maxValue);
	public void ValueChanged();
	private void Reset();
}

