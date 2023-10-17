/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal class JsonSerializerInternalWriter : JsonSerializerInternalBase
	{
		// Fields
		private JsonSerializerProxy _internalSerializer;
		private List<object> _serializeStack;
	
		// Properties
		private List<object> SerializeStack { get; }
	
		// Constructors
		public JsonSerializerInternalWriter(JsonSerializer serializer);
	
		// Methods
		public void Serialize(JsonWriter jsonWriter, object value);
		private JsonSerializerProxy GetInternalSerializer();
		private JsonContract GetContractSafe(object value);
		private void SerializePrimitive(JsonWriter writer, object value, JsonPrimitiveContract contract, JsonProperty member, JsonContract collectionValueContract);
		private void SerializeValue(JsonWriter writer, object value, JsonContract valueContract, JsonProperty member, JsonContract collectionValueContract);
		private bool ShouldWriteReference(object value, JsonProperty property, JsonContract contract);
		private void WriteMemberInfoProperty(JsonWriter writer, object memberValue, JsonProperty property, JsonContract contract);
		private bool CheckForCircularReference(object value, ReferenceLoopHandling? referenceLoopHandling, JsonContract contract);
		private void WriteReference(JsonWriter writer, object value);
		internal static bool TryConvertToString(object value, System.Type type, out string s);
		private void SerializeString(JsonWriter writer, object value, JsonStringContract contract);
		private void SerializeObject(JsonWriter writer, object value, JsonObjectContract contract, JsonProperty member, JsonContract collectionValueContract);
		private void WriteTypeProperty(JsonWriter writer, System.Type type);
		private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag);
		private bool HasFlag(PreserveReferencesHandling value, PreserveReferencesHandling flag);
		private bool HasFlag(TypeNameHandling value, TypeNameHandling flag);
		private void SerializeConvertable(JsonWriter writer, JsonConverter converter, object value, JsonContract contract);
		private void SerializeList(JsonWriter writer, IWrappedCollection values, JsonArrayContract contract, JsonProperty member, JsonContract collectionValueContract);
		private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty member, JsonContract collectionContract);
		private void SerializeMultidimensionalArray(JsonWriter writer, Array values, JsonArrayContract contract, JsonProperty member, int initialDepth, int[] indices);
		private string GetReference(JsonWriter writer, object value);
		private bool WriteStartArray(JsonWriter writer, object values, JsonArrayContract contract, JsonProperty member, JsonContract containerContract);
		private void SerializeISerializable(JsonWriter writer, ISerializable value, JsonISerializableContract contract);
		private bool ShouldWriteType(TypeNameHandling typeNameHandlingFlag, JsonContract contract, JsonProperty member, JsonContract collectionValueContract);
		private void SerializeDictionary(JsonWriter writer, IWrappedDictionary values, JsonDictionaryContract contract, JsonProperty member, JsonContract collectionValueContract);
		private string GetPropertyName(DictionaryEntry entry);
		private void HandleError(JsonWriter writer, int initialDepth);
		private bool ShouldSerialize(JsonProperty property, object target);
		private bool IsSpecified(JsonProperty property, object target);
	}
}
