/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeAttributes;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeToggle : BoolAttribute.Setter, IHandleSettingChanged
{
	// Fields
	[SerializeField]
	protected UnityEngine.UI.Text label;
	[SerializeField]
	private SettingsToggle toggle;
	private Action<bool> onChange;

	// Constructors
	public ThemeToggle();

	// Methods
	public override void Initialize(BoolAttribute attrib, Action<bool> onChange);
	public void OnSettingChanged(string key, object value);
}

