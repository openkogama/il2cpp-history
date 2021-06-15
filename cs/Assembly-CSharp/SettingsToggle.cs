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
public class SettingsToggle : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Toggle toggle;
	private string key;

	// Nested types
	[CompilerGenerated]
	private sealed class _ValueChanged_c__AnonStorey0
	{
		// Fields
		internal bool value;
		internal SettingsToggle _this;

		// Constructors
		public _ValueChanged_c__AnonStorey0();

		// Methods
		internal void __m__0(IHandleSettingChanged handler, BaseEventData data);
	}

	// Constructors
	public SettingsToggle();

	// Methods
	public void Initialize(string key, bool value);
	private void ValueChanged(bool value);
	public bool IsSet();
}

