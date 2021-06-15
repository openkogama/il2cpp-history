/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListsLayout : MonoBehaviour
{
	// Fields
	private PlayerListsLayout playerListsPrefab;
	[SerializeField]
	private PlayerListBase playerListPrefab;
	[SerializeField]
	private GameObject topGrid;
	[SerializeField]
	private GameObject bottomGrid;
	private GameStatCounterType typeToDisplay;
	private UIPushOption pushOptions;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	private class ScoreSorter : IComparer<MVPlayer>
	{
		// Constructors
		public ScoreSorter();

		// Methods
		public int Compare(MVPlayer data1, MVPlayer data2);
		private int PlayerValue(MVPlayer data);
	}

	[CompilerGenerated]
	private sealed class _ReCreate_c__AnonStorey1
	{
		// Fields
		internal PlayerListsLayout newPlayerLists;
		internal PlayerListsLayout _this;

		// Constructors
		public _ReCreate_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CreatePlayerLists_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal List<MVTeam> teams;
		internal int _teamCount___0;
		internal bool _teamNone___0;
		internal Dictionary<MVTeam, PlayerListBase> _playerLists___0;
		internal IEnumerable<MVPlayer> players;
		internal Dictionary<MVTeam, List<MVPlayer>> _sortedTeamLists___0;
		internal Dictionary<MVTeam, List<MVPlayer>> _locvar0;
		internal PlayerListsLayout _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _CreatePlayerLists_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public PlayerListsLayout();

	// Methods
	public void Initialize(PlayerListsLayout playerListsPrefab, GameStatCounterType typeToDisplay, UIPushOption pushOptions);
	private void Start();
	private void OnDestroy();
	private void ReCreate();
	[DebuggerHidden]
	private IEnumerator CreatePlayerLists(IEnumerable<MVPlayer> players, List<MVTeam> teams);
	private PlayerListBase CreatePlayerList(MVTeam team, int score);
	private Dictionary<MVTeam, List<MVPlayer>> GetSortedTeamLists(IEnumerable<MVPlayer> players, List<MVTeam> teams);
	private void SortPlayerListsAfterScore(Dictionary<MVTeam, PlayerListBase> playerLists, List<MVTeam> teams, GameStatCounterType typeToDisplay);
	[CompilerGenerated]
	private static void _ReCreate_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ReCreate_m__1(IUIStack x, BaseEventData y);
}

