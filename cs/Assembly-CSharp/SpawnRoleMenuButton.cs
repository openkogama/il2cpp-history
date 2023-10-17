/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleMenuButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private SpawnRoleMenu spawnRoleMenuPrefab;
	[SerializeField]
	private GameObject buttonObject;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public SpawnRoleMenu newSpawnRoleMenu;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _ShowSpawnRoleMenu_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__6_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ShowSpawnRoleMenu_b__6_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public SpawnRoleMenuButton();

	// Methods
	private void Start();
	private void OnDestroy();
	private void AvatarStateChanged(SpawnRoleModeType state);
	private void SetButtonIsActive();
	public void ShowSpawnRoleMenu();
}

