/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ESStateBase : IState
{
	// Fields
	protected EditorEvent stateType;
	private readonly ILogger logger;
	protected WorldObjectClientRef tintedWo;

	// Properties
	private MVWorldObjectClientManager WOCM { get; }

	// Constructors
	public ESStateBase();

	// Methods
	public void SetStateType(EditorEvent stateTypeEvent);
	public virtual void Enter(EditorStateMachine esm);
	public virtual void Execute(EditorStateMachine e);
	public virtual void Exit(EditorStateMachine esm);
	public void Enter(FSMEntity e);
	public void Execute(FSMEntity e);
	public void Exit(FSMEntity e);
	protected void DeTintCurrent();
	protected static bool SelectionIsAllowedByLogicEnabled(int woId);
	protected void TintObjectsOnMouseOver(EditorStateMachine e);
	protected void TintObjectsOnMouseOver(EditorStateMachine e, bool pickSuccess, VoxelHit hit);
}

