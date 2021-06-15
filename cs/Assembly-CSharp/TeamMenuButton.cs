/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamMenuButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TeamMenu teamMenuPrefab;
	[SerializeField]
	private GameObject buttonEnabler;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowTeamMenu_c__AnonStorey0
	{
		// Fields
		internal TeamMenu newTeamMenu;

		// Constructors
		public _ShowTeamMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TeamMenuButton();

	// Methods
	private void Start();
	private void AvatarStateChanged(SpawnRoleModeType state);
	private void TeamChanged(object sender, TeamEventArgs eventArgs);
	private void SetButtonIsActive();
	public void ShowTeamMenu();
	[CompilerGenerated]
	private static void _ShowTeamMenu_m__0(IUIStack handler, BaseEventData data);
}

