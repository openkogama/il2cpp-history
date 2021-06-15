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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal class JsonSerializerInternalReader : JsonSerializerInternalBase
	{
		// Fields
		private JsonSerializerProxy _internalSerializer;
		private JsonFormatterConverter _formatterConverter;
		[CompilerGenerated]
		private static Func<ParameterInfo, ParameterInfo> __f__am_cache0;
		[CompilerGenerated]
		private static Func<ParameterInfo, object> __f__am_cache1;
		[CompilerGenerated]
		private static Func<KeyValuePair<ParameterInfo, object>, string> __f__am_cache2;
		[CompilerGenerated]
		private static Func<JsonProperty, JsonProperty> __f__am_cache3;
		[CompilerGenerated]
		private static Func<JsonProperty, PropertyPresence> __f__am_cache4;
	
		// Nested types
		internal enum PropertyPresence
		{
			None = 0,
			Null = 1,
			Value = 2
		}
	
		[CompilerGenerated]
		private sealed class _CreateAndPopulateList_c__AnonStorey0
		{
			// Fields
			internal string reference;
			internal JsonArrayContract contract;
			internal JsonReader reader;
			internal JsonSerializerInternalReader _this;
	
			// Constructors
			public _CreateAndPopulateList_c__AnonStorey0();
	
			// Methods
			internal void __m__0(IList l, bool isTemporaryListReference);
		}
	
		// Constructors
		public JsonSerializerInternalReader(JsonSerializer serializer);
	
		// Methods
		public void Populate(JsonReader reader, object target);
		private JsonContract GetContractSafe(Type type);
		private JsonContract GetContractSafe(Type type, object value);
		public object Deserialize(JsonReader reader, Type objectType);
		private JsonSerializerProxy GetInternalSerializer();
		private JsonFormatterConverter GetFormatterConverter();
		private JToken CreateJToken(JsonReader reader, JsonContract contract);
		private JToken CreateJObject(JsonReader reader);
		private object CreateValueProperty(JsonReader reader, JsonProperty property, object target, bool gottenCurrentValue, object currentValue);
		private object CreateValueNonProperty(JsonReader reader, Type objectType, JsonContract contract);
		private object CreateValueInternal(JsonReader reader, Type objectType, JsonContract contract, JsonProperty member, object existingValue);
		private JsonConverter GetConverter(JsonContract contract, JsonConverter memberConverter);
		private object CreateObject(JsonReader reader, Type objectType, JsonContract contract, JsonProperty member, object existingValue);
		private JsonArrayContract EnsureArrayContract(Type objectType, JsonContract contract);
		private void CheckedRead(JsonReader reader);
		private object CreateList(JsonReader reader, Type objectType, JsonContract contract, JsonProperty member, object existingValue, string reference);
		private bool HasDefinedType(Type type);
		private object EnsureType(object value, CultureInfo culture, Type targetType);
		private string FormatValueForPrint(object value);
		private void SetPropertyValue(JsonProperty property, JsonReader reader, object target);
		private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag);
		private bool ShouldSetPropertyValue(JsonProperty property, object value);
		private object CreateAndPopulateDictionary(JsonReader reader, JsonDictionaryContract contract, string id);
		private object PopulateDictionary(IWrappedDictionary dictionary, JsonReader reader, JsonDictionaryContract contract, string id);
		private object CreateAndPopulateList(JsonReader reader, string reference, JsonArrayContract contract);
		private bool ReadForTypeArrayHack(JsonReader reader, Type t);
		private object PopulateList(IWrappedCollection wrappedList, JsonReader reader, string reference, JsonArrayContract contract);
		private object PopulateMultidimensionalArray(IList list, JsonReader reader, string reference, JsonArrayContract contract);
		private object CreateISerializable(JsonReader reader, JsonISerializableContract contract, string id);
		private object CreateAndPopulateObject(JsonReader reader, JsonObjectContract contract, string id);
		private object CreateObjectFromNonDefaultConstructor(JsonReader reader, JsonObjectContract contract, ConstructorInfo constructorInfo, string id);
		private IDictionary<JsonProperty, object> ResolvePropertyAndConstructorValues(JsonObjectContract contract, JsonReader reader, Type objectType);
		private bool ReadForType(JsonReader reader, Type t, JsonConverter propertyConverter);
		private object PopulateObject(object newObject, JsonReader reader, JsonObjectContract contract, string id);
		private void SetPropertyPresence(JsonReader reader, JsonProperty property, Dictionary<JsonProperty, PropertyPresence> requiredProperties);
		private void HandleError(JsonReader reader, int initialDepth);
		[CompilerGenerated]
		private static ParameterInfo _CreateObjectFromNonDefaultConstructor_m__0(ParameterInfo p);
		[CompilerGenerated]
		private static object _CreateObjectFromNonDefaultConstructor_m__1(ParameterInfo p);
		[CompilerGenerated]
		private static string _CreateObjectFromNonDefaultConstructor_m__2(KeyValuePair<ParameterInfo, object> kv);
		[CompilerGenerated]
		private static JsonProperty _PopulateObject_m__3(JsonProperty m);
		[CompilerGenerated]
		private static PropertyPresence _PopulateObject_m__4(JsonProperty m);
	}
}
