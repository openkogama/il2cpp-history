/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleMenuButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private SpawnRoleMenu spawnRoleMenuPrefab;
	[SerializeField]
	private GameObject buttonObject;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowSpawnRoleMenu_c__AnonStorey0
	{
		// Fields
		internal SpawnRoleMenu newSpawnRoleMenu;

		// Constructors
		public _ShowSpawnRoleMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleMenuButton();

	// Methods
	private void Start();
	private void OnDestroy();
	private void AvatarStateChanged(SpawnRoleModeType state);
	private void SetButtonIsActive();
	public void ShowSpawnRoleMenu();
	[CompilerGenerated]
	private static void _ShowSpawnRoleMenu_m__0(IUIStack handler, BaseEventData data);
}

