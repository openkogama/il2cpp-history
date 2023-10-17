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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WebGLSupport
{
	public class WebGLInput : MonoBehaviour, IComparable<WebGLSupport.WebGLInput>
	{
		// Fields
		private static Dictionary<int, WebGLInput> instances;
		[CompilerGenerated]
		private static string _CanvasId_k__BackingField;
		internal int id;
		public IInputField input;
		private bool blurBlock;
		[Tooltip("show input element on canvas. this will make you select text by drag.")]
		public bool showHtmlElement;
	
		// Properties
		public static string CanvasId { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int Id { get; }
	
		// Nested types
		private static class WebGLInputTabFocus
		{
			// Fields
			private static List<WebGLInput> inputs;
	
			// Constructors
			static WebGLInputTabFocus();
	
			// Methods
			public static void Add(WebGLInput input);
			public static void Remove(WebGLInput input);
			public static void OnTab(WebGLInput input, int value);
		}
	
		[CompilerGenerated]
		private sealed class _Blur_d__21 : IEnumerator<object>
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
			public _Blur_d__21(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		static WebGLInput();
		public WebGLInput();
	
		// Methods
		private IInputField Setup();
		private void Awake();
		private RectInt GetElemetRect();
		public void OnSelect();
		private void OnWindowBlur();
		private Rect GetScreenCoordinates(RectTransform uiElement);
		internal void DeactivateInputField();
		[MonoPInvokeCallback(typeof(Action<int>))]
		private static void OnFocus(int id);
		[MonoPInvokeCallback(typeof(Action<int>))]
		private static void OnBlur(int id);
		[IteratorStateMachine(typeof(_Blur_d__21))]
		private static IEnumerator Blur(int id);
		[MonoPInvokeCallback(typeof(Action<int, string>))]
		private static void OnValueChange(int id, string value);
		[MonoPInvokeCallback(typeof(Action<int, string>))]
		private static void OnEditEnd(int id, string value);
		[MonoPInvokeCallback(typeof(Action<int, int>))]
		private static void OnTab(int id, int value);
		private void Update();
		private void OnDestroy();
		private void OnEnable();
		private void OnDisable();
		public int CompareTo(WebGLInput other);
		public void CheckOutFocus();
	}
}
