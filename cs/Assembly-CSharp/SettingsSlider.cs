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

[RequireComponent(typeof(Slider))]
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
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public SettingsSlider __4__this;
		public float value;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal void _ValueChanged_b__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsSlider();

	// Methods
	public void Initialize(string key, float value, float minValue, float maxValue);
	public void Initialize(string key, int value, int minValue, int maxValue);
	public void ValueChanged();
	private void Reset();
}

