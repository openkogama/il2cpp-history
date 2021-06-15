/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListToggle : MonoBehaviour
{
	// Fields
	private bool showPlayerWindowPressed;
	private bool showingPlayerWindow;
	[SerializeField]
	private PlayerListsHold playerListsPrefab;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _CreatePlayerList_c__AnonStorey0
	{
		// Fields
		internal PlayerListsHold newPlayerLists;
		internal PlayerListToggle _this;

		// Constructors
		public _CreatePlayerList_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PlayerListToggle();

	// Methods
	private void Start();
	private void Callback();
	public void CreatePlayerList();
	private void OnPop();
	private void LateUpdate();
	[CompilerGenerated]
	private void _Start_m__0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private static void _CreatePlayerList_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _LateUpdate_m__2(IUIStack x, BaseEventData y);
}

