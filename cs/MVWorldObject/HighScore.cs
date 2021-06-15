/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class HighScore
{
	// Fields
	public List<ScoreActorEntry> highScoreEntries;
	public readonly int teamScore;
	[CompilerGenerated]
	private static Func<ScoreActorEntry, int> CS___9__CachedAnonymousMethodDelegate3;

	// Constructors
	public HighScore(int teamScore, Dictionary<int, ActorCounter> actorCounters);

	// Methods
	public void SortDescending();
	public override string ToString();
	[CompilerGenerated]
	private static int _SortDescending_b__2(ScoreActorEntry x);
}

