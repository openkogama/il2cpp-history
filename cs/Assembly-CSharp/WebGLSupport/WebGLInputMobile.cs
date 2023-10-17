/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using AOT;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WebGLSupport
{
	public class WebGLInputMobile : MonoBehaviour, IPointerDownHandler
	{
		// Fields
		private static Dictionary<int, WebGLInputMobile> instances;
		private int id;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _RegisterOnFocusOut_d__5 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public int id;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _RegisterOnFocusOut_d__5(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		[CompilerGenerated]
		private sealed class _ExecFocusOut_d__7 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public int id;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _ExecFocusOut_d__7(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public WebGLInputMobile();
		static WebGLInputMobile();
	
		// Methods
		private void Awake();
		public void OnPointerDown(PointerEventData eventData);
		[MonoPInvokeCallback(typeof(Action<int>))]
		private static void OnTouchEnd(int id);
		[IteratorStateMachine(typeof(_RegisterOnFocusOut_d__5))]
		private static IEnumerator RegisterOnFocusOut(int id);
		[MonoPInvokeCallback(typeof(Action<int>))]
		private static void OnFocusOut(int id);
		[IteratorStateMachine(typeof(_ExecFocusOut_d__7))]
		private static IEnumerator ExecFocusOut(int id);
	}
}
