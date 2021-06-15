/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CEEditBodyUUI : ESStateBase
{
	// Fields
	private ConstraintVisualizer constraintVisualizer;
	private IWorldObjectWithModelingConstraint modelBody;
	private int targetCubeModelId;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAvatarEditUIState> __f__am_cache0;

	// Properties
	private MVCubeModelInstance TargetCubeModel { get; set; }

	// Constructors
	public CEEditBodyUUI();

	// Methods
	public override void Enter(EditorStateMachine esm);
	public override void Execute(EditorStateMachine esm);
	public override void Exit(EditorStateMachine esm);
	[CompilerGenerated]
	private static void _Enter_m__0(IAvatarEditUIState x, BaseEventData y);
}

