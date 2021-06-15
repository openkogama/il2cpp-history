/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	public static class StringEscaping
	{
		// Nested types
		public enum EscapeMode
		{
			None = 0,
			CSharp = 1,
			CSharpVerbatim = 2,
			Xml = 3
		}
	
		// Methods
		public static string ToGettextFormat(string text);
		public static string FromGettextFormat(string text);
		public static string UnEscape(EscapeMode mode, string text);
		private static string FromCSharpVerbatimFormat(string text);
		private static string FromXml(string text);
		private static string FromCSharpFormat(string text);
	}
}
