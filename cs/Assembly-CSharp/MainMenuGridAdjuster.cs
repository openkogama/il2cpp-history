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

[RequireComponent(typeof(RectTransform))]
[RequireComponent(typeof(GridLayoutGroup))]
public class MainMenuGridAdjuster : MonoBehaviour
{
	// Fields
	[SerializeField]
	private float topOffset;
	[SerializeField]
	private float bottomOffsetWithoutGamePasses;
	[SerializeField]
	private float bottomOffsetWithGamePasses;
	private RectTransform rectTransform;
	private GridLayoutGroup grid;
	private int activeButtons;
	private float pollFrequency;

	// Nested types
	[CompilerGenerated]
	private sealed class _UpdateGridPeriodically_d__9 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public MainMenuGridAdjuster __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _UpdateGridPeriodically_d__9(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public MainMenuGridAdjuster();

	// Methods
	private void Start();
	private void OnDestroy();
	[IteratorStateMachine(typeof(_UpdateGridPeriodically_d__9))]
	private IEnumerator UpdateGridPeriodically();
	private int GetActiveButtonCount();
	private void SetGridSizeAndPosition();
}

