/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerList : PlayerListBase
{
	// Fields
	private int score;
	private int playerCount;
	private MVTeam team;
	private GameStatCounterType typeToDisplay;
	private List<PlayerElementData> playerElementList;
	[SerializeField]
	private RectTransform contentPanel;
	[SerializeField]
	private PlayerElement playerElementPrefab;
	[SerializeField]
	private TeamTab teamTab;
	[SerializeField]
	private List<ScoreIconDef> winningConditionIcons;

	// Properties
	public override MVTeam Team { get; }
	public override int PlayerCount { get; }
	public override int Score { get; }

	// Nested types
	private struct PlayerElementData
	{
		// Fields
		public int score;
		public PlayerElement playerElement;
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
	public PlayerList();

	// Methods
	public override void Initialize(MVTeam team, int score, GameStatCounterType typeToDisplay);
	public override void Add(MVPlayer player);
	private PlayerElementData CreatePlayerElementHoldData(int score, PlayerElement playerElement);
	private void SortAfterScore(PlayerElementData playerElementData);
}

