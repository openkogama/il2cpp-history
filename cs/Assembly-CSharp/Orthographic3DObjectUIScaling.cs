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

public class Orthographic3DObjectUIScaling : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Vector2 baseInchThresholds;
	[SerializeField]
	private bool isScalingWithX;
	[SerializeField]
	private bool isScalingWithY;
	private float storedDPI;
	private Vector3 originalScale;
	private Vector2 storedScreen;

	// Nested types
	[CompilerGenerated]
	private sealed class _SetObjectScaleCoroutine_d__7 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public Orthographic3DObjectUIScaling __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _SetObjectScaleCoroutine_d__7(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public Orthographic3DObjectUIScaling();

	// Methods
	private void Awake();
	[IteratorStateMachine(typeof(_SetObjectScaleCoroutine_d__7))]
	private IEnumerator SetObjectScaleCoroutine();
	private void SetObjectScale(float dpi, Vector2 screen);
	private void OnDestroy();
}

