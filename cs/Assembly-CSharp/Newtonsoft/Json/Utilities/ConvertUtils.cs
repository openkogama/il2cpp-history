/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class ConvertUtils
	{
		// Fields
		private static readonly ThreadSafeStore<TypeConvertKey, Func<object, object>> CastConverters;
	
		// Nested types
		internal struct TypeConvertKey : IEquatable<TypeConvertKey>
		{
			// Fields
			private readonly System.Type _initialType;
			private readonly System.Type _targetType;
	
			// Properties
			public System.Type InitialType { get; }
			public System.Type TargetType { get; }
	
			// Constructors
			public TypeConvertKey(System.Type initialType, System.Type targetType);
	
			// Methods
			public override int GetHashCode();
			public override bool Equals(object obj);
			public bool Equals(TypeConvertKey other);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass2_0
		{
			// Fields
			public MethodCall<object, object> call;
	
			// Constructors
			public __c__DisplayClass2_0();
	
			// Methods
			internal object _CreateCastConverter_b__0(object o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0<T>
		{
			// Fields
			public object initialValue;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			internal T _TryConvert_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass10_0
		{
			// Fields
			public object initialValue;
			public CultureInfo culture;
			public System.Type targetType;
	
			// Constructors
			public __c__DisplayClass10_0();
	
			// Methods
			internal object _TryConvert_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass15_0<T>
		{
			// Fields
			public object initialValue;
	
			// Constructors
			public __c__DisplayClass15_0();
	
			// Methods
			internal T _TryConvertOrCast_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass16_0
		{
			// Fields
			public object initialValue;
			public CultureInfo culture;
			public System.Type targetType;
	
			// Constructors
			public __c__DisplayClass16_0();
	
			// Methods
			internal object _TryConvertOrCast_b__0();
		}
	
		// Constructors
		static ConvertUtils();
	
		// Methods
		private static Func<object, object> CreateCastConverter(TypeConvertKey t);
		public static bool CanConvertType(System.Type initialType, System.Type targetType, bool allowTypeNameToString);
		private static bool IsComponentConverter(TypeConverter converter);
		public static T Convert<T>(object initialValue);
		public static T Convert<T>(object initialValue, CultureInfo culture);
		public static object Convert(object initialValue, CultureInfo culture, System.Type targetType);
		public static bool TryConvert<T>(object initialValue, out ref T convertedValue);
		public static bool TryConvert<T>(object initialValue, CultureInfo culture, out ref T convertedValue);
		public static bool TryConvert(object initialValue, CultureInfo culture, System.Type targetType, out object convertedValue);
		public static T ConvertOrCast<T>(object initialValue);
		public static T ConvertOrCast<T>(object initialValue, CultureInfo culture);
		public static object ConvertOrCast(object initialValue, CultureInfo culture, System.Type targetType);
		public static bool TryConvertOrCast<T>(object initialValue, out ref T convertedValue);
		public static bool TryConvertOrCast<T>(object initialValue, CultureInfo culture, out ref T convertedValue);
		public static bool TryConvertOrCast(object initialValue, CultureInfo culture, System.Type targetType, out object convertedValue);
		private static object EnsureTypeAssignable(object value, System.Type initialType, System.Type targetType);
		internal static TypeConverter GetConverter(System.Type t);
		public static bool IsInteger(object value);
	}
}
