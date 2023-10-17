/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public interface IWinningCondition
{
	// Properties
	int ID { get; }
	IWinningCondition Parent { get; }
	int Limit { get; }
	bool Forfilled { get; }
	OnCounterTypeChangedArgs InstigatorCounterTypeChangedEvent { get; }
	bool IsBriefingNode { get; }
	HighScores HighScores { get; }
	bool IsSingleton { get; }
	bool IsTeamMode { get; }

	// Events
	event EventHandler<EventArgs> OnWinningConditionChanged {
		add;
		remove;
	}

	// Methods
	bool Traverse(Func<IWinningCondition, bool> callBack);
	void Reset();
}

