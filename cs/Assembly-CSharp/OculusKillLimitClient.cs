/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class OculusKillLimitClient : OculusKillLimit, IWinningConditionBriefing
{
	// Constructors
	public OculusKillLimitClient(WinningCondition parent, int id, GameStatCounterManager gameCounterManager, int killLimit);

	// Methods
	public void GetBriefing(IBriefing winningConditionBriefingView);
	public void GetDebriefing(IDebriefing winningConditionDebriefingView);
}

