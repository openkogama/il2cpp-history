/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class MiscellaneousUtils
	{
		// Methods
		public static bool ValueEquals(object objA, object objB);
		public static ArgumentOutOfRangeException CreateArgumentOutOfRangeException(string paramName, object actualValue, string message);
		public static bool TryAction<T>(Creator<T> creator, out ref T output);
		public static string ToString(object value);
		public static byte[] HexToBytes(string hex);
		public static string BytesToHex(byte[] bytes);
		public static string BytesToHex(byte[] bytes, bool removeDashes);
		public static int ByteArrayCompare(byte[] a1, byte[] a2);
		public static string GetPrefix(string qualifiedName);
		public static string GetLocalName(string qualifiedName);
		public static void GetQualifiedNameParts(string qualifiedName, out string prefix, out string localName);
	}
}
