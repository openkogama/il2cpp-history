/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListToggle : MonoBehaviour
{
	// Fields
	private bool showPlayerWindowPressed;
	private bool showingPlayerWindow;
	[SerializeField]
	private PlayerListsHold playerListsPrefab;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public PlayerListsHold newPlayerLists;
		public PlayerListToggle __4__this;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal void _CreatePlayerList_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__5_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__7_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _CreatePlayerList_b__5_0(IUIStack x, BaseEventData y);
		internal void _LateUpdate_b__7_0(IUIStack x, BaseEventData y);
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
	private void _Start_b__3_0(IShortcutKeyRegister x, BaseEventData y);
}

