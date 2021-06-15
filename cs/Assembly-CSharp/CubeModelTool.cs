/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class CubeModelTool : IState
{
	// Fields
	protected bool waitForMouseUp;
	private static EditCubeChange cubeChange;
	private static int cubeCount;
	public static Action<int, EditCubeChange> OnEditCubeChange;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private CubeModelingEvent _StateType_k__BackingField;

	// Properties
	public CubeModelingEvent StateType { [CompilerGenerated] get; [CompilerGenerated] protected set; }
	public virtual bool CursorVisible { get; set; }

	// Constructors
	public CubeModelTool();
	static CubeModelTool();

	// Methods
	protected static void SendCubeEvent(int cubeCount, EditCubeChange cubeChange);
	public void SetStateType(CubeModelingEvent stateTypeEvent);
	public virtual void Enter(CubeModelingStateMachine esm);
	public virtual void Execute(CubeModelingStateMachine e);
	public virtual void Exit(CubeModelingStateMachine esm);
	public void Enter(FSMEntity e);
	public void Execute(FSMEntity e);
	public void Exit(FSMEntity e);
	public virtual void HideCursor();
}

