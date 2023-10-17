/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class WaitForFrames
{
	// Nested types
	[CompilerGenerated]
	private sealed class _Frames_d__0 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public int frameCount;
		public UnityAction callback;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Frames_d__0(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Methods
	[IteratorStateMachine(typeof(_Frames_d__0))]
	public static IEnumerator Frames(int frameCount, UnityAction callback);
}

