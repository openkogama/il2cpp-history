/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FSMEntity
{
	// Fields
	protected StateTransitionTable transitionTable;
	protected IState currentState;
	public object prevEvent;
	public object curEvent;
	public object nextEvent;
	protected string stateName;
	protected Dictionary<object, object> data;
	private bool clearStack;
	private Stack<EditorEvent> stateStack;
	protected bool lockState;

	// Properties
	public Dictionary<object, object> Data { get; }
	public bool LockState { get; set; }
	public object Event { set; }

	// Constructors
	public FSMEntity();

	// Methods
	public virtual void Update();
	public void PushState(EditorEvent nextState);
	public void PushState(EditorEvent nextState, EditorEvent overridePushState);
	public bool PopState();
	public void ClearStateStack();
}

