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

[RequireComponent(typeof(Toggle))]
public class SettingsToggle : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Toggle toggle;
	private string key;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass3_0
	{
		// Fields
		public SettingsToggle __4__this;
		public bool value;

		// Constructors
		public __c__DisplayClass3_0();

		// Methods
		internal void _ValueChanged_b__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsToggle();

	// Methods
	public void Initialize(string key, bool value);
	private void ValueChanged(bool value);
	public bool IsSet();
}

