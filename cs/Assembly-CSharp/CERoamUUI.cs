/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CERoamUUI : ESStateBase
{
	// Fields
	private int downWorldObjectID;
	private bool enterEditNextFrame;
	private Vector3 centerPos;
	private bool didExit;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAvatarEditUIState> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAvatarEditAnimationState> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAvatarEditAnimationState> __f__am_cache2;

	// Constructors
	public CERoamUUI(Vector3 centerPos);

	// Methods
	public override void Enter(EditorStateMachine esm);
	public override void Execute(EditorStateMachine esm);
	public override void Exit(EditorStateMachine esm);
	private bool HandleSelect(EditorStateMachine esm);
	private bool EnterObject(EditorStateMachine esm);
	[CompilerGenerated]
	private static void _Enter_m__0(IAvatarEditUIState x, BaseEventData y);
	[CompilerGenerated]
	private static void _Enter_m__1(IAvatarEditAnimationState x, BaseEventData y);
	[CompilerGenerated]
	private static void _EnterObject_m__2(IAvatarEditAnimationState x, BaseEventData y);
}

