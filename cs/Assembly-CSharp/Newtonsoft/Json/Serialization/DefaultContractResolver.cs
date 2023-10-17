/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public class DefaultContractResolver : IContractResolver
	{
		// Fields
		private static readonly IContractResolver _instance;
		private static readonly IList<JsonConverter> BuiltInConverters;
		private static Dictionary<ResolverContractKey, JsonContract> _sharedContractCache;
		private static readonly object _typeContractCacheLock;
		private Dictionary<ResolverContractKey, JsonContract> _instanceContractCache;
		private readonly bool _sharedCache;
		[CompilerGenerated]
		private BindingFlags _DefaultMembersSearchFlags_k__BackingField;
		[CompilerGenerated]
		private bool _SerializeCompilerGeneratedMembers_k__BackingField;
	
		// Properties
		internal static IContractResolver Instance { get; }
		public bool DynamicCodeGeneration { get; }
		public BindingFlags DefaultMembersSearchFlags { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool SerializeCompilerGeneratedMembers { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<MemberInfo, bool> __9__23_0;
			public static Func<MemberInfo, bool> __9__23_1;
			public static Func<ConstructorInfo, bool> __9__25_0;
			public static Func<ConstructorInfo, bool> __9__26_0;
			public static Func<JsonProperty, int> __9__45_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal bool _GetSerializableMembers_b__23_0(MemberInfo m);
			internal bool _GetSerializableMembers_b__23_1(MemberInfo m);
			internal bool _CreateObjectContract_b__25_0(ConstructorInfo c);
			internal bool _GetAttributeConstructor_b__26_0(ConstructorInfo c);
			internal int _CreateProperties_b__45_0(JsonProperty p);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass39_0
		{
			// Fields
			public MethodCall<object, object> methodCall;
	
			// Constructors
			public __c__DisplayClass39_0();
	
			// Methods
			internal object _CreateISerializableContract_b__0(object[] args);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass49_0
		{
			// Fields
			public MethodCall<object, object> shouldSerializeCall;
	
			// Constructors
			public __c__DisplayClass49_0();
	
			// Methods
			internal bool _CreateShouldSerializeTest_b__0(object o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass50_0
		{
			// Fields
			public Func<object, object> specifiedPropertyGet;
	
			// Constructors
			public __c__DisplayClass50_0();
	
			// Methods
			internal bool _SetIsSpecifiedActions_b__0(object o);
		}
	
		// Constructors
		public DefaultContractResolver();
		public DefaultContractResolver(bool shareCache);
		static DefaultContractResolver();
	
		// Methods
		private Dictionary<ResolverContractKey, JsonContract> GetCache();
		private void UpdateCache(Dictionary<ResolverContractKey, JsonContract> cache);
		public virtual JsonContract ResolveContract(System.Type type);
		protected virtual List<MemberInfo> GetSerializableMembers(System.Type objectType);
		private bool ShouldSerializeEntityMember(MemberInfo memberInfo);
		protected virtual JsonObjectContract CreateObjectContract(System.Type objectType);
		private ConstructorInfo GetAttributeConstructor(System.Type objectType);
		private ConstructorInfo GetParametrizedConstructor(System.Type objectType);
		protected virtual IList<JsonProperty> CreateConstructorParameters(ConstructorInfo constructor, JsonPropertyCollection memberProperties);
		protected virtual JsonProperty CreatePropertyFromConstructorParameter(JsonProperty matchingMemberProperty, ParameterInfo parameterInfo);
		protected virtual JsonConverter ResolveContractConverter(System.Type objectType);
		private Func<object> GetDefaultCreator(System.Type createdType);
		private void InitializeContract(JsonContract contract);
		private void ResolveCallbackMethods(JsonContract contract, System.Type t);
		private void GetCallbackMethodsForType(System.Type type, out MethodInfo onSerializing, out MethodInfo onSerialized, out MethodInfo onDeserializing, out MethodInfo onDeserialized, out MethodInfo onError);
		protected virtual JsonDictionaryContract CreateDictionaryContract(System.Type objectType);
		protected virtual JsonArrayContract CreateArrayContract(System.Type objectType);
		protected virtual JsonPrimitiveContract CreatePrimitiveContract(System.Type objectType);
		protected virtual JsonLinqContract CreateLinqContract(System.Type objectType);
		protected virtual JsonISerializableContract CreateISerializableContract(System.Type objectType);
		protected virtual JsonStringContract CreateStringContract(System.Type objectType);
		protected virtual JsonContract CreateContract(System.Type objectType);
		internal static bool CanConvertToString(System.Type type);
		private static bool IsValidCallback(MethodInfo method, ParameterInfo[] parameters, System.Type attributeType, MethodInfo currentCallback, ref System.Type prevAttributeType);
		internal static string GetClrTypeFullName(System.Type type);
		protected virtual IList<JsonProperty> CreateProperties(System.Type type, MemberSerialization memberSerialization);
		protected virtual IValueProvider CreateMemberValueProvider(MemberInfo member);
		protected virtual JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization);
		private void SetPropertySettingsFromAttributes(JsonProperty property, ICustomAttributeProvider attributeProvider, string name, System.Type declaringType, MemberSerialization memberSerialization, out bool allowNonPublicAccess, out bool hasExplicitAttribute);
		private Predicate<object> CreateShouldSerializeTest(MemberInfo member);
		private void SetIsSpecifiedActions(JsonProperty property, MemberInfo member, bool allowNonPublicAccess);
		protected internal virtual string ResolvePropertyName(string propertyName);
	}
}
