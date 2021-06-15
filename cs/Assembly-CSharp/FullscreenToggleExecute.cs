/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FullscreenToggleExecute : ToggleHandler
{
	// Fields
	[SerializeField]
	private ToggleStateHandler toggleStateHandler;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;

	// Constructors
	public FullscreenToggleExecute();

	// Methods
	private void Awake();
	public override void ExecuteToggleState(bool toggleState, UnityAction<bool> toggleCallback);
	private void FullscreenChanged(bool fullscreenState);
	[CompilerGenerated]
	private static void _ExecuteToggleState_m__0(IModalPopupCreator x, BaseEventData y);
}

