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
using System.Runtime.Serialization;
using System.Runtime.Versioning;
using Newtonsoft.Json.Serialization;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[Nullable(0)]
	[NullableContext(1)]
	public class JsonSerializer
	{
		// Fields
		internal TypeNameHandling _typeNameHandling;
		internal TypeNameAssemblyFormatHandling _typeNameAssemblyFormatHandling;
		internal PreserveReferencesHandling _preserveReferencesHandling;
		internal ReferenceLoopHandling _referenceLoopHandling;
		internal MissingMemberHandling _missingMemberHandling;
		internal ObjectCreationHandling _objectCreationHandling;
		internal NullValueHandling _nullValueHandling;
		internal DefaultValueHandling _defaultValueHandling;
		internal ConstructorHandling _constructorHandling;
		internal MetadataPropertyHandling _metadataPropertyHandling;
		[Nullable(2)]
		internal JsonConverterCollection _converters;
		internal IContractResolver _contractResolver;
		[Nullable(2)]
		internal ITraceWriter _traceWriter;
		[Nullable(2)]
		internal IEqualityComparer _equalityComparer;
		internal ISerializationBinder _serializationBinder;
		internal StreamingContext _context;
		[Nullable(2)]
		private IReferenceResolver _referenceResolver;
		private Formatting? _formatting;
		private DateFormatHandling? _dateFormatHandling;
		private DateTimeZoneHandling? _dateTimeZoneHandling;
		private DateParseHandling? _dateParseHandling;
		private FloatFormatHandling? _floatFormatHandling;
		private FloatParseHandling? _floatParseHandling;
		private StringEscapeHandling? _stringEscapeHandling;
		private CultureInfo _culture;
		private int? _maxDepth;
		private bool _maxDepthSet;
		private bool? _checkAdditionalContent;
		[Nullable(2)]
		private string _dateFormatString;
		private bool _dateFormatStringSet;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private EventHandler<ErrorEventArgs> Error;
	
		// Properties
		[Nullable(2)]
		public virtual IReferenceResolver ReferenceResolver { [NullableContext(2)] set; }
		public virtual ISerializationBinder SerializationBinder { set; }
		[Nullable(2)]
		public virtual ITraceWriter TraceWriter { [NullableContext(2)] get; [NullableContext(2)] set; }
		[Nullable(2)]
		public virtual IEqualityComparer EqualityComparer { [NullableContext(2)] set; }
		public virtual TypeNameHandling TypeNameHandling { set; }
		public virtual TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling { set; }
		public virtual PreserveReferencesHandling PreserveReferencesHandling { set; }
		public virtual ReferenceLoopHandling ReferenceLoopHandling { set; }
		public virtual MissingMemberHandling MissingMemberHandling { set; }
		public virtual NullValueHandling NullValueHandling { get; set; }
		public virtual DefaultValueHandling DefaultValueHandling { set; }
		public virtual ObjectCreationHandling ObjectCreationHandling { set; }
		public virtual ConstructorHandling ConstructorHandling { set; }
		public virtual MetadataPropertyHandling MetadataPropertyHandling { get; set; }
		public virtual JsonConverterCollection Converters { get; }
		public virtual IContractResolver ContractResolver { get; set; }
		public virtual StreamingContext Context { get; set; }
		public virtual Formatting Formatting { get; }
		public virtual int? MaxDepth { get; }
		public virtual bool CheckAdditionalContent { get; set; }
	
		// Events
		[Nullable(new byte[2] {2, 1 })]
		public virtual event EventHandler<ErrorEventArgs> Error {
			add;
			remove;
		}
	
		// Constructors
		public JsonSerializer();
	
		// Methods
		internal bool IsCheckAdditionalContentSet();
		public static JsonSerializer Create();
		public static JsonSerializer Create([Nullable(2)] JsonSerializerSettings settings);
		public static JsonSerializer CreateDefault();
		public static JsonSerializer CreateDefault([Nullable(2)] JsonSerializerSettings settings);
		private static void ApplySerializerSettings(JsonSerializer serializer, JsonSerializerSettings settings);
		[DebuggerStepThrough]
		public void Populate(JsonReader reader, object target);
		internal virtual void PopulateInternal(JsonReader reader, object target);
		[DebuggerStepThrough]
		[NullableContext(2)]
		public T Deserialize<T>([Nullable(1)] JsonReader reader);
		[DebuggerStepThrough]
		[NullableContext(2)]
		public object Deserialize([Nullable(1)] JsonReader reader, System.Type objectType);
		[NullableContext(2)]
		internal virtual object DeserializeInternal([Nullable(1)] JsonReader reader, System.Type objectType);
		[NullableContext(2)]
		internal void SetupReader([Nullable(1)] JsonReader reader, out CultureInfo previousCulture, out DateTimeZoneHandling? previousDateTimeZoneHandling, out DateParseHandling? previousDateParseHandling, out FloatParseHandling? previousFloatParseHandling, out int? previousMaxDepth, out string previousDateFormatString);
		[NullableContext(2)]
		private void ResetReader([Nullable(1)] JsonReader reader, CultureInfo previousCulture, DateTimeZoneHandling? previousDateTimeZoneHandling, DateParseHandling? previousDateParseHandling, FloatParseHandling? previousFloatParseHandling, int? previousMaxDepth, string previousDateFormatString);
		[NullableContext(2)]
		public void Serialize([Nullable(1)] JsonWriter jsonWriter, object value, System.Type objectType);
		public void Serialize(JsonWriter jsonWriter, [Nullable(2)] object value);
		private TraceJsonReader CreateTraceJsonReader(JsonReader reader);
		[NullableContext(2)]
		internal virtual void SerializeInternal([Nullable(1)] JsonWriter jsonWriter, object value, System.Type objectType);
		internal IReferenceResolver GetReferenceResolver();
		internal JsonConverter GetMatchingConverter(System.Type type);
		internal static JsonConverter GetMatchingConverter([Nullable(new byte[2] {2, 1 })] IList<JsonConverter> converters, System.Type objectType);
		internal void OnError(ErrorEventArgs e);
	}
}
