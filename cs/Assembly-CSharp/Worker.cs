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

public class Worker : MonoBehaviour
{
	// Nested types
	[CompilerGenerated]
	private sealed class _DoTo_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float duration;
		internal float startValue;
		internal float endValue;
		internal Action<float> callback;
		internal Worker _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DoTo_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public Worker();

	// Methods
	public void To(float duration, float startValue, float endValue, Action<float> callback);
	[DebuggerHidden]
	public IEnumerator DoTo(float duration, float startValue, float endValue, Action<float> callback);
}

