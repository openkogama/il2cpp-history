/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESCubeEdit : ESStateBase
{
	// Fields
	private IModelingConstraint constraint;
	private ConstraintVisualizer constraintVisualizer;
	private int targetCubeModelId;
	private bool exiting;

	// Properties
	private MVCubeModelBase TargetCubeModel { get; set; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Exit_b__9_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public ESCubeEdit();

	// Methods
	public override void Enter(EditorStateMachine e);
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine e);
	private void Exit();
	private void HandleUnavailableMaterial(EditorStateMachine e);
	[CompilerGenerated]
	private void _Enter_b__7_0(IHandleCubeModelEdit handler, BaseEventData data);
}

