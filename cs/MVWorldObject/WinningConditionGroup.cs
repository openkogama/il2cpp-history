/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class WinningConditionGroup : WinningCondition
{
	// Fields
	protected Dictionary<int, IWinningCondition> winnerConditions;

	// Properties
	public int Length { get; }
	public override bool IsSingleton { get; }

	// Constructors
	protected WinningConditionGroup(WinningCondition parent, int id, GameStatCounterManager gameCounterManager, int limit, bool isBriefingNode, GameStatCounterType gameStatCounterType, WinningConditionPresentStyle winningConditionPresentStyle);

	// Methods
	public void AddWinnerCondition(WinningCondition winnerCondition);
	public void RemoveWinnerCondition(int id);
	public override bool Traverse(Func<IWinningCondition, bool> callBack);
	protected abstract void winnerCondition_OnWinningConditionChanged(object sender, EventArgs e);
}

