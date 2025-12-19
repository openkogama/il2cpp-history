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
using MV.WorldObject;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Microsoft")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright \u00A9 Microsoft 2011")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: AssemblyProduct("MVWorldObject")]
[assembly: AssemblyTitle("MVWorldObject")]
[assembly: AssemblyTrademark("")]
[assembly: CompilationRelaxations(8)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: Guid("f4b63207-de1c-4bfa-acdb-fa237d94ed1b")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: TargetFramework(".NETFramework,Version=v4.8", FrameworkDisplayName = ".NET Framework 4.8")]

public class HighScores
{
	// Fields
	private bool byAscending;
	public readonly Dictionary<MVTeam, HighScore> highScores;
	public readonly GameStatCounterType gameStatCounterType;
	public readonly bool presentAsTeamScore;
	public readonly WinningConditionPresentStyle winningConditionPresentStyle;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<ScoreTeamEntry, int> __9__6_0;
		public static Func<ScoreTeamEntry, int> __9__6_1;
		public static Func<ScoreActorEntry, int> __9__7_0;
		public static Func<ScoreActorEntry, int> __9__7_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _GenerateTeamScores_b__6_0(ScoreTeamEntry x);
		internal int _GenerateTeamScores_b__6_1(ScoreTeamEntry x);
		internal int _GenerateActorScores_b__7_0(ScoreActorEntry x);
		internal int _GenerateActorScores_b__7_1(ScoreActorEntry x);
	}

	// Constructors
	public HighScores(GameStatCounterType gameStatCounterType, Dictionary<MVTeam, TeamCounter> teamCounters, bool presentAsTeamScore, WinningConditionPresentStyle winningConditionPresentStyle, bool byAscending);

	// Methods
	public List<ScoreTeamEntry> GenerateTeamScores();
	public List<ScoreActorEntry> GenerateActorScores();
	public override string ToString();
}

