/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Dynamic;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Runtime.Versioning;
using Newtonsoft.Json;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class JsonSerializerInternalWriter : JsonSerializerInternalBase
	{
		// Fields
		[Nullable(2)]
		private System.Type _rootType;
		private int _rootLevel;
		private readonly List<object> _serializeStack;
	
		// Constructors
		public JsonSerializerInternalWriter(JsonSerializer serializer);
	
		// Methods
		[NullableContext(2)]
		public void Serialize([Nullable(1)] JsonWriter jsonWriter, object value, System.Type objectType);
		private JsonSerializerProxy GetInternalSerializer();
		[NullableContext(2)]
		private JsonContract GetContractSafe(object value);
		private JsonContract GetContract(object value);
		private void SerializePrimitive(JsonWriter writer, object value, JsonPrimitiveContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract containerContract, [Nullable(2)] JsonProperty containerProperty);
		[NullableContext(2)]
		private void SerializeValue([Nullable(1)] JsonWriter writer, object value, JsonContract valueContract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerProperty);
		[NullableContext(2)]
		private bool? ResolveIsReference([Nullable(1)] JsonContract contract, JsonProperty property, JsonContainerContract collectionContract, JsonProperty containerProperty);
		[NullableContext(2)]
		private bool ShouldWriteReference(object value, JsonProperty property, JsonContract valueContract, JsonContainerContract collectionContract, JsonProperty containerProperty);
		[NullableContext(2)]
		private bool ShouldWriteProperty(object memberValue, JsonObjectContract containerContract, [Nullable(1)] JsonProperty property);
		[NullableContext(2)]
		private bool CheckForCircularReference([Nullable(1)] JsonWriter writer, object value, JsonProperty property, JsonContract contract, JsonContainerContract containerContract, JsonProperty containerProperty);
		private void WriteReference(JsonWriter writer, object value);
		private string GetReference(JsonWriter writer, object value);
		internal static bool TryConvertToString(object value, System.Type type, [Nullable(2)] [NotNullWhen(true)] out string s);
		private void SerializeString(JsonWriter writer, object value, JsonStringContract contract);
		private void OnSerializing(JsonWriter writer, JsonContract contract, object value);
		private void OnSerialized(JsonWriter writer, JsonContract contract, object value);
		private void SerializeObject(JsonWriter writer, object value, JsonObjectContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract collectionContract, [Nullable(2)] JsonProperty containerProperty);
		private bool CalculatePropertyValues(JsonWriter writer, object value, JsonContainerContract contract, [Nullable(2)] JsonProperty member, JsonProperty property, [Nullable(2)] [NotNullWhen(true)] out JsonContract memberContract, [Nullable(2)] out object memberValue);
		private void WriteObjectStart(JsonWriter writer, object value, JsonContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract collectionContract, [Nullable(2)] JsonProperty containerProperty);
		private bool HasCreatorParameter([Nullable(2)] JsonContainerContract contract, JsonProperty property);
		private void WriteReferenceIdProperty(JsonWriter writer, System.Type type, object value);
		private void WriteTypeProperty(JsonWriter writer, System.Type type);
		private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag);
		private bool HasFlag(PreserveReferencesHandling value, PreserveReferencesHandling flag);
		private bool HasFlag(TypeNameHandling value, TypeNameHandling flag);
		private void SerializeConvertable(JsonWriter writer, JsonConverter converter, object value, JsonContract contract, [Nullable(2)] JsonContainerContract collectionContract, [Nullable(2)] JsonProperty containerProperty);
		private void SerializeList(JsonWriter writer, IEnumerable values, JsonArrayContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract collectionContract, [Nullable(2)] JsonProperty containerProperty);
		private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract collectionContract, [Nullable(2)] JsonProperty containerProperty);
		private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, [Nullable(2)] JsonProperty member, int initialDepth, int[] indices);
		private bool WriteStartArray(JsonWriter writer, object values, JsonArrayContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract containerContract, [Nullable(2)] JsonProperty containerProperty);
		private void SerializeISerializable(JsonWriter writer, ISerializable value, JsonISerializableContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract collectionContract, [Nullable(2)] JsonProperty containerProperty);
		private void SerializeDynamic(JsonWriter writer, IDynamicMetaObjectProvider value, JsonDynamicContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract collectionContract, [Nullable(2)] JsonProperty containerProperty);
		[NullableContext(2)]
		private bool ShouldWriteDynamicProperty(object memberValue);
		[NullableContext(2)]
		private bool ShouldWriteType(TypeNameHandling typeNameHandlingFlag, [Nullable(1)] JsonContract contract, JsonProperty member, JsonContainerContract containerContract, JsonProperty containerProperty);
		private void SerializeDictionary(JsonWriter writer, IDictionary values, JsonDictionaryContract contract, [Nullable(2)] JsonProperty member, [Nullable(2)] JsonContainerContract collectionContract, [Nullable(2)] JsonProperty containerProperty);
		private string GetPropertyName(JsonWriter writer, object name, JsonContract contract, out bool escape);
		private void HandleError(JsonWriter writer, int initialDepth);
		private bool ShouldSerialize(JsonWriter writer, JsonProperty property, object target);
		private bool IsSpecified(JsonWriter writer, JsonProperty property, object target);
	}
}
