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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LeavePlayModeButton : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<ILeaveEditPlayModeHandler> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _ExecuteLeaveEditDelayed_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal LeavePlayModeButton _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;
		private static ExecuteEvents.EventFunction<ILeaveEditPlayModeHandler> __f__am_cache0;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ExecuteLeaveEditDelayed_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
		private static void __m__0(ILeaveEditPlayModeHandler x, BaseEventData y);
	}

	// Constructors
	public LeavePlayModeButton();

	// Methods
	private void Awake();
	public void Execute();
	[DebuggerHidden]
	private IEnumerator ExecuteLeaveEditDelayed();
	[CompilerGenerated]
	private static void _Execute_m__0(ILeaveEditPlayModeHandler x, BaseEventData y);
}

