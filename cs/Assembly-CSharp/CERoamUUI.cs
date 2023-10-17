/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CERoamUUI : ESStateBase
{
	// Fields
	private int downWorldObjectID;
	private bool enterEditNextFrame;
	private Vector3 centerPos;
	private bool didExit;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IAvatarEditUIState> __9__4_0;
		public static ExecuteEvents.EventFunction<IAvatarEditAnimationState> __9__4_1;
		public static ExecuteEvents.EventFunction<IAvatarEditAnimationState> __9__9_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Enter_b__4_0(IAvatarEditUIState x, BaseEventData y);
		internal void _Enter_b__4_1(IAvatarEditAnimationState x, BaseEventData y);
		internal void _EnterObject_b__9_0(IAvatarEditAnimationState x, BaseEventData y);
	}

	// Constructors
	public CERoamUUI(Vector3 centerPos);

	// Methods
	public override void Enter(EditorStateMachine esm);
	public override void Execute(EditorStateMachine esm);
	public override void Exit(EditorStateMachine esm);
	private bool HandleSelect(EditorStateMachine esm);
	private bool EnterObject(EditorStateMachine esm);
}

