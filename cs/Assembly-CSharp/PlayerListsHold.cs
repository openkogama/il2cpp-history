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
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListsHold : MonoBehaviour
{
	// Fields
	private PlayerListsHold playerListsPrefab;
	[SerializeField]
	private PlayerListHold playerListPrefab;
	[SerializeField]
	private GridLayoutGroup gridGroup;
	[SerializeField]
	private Vector2 cellSize1Team;
	[SerializeField]
	private Vector2 cellSize2Teams;
	[SerializeField]
	private Vector2 cellSize4Teams;
	private GameStatCounterType typeToDisplay;
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
	private sealed class _ReCreate_c__AnonStorey0
	{
		// Fields
		internal PlayerListsHold newPlayerLists;

		// Constructors
		public _ReCreate_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PlayerListsHold();

	// Methods
	public void Initialize(PlayerListsHold playerListsPrefab, GameStatCounterType typeToDisplay);
	private void Start();
	private void OnDestroy();
	private void ReCreate();
	private void CreatePlayerLists(IEnumerable<MVPlayer> players, List<MVTeam> teams);
	private PlayerListHold CreatePlayerList(MVTeam team, int score);
	private void SortPlayerListsAfterScore(Dictionary<MVTeam, PlayerListHold> playerLists, List<MVTeam> teams, GameStatCounterType typeToDisplay);
	private Dictionary<MVTeam, List<MVPlayer>> GetSortedTeamLists(IEnumerable<MVPlayer> players, List<MVTeam> teams);
	[CompilerGenerated]
	private static void _ReCreate_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ReCreate_m__1(IUIStack x, BaseEventData y);
}

