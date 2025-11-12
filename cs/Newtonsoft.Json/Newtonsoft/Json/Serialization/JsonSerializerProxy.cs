/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Diagnostics;
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
	internal class JsonSerializerProxy : JsonSerializer
	{
		// Fields
		[Nullable(2)]
		private readonly JsonSerializerInternalReader _serializerReader;
		[Nullable(2)]
		private readonly JsonSerializerInternalWriter _serializerWriter;
		internal readonly JsonSerializer _serializer;
	
		// Properties
		[Nullable(2)]
		public override IReferenceResolver ReferenceResolver { [NullableContext(2)] set; }
		[Nullable(2)]
		public override ITraceWriter TraceWriter { [NullableContext(2)] get; [NullableContext(2)] set; }
		[Nullable(2)]
		public override IEqualityComparer EqualityComparer { [NullableContext(2)] set; }
		public override JsonConverterCollection Converters { get; }
		public override DefaultValueHandling DefaultValueHandling { set; }
		public override IContractResolver ContractResolver { get; set; }
		public override MissingMemberHandling MissingMemberHandling { set; }
		public override NullValueHandling NullValueHandling { get; set; }
		public override ObjectCreationHandling ObjectCreationHandling { set; }
		public override ReferenceLoopHandling ReferenceLoopHandling { set; }
		public override PreserveReferencesHandling PreserveReferencesHandling { set; }
		public override TypeNameHandling TypeNameHandling { set; }
		public override MetadataPropertyHandling MetadataPropertyHandling { get; set; }
		public override TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling { set; }
		public override ConstructorHandling ConstructorHandling { set; }
		public override ISerializationBinder SerializationBinder { set; }
		public override StreamingContext Context { get; set; }
		public override Formatting Formatting { get; }
		public override int? MaxDepth { get; }
		public override bool CheckAdditionalContent { get; set; }
	
		// Events
		[Nullable(new byte[2] {2, 1 })]
		public override event EventHandler<ErrorEventArgs> Error {
			add;
			remove;
		}
	
		// Constructors
		public JsonSerializerProxy(JsonSerializerInternalReader serializerReader);
		public JsonSerializerProxy(JsonSerializerInternalWriter serializerWriter);
	
		// Methods
		internal JsonSerializerInternalBase GetInternalSerializer();
		[NullableContext(2)]
		internal override object DeserializeInternal([Nullable(1)] JsonReader reader, System.Type objectType);
		internal override void PopulateInternal(JsonReader reader, object target);
		[NullableContext(2)]
		internal override void SerializeInternal([Nullable(1)] JsonWriter jsonWriter, object value, System.Type rootType);
	}
}
