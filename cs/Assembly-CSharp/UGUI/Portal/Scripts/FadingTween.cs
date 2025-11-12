/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	[RequireComponent(typeof(CanvasGroup))]
	public class FadingTween : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private CanvasGroup canvasGroup;
		private Tween fadeTween;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _TestFade_d__5 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public FadingTween __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _TestFade_d__5(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public FadingTween();
	
		// Methods
		public void FadeIn(float duration);
		public void FadeOut(float duration);
		private void Fade(float endValue, float duration, TweenCallback onEnd);
		[IteratorStateMachine(typeof(_TestFade_d__5))]
		private IEnumerator TestFade();
		[CompilerGenerated]
		private void _FadeIn_b__2_0();
		[CompilerGenerated]
		private void _FadeOut_b__3_0();
	}
}
