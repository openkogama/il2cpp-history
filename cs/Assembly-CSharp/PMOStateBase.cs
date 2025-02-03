/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PMOStateBase : IState
{
	// Fields
	protected PlayModeOnlyEvent stateType;
	private readonly ILogger logger;

	// Constructors
	public PMOStateBase();

	// Methods
	public void SetStateType(PlayModeOnlyEvent stateTypeEvent);
	public virtual void Enter(PlayModeOnlyStateMachine psm);
	public virtual void Execute(PlayModeOnlyStateMachine psm);
	public virtual void Exit(PlayModeOnlyStateMachine psm);
	public void Enter(FSMEntity e);
	public void Execute(FSMEntity e);
	public void Exit(FSMEntity e);
}

