/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class StateTransitionTable
{
	// Fields
	protected Dictionary<object, IState> table;

	// Constructors
	protected StateTransitionTable();

	// Methods
	public void SetState(object evt, IState state);
	public IState GetState(object evt);
}

