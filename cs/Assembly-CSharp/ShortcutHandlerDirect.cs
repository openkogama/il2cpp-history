/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(ToggleStatHandlerBase))]
public class ShortcutHandlerDirect : MonoBehaviour
{
	// Fields
	[SerializeField]
	private KogamaControls kogamaControl;
	[SerializeField]
	private KeyState keyState;
	[SerializeField]
	private ToggleStatHandlerBase toggleStatHandlerBase;

	// Properties
	public KogamaControls KogamaControl { get; }

	// Constructors
	public ShortcutHandlerDirect();

	// Methods
	private void Start();
	private void Reset();
	protected virtual void Callback();
	private void OnDestroy();
	public void RegisterShortcutKey();
	public void UnRegisterShortcutKey();
	[CompilerGenerated]
	private void _RegisterShortcutKey_b__9_0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _UnRegisterShortcutKey_b__10_0(IShortcutKeyUnRegister x, BaseEventData y);
}

