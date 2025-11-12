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

[RequireComponent(typeof(UnityEngine.UI.Button))]
public class ShortcutHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private KogamaControls kogamaControl;
	[SerializeField]
	private KeyState keyState;
	[SerializeField]
	private UnityEngine.UI.Button button;

	// Properties
	public KogamaControls KogamaControl { get; }

	// Constructors
	public ShortcutHandler();

	// Methods
	private void Start();
	private void Reset();
	private void Callback();
	private void OnDestroy();
	public void RegisterShortcutKey();
	public void UnRegisterShortcutKey();
	[CompilerGenerated]
	private void _RegisterShortcutKey_b__9_0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _UnRegisterShortcutKey_b__10_0(IShortcutKeyUnRegister x, BaseEventData y);
}

