/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using AOT;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace WebGLSupport
{
	public static class WebGLWindow
	{
		// Fields
		[CompilerGenerated]
		private static bool _Focus_k__BackingField;
		[CompilerGenerated]
		private static Action OnFocusEvent;
		[CompilerGenerated]
		private static Action OnBlurEvent;
		[CompilerGenerated]
		private static Action OnResizeEvent;
		private static string ViewportContent;
	
		// Properties
		public static bool Focus { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Events
		public static event Action OnFocusEvent {
			add;
			remove;
		}
		public static event Action OnBlurEvent {
			add;
			remove;
		}
		public static event Action OnResizeEvent {
			add;
			remove;
		}
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal void _.cctor_b__0_0();
			internal void _.cctor_b__0_1();
			internal void _.cctor_b__0_2();
		}
	
		// Constructors
		static WebGLWindow();
	
		// Methods
		private static void Init();
		[MonoPInvokeCallback(typeof(Action))]
		private static void OnWindowFocus();
		[MonoPInvokeCallback(typeof(Action))]
		private static void OnWindowBlur();
		[MonoPInvokeCallback(typeof(Action))]
		private static void OnWindowResize();
		[RuntimeInitializeOnLoadMethod]
		private static void RuntimeInitializeOnLoadMethod();
	}
}
