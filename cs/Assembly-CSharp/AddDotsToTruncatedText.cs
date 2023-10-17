/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AddDotsToTruncatedText : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text text;

	// Nested types
	[CompilerGenerated]
	private sealed class _Start_d__1 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AddDotsToTruncatedText __4__this;
		private Color _c_5__2;
		private float _alpha_5__3;
		private string _textValue_5__4;
		private bool _addDots_5__5;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Start_d__1(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public AddDotsToTruncatedText();

	// Methods
	[IteratorStateMachine(typeof(_Start_d__1))]
	private IEnumerator Start();
	private int CalculateLengthOfMessage(string message);
}

