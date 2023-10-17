/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Utilities;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal class JsonSerializerInternalReader : JsonSerializerInternalBase
	{
		// Fields
		private JsonSerializerProxy _internalSerializer;
		private JsonFormatterConverter _formatterConverter;
	
		// Nested types
		internal enum PropertyPresence
		{
			None = 0,
			Null = 1,
			Value = 2
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass27_0
		{
			// Fields
			public string reference;
			public JsonArrayContract contract;
			public JsonSerializerInternalReader __4__this;
			public JsonReader reader;
	
			// Constructors
			public __c__DisplayClass27_0();
	
			// Methods
			internal void _CreateAndPopulateList_b__0(IList l, bool isTemporaryListReference);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<ParameterInfo, ParameterInfo> __9__33_0;
			public static Func<ParameterInfo, object> __9__33_1;
			public static Func<KeyValuePair<ParameterInfo, object>, string> __9__33_2;
			public static Func<JsonProperty, JsonProperty> __9__36_0;
			public static Func<JsonProperty, PropertyPresence> __9__36_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal ParameterInfo _CreateObjectFromNonDefaultConstructor_b__33_0(ParameterInfo p);
			internal object _CreateObjectFromNonDefaultConstructor_b__33_1(ParameterInfo p);
			internal string _CreateObjectFromNonDefaultConstructor_b__33_2(KeyValuePair<ParameterInfo, object> kv);
			internal JsonProperty _PopulateObject_b__36_0(JsonProperty m);
			internal PropertyPresence _PopulateObject_b__36_1(JsonProperty m);
		}
	
		// Constructors
		public JsonSerializerInternalReader(JsonSerializer serializer);
	
		// Methods
		public void Populate(JsonReader reader, object target);
		private JsonContract GetContractSafe(System.Type type);
		private JsonContract GetContractSafe(System.Type type, object value);
		public object Deserialize(JsonReader reader, System.Type objectType);
		private JsonSerializerProxy GetInternalSerializer();
		private JsonFormatterConverter GetFormatterConverter();
		private JToken CreateJToken(JsonReader reader, JsonContract contract);
		private JToken CreateJObject(JsonReader reader);
		private object CreateValueProperty(JsonReader reader, JsonProperty property, object target, bool gottenCurrentValue, object currentValue);
		private object CreateValueNonProperty(JsonReader reader, System.Type objectType, JsonContract contract);
		private object CreateValueInternal(JsonReader reader, System.Type objectType, JsonContract contract, JsonProperty member, object existingValue);
		private JsonConverter GetConverter(JsonContract contract, JsonConverter memberConverter);
		private object CreateObject(JsonReader reader, System.Type objectType, JsonContract contract, JsonProperty member, object existingValue);
		private JsonArrayContract EnsureArrayContract(System.Type objectType, JsonContract contract);
		private void CheckedRead(JsonReader reader);
		private object CreateList(JsonReader reader, System.Type objectType, JsonContract contract, JsonProperty member, object existingValue, string reference);
		private bool HasDefinedType(System.Type type);
		private object EnsureType(object value, CultureInfo culture, System.Type targetType);
		private string FormatValueForPrint(object value);
		private void SetPropertyValue(JsonProperty property, JsonReader reader, object target);
		private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag);
		private bool ShouldSetPropertyValue(JsonProperty property, object value);
		private object CreateAndPopulateDictionary(JsonReader reader, JsonDictionaryContract contract, string id);
		private object PopulateDictionary(IWrappedDictionary dictionary, JsonReader reader, JsonDictionaryContract contract, string id);
		private object CreateAndPopulateList(JsonReader reader, string reference, JsonArrayContract contract);
		private bool ReadForTypeArrayHack(JsonReader reader, System.Type t);
		private object PopulateList(IWrappedCollection wrappedList, JsonReader reader, string reference, JsonArrayContract contract);
		private object PopulateMultidimensionalArray(IList list, JsonReader reader, string reference, JsonArrayContract contract);
		private object CreateISerializable(JsonReader reader, JsonISerializableContract contract, string id);
		private object CreateAndPopulateObject(JsonReader reader, JsonObjectContract contract, string id);
		private object CreateObjectFromNonDefaultConstructor(JsonReader reader, JsonObjectContract contract, ConstructorInfo constructorInfo, string id);
		private IDictionary<JsonProperty, object> ResolvePropertyAndConstructorValues(JsonObjectContract contract, JsonReader reader, System.Type objectType);
		private bool ReadForType(JsonReader reader, System.Type t, JsonConverter propertyConverter);
		private object PopulateObject(object newObject, JsonReader reader, JsonObjectContract contract, string id);
		private void SetPropertyPresence(JsonReader reader, JsonProperty property, Dictionary<JsonProperty, PropertyPresence> requiredProperties);
		private void HandleError(JsonReader reader, int initialDepth);
	}
}
