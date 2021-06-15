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

[RequireComponent]
public class CFX_AutoDestructShuriken : MonoBehaviour
{
	// Fields
	public bool OnlyDeactivate;

	// Nested types
	[CompilerGenerated]
	private sealed class _CheckIfAlive_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal CFX_AutoDestructShuriken _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _CheckIfAlive_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public CFX_AutoDestructShuriken();

	// Methods
	private void OnEnable();
	[DebuggerHidden]
	private IEnumerator CheckIfAlive();
}

