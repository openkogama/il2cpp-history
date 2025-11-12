/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	public class Get : WebRequest
	{
		// Fields
		private readonly DownloadHandler downloadHandler;
	
		// Constructors
		public Get(string url, Action<WebResponse> callback);
		public Get(string url, DownloadHandler downloadHandler, Action<WebResponse> callback);
		public Get(string urlPath, string authToken, Action<WebResponse> callback);
	
		// Methods
		protected override UnityWebRequest CreateRequest();
	}
}
