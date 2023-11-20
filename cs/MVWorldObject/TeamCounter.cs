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

public class TeamCounter
{
	// Fields
	private Dictionary<int, ActorCounter> actorCounters;
	private int teamCount;

	// Properties
	public int TeamCount { get; }
	public Dictionary<int, ActorCounter> ActorCounters { get; }
	public HighScore HighScore { get; }

	// Constructors
	public TeamCounter();
	public TeamCounter(BytePacker bp);

	// Methods
	public int GetActorCount(int actorNumber);
	public int Increment(int actorNumber, int value, bool includeTeamScore);
	public int Update(int actorNumber, int value, bool includeTeamScore);
	public int UpdateTeam(int value);
	public void RemoveStatsFromActor(int actorNumber);
	public override string ToString();
}

