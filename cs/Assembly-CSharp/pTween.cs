/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class pTween
{
	// Nested types
	[CompilerGenerated]
	private sealed class _To_d__0 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public float duration;
		public Action<float> callback;
		public float startValue;
		public float endValue;
		private float _end_5__2;
		private float _durationInv_5__3;
		private float _startMulDurationInv_5__4;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _To_d__0(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _RealtimeTo_d__1 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public float duration;
		public Action<float> callback;
		public float startValue;
		public float endValue;
		private float _end_5__2;
		private float _durationInv_5__3;
		private float _startMulDurationInv_5__4;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _RealtimeTo_d__1(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public pTween();

	// Methods
	[IteratorStateMachine(typeof(_To_d__0))]
	public static IEnumerator To(float duration, float startValue, float endValue, Action<float> callback);
	[IteratorStateMachine(typeof(_RealtimeTo_d__1))]
	public static IEnumerator RealtimeTo(float duration, float startValue, float endValue, Action<float> callback);
	public static IEnumerator To(float duration, Action<float> callback);
	public static void WorkerTo(float duration, float startValue, float endValue, Action<float> callback);
	public static void WorkerTo(float duration, Action<float> callback);
}

