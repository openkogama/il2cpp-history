/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class HighScore
{
	// Fields
	public List<ScoreActorEntry> highScoreEntries;
	public readonly int teamScore;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<ScoreActorEntry, int> __9__4_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _SortDescending_b__4_0(ScoreActorEntry x);
	}

	// Constructors
	public HighScore(int teamScore, Dictionary<int, ActorCounter> actorCounters);

	// Methods
	public void SortDescending();
	public override string ToString();
}

