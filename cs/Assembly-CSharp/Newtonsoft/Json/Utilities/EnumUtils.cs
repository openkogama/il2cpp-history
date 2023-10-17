/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class EnumUtils
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass2_0<T>
			where T : struct
		{
			// Fields
			public string enumMemberName;
			public bool ignoreCase;
	
			// Constructors
			public __c__DisplayClass2_0();
	
			// Methods
			internal T _TryParse_b__0();
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c__3<T>
			where T : struct
		{
			// Fields
			public static readonly __c__3<T> __9;
			public static Func<EnumValue<ulong>, bool> __9__3_0;
	
			// Constructors
			static __c__3();
			public __c__3();
	
			// Methods
			internal bool _GetFlagsValues_b__3_0(EnumValue<ulong> v);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<FieldInfo, bool> __9__8_0;
			public static Func<FieldInfo, bool> __9__10_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal bool _GetValues_b__8_0(FieldInfo field);
			internal bool _GetNames_b__10_0(FieldInfo field);
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
		public static EnumValues<TUnderlyingType> GetNamesAndValues<TUnderlyingType>(System.Type enumType)
			where TUnderlyingType : struct;
		public static IList<T> GetValues<T>();
		public static IList<object> GetValues(System.Type enumType);
		public static IList<string> GetNames<T>();
		public static IList<string> GetNames(System.Type enumType);
		public static TEnumType GetMaximumValue<TEnumType>(System.Type enumType)
			where TEnumType : IConvertible, IComparable<TEnumType>;
	}
}
