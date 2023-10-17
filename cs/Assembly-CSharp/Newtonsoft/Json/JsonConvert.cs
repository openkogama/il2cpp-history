/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public static class JsonConvert
	{
		// Fields
		public static readonly string True;
		public static readonly string False;
		public static readonly string Null;
		public static readonly string Undefined;
		public static readonly string PositiveInfinity;
		public static readonly string NegativeInfinity;
		public static readonly string NaN;
		internal static readonly long InitialJavaScriptDateTicks;
	
		// Constructors
		static JsonConvert();
	
		// Methods
		public static string ToString(DateTime value);
		public static string ToString(DateTimeOffset value);
		private static TimeSpan GetUtcOffset(DateTime dateTime);
		internal static void WriteDateTimeString(TextWriter writer, DateTime value);
		internal static void WriteDateTimeString(TextWriter writer, DateTime value, TimeSpan offset, DateTimeKind kind);
		private static long ToUniversalTicks(DateTime dateTime);
		private static long ToUniversalTicks(DateTime dateTime, TimeSpan offset);
		internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, TimeSpan offset);
		internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime);
		internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, bool convertToUtc);
		private static long UniversialTicksToJavaScriptTicks(long universialTicks);
		internal static DateTime ConvertJavaScriptTicksToDateTime(long javaScriptTicks);
		public static string ToString(bool value);
		public static string ToString(char value);
		public static string ToString(Enum value);
		public static string ToString(int value);
		public static string ToString(short value);
		public static string ToString(ushort value);
		public static string ToString(uint value);
		public static string ToString(long value);
		public static string ToString(ulong value);
		public static string ToString(float value);
		public static string ToString(double value);
		private static string EnsureDecimalPlace(double value, string text);
		private static string EnsureDecimalPlace(string text);
		public static string ToString(byte value);
		public static string ToString(sbyte value);
		public static string ToString(decimal value);
		public static string ToString(Guid value);
		public static string ToString(TimeSpan value);
		public static string ToString(Uri value);
		public static string ToString(string value);
		public static string ToString(string value, char delimter);
		public static string ToString(object value);
		private static bool IsJsonPrimitiveTypeCode(TypeCode typeCode);
		internal static bool IsJsonPrimitiveType(System.Type type);
		internal static bool IsJsonPrimitive(object value);
		public static string SerializeObject(object value);
		public static string SerializeObject(object value, Formatting formatting);
		public static string SerializeObject(object value, params JsonConverter[] converters);
		public static string SerializeObject(object value, Formatting formatting, params JsonConverter[] converters);
		public static string SerializeObject(object value, Formatting formatting, JsonSerializerSettings settings);
		public static object DeserializeObject(string value);
		public static object DeserializeObject(string value, JsonSerializerSettings settings);
		public static object DeserializeObject(string value, System.Type type);
		public static T DeserializeObject<T>(string value);
		public static T DeserializeAnonymousType<T>(string value, T anonymousTypeObject);
		public static T DeserializeObject<T>(string value, params JsonConverter[] converters);
		public static T DeserializeObject<T>(string value, JsonSerializerSettings settings);
		public static object DeserializeObject(string value, System.Type type, params JsonConverter[] converters);
		public static object DeserializeObject(string value, System.Type type, JsonSerializerSettings settings);
		public static void PopulateObject(string value, object target);
		public static void PopulateObject(string value, object target, JsonSerializerSettings settings);
	}
}
