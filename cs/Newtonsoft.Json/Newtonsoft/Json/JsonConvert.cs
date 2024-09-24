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

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[Nullable(0)]
	[NullableContext(1)]
	public static class JsonConvert
	{
		// Fields
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private static Func<JsonSerializerSettings> _DefaultSettings_k__BackingField;
		public static readonly string True;
		public static readonly string False;
		public static readonly string Null;
		public static readonly string Undefined;
		public static readonly string PositiveInfinity;
		public static readonly string NegativeInfinity;
		public static readonly string NaN;
	
		// Properties
		[Nullable(new byte[2] {2, 1 })]
		public static Func<JsonSerializerSettings> DefaultSettings { [CompilerGenerated] get; }
	
		// Constructors
		static JsonConvert();
	
		// Methods
		public static string ToString(bool value);
		public static string ToString(char value);
		internal static string ToString(float value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable);
		private static string EnsureFloatFormat(double value, string text, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable);
		internal static string ToString(double value, FloatFormatHandling floatFormatHandling, char quoteChar, bool nullable);
		private static string EnsureDecimalPlace(double value, string text);
		private static string EnsureDecimalPlace(string text);
		public static string ToString(decimal value);
		public static string ToString([Nullable(2)] string value);
		public static string ToString([Nullable(2)] string value, char delimiter);
		public static string ToString([Nullable(2)] string value, char delimiter, StringEscapeHandling stringEscapeHandling);
		[DebuggerStepThrough]
		public static string SerializeObject([Nullable(2)] object value);
		[DebuggerStepThrough]
		[NullableContext(2)]
		public static string SerializeObject(object value, System.Type type, JsonSerializerSettings settings);
		private static string SerializeObjectInternal([Nullable(2)] object value, [Nullable(2)] System.Type type, JsonSerializer jsonSerializer);
		[DebuggerStepThrough]
		[NullableContext(2)]
		public static T DeserializeObject<T>([Nullable(1)] string value);
		[DebuggerStepThrough]
		[NullableContext(2)]
		public static T DeserializeObject<T>([Nullable(1)] string value, JsonSerializerSettings settings);
		[NullableContext(2)]
		public static object DeserializeObject([Nullable(1)] string value, System.Type type, JsonSerializerSettings settings);
	}
}
