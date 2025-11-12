/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	public class DiscriminatedUnionConverter : JsonConverter
	{
		// Fields
		private const string CasePropertyName = "Case";
		private const string FieldsPropertyName = "Fields";
		private static readonly ThreadSafeStore<System.Type, Union> UnionCache;
		private static readonly ThreadSafeStore<System.Type, System.Type> UnionTypeLookupCache;
	
		// Nested types
		[Nullable(0)]
		internal class Union
		{
			// Fields
			public readonly FSharpFunction TagReader;
			public readonly List<UnionCase> Cases;
	
			// Constructors
			public Union(FSharpFunction tagReader, List<UnionCase> cases);
		}
	
		[Nullable(0)]
		internal class UnionCase
		{
			// Fields
			public readonly int Tag;
			public readonly string Name;
			public readonly PropertyInfo[] Fields;
			public readonly FSharpFunction FieldReader;
			public readonly FSharpFunction Constructor;
	
			// Constructors
			public UnionCase(int tag, string name, PropertyInfo[] fields, FSharpFunction fieldReader, FSharpFunction constructor);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0
		{
			// Fields
			public int tag;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _WriteJson_b__0(UnionCase c);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0
		{
			// Fields
			[Nullable(0)]
			public string caseName;
			[Nullable(0)]
			public Func<UnionCase, bool> __9__0;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _ReadJson_b__0(UnionCase c);
		}
	
		// Constructors
		public DiscriminatedUnionConverter();
		static DiscriminatedUnionConverter();
	
		// Methods
		private static System.Type CreateUnionTypeLookup(System.Type t);
		private static Union CreateUnion(System.Type t);
		public override void WriteJson(JsonWriter writer, [Nullable(2)] object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, System.Type objectType, [Nullable(2)] object existingValue, JsonSerializer serializer);
		public override bool CanConvert(System.Type objectType);
	}
}
