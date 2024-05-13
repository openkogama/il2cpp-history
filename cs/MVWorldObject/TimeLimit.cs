/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class TimeLimit : WinningCondition
{
	// Fields
	private GameStatCounterType counterType;

	// Properties
	public GameStatCounterType CounterType { get; set; }
	public override HighScores HighScores { get; }
	public override bool IsSingleton { get; }

	// Constructors
	public TimeLimit(WinningCondition parent, int id, GameStatCounterManager gameCounterManager);

	// Methods
	private HighScores GetHighScores();
	protected override void GameCountersQuery_OnCounterTypeChanged(object sender, OnCounterTypeChangedArgs e);
}

