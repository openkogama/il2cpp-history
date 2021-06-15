/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class EnumUtils
	{
		// Fields
		[CompilerGenerated]
		private static Func<FieldInfo, bool> __f__am_cache0;
		[CompilerGenerated]
		private static Func<FieldInfo, bool> __f__am_cache1;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _TryParse_c__AnonStorey0<T>
			where T : struct
		{
			// Fields
			internal string enumMemberName;
			internal bool ignoreCase;
	
			// Constructors
			public _TryParse_c__AnonStorey0();
	
			// Methods
			internal T __m__0();
		}
	
		// Methods
		public static T Parse<T>(string enumMemberName)
			where T : struct;
		public static T Parse<T>(string enumMemberName, bool ignoreCase)
			where T : struct;
		public static bool TryParse<T>(string enumMemberName, bool ignoreCase, out ref T value)
			where T : struct;
		public static IList<T> GetFlagsValues<T>(T value)
			where T : struct;
		public static EnumValues<ulong> GetNamesAndValues<T>()
			where T : struct;
		public static EnumValues<TUnderlyingType> GetNamesAndValues<TEnum, TUnderlyingType>()
			where TEnum : struct
			where TUnderlyingType : struct;
		public static EnumValues<TUnderlyingType> GetNamesAndValues<TUnderlyingType>(Type enumType)
			where TUnderlyingType : struct;
		public static IList<T> GetValues<T>();
		public static IList<object> GetValues(Type enumType);
		public static IList<string> GetNames<T>();
		public static IList<string> GetNames(Type enumType);
		public static TEnumType GetMaximumValue<TEnumType>(Type enumType)
			where TEnumType : IConvertible, IComparable<TEnumType>;
		[CompilerGenerated]
		private static bool _GetFlagsValues_1_m__0<T>(EnumValue<ulong> v)
			where T : struct;
		[CompilerGenerated]
		private static bool _GetValues_m__1(FieldInfo field);
		[CompilerGenerated]
		private static bool _GetNames_m__2(FieldInfo field);
	}
}
