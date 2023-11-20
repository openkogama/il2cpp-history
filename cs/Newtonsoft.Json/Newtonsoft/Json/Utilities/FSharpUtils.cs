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

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class FSharpUtils
	{
		// Fields
		private static readonly object Lock;
		[Nullable(2)]
		private static FSharpUtils _instance;
		private MethodInfo _ofSeq;
		private System.Type _mapType;
		[CompilerGenerated]
		private Assembly _FSharpCoreAssembly_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {1, 2, 1 })]
		private MethodCall<object, object> _IsUnion_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {1, 2, 1 })]
		private MethodCall<object, object> _GetUnionCases_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {1, 2, 1 })]
		private MethodCall<object, object> _PreComputeUnionTagReader_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {1, 2, 1 })]
		private MethodCall<object, object> _PreComputeUnionReader_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {1, 2, 1 })]
		private MethodCall<object, object> _PreComputeUnionConstructor_k__BackingField;
		[CompilerGenerated]
		private Func<object, object> _GetUnionCaseInfoDeclaringType_k__BackingField;
		[CompilerGenerated]
		private Func<object, object> _GetUnionCaseInfoName_k__BackingField;
		[CompilerGenerated]
		private Func<object, object> _GetUnionCaseInfoTag_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {1, 1, 2 })]
		private MethodCall<object, object> _GetUnionCaseInfoFields_k__BackingField;
	
		// Properties
		public static FSharpUtils Instance { get; }
		private Assembly FSharpCoreAssembly { [CompilerGenerated] set; }
		[Nullable(new byte[3] {1, 2, 1 })]
		public MethodCall<object, object> IsUnion { [CompilerGenerated] get; [CompilerGenerated] private set; }
		[Nullable(new byte[3] {1, 2, 1 })]
		public MethodCall<object, object> GetUnionCases { [CompilerGenerated] get; [CompilerGenerated] private set; }
		[Nullable(new byte[3] {1, 2, 1 })]
		public MethodCall<object, object> PreComputeUnionTagReader { [CompilerGenerated] get; [CompilerGenerated] private set; }
		[Nullable(new byte[3] {1, 2, 1 })]
		public MethodCall<object, object> PreComputeUnionReader { [CompilerGenerated] get; [CompilerGenerated] private set; }
		[Nullable(new byte[3] {1, 2, 1 })]
		public MethodCall<object, object> PreComputeUnionConstructor { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Func<object, object> GetUnionCaseInfoDeclaringType { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Func<object, object> GetUnionCaseInfoName { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Func<object, object> GetUnionCaseInfoTag { [CompilerGenerated] get; [CompilerGenerated] private set; }
		[Nullable(new byte[3] {1, 1, 2 })]
		public MethodCall<object, object> GetUnionCaseInfoFields { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c__55<TKey, TValue>
		{
			// Fields
			[Nullable(0)]
			public static readonly __c__55<TKey, TValue> __9;
			[Nullable(0)]
			public static Func<KeyValuePair<TKey, TValue>, Tuple<TKey, TValue>> __9__55_1;
	
			// Constructors
			static __c__55();
			public __c__55();
	
			// Methods
			[NullableContext(0)]
			internal Tuple<TKey, TValue> _BuildMapCreator_b__55_1(KeyValuePair<TKey, TValue> kv);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass52_0
		{
			// Fields
			[Nullable(new byte[3] {0, 2, 2 })]
			public MethodCall<object, object> call;
			[Nullable(new byte[3] {0, 2, 1 })]
			public MethodCall<object, object> invoke;
	
			// Constructors
			public __c__DisplayClass52_0();
	
			// Methods
			internal object _CreateFSharpFuncCall_b__0([Nullable(2)] object target, [Nullable(new byte[2] {1, 2 })] object[] args);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass55_0<TKey, TValue>
		{
			// Fields
			[Nullable(new byte[2] {0, 1 })]
			public ObjectConstructor<object> ctorDelegate;
	
			// Constructors
			public __c__DisplayClass55_0();
	
			// Methods
			internal object _BuildMapCreator_b__0([Nullable(new byte[2] {1, 2 })] object[] args);
		}
	
		// Constructors
		private FSharpUtils(Assembly fsharpCoreAssembly);
		static FSharpUtils();
	
		// Methods
		public static void EnsureInitialized(Assembly fsharpCoreAssembly);
		private static MethodInfo GetMethodWithNonPublicFallback(System.Type type, string methodName, BindingFlags bindingFlags);
		private static MethodCall<object, object> CreateFSharpFuncCall(System.Type type, string methodName);
		public ObjectConstructor<object> CreateSeq(System.Type t);
		public ObjectConstructor<object> CreateMap(System.Type keyType, System.Type valueType);
		[NullableContext(2)]
		public ObjectConstructor<object> BuildMapCreator<TKey, TValue>();
	}
}
