/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(2)]
	public class JsonProperty
	{
		// Fields
		internal Required? _required;
		internal bool _hasExplicitDefaultValue;
		private object _defaultValue;
		private bool _hasGeneratedDefaultValue;
		private string _propertyName;
		internal bool _skipPropertyNameEscape;
		private System.Type _propertyType;
		[CompilerGenerated]
		private JsonContract _PropertyContract_k__BackingField;
		[CompilerGenerated]
		private System.Type _DeclaringType_k__BackingField;
		[CompilerGenerated]
		private int? _Order_k__BackingField;
		[CompilerGenerated]
		private string _UnderlyingName_k__BackingField;
		[CompilerGenerated]
		private IValueProvider _ValueProvider_k__BackingField;
		[CompilerGenerated]
		private IAttributeProvider _AttributeProvider_k__BackingField;
		[CompilerGenerated]
		private JsonConverter _Converter_k__BackingField;
		[CompilerGenerated]
		private bool _Ignored_k__BackingField;
		[CompilerGenerated]
		private bool _Readable_k__BackingField;
		[CompilerGenerated]
		private bool _Writable_k__BackingField;
		[CompilerGenerated]
		private bool _HasMemberAttribute_k__BackingField;
		[CompilerGenerated]
		private bool? _IsReference_k__BackingField;
		[CompilerGenerated]
		private NullValueHandling? _NullValueHandling_k__BackingField;
		[CompilerGenerated]
		private DefaultValueHandling? _DefaultValueHandling_k__BackingField;
		[CompilerGenerated]
		private ReferenceLoopHandling? _ReferenceLoopHandling_k__BackingField;
		[CompilerGenerated]
		private ObjectCreationHandling? _ObjectCreationHandling_k__BackingField;
		[CompilerGenerated]
		private TypeNameHandling? _TypeNameHandling_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private Predicate<object> _ShouldSerialize_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private Predicate<object> _ShouldDeserialize_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private Predicate<object> _GetIsSpecified_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {2, 1, 2 })]
		private Action<object, object> _SetIsSpecified_k__BackingField;
		[CompilerGenerated]
		private JsonConverter _ItemConverter_k__BackingField;
		[CompilerGenerated]
		private bool? _ItemIsReference_k__BackingField;
		[CompilerGenerated]
		private TypeNameHandling? _ItemTypeNameHandling_k__BackingField;
		[CompilerGenerated]
		private ReferenceLoopHandling? _ItemReferenceLoopHandling_k__BackingField;
	
		// Properties
		internal JsonContract PropertyContract { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string PropertyName { get; set; }
		public System.Type DeclaringType { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? Order { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string UnderlyingName { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IValueProvider ValueProvider { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IAttributeProvider AttributeProvider { [CompilerGenerated] set; }
		public System.Type PropertyType { get; set; }
		public JsonConverter Converter { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool Ignored { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool Readable { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool Writable { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool HasMemberAttribute { [CompilerGenerated] get; [CompilerGenerated] set; }
		public object DefaultValue { get; set; }
		public Required Required { get; }
		public bool? IsReference { [CompilerGenerated] get; [CompilerGenerated] set; }
		public NullValueHandling? NullValueHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public DefaultValueHandling? DefaultValueHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public ReferenceLoopHandling? ReferenceLoopHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public ObjectCreationHandling? ObjectCreationHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public TypeNameHandling? TypeNameHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		[Nullable(new byte[2] {2, 1 })]
		public Predicate<object> ShouldSerialize { [CompilerGenerated] get; [CompilerGenerated] set; }
		[Nullable(new byte[2] {2, 1 })]
		public Predicate<object> ShouldDeserialize { [CompilerGenerated] get; }
		[Nullable(new byte[2] {2, 1 })]
		public Predicate<object> GetIsSpecified { [CompilerGenerated] get; [CompilerGenerated] set; }
		[Nullable(new byte[3] {2, 1, 2 })]
		public Action<object, object> SetIsSpecified { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonConverter ItemConverter { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? ItemIsReference { [CompilerGenerated] get; [CompilerGenerated] set; }
		public TypeNameHandling? ItemTypeNameHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public ReferenceLoopHandling? ItemReferenceLoopHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public JsonProperty();
	
		// Methods
		internal object GetResolvedDefaultValue();
		[NullableContext(1)]
		public override string ToString();
		[NullableContext(1)]
		internal void WritePropertyName(JsonWriter writer);
	}
}
