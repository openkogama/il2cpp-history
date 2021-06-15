/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerListHold : PlayerListBase
{
	// Fields
	private int score;
	private int playerCount;
	private MVTeam team;
	private GameStatCounterType typeToDisplay;
	private List<PlayerElementHoldData> playerElementList;
	[SerializeField]
	private RectTransform contentPanel;
	[SerializeField]
	private PlayerElementHold playerElementPrefab;
	[SerializeField]
	private TeamTab teamTab;
	[SerializeField]
	private List<ScoreIconDef> winningConditionIcons;

	// Properties
	public override MVTeam Team { get; }
	public override int PlayerCount { get; }
	public override int Score { get; }

	// Nested types
	private struct PlayerElementHoldData
	{
		// Fields
		public int score;
		public PlayerElementHold playerElement;
	}

	[Serializable]
	private class ScoreIconDef
	{
		// Fields
		public GameStatCounterType scoreType;
		public GameObject icon;

		// Constructors
		public ScoreIconDef();
	}

	// Constructors
	public PlayerListHold();

	// Methods
	public override void Initialize(MVTeam team, int score, GameStatCounterType typeToDisplay);
	public override void Add(MVPlayer player);
	private PlayerElementHoldData CreatePlayerElementHoldData(int score, PlayerElementHold playerElementHold);
	private void SortAfterScore(PlayerElementHoldData playerElementHoldData);
}

