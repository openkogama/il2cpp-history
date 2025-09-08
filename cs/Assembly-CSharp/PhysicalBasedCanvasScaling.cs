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

[RequireComponent(typeof(CanvasScaler))]
[RequireComponent(typeof(Canvas))]
public class PhysicalBasedCanvasScaling : MonoBehaviour
{
	// Fields
	public static Action OnScreenDimentionsChanged;
	[Range(1f, 1000f)]
	[SerializeField]
	private float baselineDPI;
	[SerializeField]
	private Vector2 baseInchThresholds;
	private float storedDPI;
	private Vector2 storedScreen;

	// Nested types
	[CompilerGenerated]
	private sealed class _SetCanvasScaleCoroutine_d__6 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public PhysicalBasedCanvasScaling __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _SetCanvasScaleCoroutine_d__6(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public PhysicalBasedCanvasScaling();

	// Methods
	private void Awake();
	[IteratorStateMachine(typeof(_SetCanvasScaleCoroutine_d__6))]
	private IEnumerator SetCanvasScaleCoroutine();
	private void SetCanvasScale(float dpi, Vector2 screen);
	private void OnDestroy();
}

