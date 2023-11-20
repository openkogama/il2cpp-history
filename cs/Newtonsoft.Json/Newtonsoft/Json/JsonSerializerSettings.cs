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
	[NullableContext(2)]
	public class JsonSerializerSettings
	{
		// Fields
		internal static readonly StreamingContext DefaultContext;
		[Nullable(1)]
		internal static readonly CultureInfo DefaultCulture;
		internal Formatting? _formatting;
		internal DateFormatHandling? _dateFormatHandling;
		internal DateTimeZoneHandling? _dateTimeZoneHandling;
		internal DateParseHandling? _dateParseHandling;
		internal FloatFormatHandling? _floatFormatHandling;
		internal FloatParseHandling? _floatParseHandling;
		internal StringEscapeHandling? _stringEscapeHandling;
		internal CultureInfo _culture;
		internal bool? _checkAdditionalContent;
		internal int? _maxDepth;
		internal bool _maxDepthSet;
		internal string _dateFormatString;
		internal bool _dateFormatStringSet;
		internal TypeNameAssemblyFormatHandling? _typeNameAssemblyFormatHandling;
		internal DefaultValueHandling? _defaultValueHandling;
		internal PreserveReferencesHandling? _preserveReferencesHandling;
		internal NullValueHandling? _nullValueHandling;
		internal ObjectCreationHandling? _objectCreationHandling;
		internal MissingMemberHandling? _missingMemberHandling;
		internal ReferenceLoopHandling? _referenceLoopHandling;
		internal StreamingContext? _context;
		internal ConstructorHandling? _constructorHandling;
		internal TypeNameHandling? _typeNameHandling;
		internal MetadataPropertyHandling? _metadataPropertyHandling;
		[CompilerGenerated]
		[Nullable(1)]
		private IList<JsonConverter> _Converters_k__BackingField;
		[CompilerGenerated]
		private IContractResolver _ContractResolver_k__BackingField;
		[CompilerGenerated]
		private IEqualityComparer _EqualityComparer_k__BackingField;
		[CompilerGenerated]
		private Func<IReferenceResolver> _ReferenceResolverProvider_k__BackingField;
		[CompilerGenerated]
		private ITraceWriter _TraceWriter_k__BackingField;
		[CompilerGenerated]
		private ISerializationBinder _SerializationBinder_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private EventHandler<ErrorEventArgs> _Error_k__BackingField;
	
		// Properties
		public ReferenceLoopHandling ReferenceLoopHandling { get; }
		public MissingMemberHandling MissingMemberHandling { get; }
		public ObjectCreationHandling ObjectCreationHandling { get; }
		public NullValueHandling NullValueHandling { get; }
		public DefaultValueHandling DefaultValueHandling { get; }
		[Nullable(1)]
		public IList<JsonConverter> Converters { [NullableContext(1)] [CompilerGenerated] get; }
		public PreserveReferencesHandling PreserveReferencesHandling { get; }
		public TypeNameHandling TypeNameHandling { get; }
		public MetadataPropertyHandling MetadataPropertyHandling { get; }
		public TypeNameAssemblyFormatHandling TypeNameAssemblyFormatHandling { get; }
		public ConstructorHandling ConstructorHandling { get; }
		public IContractResolver ContractResolver { [CompilerGenerated] get; }
		public IEqualityComparer EqualityComparer { [CompilerGenerated] get; }
		public Func<IReferenceResolver> ReferenceResolverProvider { [CompilerGenerated] get; }
		public ITraceWriter TraceWriter { [CompilerGenerated] get; }
		public ISerializationBinder SerializationBinder { [CompilerGenerated] get; }
		[Nullable(new byte[2] {2, 1 })]
		public EventHandler<ErrorEventArgs> Error { [CompilerGenerated] get; }
		public StreamingContext Context { get; }
	
		// Constructors
		static JsonSerializerSettings();
	}
}
