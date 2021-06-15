/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShortcutManager : MonoBehaviour, IShortcutKeyRegister, IShortcutKeyUnRegister
{
	// Fields
	private Dictionary<KogamaControls, Stack<ShortcutKey>> shortCutKeys;

	// Nested types
	private class ShortcutKey : IEquatable<ShortcutKey>
	{
		// Fields
		public readonly KogamaControls kogamaControl;
		public readonly KeyState keyState;
		public readonly UnityAction callback;

		// Constructors
		public ShortcutKey(KogamaControls kogamaControl, KeyState keyState, UnityAction callback);

		// Methods
		public bool Equals(ShortcutKey other);
	}

	// Constructors
	public ShortcutManager();

	// Methods
	public void RegisterShortcutKey(KogamaControls kogamaControl, KeyState keyState, UnityAction callback);
	public void UnRegisterShortcutKey(KogamaControls kogamaControl, KeyState keyState);
	private void Update();
}

