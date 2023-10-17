/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LeavePlayModeButton : MonoBehaviour
{
	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<ILeaveEditPlayModeHandler> __9__1_0;
		public static ExecuteEvents.EventFunction<ILeaveEditPlayModeHandler> __9__2_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Execute_b__1_0(ILeaveEditPlayModeHandler x, BaseEventData y);
		internal void _ExecuteLeaveEditDelayed_b__2_0(ILeaveEditPlayModeHandler x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ExecuteLeaveEditDelayed_d__2 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LeavePlayModeButton __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ExecuteLeaveEditDelayed_d__2(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public LeavePlayModeButton();

	// Methods
	private void Awake();
	public void Execute();
	[IteratorStateMachine(typeof(_ExecuteLeaveEditDelayed_d__2))]
	private IEnumerator ExecuteLeaveEditDelayed();
}

