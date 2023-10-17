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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerLists : MonoBehaviour
{
	// Fields
	private PlayerLists playerListsPrefab;
	[SerializeField]
	private PlayerList playerListPrefab;
	[SerializeField]
	private GridLayoutGroup gridGroup;
	[SerializeField]
	private Vector2 cellSize1Team;
	[SerializeField]
	private Vector2 cellSize2Teams;
	[SerializeField]
	private Vector2 cellSize4Teams;
	private GameStatCounterType typeToDisplay;

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
	private sealed class __c__DisplayClass10_0
	{
		// Fields
		public PlayerLists newPlayerLists;

		// Constructors
		public __c__DisplayClass10_0();

		// Methods
		internal void _ReCreate_b__2(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ReCreate_b__10_0(IUIStack x, BaseEventData y);
		internal void _ReCreate_b__10_1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PlayerLists();

	// Methods
	public void Initialize(PlayerLists playerListsPrefab, GameStatCounterType typeToDisplay);
	private void Start();
	private void OnDestroy();
	private void ReCreate();
	private void CreatePlayerLists(IEnumerable<MVPlayer> players, List<MVTeam> teams);
	private PlayerList CreatePlayerList(MVTeam team, int score);
	private void SortPlayerListsAfterScore(Dictionary<MVTeam, PlayerList> playerLists, List<MVTeam> teams, GameStatCounterType typeToDisplay);
	private Dictionary<MVTeam, List<MVPlayer>> GetSortedTeamLists(IEnumerable<MVPlayer> players, List<MVTeam> teams);
}

