/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	public abstract class WebRequest
	{
		// Fields
		protected readonly string url;
		private readonly Action<WebResponse> callback;
		private readonly string authToken;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _DoRequest_d__6 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public WebRequest __4__this;
			private UnityWebRequest _webRequest_5__2;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _DoRequest_d__6(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			private void __m__Finally1();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		protected WebRequest(string urlPath, Action<WebResponse> callback);
		protected WebRequest(string urlPath, string authToken, Action<WebResponse> callback);
	
		// Methods
		protected abstract UnityWebRequest CreateRequest();
		[IteratorStateMachine(typeof(_DoRequest_d__6))]
		public IEnumerator DoRequest();
	}
}
