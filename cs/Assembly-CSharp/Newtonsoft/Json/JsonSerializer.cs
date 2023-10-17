/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;
using Newtonsoft.Json.Serialization;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public class JsonSerializer
	{
		// Fields
		private TypeNameHandling _typeNameHandling;
		private FormatterAssemblyStyle _typeNameAssemblyFormat;
		private PreserveReferencesHandling _preserveReferencesHandling;
		private ReferenceLoopHandling _referenceLoopHandling;
		private MissingMemberHandling _missingMemberHandling;
		private ObjectCreationHandling _objectCreationHandling;
		private NullValueHandling _nullValueHandling;
		private DefaultValueHandling _defaultValueHandling;
		private ConstructorHandling _constructorHandling;
		private JsonConverterCollection _converters;
		private IContractResolver _contractResolver;
		private IReferenceResolver _referenceResolver;
		private SerializationBinder _binder;
		private StreamingContext _context;
		[CompilerGenerated]
		private EventHandler<ErrorEventArgs> Error;
	
		// Properties
		public virtual IReferenceResolver ReferenceResolver { get; set; }
		public virtual SerializationBinder Binder { get; set; }
		public virtual TypeNameHandling TypeNameHandling { get; set; }
		public virtual FormatterAssemblyStyle TypeNameAssemblyFormat { get; set; }
		public virtual PreserveReferencesHandling PreserveReferencesHandling { get; set; }
		public virtual ReferenceLoopHandling ReferenceLoopHandling { get; set; }
		public virtual MissingMemberHandling MissingMemberHandling { get; set; }
		public virtual NullValueHandling NullValueHandling { get; set; }
		public virtual DefaultValueHandling DefaultValueHandling { get; set; }
		public virtual ObjectCreationHandling ObjectCreationHandling { get; set; }
		public virtual ConstructorHandling ConstructorHandling { get; set; }
		public virtual JsonConverterCollection Converters { get; }
		public virtual IContractResolver ContractResolver { get; set; }
		public virtual StreamingContext Context { get; set; }
	
		// Events
		public virtual event EventHandler<ErrorEventArgs> Error {
			add;
			remove;
		}
	
		// Constructors
		public JsonSerializer();
	
		// Methods
		public static JsonSerializer Create(JsonSerializerSettings settings);
		public void Populate(TextReader reader, object target);
		public void Populate(JsonReader reader, object target);
		internal virtual void PopulateInternal(JsonReader reader, object target);
		public object Deserialize(JsonReader reader);
		public object Deserialize(TextReader reader, System.Type objectType);
		public T Deserialize<T>(JsonReader reader);
		public object Deserialize(JsonReader reader, System.Type objectType);
		internal virtual object DeserializeInternal(JsonReader reader, System.Type objectType);
		public void Serialize(TextWriter textWriter, object value);
		public void Serialize(JsonWriter jsonWriter, object value);
		internal virtual void SerializeInternal(JsonWriter jsonWriter, object value);
		internal JsonConverter GetMatchingConverter(System.Type type);
		internal static JsonConverter GetMatchingConverter(IList<JsonConverter> converters, System.Type objectType);
		internal void OnError(ErrorEventArgs e);
	}
}
