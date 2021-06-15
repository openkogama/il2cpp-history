/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;
using Newtonsoft.Json.Serialization;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public class JsonSerializerSettings
	{
		// Fields
		internal const ReferenceLoopHandling DefaultReferenceLoopHandling = ReferenceLoopHandling.Error;
		internal const MissingMemberHandling DefaultMissingMemberHandling = MissingMemberHandling.Ignore;
		internal const NullValueHandling DefaultNullValueHandling = NullValueHandling.Include;
		internal const DefaultValueHandling DefaultDefaultValueHandling = DefaultValueHandling.Include;
		internal const ObjectCreationHandling DefaultObjectCreationHandling = ObjectCreationHandling.Auto;
		internal const PreserveReferencesHandling DefaultPreserveReferencesHandling = PreserveReferencesHandling.None;
		internal const ConstructorHandling DefaultConstructorHandling = ConstructorHandling.Default;
		internal const TypeNameHandling DefaultTypeNameHandling = TypeNameHandling.None;
		internal const FormatterAssemblyStyle DefaultTypeNameAssemblyFormat = FormatterAssemblyStyle.Simple;
		internal static readonly StreamingContext DefaultContext;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private ReferenceLoopHandling _ReferenceLoopHandling_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private MissingMemberHandling _MissingMemberHandling_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private ObjectCreationHandling _ObjectCreationHandling_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private NullValueHandling _NullValueHandling_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private DefaultValueHandling _DefaultValueHandling_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IList<JsonConverter> _Converters_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private PreserveReferencesHandling _PreserveReferencesHandling_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private TypeNameHandling _TypeNameHandling_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private FormatterAssemblyStyle _TypeNameAssemblyFormat_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private ConstructorHandling _ConstructorHandling_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IContractResolver _ContractResolver_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IReferenceResolver _ReferenceResolver_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private SerializationBinder _Binder_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private EventHandler<ErrorEventArgs> _Error_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private StreamingContext _Context_k__BackingField;
	
		// Properties
		public ReferenceLoopHandling ReferenceLoopHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public MissingMemberHandling MissingMemberHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public ObjectCreationHandling ObjectCreationHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public NullValueHandling NullValueHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public DefaultValueHandling DefaultValueHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IList<JsonConverter> Converters { [CompilerGenerated] get; [CompilerGenerated] set; }
		public PreserveReferencesHandling PreserveReferencesHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public TypeNameHandling TypeNameHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public FormatterAssemblyStyle TypeNameAssemblyFormat { [CompilerGenerated] get; [CompilerGenerated] set; }
		public ConstructorHandling ConstructorHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IContractResolver ContractResolver { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IReferenceResolver ReferenceResolver { [CompilerGenerated] get; [CompilerGenerated] set; }
		public SerializationBinder Binder { [CompilerGenerated] get; [CompilerGenerated] set; }
		public EventHandler<ErrorEventArgs> Error { [CompilerGenerated] get; [CompilerGenerated] set; }
		public StreamingContext Context { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public JsonSerializerSettings();
		static JsonSerializerSettings();
	}
}
