/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class JsonSerializerInternalReader : JsonSerializerInternalBase
	{
		// Nested types
		[NullableContext(0)]
		internal enum PropertyPresence
		{
			None = 0,
			Null = 1,
			Value = 2
		}
	
		[Nullable(0)]
		[NullableContext(2)]
		internal class CreatorPropertyContext
		{
			// Fields
			[Nullable(1)]
			public readonly string Name;
			public JsonProperty Property;
			public JsonProperty ConstructorProperty;
			public PropertyPresence? Presence;
			public object Value;
			public bool Used;
	
			// Constructors
			[NullableContext(1)]
			public CreatorPropertyContext(string name);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			[Nullable(0)]
			public static readonly __c __9;
			[Nullable(0)]
			public static Func<JsonProperty, string> __9__38_0;
			[Nullable(new byte[3] {0, 0, 1 })]
			public static Func<JsonProperty, string> __9__38_2;
			[Nullable(0)]
			public static Func<JsonProperty, JsonProperty> __9__42_0;
			[Nullable(0)]
			public static Func<JsonProperty, PropertyPresence> __9__42_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			[NullableContext(0)]
			internal string _CreateObjectUsingCreatorWithParameters_b__38_0(JsonProperty p);
			[NullableContext(0)]
			internal string _CreateObjectUsingCreatorWithParameters_b__38_2(JsonProperty p);
			[NullableContext(0)]
			internal JsonProperty _PopulateObject_b__42_0(JsonProperty m);
			[NullableContext(0)]
			internal PropertyPresence _PopulateObject_b__42_1(JsonProperty m);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass38_0
		{
			// Fields
			[Nullable(0)]
			public JsonProperty property;
	
			// Constructors
			public __c__DisplayClass38_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _CreateObjectUsingCreatorWithParameters_b__1(CreatorPropertyContext p);
		}
	
		// Constructors
		public JsonSerializerInternalReader(JsonSerializer serializer);
	
		// Methods
		public void Populate(JsonReader reader, object target);
		[NullableContext(2)]
		private JsonContract GetContractSafe(System.Type type);
		private JsonContract GetContract(System.Type type);
		[NullableContext(2)]
		public object Deserialize([Nullable(1)] JsonReader reader, System.Type objectType, bool checkAdditionalContent);
		private JsonSerializerProxy GetInternalSerializer();
		[NullableContext(2)]
		private JToken CreateJToken([Nullable(1)] JsonReader reader, JsonContract contract);
		private JToken CreateJObject(JsonReader reader);
		[NullableContext(2)]
		private object CreateValueInternal([Nullable(1)] JsonReader reader, System.Type objectType, JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, object existingValue);
		[NullableContext(2)]
		private static bool CoerceEmptyStringToNull(System.Type objectType, JsonContract contract, [Nullable(1)] string s);
		internal string GetExpectedDescription(JsonContract contract);
		[NullableContext(2)]
		private JsonConverter GetConverter(JsonContract contract, JsonConverter memberConverter, JsonContainerContract containerContract, JsonProperty containerProperty);
		[NullableContext(2)]
		private object CreateObject([Nullable(1)] JsonReader reader, System.Type objectType, JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, object existingValue);
		[NullableContext(2)]
		private bool ReadMetadataPropertiesToken([Nullable(1)] JTokenReader reader, ref System.Type objectType, ref JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, object existingValue, out object newValue, out string id);
		[NullableContext(2)]
		private bool ReadMetadataProperties([Nullable(1)] JsonReader reader, ref System.Type objectType, ref JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, object existingValue, out object newValue, out string id);
		[NullableContext(2)]
		private void ResolveTypeName([Nullable(1)] JsonReader reader, ref System.Type objectType, ref JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerMember, [Nullable(1)] string qualifiedTypeName);
		private JsonArrayContract EnsureArrayContract(JsonReader reader, System.Type objectType, JsonContract contract);
		[NullableContext(2)]
		private object CreateList([Nullable(1)] JsonReader reader, System.Type objectType, JsonContract contract, JsonProperty member, object existingValue, string id);
		[NullableContext(2)]
		private bool HasNoDefinedType(JsonContract contract);
		[NullableContext(2)]
		private object EnsureType([Nullable(1)] JsonReader reader, object value, [Nullable(1)] CultureInfo culture, JsonContract contract, System.Type targetType);
		private bool SetPropertyValue(JsonProperty property, [Nullable(2)] JsonConverter propertyConverter, [Nullable(2)] JsonContainerContract containerContract, [Nullable(2)] JsonProperty containerProperty, JsonReader reader, object target);
		[NullableContext(2)]
		private bool CalculatePropertyDetails([Nullable(1)] JsonProperty property, ref JsonConverter propertyConverter, JsonContainerContract containerContract, JsonProperty containerProperty, [Nullable(1)] JsonReader reader, [Nullable(1)] object target, out bool useExistingValue, out object currentValue, out JsonContract propertyContract, out bool gottenCurrentValue, out bool ignoredValue);
		private void AddReference(JsonReader reader, string id, object value);
		private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag);
		[NullableContext(2)]
		private bool ShouldSetPropertyValue([Nullable(1)] JsonProperty property, JsonObjectContract contract, object value);
		private IList CreateNewList(JsonReader reader, JsonArrayContract contract, out bool createdFromNonDefaultCreator);
		private IDictionary CreateNewDictionary(JsonReader reader, JsonDictionaryContract contract, out bool createdFromNonDefaultCreator);
		private void OnDeserializing(JsonReader reader, JsonContract contract, object value);
		private void OnDeserialized(JsonReader reader, JsonContract contract, object value);
		private object PopulateDictionary(IDictionary dictionary, JsonReader reader, JsonDictionaryContract contract, [Nullable(2)] JsonProperty containerProperty, [Nullable(2)] string id);
		private object PopulateMultidimensionalArray(IList list, JsonReader reader, JsonArrayContract contract, [Nullable(2)] JsonProperty containerProperty, [Nullable(2)] string id);
		private void ThrowUnexpectedEndException(JsonReader reader, JsonContract contract, [Nullable(2)] object currentObject, string message);
		private object PopulateList(IList list, JsonReader reader, JsonArrayContract contract, [Nullable(2)] JsonProperty containerProperty, [Nullable(2)] string id);
		private object CreateISerializable(JsonReader reader, JsonISerializableContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] string id);
		internal object CreateISerializableItem(JToken token, System.Type type, JsonISerializableContract contract, [Nullable(2)] JsonProperty member);
		private object CreateDynamic(JsonReader reader, JsonDynamicContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] string id);
		private object CreateObjectUsingCreatorWithParameters(JsonReader reader, JsonObjectContract contract, [Nullable(2)] JsonProperty containerProperty, ObjectConstructor<object> creator, [Nullable(2)] string id);
		private object DeserializeConvertable(JsonConverter converter, JsonReader reader, System.Type objectType, [Nullable(2)] object existingValue);
		private List<CreatorPropertyContext> ResolvePropertyAndCreatorValues(JsonObjectContract contract, [Nullable(2)] JsonProperty containerProperty, JsonReader reader, System.Type objectType);
		public object CreateNewObject(JsonReader reader, JsonObjectContract objectContract, [Nullable(2)] JsonProperty containerMember, [Nullable(2)] JsonProperty containerProperty, [Nullable(2)] string id, out bool createdFromNonDefaultCreator);
		private object PopulateObject(object newObject, JsonReader reader, JsonObjectContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] string id);
		private bool ShouldDeserialize(JsonReader reader, JsonProperty property, object target);
		private bool CheckPropertyName(JsonReader reader, string memberName);
		private void SetExtensionData(JsonObjectContract contract, [Nullable(2)] JsonProperty member, JsonReader reader, string memberName, object o);
		private object ReadExtensionDataValue(JsonObjectContract contract, [Nullable(2)] JsonProperty member, JsonReader reader);
		private void EndProcessProperty(object newObject, JsonReader reader, JsonObjectContract contract, int initialDepth, JsonProperty property, PropertyPresence presence, bool setDefaultValue);
		private void SetPropertyPresence(JsonReader reader, JsonProperty property, [Nullable(new byte[2] {2, 1 })] Dictionary<JsonProperty, PropertyPresence> requiredProperties);
		private void HandleError(JsonReader reader, bool readPastError, int initialDepth);
	}
}
