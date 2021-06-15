/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class ConvertUtils
	{
		// Fields
		private static readonly ThreadSafeStore<TypeConvertKey, Func<object, object>> CastConverters;
		[CompilerGenerated]
		private static Func<TypeConvertKey, Func<object, object>> __f__mg_cache0;
	
		// Nested types
		internal struct TypeConvertKey : IEquatable<TypeConvertKey>
		{
			// Fields
			private readonly Type _initialType;
			private readonly Type _targetType;
	
			// Properties
			public Type InitialType { get; }
			public Type TargetType { get; }
	
			// Constructors
			public TypeConvertKey(Type initialType, Type targetType);
	
			// Methods
			public override int GetHashCode();
			public override bool Equals(object obj);
			public bool Equals(TypeConvertKey other);
		}
	
		[CompilerGenerated]
		private sealed class _CreateCastConverter_c__AnonStorey0
		{
			// Fields
			internal MethodCall<object, object> call;
	
			// Constructors
			public _CreateCastConverter_c__AnonStorey0();
	
			// Methods
			internal object __m__0(object o);
		}
	
		[CompilerGenerated]
		private sealed class _TryConvert_c__AnonStorey1<T>
		{
			// Fields
			internal object initialValue;
	
			// Constructors
			public _TryConvert_c__AnonStorey1();
	
			// Methods
			internal T __m__0();
		}
	
		[CompilerGenerated]
		private sealed class _TryConvert_c__AnonStorey2
		{
			// Fields
			internal object initialValue;
			internal CultureInfo culture;
			internal Type targetType;
	
			// Constructors
			public _TryConvert_c__AnonStorey2();
	
			// Methods
			internal object __m__0();
		}
	
		[CompilerGenerated]
		private sealed class _TryConvertOrCast_c__AnonStorey3<T>
		{
			// Fields
			internal object initialValue;
	
			// Constructors
			public _TryConvertOrCast_c__AnonStorey3();
	
			// Methods
			internal T __m__0();
		}
	
		[CompilerGenerated]
		private sealed class _TryConvertOrCast_c__AnonStorey4
		{
			// Fields
			internal object initialValue;
			internal CultureInfo culture;
			internal Type targetType;
	
			// Constructors
			public _TryConvertOrCast_c__AnonStorey4();
	
			// Methods
			internal object __m__0();
		}
	
		// Constructors
		static ConvertUtils();
	
		// Methods
		private static Func<object, object> CreateCastConverter(TypeConvertKey t);
		public static bool CanConvertType(Type initialType, Type targetType, bool allowTypeNameToString);
		private static bool IsComponentConverter(TypeConverter converter);
		public static T Convert<T>(object initialValue);
		public static T Convert<T>(object initialValue, CultureInfo culture);
		public static object Convert(object initialValue, CultureInfo culture, Type targetType);
		public static bool TryConvert<T>(object initialValue, out ref T convertedValue);
		public static bool TryConvert<T>(object initialValue, CultureInfo culture, out ref T convertedValue);
		public static bool TryConvert(object initialValue, CultureInfo culture, Type targetType, out object convertedValue);
		public static T ConvertOrCast<T>(object initialValue);
		public static T ConvertOrCast<T>(object initialValue, CultureInfo culture);
		public static object ConvertOrCast(object initialValue, CultureInfo culture, Type targetType);
		public static bool TryConvertOrCast<T>(object initialValue, out ref T convertedValue);
		public static bool TryConvertOrCast<T>(object initialValue, CultureInfo culture, out ref T convertedValue);
		public static bool TryConvertOrCast(object initialValue, CultureInfo culture, Type targetType, out object convertedValue);
		private static object EnsureTypeAssignable(object value, Type initialType, Type targetType);
		internal static TypeConverter GetConverter(Type t);
		public static bool IsInteger(object value);
	}
}
