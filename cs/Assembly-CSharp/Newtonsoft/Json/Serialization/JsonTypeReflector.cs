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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
		private static readonly ThreadSafeStore<ICustomAttributeProvider, System.Type> JsonConverterTypeCache;
		private static readonly ThreadSafeStore<System.Type, System.Type> AssociatedMetadataTypesCache;
		private const string MetadataTypeAttributeTypeName = "System.ComponentModel.DataAnnotations.MetadataTypeAttribute, System.ComponentModel.DataAnnotations, Version=3.5.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35";
		private static System.Type _cachedMetadataTypeAttributeType;
		private static bool? _dynamicCodeGeneration;
	
		// Properties
		public static bool DynamicCodeGeneration { get; }
		public static ReflectionDelegateFactory ReflectionDelegateFactory { get; }
	
		// Constructors
		static JsonTypeReflector();
	
		// Methods
		public static JsonContainerAttribute GetJsonContainerAttribute(System.Type type);
		public static JsonObjectAttribute GetJsonObjectAttribute(System.Type type);
		public static JsonArrayAttribute GetJsonArrayAttribute(System.Type type);
		public static DataContractAttribute GetDataContractAttribute(System.Type type);
		public static DataMemberAttribute GetDataMemberAttribute(MemberInfo memberInfo);
		public static MemberSerialization GetObjectMemberSerialization(System.Type objectType);
		private static System.Type GetJsonConverterType(ICustomAttributeProvider attributeProvider);
		private static System.Type GetJsonConverterTypeFromAttribute(ICustomAttributeProvider attributeProvider);
		public static JsonConverter GetJsonConverter(ICustomAttributeProvider attributeProvider, System.Type targetConvertedType);
		public static TypeConverter GetTypeConverter(System.Type type);
		private static System.Type GetAssociatedMetadataType(System.Type type);
		private static System.Type GetAssociateMetadataTypeFromAttribute(System.Type type);
		private static System.Type GetMetadataTypeAttributeType();
		private static T GetAttribute<T>(System.Type type)
			where T : Attribute;
		private static T GetAttribute<T>(MemberInfo memberInfo)
			where T : Attribute;
		public static T GetAttribute<T>(ICustomAttributeProvider attributeProvider)
			where T : Attribute;
	}
}
