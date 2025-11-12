/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal static class StringUtils
	{
		// Nested types
		[NullableContext(0)]
		private enum SeparatedCaseState
		{
			Start = 0,
			Lower = 1,
			Upper = 2,
			NewWord = 3
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass14_0<TSource>
		{
			// Fields
			[Nullable(new byte[3] {0, 0, 1 })]
			public Func<TSource, string> valueSelector;
			[Nullable(0)]
			public string testValue;
	
			// Constructors
			public __c__DisplayClass14_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _ForgivingCaseSensitiveFind_b__0(TSource s);
			[NullableContext(0)]
			internal bool _ForgivingCaseSensitiveFind_b__1(TSource s);
		}
	
		// Methods
		[NullableContext(2)]
		public static bool IsNullOrEmpty([NotNullWhen(false)] string value);
		public static StringWriter CreateStringWriter(int capacity);
		public static void ToCharAsUnicode(char c, char[] buffer);
		public static string ToCamelCase(string s);
		private static char ToLower(char c);
		public static string ToSnakeCase(string s);
		public static string ToKebabCase(string s);
		private static string ToSeparatedCase(string s, char separator);
		public static bool IsHighSurrogate(char c);
		public static bool IsLowSurrogate(char c);
		public static int IndexOf(string s, char c);
	
		// Extension methods
		public static string FormatWith(this string format, IFormatProvider provider, [Nullable(2)] object arg0);
		public static string FormatWith(this string format, IFormatProvider provider, [Nullable(2)] object arg0, [Nullable(2)] object arg1);
		public static string FormatWith(this string format, IFormatProvider provider, [Nullable(2)] object arg0, [Nullable(2)] object arg1, [Nullable(2)] object arg2);
		[NullableContext(2)]
		public static string FormatWith([Nullable(1)] this string format, [Nullable(1)] IFormatProvider provider, object arg0, object arg1, object arg2, object arg3);
		private static string FormatWith(this string format, IFormatProvider provider, params [Nullable(new byte[2] {1, 2 })] object[] args);
		public static TSource ForgivingCaseSensitiveFind<TSource>(this IEnumerable<TSource> source, Func<TSource, string> valueSelector, string testValue);
		public static bool StartsWith(this string source, char value);
		public static bool EndsWith(this string source, char value);
		public static string Trim(this string s, int start, int length);
	}
}
