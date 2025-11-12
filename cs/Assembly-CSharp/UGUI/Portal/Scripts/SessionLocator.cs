/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	public class SessionLocator
	{
		// Fields
		private readonly string url;
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass2_0
		{
			// Fields
			public Action<SessionLocatorResponse> onSuccess;
			public Action<string> onError;
	
			// Constructors
			public __c__DisplayClass2_0();
	
			// Methods
			internal void _CreateRequest_b__0(WebResponse response);
		}
	
		// Constructors
		public SessionLocator(string url);
	
		// Methods
		public IEnumerator CreateRequest(GameDto gameDto, Action<SessionLocatorResponse> onSuccess, Action<string> onError);
	}
}
