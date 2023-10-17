/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Worker : MonoBehaviour
{
	// Nested types
	[CompilerGenerated]
	private sealed class _DoTo_d__1 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public Worker __4__this;
		public float duration;
		public float startValue;
		public float endValue;
		public Action<float> callback;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoTo_d__1(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public Worker();

	// Methods
	public void To(float duration, float startValue, float endValue, Action<float> callback);
	[IteratorStateMachine(typeof(_DoTo_d__1))]
	public IEnumerator DoTo(float duration, float startValue, float endValue, Action<float> callback);
}

