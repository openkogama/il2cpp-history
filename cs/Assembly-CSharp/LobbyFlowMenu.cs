/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class LobbyFlowMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected MaskMode cameraMaskMode;
	[SerializeField]
	protected TeamMenu teamMenuPrefab;
	[SerializeField]
	protected WinningConditionBriefing winningConditionBriefingMenuPrefab;
	[SerializeField]
	protected SpawnRoleMenu spawnRoleMenuPrefab;
	private bool haveSetSelectedTeam;
	protected MVTeam selectedTeam;
	private List<LobbyFlowMenuType> menuOrder;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Properties
	protected abstract LobbyFlowMenuType MenuType { get; }
	protected MVTeam SelectedTeam { set; }

	// Nested types
	protected enum LobbyFlowMenuType
	{
		LobbyState = 0,
		Briefing = 1,
		TeamSelect = 2,
		SpawnRoleSelect = 3,
		None = 4
	}

	[CompilerGenerated]
	private sealed class _GoToMenu_c__AnonStorey0
	{
		// Fields
		internal TeamMenu newTeamMenu;

		// Constructors
		public _GoToMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _GoToMenu_c__AnonStorey1
	{
		// Fields
		internal WinningConditionBriefing winConMenu;

		// Constructors
		public _GoToMenu_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _GoToMenu_c__AnonStorey2
	{
		// Fields
		internal SpawnRoleMenu spawnRoleMenu;

		// Constructors
		public _GoToMenu_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	protected LobbyFlowMenu();

	// Methods
	public virtual void Start();
	protected virtual void OnDestroy();
	protected void UpdateAvailableMenues();
	protected virtual bool CanShowTeamSelect();
	protected virtual bool CanShowBreifing();
	protected virtual bool CanShowSpawnRoleSelect();
	public void GoToNextMenu();
	public void GoToPreviousMenu();
	protected bool CanGoToNextMenu();
	protected LobbyFlowMenuType GetNextMenuType();
	protected LobbyFlowMenuType GetPreviousMenuType();
	protected void GoToMenu(LobbyFlowMenuType newMenuType);
	protected virtual void StartPlaying();
	[CompilerGenerated]
	private static void _GoToMenu_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _StartPlaying_m__1(IUIStack x, BaseEventData y);
}

