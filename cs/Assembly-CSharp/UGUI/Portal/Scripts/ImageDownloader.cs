/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts
{
	public static class ImageDownloader
	{
		// Fields
		public static readonly DefaultImages DefaultImages;
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass1_0
		{
			// Fields
			public DownloadHandlerBuffer buffer;
			public Action<Sprite> onSuccess;
			public Action<string> onError;
			public string url;
	
			// Constructors
			public __c__DisplayClass1_0();
	
			// Methods
			internal void _Get_b__0(WebResponse response);
		}
	
		// Constructors
		static ImageDownloader();
	
		// Methods
		public static IEnumerator Get(string url, Action<Sprite> onSuccess, Action<string> onError);
	}
}
