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
public class ShortcutHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private KogamaControls kogamaControl;
	[SerializeField]
	private KeyState keyState;
	[SerializeField]
	private Button button;

	// Constructors
	public ShortcutHandler();

	// Methods
	private void Start();
	private void Reset();
	private void Callback();
	private void OnDestroy();
	[CompilerGenerated]
	private void _Start_m__0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _OnDestroy_m__1(IShortcutKeyUnRegister x, BaseEventData y);
}

