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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamMenu : LobbyFlowMenu
{
	// Fields
	[SerializeField]
	private VerticalLayoutGroup teamLayoutGroup;
	[SerializeField]
	private TeamSelectButton teamPrefab;
	[SerializeField]
	private GameObject backButton;
	[CompilerGenerated]
	private static Func<TeamData, int> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Properties
	protected override LobbyFlowMenuType MenuType { get; }

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
	[CompilerGenerated]
	private static int _Start_m__0(TeamData teamData);
	[CompilerGenerated]
	private static new void _StartPlaying_m__1(IUIStack x, BaseEventData y);
}

