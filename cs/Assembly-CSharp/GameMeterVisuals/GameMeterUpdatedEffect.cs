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

namespace GameMeterVisuals
{
	public class GameMeterUpdatedEffect : GameMeterVisualEffect
	{
		// Fields
		[SerializeField]
		private float scaleStrength;
		[SerializeField]
		private float scaleTime;
		[SerializeField]
		private RectTransform scaleTarget;
		private Vector3 startSize;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _AnimateScale_d__6 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public GameMeterUpdatedEffect __4__this;
			private float _i_5__2;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _AnimateScale_d__6(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public GameMeterUpdatedEffect();
	
		// Methods
		private void OnEnable();
		public override void ExecuteEffect();
		[IteratorStateMachine(typeof(_AnimateScale_d__6))]
		private IEnumerator AnimateScale();
		private void OnDisable();
	}
}
