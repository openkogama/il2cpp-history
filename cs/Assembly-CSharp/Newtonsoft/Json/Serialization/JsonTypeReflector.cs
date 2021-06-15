/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal static class JsonTypeReflector
	{
		// Fields
		public const string IdPropertyName = "$id";
		public const string RefPropertyName = "$ref";
		public const string TypePropertyName = "$type";
		public const string ValuePropertyName = "$value";
		public const string ArrayValuesPropertyName = "$values";
		public const string ShouldSerializePrefix = "ShouldSerialize";
		public const string SpecifiedPostfix = "Specified";
		private static readonly ThreadSafeStore<ICustomAttributeProvider, Type> JsonConverterTypeCache;
		private static readonly ThreadSafeStore<Type, Type> AssociatedMetadataTypesCache;
		private const string MetadataTypeAttributeTypeName = "System.ComponentModel.DataAnnotations.MetadataTypeAttribute, System.ComponentModel.DataAnnotations, Version=3.5.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35";
		private static Type _cachedMetadataTypeAttributeType;
		private static bool? _dynamicCodeGeneration;
		[CompilerGenerated]
		private static Func<ICustomAttributeProvider, Type> __f__mg_cache0;
		[CompilerGenerated]
		private static Func<Type, Type> __f__mg_cache1;
	
		// Properties
		public static bool DynamicCodeGeneration { get; }
		public static ReflectionDelegateFactory ReflectionDelegateFactory { get; }
	
		// Constructors
		static JsonTypeReflector();
	
		// Methods
		public static JsonContainerAttribute GetJsonContainerAttribute(Type type);
		public static JsonObjectAttribute GetJsonObjectAttribute(Type type);
		public static JsonArrayAttribute GetJsonArrayAttribute(Type type);
		public static DataContractAttribute GetDataContractAttribute(Type type);
		public static DataMemberAttribute GetDataMemberAttribute(MemberInfo memberInfo);
		public static MemberSerialization GetObjectMemberSerialization(Type objectType);
		private static Type GetJsonConverterType(ICustomAttributeProvider attributeProvider);
		private static Type GetJsonConverterTypeFromAttribute(ICustomAttributeProvider attributeProvider);
		public static JsonConverter GetJsonConverter(ICustomAttributeProvider attributeProvider, Type targetConvertedType);
		public static TypeConverter GetTypeConverter(Type type);
		private static Type GetAssociatedMetadataType(Type type);
		private static Type GetAssociateMetadataTypeFromAttribute(Type type);
		private static Type GetMetadataTypeAttributeType();
		private static T GetAttribute<T>(Type type)
			where T : Attribute;
		private static T GetAttribute<T>(MemberInfo memberInfo)
			where T : Attribute;
		public static T GetAttribute<T>(ICustomAttributeProvider attributeProvider)
			where T : Attribute;
	}
}
