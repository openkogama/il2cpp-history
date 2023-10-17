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

[RequireComponent(typeof(InputField))]
public class SettingsInputField : MonoBehaviour
{
	// Fields
	public InputField inputField;
	private string key;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public SettingsInputField __4__this;
		public string value;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _ValueChanged_b__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsInputField();

	// Methods
	public void Initialize(string key, string value);
	private void Update();
	private void ValueChanged(string value);
	private void Reset();
}

