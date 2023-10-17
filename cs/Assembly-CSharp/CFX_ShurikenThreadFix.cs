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

public class CFX_ShurikenThreadFix : MonoBehaviour
{
	// Fields
	private ParticleSystem[] systems;

	// Nested types
	[CompilerGenerated]
	private sealed class _WaitFrame_d__2 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public CFX_ShurikenThreadFix __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _WaitFrame_d__2(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public CFX_ShurikenThreadFix();

	// Methods
	private void Awake();
	[IteratorStateMachine(typeof(_WaitFrame_d__2))]
	private IEnumerator WaitFrame();
}

