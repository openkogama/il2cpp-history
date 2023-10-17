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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamMenuButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TeamMenu teamMenuPrefab;
	[SerializeField]
	private GameObject buttonEnabler;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public TeamMenu newTeamMenu;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _ShowTeamMenu_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__7_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ShowTeamMenu_b__7_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public TeamMenuButton();

	// Methods
	private void Start();
	private void OnDestroy();
	private void AvatarStateChanged(SpawnRoleModeType state);
	private void TeamChanged(object sender, TeamEventArgs eventArgs);
	private void SetButtonIsActive();
	public void ShowTeamMenu();
}

