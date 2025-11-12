/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Net.Http;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	public class WebResponse
	{
		// Fields
		[CompilerGenerated]
		private bool _IsOk_k__BackingField;
		[CompilerGenerated]
		private string _Content_k__BackingField;
		[CompilerGenerated]
		private string _ErrorMessage_k__BackingField;
	
		// Properties
		public bool IsOk { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Content { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string ErrorMessage { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		[CompilerGenerated]
		private struct _FromHttpResponseMessage_d__12 : IAsyncStateMachine
		{
			// Fields
			public int __1__state;
			public AsyncTaskMethodBuilder<WebResponse> __t__builder;
			public HttpResponseMessage httpResponseMessage;
			private WebResponse _webResponse_5__2;
			private TaskAwaiter<string> __u__1;
	
			// Methods
			private void MoveNext();
			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine);
		}
	
		// Constructors
		public WebResponse();
	
		// Methods
		public static async Task<WebResponse> FromHttpResponseMessage(HttpResponseMessage httpResponseMessage);
	}
}
