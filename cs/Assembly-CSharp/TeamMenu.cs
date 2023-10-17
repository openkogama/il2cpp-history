/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamMenu : LobbyFlowMenu
{
	// Fields
	[SerializeField]
	private VerticalLayoutGroup teamLayoutGroup;
	[SerializeField]
	private TeamSelectButton teamPrefab;
	[SerializeField]
	private GameObject backButton;

	// Properties
	protected override LobbyFlowMenuType MenuType { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<TeamData, int> __9__5_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__11_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _Start_b__5_0(TeamData teamData);
		internal void _StartPlaying_b__11_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TeamMenu();

	// Methods
	public override void Start();
	public void UpdateBackButtonVisibility();
	private void Update();
	private void OnTeamSelected(MVTeam selectedTeam);
	protected override bool CanShowSpawnRoleSelect();
	private bool CanSpawnAsSelectedClass();
	protected override void StartPlaying();
}

