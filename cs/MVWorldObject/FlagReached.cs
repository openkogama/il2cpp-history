/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class FlagReached : WinningCondition
{
	// Properties
	public override bool IsSingleton { get; }

	// Constructors
	public FlagReached(WinningCondition parent, int id, GameStatCounterManager gameCounterManager);

	// Methods
	protected override void GameCountersQuery_OnCounterTypeChanged(object sender, OnCounterTypeChangedArgs e);
}

