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
using Newtonsoft.Json.Serialization;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal static class ImmutableCollectionsUtils
	{
		// Fields
		private static readonly IList<ImmutableCollectionTypeInfo> ArrayContractImmutableCollectionDefinitions;
		private static readonly IList<ImmutableCollectionTypeInfo> DictionaryContractImmutableCollectionDefinitions;
	
		// Nested types
		[Nullable(0)]
		internal class ImmutableCollectionTypeInfo
		{
			// Fields
			[CompilerGenerated]
			private string _ContractTypeName_k__BackingField;
			[CompilerGenerated]
			private string _CreatedTypeName_k__BackingField;
			[CompilerGenerated]
			private string _BuilderTypeName_k__BackingField;
	
			// Properties
			public string ContractTypeName { [CompilerGenerated] get; [CompilerGenerated] set; }
			public string CreatedTypeName { [CompilerGenerated] get; [CompilerGenerated] set; }
			public string BuilderTypeName { [CompilerGenerated] get; [CompilerGenerated] set; }
	
			// Constructors
			public ImmutableCollectionTypeInfo(string contractTypeName, string createdTypeName, string builderTypeName);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			[Nullable(0)]
			public static readonly __c __9;
			[Nullable(0)]
			public static Func<MethodInfo, bool> __9__24_1;
			[Nullable(0)]
			public static Func<MethodInfo, bool> __9__25_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			[NullableContext(0)]
			internal bool _TryBuildImmutableForArrayContract_b__24_1(MethodInfo m);
			[NullableContext(0)]
			internal bool _TryBuildImmutableForDictionaryContract_b__25_1(MethodInfo m);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass24_0
		{
			// Fields
			[Nullable(0)]
			public string name;
	
			// Constructors
			public __c__DisplayClass24_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _TryBuildImmutableForArrayContract_b__0(ImmutableCollectionTypeInfo d);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass25_0
		{
			// Fields
			[Nullable(0)]
			public string name;
	
			// Constructors
			public __c__DisplayClass25_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _TryBuildImmutableForDictionaryContract_b__0(ImmutableCollectionTypeInfo d);
		}
	
		// Constructors
		static ImmutableCollectionsUtils();
	
		// Methods
		internal static bool TryBuildImmutableForArrayContract(System.Type underlyingType, System.Type collectionItemType, [Nullable(2)] [NotNullWhen(true)] out System.Type createdType, [Nullable(new byte[2] {2, 1 })] [NotNullWhen(true)] out ObjectConstructor<object> parameterizedCreator);
		internal static bool TryBuildImmutableForDictionaryContract(System.Type underlyingType, System.Type keyItemType, System.Type valueItemType, [Nullable(2)] [NotNullWhen(true)] out System.Type createdType, [Nullable(new byte[2] {2, 1 })] [NotNullWhen(true)] out ObjectConstructor<object> parameterizedCreator);
	}
}
