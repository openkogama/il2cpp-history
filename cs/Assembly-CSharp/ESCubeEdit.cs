/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESCubeEdit : ESStateBase
{
	// Fields
	private IModelingConstraint constraint;
	private ConstraintVisualizer constraintVisualizer;
	private int targetCubeModelId;
	private bool exiting;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Properties
	private MVCubeModelBase TargetCubeModel { get; set; }

	// Constructors
	public ESCubeEdit();

	// Methods
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine e);
	private void Exit();
	private void HandleUnavailableMaterial(EditorStateMachine e);
	[CompilerGenerated]
	private void _Enter_m__0(IHandleCubeModelEdit handler, BaseEventData data);
	[CompilerGenerated]
	private static void _Exit_m__1(IUIStack handler, BaseEventData data);
}

