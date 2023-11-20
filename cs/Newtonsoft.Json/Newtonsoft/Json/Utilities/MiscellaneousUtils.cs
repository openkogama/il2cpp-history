/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Text.RegularExpressions;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal static class MiscellaneousUtils
	{
		// Methods
		[NullableContext(2)]
		public static bool ValueEquals(object objA, object objB);
		public static ArgumentOutOfRangeException CreateArgumentOutOfRangeException(string paramName, object actualValue, string message);
		public static string ToString([Nullable(2)] object value);
		public static int ByteArrayCompare(byte[] a1, byte[] a2);
		public static string GetPrefix(string qualifiedName);
		public static string GetLocalName(string qualifiedName);
		public static void GetQualifiedNameParts(string qualifiedName, [Nullable(2)] out string prefix, out string localName);
		internal static RegexOptions GetRegexOptions(string optionsText);
	}
}
