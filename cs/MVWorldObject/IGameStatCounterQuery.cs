/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IGameStatCounterQuery
{
	// Events
	event EventHandler<OnCounterTypeChangedArgs> OnCounterTypeChanged {
		add;
		remove;
	}

	// Methods
	int GetTeamCount(GameStatCounterType statType, MVTeam team);
	int GetActorCount(GameStatCounterType statType, MVTeam team, int actorNumber);
	HighScores GetHighScores(GameStatCounterType statType, bool presentAsTeamScore, WinningConditionPresentStyle winningConditionPresentStyle, bool byAscending);
}

