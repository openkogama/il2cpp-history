/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListHoldHotkey : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PlayerListsLayout playerListsPrefab;
	private bool isActive;
	private bool registeredHotkeys;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public PlayerListsLayout newPlayerLists;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _CreatePlayerList_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__4_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__5_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__6_0;
		public static ExecuteEvents.EventFunction<IShortcutKeyUnRegister> __9__6_1;
		public static ExecuteEvents.EventFunction<IShortcutKeyUnRegister> __9__6_2;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _CreatePlayerList_b__4_0(IUIStack x, BaseEventData y);
		internal void _DestroyPlayerList_b__5_0(IUIStack x, BaseEventData y);
		internal void _OnDestroy_b__6_0(IUIStack x, BaseEventData y);
		internal void _OnDestroy_b__6_1(IShortcutKeyUnRegister x, BaseEventData y);
		internal void _OnDestroy_b__6_2(IShortcutKeyUnRegister x, BaseEventData y);
	}

	// Constructors
	public PlayerListHoldHotkey();

	// Methods
	private void Start();
	public void CreatePlayerList();
	public void DestroyPlayerList();
	private void OnDestroy();
	private void OnDisable();
	[CompilerGenerated]
	private void _Start_b__3_0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _Start_b__3_1(IShortcutKeyRegister x, BaseEventData y);
}

