/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FullscreenToggleExecute : ToggleHandler
{
	// Fields
	[SerializeField]
	private ToggleStateHandler toggleStateHandler;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__3_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ExecuteToggleState_b__3_0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public FullscreenToggleExecute();

	// Methods
	private void Awake();
	private bool StartSetValue();
	public override void ExecuteToggleState(bool toggleState, UnityAction<bool> toggleCallback);
	private void FullscreenChanged(bool fullscreenState);
}

