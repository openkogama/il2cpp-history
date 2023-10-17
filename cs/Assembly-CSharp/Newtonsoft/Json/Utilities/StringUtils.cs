/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class StringUtils
	{
		// Fields
		public const string CarriageReturnLineFeed = "\r\n";
		public const string Empty = "";
		public const char CarriageReturn = '\x000d';
		public const char LineFeed = '\x000a';
		public const char Tab = '\x0009';
	
		// Nested types
		private delegate void ActionLine(TextWriter textWriter, string line);
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass13_0
		{
			// Fields
			public char indentChar;
			public int indentation;
	
			// Constructors
			public __c__DisplayClass13_0();
	
			// Methods
			internal void _Indent_b__0(TextWriter tw, string line);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass16_0
		{
			// Fields
			public int lineNumber;
	
			// Constructors
			public __c__DisplayClass16_0();
	
			// Methods
			internal void _NumberLines_b__0(TextWriter tw, string line);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass25_0<TSource>
		{
			// Fields
			public Func<TSource, string> valueSelector;
			public string testValue;
	
			// Constructors
			public __c__DisplayClass25_0();
	
			// Methods
			internal bool _ForgivingCaseSensitiveFind_b__0(TSource s);
			internal bool _ForgivingCaseSensitiveFind_b__1(TSource s);
		}
	
		// Methods
		public static bool ContainsWhiteSpace(string s);
		public static bool IsWhiteSpace(string s);
		public static string EnsureEndsWith(string target, string value);
		public static bool IsNullOrEmptyOrWhiteSpace(string s);
		public static void IfNotNullOrEmpty(string value, Action<string> action);
		private static void IfNotNullOrEmpty(string value, Action<string> trueAction, Action<string> falseAction);
		public static string Indent(string s, int indentation);
		public static string Indent(string s, int indentation, char indentChar);
		private static void ActionTextReaderLine(TextReader textReader, TextWriter textWriter, ActionLine lineAction);
		public static string NumberLines(string s);
		public static string NullEmptyString(string s);
		public static string ReplaceNewLines(string s, string replacement);
		public static string Truncate(string s, int maximumLength);
		public static string Truncate(string s, int maximumLength, string suffix);
		public static StringWriter CreateStringWriter(int capacity);
		public static int? GetLength(string value);
		public static string ToCharAsUnicode(char c);
		public static void WriteCharAsUnicode(TextWriter writer, char c);
		public static string ToCamelCase(string s);
	
		// Extension methods
		public static string FormatWith(this string format, IFormatProvider provider, params object[] args);
		public static TSource ForgivingCaseSensitiveFind<TSource>(this IEnumerable<TSource> source, Func<TSource, string> valueSelector, string testValue);
	}
}
