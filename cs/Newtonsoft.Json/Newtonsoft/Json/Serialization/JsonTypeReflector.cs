/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.ComponentModel;
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
	internal static class JsonTypeReflector
	{
		// Fields
		private static bool? _fullyTrusted;
		[Nullable(new byte[6] {1, 1, 1, 2, 1, 1 })]
		private static readonly ThreadSafeStore<System.Type, Func<object[], object>> CreatorCache;
		[Nullable(new byte[3] {1, 1, 2 })]
		private static readonly ThreadSafeStore<System.Type, System.Type> AssociatedMetadataTypesCache;
		[Nullable(2)]
		private static ReflectionObject _metadataTypeAttributeReflectionObject;
	
		// Properties
		public static bool FullyTrusted { get; }
		public static ReflectionDelegateFactory ReflectionDelegateFactory { get; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			[Nullable(0)]
			public static readonly __c __9;
			[Nullable(0)]
			public static Func<object, System.Type> __9__22_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			[NullableContext(0)]
			internal System.Type _GetCreator_b__22_1(object param);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass22_0
		{
			// Fields
			[Nullable(0)]
			public System.Type type;
			[Nullable(new byte[2] {0, 1 })]
			public Func<object> defaultConstructor;
	
			// Constructors
			public __c__DisplayClass22_0();
	
			// Methods
			internal object _GetCreator_b__0([Nullable(new byte[2] {2, 1 })] object[] parameters);
		}
	
		// Constructors
		static JsonTypeReflector();
	
		// Methods
		public static T GetCachedAttribute<T>(object attributeProvider)
			where T : Attribute;
		public static bool CanTypeDescriptorConvertString(System.Type type, out TypeConverter typeConverter);
		public static DataContractAttribute GetDataContractAttribute(System.Type type);
		public static DataMemberAttribute GetDataMemberAttribute(MemberInfo memberInfo);
		public static MemberSerialization GetObjectMemberSerialization(System.Type objectType, bool ignoreSerializableAttribute);
		public static JsonConverter GetJsonConverter(object attributeProvider);
		public static JsonConverter CreateJsonConverterInstance(System.Type converterType, [Nullable(new byte[2] {2, 1 })] object[] args);
		public static NamingStrategy CreateNamingStrategyInstance(System.Type namingStrategyType, [Nullable(new byte[2] {2, 1 })] object[] args);
		public static NamingStrategy GetContainerNamingStrategy(JsonContainerAttribute containerAttribute);
		private static Func<object[], object> GetCreator(System.Type type);
		private static System.Type GetAssociatedMetadataType(System.Type type);
		private static System.Type GetAssociateMetadataTypeFromAttribute(System.Type type);
		private static T GetAttribute<T>(System.Type type)
			where T : Attribute;
		private static T GetAttribute<T>(MemberInfo memberInfo)
			where T : Attribute;
		public static bool IsNonSerializable(object provider);
		public static bool IsSerializable(object provider);
		public static T GetAttribute<T>(object provider)
			where T : Attribute;
	}
}
