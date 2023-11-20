/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class HighScores
{
	// Fields
	private bool byAscending;
	public readonly Dictionary<MVTeam, HighScore> highScores;
	public readonly GameStatCounterType gameStatCounterType;
	public readonly bool presentAsTeamScore;
	public readonly WinningConditionPresentStyle winningConditionPresentStyle;
	[CompilerGenerated]
	private static Func<ScoreTeamEntry, int> CS___9__CachedAnonymousMethodDelegate2;
	[CompilerGenerated]
	private static Func<ScoreTeamEntry, int> CS___9__CachedAnonymousMethodDelegate3;
	[CompilerGenerated]
	private static Func<ScoreActorEntry, int> CS___9__CachedAnonymousMethodDelegate6;
	[CompilerGenerated]
	private static Func<ScoreActorEntry, int> CS___9__CachedAnonymousMethodDelegate7;

	// Constructors
	public HighScores(GameStatCounterType gameStatCounterType, Dictionary<MVTeam, TeamCounter> teamCounters, bool presentAsTeamScore, WinningConditionPresentStyle winningConditionPresentStyle, bool byAscending);

	// Methods
	public List<ScoreTeamEntry> GenerateTeamScores();
	public List<ScoreActorEntry> GenerateActorScores();
	public override string ToString();
	[CompilerGenerated]
	private static int _GenerateTeamScores_b__0(ScoreTeamEntry x);
	[CompilerGenerated]
	private static int _GenerateTeamScores_b__1(ScoreTeamEntry x);
	[CompilerGenerated]
	private static int _GenerateActorScores_b__4(ScoreActorEntry x);
	[CompilerGenerated]
	private static int _GenerateActorScores_b__5(ScoreActorEntry x);
}

