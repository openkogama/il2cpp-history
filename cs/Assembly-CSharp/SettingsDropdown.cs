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

[RequireComponent(typeof(Dropdown))]
public class SettingsDropdown : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Dropdown dropdown;
	private string key;
	private List<int> possibleWOData;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public SettingsDropdown __4__this;
		public int value;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _ValueChanged_b__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsDropdown();

	// Methods
	public void Initialize(string key, int value, string[] options, List<int> possibleWOData);
	private void ValueChanged(int value);
	private void Reset();
}

