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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AddDotsToTruncatedText : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text text;

	// Nested types
	[CompilerGenerated]
	private sealed class _Start_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal Color _c___0;
		internal float _alpha___0;
		internal string _textValue___0;
		internal bool _addDots___0;
		internal float _res___0;
		internal float _dotSize___0;
		internal AddDotsToTruncatedText _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _Start_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public AddDotsToTruncatedText();

	// Methods
	[DebuggerHidden]
	private IEnumerator Start();
	private int CalculateLengthOfMessage(string message);
}

