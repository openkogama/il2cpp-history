/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Runtime.Versioning;
using Newtonsoft.Json.Serialization;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal static class EnumUtils
	{
		// Fields
		[Nullable(new byte[5] {1, 0, 1, 2, 1 })]
		private static readonly ThreadSafeStore<StructMultiKey<System.Type, NamingStrategy>, EnumInfo> ValuesAndNamesPerEnum;
		private static CamelCaseNamingStrategy _camelCaseNamingStrategy;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			[Nullable(0)]
			public static readonly __c __9;
			[Nullable(0)]
			public static Func<EnumMemberAttribute, string> __9__3_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			[NullableContext(0)]
			internal string _InitializeValuesAndNames_b__3_0(EnumMemberAttribute a);
		}
	
		// Constructors
		static EnumUtils();
	
		// Methods
		private static EnumInfo InitializeValuesAndNames([Nullable(new byte[3] {0, 1, 2 })] StructMultiKey<System.Type, NamingStrategy> key);
		public static bool TryToString(System.Type enumType, object value, [Nullable(2)] NamingStrategy namingStrategy, [Nullable(2)] [NotNullWhen(true)] out string name);
		private static string InternalFlagsFormat(EnumInfo entry, ulong result);
		public static EnumInfo GetEnumValuesAndNames(System.Type enumType);
		private static ulong ToUInt64(object value);
		public static object ParseEnum(System.Type enumType, [Nullable(2)] NamingStrategy namingStrategy, string value, bool disallowNumber);
		private static int? MatchName(string value, string[] enumNames, string[] resolvedNames, int valueIndex, int valueSubstringLength, StringComparison comparison);
		private static int? FindIndexByName(string[] enumNames, string value, int valueIndex, int valueSubstringLength, StringComparison comparison);
	}
}
