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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public PlayerListsLayout newPlayerLists;
		public PlayerListsLayout __4__this;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _ReCreate_b__2(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ReCreate_b__9_0(IUIStack x, BaseEventData y);
		internal void _ReCreate_b__9_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CreatePlayerLists_d__10 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public List<MVTeam> teams;
		public PlayerListsLayout __4__this;
		public IEnumerable<MVPlayer> players;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _CreatePlayerLists_d__10(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public PlayerListsLayout();

	// Methods
	public void Initialize(PlayerListsLayout playerListsPrefab, GameStatCounterType typeToDisplay, UIPushOption pushOptions);
	private void Start();
	private void OnDestroy();
	private void ReCreate();
	[IteratorStateMachine(typeof(_CreatePlayerLists_d__10))]
	private IEnumerator CreatePlayerLists(IEnumerable<MVPlayer> players, List<MVTeam> teams);
	private PlayerListBase CreatePlayerList(MVTeam team, int score);
	private Dictionary<MVTeam, List<MVPlayer>> GetSortedTeamLists(IEnumerable<MVPlayer> players, List<MVTeam> teams);
	private void SortPlayerListsAfterScore(Dictionary<MVTeam, PlayerListBase> playerLists, List<MVTeam> teams, GameStatCounterType typeToDisplay);
}

