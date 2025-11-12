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
	public class Post : WebRequest
	{
		// Fields
		private readonly string payload;
	
		// Constructors
		public Post(string urlPath, string authToken, string payload, Action<WebResponse> callback);
	
		// Methods
		protected override UnityWebRequest CreateRequest();
	}
}
