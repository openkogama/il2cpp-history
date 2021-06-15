/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class pTween
{
	// Nested types
	[CompilerGenerated]
	private sealed class _To_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _start___0;
		internal float duration;
		internal float _end___0;
		internal float _durationInv___0;
		internal float _startMulDurationInv___0;
		internal float _t___1;
		internal Action<float> callback;
		internal float startValue;
		internal float endValue;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _To_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _RealtimeTo_c__Iterator1 : IEnumerator<object>
	{
		// Fields
		internal float _start___0;
		internal float duration;
		internal float _end___0;
		internal float _durationInv___0;
		internal float _startMulDurationInv___0;
		internal float _t___1;
		internal Action<float> callback;
		internal float startValue;
		internal float endValue;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _RealtimeTo_c__Iterator1();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public pTween();

	// Methods
	[DebuggerHidden]
	public static IEnumerator To(float duration, float startValue, float endValue, Action<float> callback);
	[DebuggerHidden]
	public static IEnumerator RealtimeTo(float duration, float startValue, float endValue, Action<float> callback);
	public static IEnumerator To(float duration, Action<float> callback);
	public static void WorkerTo(float duration, float startValue, float endValue, Action<float> callback);
	public static void WorkerTo(float duration, Action<float> callback);
}

