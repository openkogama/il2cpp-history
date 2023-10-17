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

[RequireComponent(typeof(Button))]
public class SettingsButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Button button;
	private string key;
	private int value;

	// Constructors
	public SettingsButton();

	// Methods
	public void Initialize(string key, int value);
	private void ValueChanged();
	[CompilerGenerated]
	private void _ValueChanged_b__4_0(IHandleSettingChanged handler, BaseEventData data);
}

