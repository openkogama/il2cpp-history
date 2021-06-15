/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace StatHat
{
	public static class Post
	{
		// Fields
		private const string BaseUrl = "https://api.stathat.com";
	
		// Nested types
		private class FormPoster
		{
			// Fields
			private Dictionary<string, string> Parameters;
			private string RelUrl;
			private string BaseUrl;
	
			// Constructors
			public FormPoster(string base_url, string rel_url, Dictionary<string, string> parameters);
	
			// Methods
			private void PostForm();
			private byte[] CreatePostData();
			private string encodeUriComponent(string s);
		}
	
		// Methods
		public static void Counter(string key, string ukey, float count);
		public static void Counter(string key, string ukey, int count);
		public static void Value(string key, string ukey, int value);
		public static void EzCounter(string ezkey, string stat, int count);
		public static void EzValue(string ezkey, string stat, float value);
		public static void EzValue(string ezkey, string stat, int value);
		public static void Value(string key, string ukey, float value);
		public static void EzCounter(string ezkey, string stat, float count);
	}
}
