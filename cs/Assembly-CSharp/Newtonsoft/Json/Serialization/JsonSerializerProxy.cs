/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal class JsonSerializerProxy : JsonSerializer
	{
		// Fields
		private readonly JsonSerializerInternalReader _serializerReader;
		private readonly JsonSerializerInternalWriter _serializerWriter;
		private readonly JsonSerializer _serializer;
	
		// Properties
		public override IReferenceResolver ReferenceResolver { get; set; }
		public override JsonConverterCollection Converters { get; }
		public override DefaultValueHandling DefaultValueHandling { get; set; }
		public override IContractResolver ContractResolver { get; set; }
		public override MissingMemberHandling MissingMemberHandling { get; set; }
		public override NullValueHandling NullValueHandling { get; set; }
		public override ObjectCreationHandling ObjectCreationHandling { get; set; }
		public override ReferenceLoopHandling ReferenceLoopHandling { get; set; }
		public override PreserveReferencesHandling PreserveReferencesHandling { get; set; }
		public override TypeNameHandling TypeNameHandling { get; set; }
		public override FormatterAssemblyStyle TypeNameAssemblyFormat { get; set; }
		public override ConstructorHandling ConstructorHandling { get; set; }
		public override SerializationBinder Binder { get; set; }
		public override StreamingContext Context { get; set; }
	
		// Events
		public override event EventHandler<ErrorEventArgs> Error {
			add;
			remove;
		}
	
		// Constructors
		public JsonSerializerProxy(JsonSerializerInternalReader serializerReader);
		public JsonSerializerProxy(JsonSerializerInternalWriter serializerWriter);
	
		// Methods
		internal JsonSerializerInternalBase GetInternalSerializer();
		internal override object DeserializeInternal(JsonReader reader, System.Type objectType);
		internal override void PopulateInternal(JsonReader reader, object target);
		internal override void SerializeInternal(JsonWriter jsonWriter, object value);
	}
}
