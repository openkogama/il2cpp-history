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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class LobbyFlowMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected MaskMode cameraMaskMode;
	[SerializeField]
	protected ProfileSettingsMenu profileSettingsMenuPrefab;
	[SerializeField]
	protected TeamMenu teamMenuPrefab;
	[SerializeField]
	protected WinningConditionBriefing winningConditionBriefingMenuPrefab;
	[SerializeField]
	protected SpawnRoleMenu spawnRoleMenuPrefab;
	private bool haveSetSelectedTeam;
	protected MVTeam selectedTeam;
	private List<LobbyFlowMenuType> menuOrder;

	// Properties
	protected abstract LobbyFlowMenuType MenuType { get; }
	protected MVTeam SelectedTeam { set; }

	// Nested types
	protected enum LobbyFlowMenuType
	{
		LobbyState = 0,
		Briefing = 1,
		Settings = 2,
		TeamSelect = 3,
		SpawnRoleSelect = 4,
		None = 5
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__24_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__25_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _GoToMenu_b__24_0(IUIStack x, BaseEventData y);
		internal void _StartPlaying_b__25_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass24_0
	{
		// Fields
		public ProfileSettingsMenu newSettingsMenu;

		// Constructors
		public __c__DisplayClass24_0();

		// Methods
		internal void _GoToMenu_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass24_1
	{
		// Fields
		public TeamMenu newTeamMenu;

		// Constructors
		public __c__DisplayClass24_1();

		// Methods
		internal void _GoToMenu_b__2(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass24_2
	{
		// Fields
		public WinningConditionBriefing winConMenu;

		// Constructors
		public __c__DisplayClass24_2();

		// Methods
		internal void _GoToMenu_b__3(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass24_3
	{
		// Fields
		public SpawnRoleMenu spawnRoleMenu;

		// Constructors
		public __c__DisplayClass24_3();

		// Methods
		internal void _GoToMenu_b__4(IUIStack x, BaseEventData y);
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
	public virtual void GoToPreviousMenu();
	protected bool CanGoToNextMenu();
	protected LobbyFlowMenuType GetNextMenuType();
	protected LobbyFlowMenuType GetPreviousMenuType();
	protected void GoToMenu(LobbyFlowMenuType newMenuType);
	protected virtual void StartPlaying();
}

