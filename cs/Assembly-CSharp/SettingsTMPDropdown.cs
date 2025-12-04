/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(TMP_Dropdown))]
public class SettingsTMPDropdown : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TMP_Dropdown dropdown;
	private string key;
	private List<int> possibleWOData;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public SettingsTMPDropdown __4__this;
		public int value;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _ValueChanged_b__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsTMPDropdown();

	// Methods
	public void Initialize(string key, int value, string[] options, List<int> possibleWOData);
	private void ValueChanged(int value);
	private void Reset();
}

