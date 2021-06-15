/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class CoroutineWorker : MonoBehaviour
{
	// Nested types
	[CompilerGenerated]
	private sealed class _Run_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal IEnumerator coroutine;
		internal CoroutineWorker _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Run_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public CoroutineWorker();

	// Methods
	public void RunCoroutineAndDestroy(IEnumerator coroutine);
	[DebuggerHidden]
	public IEnumerator Run(IEnumerator coroutine);
}

