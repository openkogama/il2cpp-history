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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
		[DebuggerBrowsable]
		private BindingFlags _DefaultMembersSearchFlags_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool _SerializeCompilerGeneratedMembers_k__BackingField;
		[CompilerGenerated]
		private static Func<MemberInfo, bool> __f__am_cache0;
		[CompilerGenerated]
		private static Func<MemberInfo, bool> __f__am_cache1;
		[CompilerGenerated]
		private static Func<ConstructorInfo, bool> __f__am_cache2;
		[CompilerGenerated]
		private static Func<ConstructorInfo, bool> __f__am_cache3;
		[CompilerGenerated]
		private static Func<JsonProperty, int> __f__am_cache4;
	
		// Properties
		internal static IContractResolver Instance { get; }
		public bool DynamicCodeGeneration { get; }
		public BindingFlags DefaultMembersSearchFlags { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool SerializeCompilerGeneratedMembers { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class _CreateISerializableContract_c__AnonStorey0
		{
			// Fields
			internal MethodCall<object, object> methodCall;
	
			// Constructors
			public _CreateISerializableContract_c__AnonStorey0();
	
			// Methods
			internal object __m__0(object[] args);
		}
	
		[CompilerGenerated]
		private sealed class _CreateShouldSerializeTest_c__AnonStorey1
		{
			// Fields
			internal MethodCall<object, object> shouldSerializeCall;
	
			// Constructors
			public _CreateShouldSerializeTest_c__AnonStorey1();
	
			// Methods
			internal bool __m__0(object o);
		}
	
		[CompilerGenerated]
		private sealed class _SetIsSpecifiedActions_c__AnonStorey2
		{
			// Fields
			internal Func<object, object> specifiedPropertyGet;
	
			// Constructors
			public _SetIsSpecifiedActions_c__AnonStorey2();
	
			// Methods
			internal bool __m__0(object o);
		}
	
		// Constructors
		public DefaultContractResolver();
		public DefaultContractResolver(bool shareCache);
		static DefaultContractResolver();
	
		// Methods
		private Dictionary<ResolverContractKey, JsonContract> GetCache();
		private void UpdateCache(Dictionary<ResolverContractKey, JsonContract> cache);
		public virtual JsonContract ResolveContract(Type type);
		protected virtual List<MemberInfo> GetSerializableMembers(Type objectType);
		private bool ShouldSerializeEntityMember(MemberInfo memberInfo);
		protected virtual JsonObjectContract CreateObjectContract(Type objectType);
		private ConstructorInfo GetAttributeConstructor(Type objectType);
		private ConstructorInfo GetParametrizedConstructor(Type objectType);
		protected virtual IList<JsonProperty> CreateConstructorParameters(ConstructorInfo constructor, JsonPropertyCollection memberProperties);
		protected virtual JsonProperty CreatePropertyFromConstructorParameter(JsonProperty matchingMemberProperty, ParameterInfo parameterInfo);
		protected virtual JsonConverter ResolveContractConverter(Type objectType);
		private Func<object> GetDefaultCreator(Type createdType);
		private void InitializeContract(JsonContract contract);
		private void ResolveCallbackMethods(JsonContract contract, Type t);
		private void GetCallbackMethodsForType(Type type, out MethodInfo onSerializing, out MethodInfo onSerialized, out MethodInfo onDeserializing, out MethodInfo onDeserialized, out MethodInfo onError);
		protected virtual JsonDictionaryContract CreateDictionaryContract(Type objectType);
		protected virtual JsonArrayContract CreateArrayContract(Type objectType);
		protected virtual JsonPrimitiveContract CreatePrimitiveContract(Type objectType);
		protected virtual JsonLinqContract CreateLinqContract(Type objectType);
		protected virtual JsonISerializableContract CreateISerializableContract(Type objectType);
		protected virtual JsonStringContract CreateStringContract(Type objectType);
		protected virtual JsonContract CreateContract(Type objectType);
		internal static bool CanConvertToString(Type type);
		private static bool IsValidCallback(MethodInfo method, ParameterInfo[] parameters, Type attributeType, MethodInfo currentCallback, ref Type prevAttributeType);
		internal static string GetClrTypeFullName(Type type);
		protected virtual IList<JsonProperty> CreateProperties(Type type, MemberSerialization memberSerialization);
		protected virtual IValueProvider CreateMemberValueProvider(MemberInfo member);
		protected virtual JsonProperty CreateProperty(MemberInfo member, MemberSerialization memberSerialization);
		private void SetPropertySettingsFromAttributes(JsonProperty property, ICustomAttributeProvider attributeProvider, string name, Type declaringType, MemberSerialization memberSerialization, out bool allowNonPublicAccess, out bool hasExplicitAttribute);
		private Predicate<object> CreateShouldSerializeTest(MemberInfo member);
		private void SetIsSpecifiedActions(JsonProperty property, MemberInfo member, bool allowNonPublicAccess);
		protected internal virtual string ResolvePropertyName(string propertyName);
		[CompilerGenerated]
		private static bool _GetSerializableMembers_m__0(MemberInfo m);
		[CompilerGenerated]
		private static bool _GetSerializableMembers_m__1(MemberInfo m);
		[CompilerGenerated]
		private static bool _CreateObjectContract_m__2(ConstructorInfo c);
		[CompilerGenerated]
		private static bool _GetAttributeConstructor_m__3(ConstructorInfo c);
		[CompilerGenerated]
		private static int _CreateProperties_m__4(JsonProperty p);
	}
}
