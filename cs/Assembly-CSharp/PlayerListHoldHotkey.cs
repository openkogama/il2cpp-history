/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListHoldHotkey : MonoBehaviour
{
	// Fields
	[SerializeField]
	private PlayerListsLayout playerListsPrefab;
	private bool isActive;
	private bool registeredHotkeys;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IShortcutKeyUnRegister> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IShortcutKeyUnRegister> __f__am_cache4;

	// Nested types
	[CompilerGenerated]
	private sealed class _CreatePlayerList_c__AnonStorey0
	{
		// Fields
		internal PlayerListsLayout newPlayerLists;

		// Constructors
		public _CreatePlayerList_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	private void _Start_m__0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private void _Start_m__1(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private static void _CreatePlayerList_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _DestroyPlayerList_m__3(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnDestroy_m__4(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnDestroy_m__5(IShortcutKeyUnRegister x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnDestroy_m__6(IShortcutKeyUnRegister x, BaseEventData y);
}

