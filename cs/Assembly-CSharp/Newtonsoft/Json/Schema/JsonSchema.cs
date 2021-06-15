/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	public class JsonSchema
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Id_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Title_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool? _Required_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool? _ReadOnly_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool? _Hidden_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool? _Transient_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Description_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private JsonSchemaType? _Type_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Pattern_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int? _MinimumLength_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int? _MaximumLength_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private double? _DivisibleBy_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private double? _Minimum_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private double? _Maximum_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool? _ExclusiveMinimum_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool? _ExclusiveMaximum_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int? _MinimumItems_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int? _MaximumItems_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IList<JsonSchema> _Items_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IDictionary<string, JsonSchema> _Properties_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private JsonSchema _AdditionalProperties_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IDictionary<string, JsonSchema> _PatternProperties_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool _AllowAdditionalProperties_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Requires_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IList<string> _Identity_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IList<JToken> _Enum_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IDictionary<JToken, string> _Options_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private JsonSchemaType? _Disallow_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private JToken _Default_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private JsonSchema _Extends_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Format_k__BackingField;
		private readonly string _internalId;
	
		// Properties
		public string Id { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Title { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? Required { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? ReadOnly { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? Hidden { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? Transient { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Description { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonSchemaType? Type { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Pattern { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? MinimumLength { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? MaximumLength { [CompilerGenerated] get; [CompilerGenerated] set; }
		public double? DivisibleBy { [CompilerGenerated] get; [CompilerGenerated] set; }
		public double? Minimum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public double? Maximum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? ExclusiveMinimum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? ExclusiveMaximum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? MinimumItems { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? MaximumItems { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IList<JsonSchema> Items { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IDictionary<string, JsonSchema> Properties { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonSchema AdditionalProperties { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IDictionary<string, JsonSchema> PatternProperties { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool AllowAdditionalProperties { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Requires { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IList<string> Identity { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IList<JToken> Enum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IDictionary<JToken, string> Options { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonSchemaType? Disallow { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JToken Default { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonSchema Extends { [CompilerGenerated] get; [CompilerGenerated] set; }
		public string Format { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal string InternalId { get; }
	
		// Constructors
		public JsonSchema();
	
		// Methods
		public static JsonSchema Read(JsonReader reader);
		public static JsonSchema Read(JsonReader reader, JsonSchemaResolver resolver);
		public static JsonSchema Parse(string json);
		public static JsonSchema Parse(string json, JsonSchemaResolver resolver);
		public void WriteTo(JsonWriter writer);
		public void WriteTo(JsonWriter writer, JsonSchemaResolver resolver);
		public override string ToString();
	}
}
