/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Numerics;
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
	internal static class ConvertUtils
	{
		// Fields
		private static readonly Dictionary<System.Type, PrimitiveTypeCode> TypeCodeMap;
		private static readonly TypeInformation[] PrimitiveTypeCodes;
		[Nullable(new byte[7] {1, 0, 1, 1, 2, 2, 2 })]
		private static readonly ThreadSafeStore<StructMultiKey<System.Type, System.Type>, Func<object, object>> CastConverters;
	
		// Nested types
		[NullableContext(0)]
		internal enum ConvertResult
		{
			Success = 0,
			CannotConvertNull = 1,
			NotInstantiableType = 2,
			NoValidConversion = 3
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0
		{
			// Fields
			[Nullable(new byte[3] {0, 2, 2 })]
			public MethodCall<object, object> call;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			[NullableContext(2)]
			internal object _CreateCastConverter_b__0(object o);
		}
	
		// Constructors
		static ConvertUtils();
	
		// Methods
		public static PrimitiveTypeCode GetTypeCode(System.Type t);
		public static PrimitiveTypeCode GetTypeCode(System.Type t, out bool isEnum);
		public static TypeInformation GetTypeInformation(IConvertible convertable);
		public static bool IsConvertible(System.Type t);
		public static TimeSpan ParseTimeSpan(string input);
		[NullableContext(2)]
		private static Func<object, object> CreateCastConverter([Nullable(new byte[3] {0, 1, 1 })] StructMultiKey<System.Type, System.Type> t);
		internal static BigInteger ToBigInteger(object value);
		public static object FromBigInteger(BigInteger i, System.Type targetType);
		public static object Convert(object initialValue, CultureInfo culture, System.Type targetType);
		private static bool TryConvert([Nullable(2)] object initialValue, CultureInfo culture, System.Type targetType, [Nullable(2)] out object value);
		private static ConvertResult TryConvertInternal([Nullable(2)] object initialValue, CultureInfo culture, System.Type targetType, [Nullable(2)] out object value);
		public static object ConvertOrCast([Nullable(2)] object initialValue, CultureInfo culture, System.Type targetType);
		private static object EnsureTypeAssignable([Nullable(2)] object value, System.Type initialType, System.Type targetType);
		public static bool VersionTryParse(string input, [Nullable(2)] [NotNullWhen(true)] out Version result);
		public static bool IsInteger(object value);
		public static ParseResult Int32TryParse(char[] chars, int start, int length, out int value);
		public static ParseResult Int64TryParse(char[] chars, int start, int length, out long value);
		public static ParseResult DecimalTryParse(char[] chars, int start, int length, out decimal value);
		public static bool TryConvertGuid(string s, out Guid g);
		public static bool TryHexTextToInt(char[] text, int start, int end, out int value);
	}
}
