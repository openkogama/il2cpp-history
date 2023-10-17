/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CEEditBodyUUI : ESStateBase
{
	// Fields
	private ConstraintVisualizer constraintVisualizer;
	private IWorldObjectWithModelingConstraint modelBody;
	private int targetCubeModelId;

	// Properties
	private MVCubeModelInstance TargetCubeModel { get; set; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IAvatarEditUIState> __9__6_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Enter_b__6_0(IAvatarEditUIState x, BaseEventData y);
	}

	// Constructors
	public CEEditBodyUUI();

	// Methods
	public override void Enter(EditorStateMachine esm);
	public override void Execute(EditorStateMachine esm);
	public override void Exit(EditorStateMachine esm);
}

