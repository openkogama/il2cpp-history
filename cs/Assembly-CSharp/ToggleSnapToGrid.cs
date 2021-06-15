/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ToggleSnapToGrid : ToggleHandler
{
	// Nested types
	[CompilerGenerated]
	private sealed class _ExecuteToggleState_c__AnonStorey0
	{
		// Fields
		internal bool toggleState;

		// Constructors
		public _ExecuteToggleState_c__AnonStorey0();

		// Methods
		internal void __m__0(IGridSnapHandler handler, BaseEventData data);
	}

	// Constructors
	public ToggleSnapToGrid();

	// Methods
	public override void ExecuteToggleState(bool toggleState, UnityAction<bool> toggleCallback);
}

