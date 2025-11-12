/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Runtime.Versioning;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	public class DefaultContractResolver : IContractResolver
	{
		// Fields
		private static readonly IContractResolver _instance;
		private static readonly string[] BlacklistedTypeNames;
		private static readonly JsonConverter[] BuiltInConverters;
		private readonly DefaultJsonNameTable _nameTable;
		private readonly ThreadSafeStore<System.Type, JsonContract> _contractCache;
		[CompilerGenerated]
		private BindingFlags _DefaultMembersSearchFlags_k__BackingField;
		[CompilerGenerated]
		private bool _SerializeCompilerGeneratedMembers_k__BackingField;
		[CompilerGenerated]
		private bool _IgnoreSerializableInterface_k__BackingField;
		[CompilerGenerated]
		private bool _IgnoreSerializableAttribute_k__BackingField;
		[CompilerGenerated]
		private bool _IgnoreIsSpecifiedMembers_k__BackingField;
		[CompilerGenerated]
		private bool _IgnoreShouldSerializeMembers_k__BackingField;
		[CompilerGenerated]
		[Nullable(2)]
		private NamingStrategy _NamingStrategy_k__BackingField;
	
		// Properties
		internal static IContractResolver Instance { get; }
		[Obsolete("DefaultMembersSearchFlags is obsolete. To modify the members serialized inherit from DefaultContractResolver and override the GetSerializableMembers method instead.")]
		public BindingFlags DefaultMembersSearchFlags { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool SerializeCompilerGeneratedMembers { [CompilerGenerated] get; }
		public bool IgnoreSerializableInterface { [CompilerGenerated] get; }
		public bool IgnoreSerializableAttribute { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool IgnoreIsSpecifiedMembers { [CompilerGenerated] get; }
		public bool IgnoreShouldSerializeMembers { [CompilerGenerated] get; }
		[Nullable(2)]
		public NamingStrategy NamingStrategy { [NullableContext(2)] [CompilerGenerated] get; }
	
		// Nested types
		[NullableContext(0)]
		internal class EnumerableDictionaryWrapper<TEnumeratorKey, TEnumeratorValue> : IEnumerable<KeyValuePair<object, object>>
		{
			// Fields
			[Nullable(new byte[4] {1, 0, 1, 1 })]
			private readonly IEnumerable<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> _e;
	
			// Nested types
			[CompilerGenerated]
			private sealed class _GetEnumerator_d__2 : IEnumerator<KeyValuePair<object, object>>
			{
				// Fields
				private int __1__state;
				[Nullable(new byte[3] {0, 1, 1 })]
				private KeyValuePair<object, object> __2__current;
				public EnumerableDictionaryWrapper<TEnumeratorKey, TEnumeratorValue> __4__this;
				[Nullable(new byte[4] {0, 0, 1, 1 })]
				private IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> __7__wrap1;
	
				// Properties
				KeyValuePair<object, object> IEnumerator<System.Collections.Generic.KeyValuePair<System.Object,System.Object>>.Current { [DebuggerHidden] get; }
				object IEnumerator.Current { [DebuggerHidden] get; }
	
				// Constructors
				[DebuggerHidden]
				public _GetEnumerator_d__2(int __1__state);
	
				// Methods
				[DebuggerHidden]
				void IDisposable.Dispose();
				private bool MoveNext();
				private void __m__Finally1();
				[DebuggerHidden]
				void IEnumerator.Reset();
			}
	
			// Constructors
			public EnumerableDictionaryWrapper([Nullable(new byte[4] {1, 0, 1, 1 })] IEnumerable<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> e);
	
			// Methods
			[IteratorStateMachine(typeof(_GetEnumerator_d__2))]
			public IEnumerator<KeyValuePair<object, object>> GetEnumerator();
			[NullableContext(1)]
			IEnumerator IEnumerable.GetEnumerator();
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			[Nullable(0)]
			public static readonly __c __9;
			[Nullable(0)]
			public static Func<MemberInfo, bool> __9__40_0;
			[Nullable(0)]
			public static Func<MemberInfo, bool> __9__40_1;
			[Nullable(0)]
			public static Func<System.Type, IEnumerable<MemberInfo>> __9__44_0;
			[Nullable(0)]
			public static Func<MemberInfo, bool> __9__44_1;
			[Nullable(0)]
			public static Func<ConstructorInfo, bool> __9__47_0;
			[Nullable(0)]
			public static Func<JsonProperty, int> __9__75_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			[NullableContext(0)]
			internal bool _GetSerializableMembers_b__40_0(MemberInfo m);
			[NullableContext(0)]
			internal bool _GetSerializableMembers_b__40_1(MemberInfo m);
			[NullableContext(0)]
			internal IEnumerable<MemberInfo> _GetExtensionDataMemberForType_b__44_0(System.Type baseType);
			[NullableContext(0)]
			internal bool _GetExtensionDataMemberForType_b__44_1(MemberInfo m);
			[NullableContext(0)]
			internal bool _GetAttributeConstructor_b__47_0(ConstructorInfo c);
			[NullableContext(0)]
			internal int _CreateProperties_b__75_0(JsonProperty p);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass42_0
		{
			// Fields
			[Nullable(0)]
			public NamingStrategy namingStrategy;
	
			// Constructors
			public __c__DisplayClass42_0();
	
			// Methods
			internal string _CreateObjectContract_b__0(string s);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass45_0
		{
			// Fields
			[Nullable(new byte[3] {0, 1, 2 })]
			public Func<object, object> getExtensionDataDictionary;
			[Nullable(0)]
			public MemberInfo member;
	
			// Constructors
			public __c__DisplayClass45_0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass45_1
		{
			// Fields
			[Nullable(new byte[3] {0, 1, 2 })]
			public Action<object, object> setExtensionDataDictionary;
			[Nullable(new byte[2] {0, 1 })]
			public Func<object> createExtensionDataDictionary;
			[Nullable(new byte[3] {0, 1, 2 })]
			public MethodCall<object, object> setExtensionDataDictionaryValue;
			[Nullable(0)]
			public __c__DisplayClass45_0 CS___8__locals1;
	
			// Constructors
			public __c__DisplayClass45_1();
	
			// Methods
			internal void _SetExtensionDataDelegates_b__0(object o, string key, [Nullable(2)] object value);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass45_2
		{
			// Fields
			[Nullable(new byte[2] {0, 1 })]
			public ObjectConstructor<object> createEnumerableWrapper;
			[Nullable(0)]
			public __c__DisplayClass45_0 CS___8__locals2;
	
			// Constructors
			public __c__DisplayClass45_2();
	
			// Methods
			internal IEnumerable<KeyValuePair<object, object>> _SetExtensionDataDelegates_b__1(object o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass62_0
		{
			// Fields
			[Nullable(0)]
			public NamingStrategy namingStrategy;
	
			// Constructors
			public __c__DisplayClass62_0();
	
			// Methods
			internal string _CreateDictionaryContract_b__0(string s);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass67_0
		{
			// Fields
			[Nullable(0)]
			public NamingStrategy namingStrategy;
	
			// Constructors
			public __c__DisplayClass67_0();
	
			// Methods
			internal string _CreateDynamicContract_b__0(string s);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass80_0
		{
			// Fields
			[Nullable(new byte[3] {0, 1, 2 })]
			public MethodCall<object, object> shouldSerializeCall;
	
			// Constructors
			public __c__DisplayClass80_0();
	
			// Methods
			internal bool _CreateShouldSerializeTest_b__0(object o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass81_0
		{
			// Fields
			[Nullable(new byte[3] {0, 1, 1 })]
			public Func<object, object> specifiedPropertyGet;
	
			// Constructors
			public __c__DisplayClass81_0();
	
			// Methods
			internal bool _SetIsSpecifiedActions_b__0(object o);
		}
	
		// Constructors
		public DefaultContractResolver();
		static DefaultContractResolver();
	
		// Methods
		public virtual JsonContract ResolveContract(System.Type type);
		private static bool FilterMembers(MemberInfo member);
		protected virtual List<MemberInfo> GetSerializableMembers(System.Type objectType);
		private bool ShouldSerializeEntityMember(MemberInfo memberInfo);
		protected virtual JsonObjectContract CreateObjectContract(System.Type objectType);
		private static void ThrowUnableToSerializeError(object o, StreamingContext context);
		private MemberInfo GetExtensionDataMemberForType(System.Type type);
		private static void SetExtensionDataDelegates(JsonObjectContract contract, MemberInfo member);
		private ConstructorInfo GetAttributeConstructor(System.Type objectType);
		private ConstructorInfo GetImmutableConstructor(System.Type objectType, JsonPropertyCollection memberProperties);
		private ConstructorInfo GetParameterizedConstructor(System.Type objectType);
		protected virtual IList<JsonProperty> CreateConstructorParameters(ConstructorInfo constructor, JsonPropertyCollection memberProperties);
		private JsonProperty MatchProperty(JsonPropertyCollection properties, string name, System.Type type);
		protected virtual JsonProperty CreatePropertyFromConstructorParameter([Nullable(2)] JsonProperty matchingMemberProperty, ParameterInfo parameterInfo);
		protected virtual JsonConverter ResolveContractConverter(System.Type objectType);
		private Func<object> GetDefaultCreator(System.Type createdType);
		private void InitializeContract(JsonContract contract);
		private void ResolveCallbackMethods(JsonContract contract, System.Type t);
		private void GetCallbackMethodsForType(System.Type type, [Nullable(new byte[2] {2, 1 })] out List<SerializationCallback> onSerializing, [Nullable(new byte[2] {2, 1 })] out List<SerializationCallback> onSerialized, [Nullable(new byte[2] {2, 1 })] out List<SerializationCallback> onDeserializing, [Nullable(new byte[2] {2, 1 })] out List<SerializationCallback> onDeserialized, [Nullable(new byte[2] {2, 1 })] out List<SerializationErrorCallback> onError);
		private static bool IsConcurrentOrObservableCollection(System.Type t);
		private static bool ShouldSkipDeserialized(System.Type t);
		private static bool ShouldSkipSerializing(System.Type t);
		private List<System.Type> GetClassHierarchyForType(System.Type type);
		protected virtual JsonDictionaryContract CreateDictionaryContract(System.Type objectType);
		protected virtual JsonArrayContract CreateArrayContract(System.Type objectType);
		protected virtual JsonPrimitiveContract CreatePrimitiveContract(System.Type objectType);
		protected virtual JsonLinqContract CreateLinqContract(System.Type objectType);
		protected virtual JsonISerializableContract CreateISerializableContract(System.Type objectType);
		protected virtual JsonDynamicContract CreateDynamicContract(System.Type objectType);
		protected virtual JsonStringContract CreateStringContract(System.Type objectType);
		protected virtual JsonContract CreateContract(System.Type objectType);
		internal static bool IsJsonPrimitiveType(System.Type t);
		internal static bool IsIConvertible(System.Type t);
		internal static bool CanConvertToString(System.Type type);
		private static bool IsValidCallback(MethodInfo method, ParameterInfo[] parameters, System.Type attributeType, [Nullable(2)] MethodInfo currentCallback, [Nullable(2)] ref System.Type prevAttributeType);
		internal static string GetClrTypeFullName(System.Type type);
		protected virtual IList<JsonProperty> CreateProperties(System.Type type, MemberSerialization memberSerialization);
		internal virtual DefaultJsonNameTable GetNameTable();
		protected virtual IValueProvider CreateMemberValueProvider(MemberInfo member);
		protected virtual JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization);
		private void SetPropertySettingsFromAttributes(JsonProperty property, object attributeProvider, string name, System.Type declaringType, MemberSerialization memberSerialization, out bool allowNonPublicAccess);
		private Predicate<object> CreateShouldSerializeTest(MemberInfo member);
		private void SetIsSpecifiedActions(JsonProperty property, MemberInfo member, bool allowNonPublicAccess);
		protected virtual string ResolvePropertyName(string propertyName);
		protected virtual string ResolveExtensionDataName(string extensionDataName);
		protected virtual string ResolveDictionaryKey(string dictionaryKey);
		public string GetResolvedPropertyName(string propertyName);
	}
}
