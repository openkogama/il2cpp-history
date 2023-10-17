/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Linq;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	internal class JsonSchemaModel
	{
		// Fields
		[CompilerGenerated]
		private bool _Required_k__BackingField;
		[CompilerGenerated]
		private JsonSchemaType _Type_k__BackingField;
		[CompilerGenerated]
		private int? _MinimumLength_k__BackingField;
		[CompilerGenerated]
		private int? _MaximumLength_k__BackingField;
		[CompilerGenerated]
		private double? _DivisibleBy_k__BackingField;
		[CompilerGenerated]
		private double? _Minimum_k__BackingField;
		[CompilerGenerated]
		private double? _Maximum_k__BackingField;
		[CompilerGenerated]
		private bool _ExclusiveMinimum_k__BackingField;
		[CompilerGenerated]
		private bool _ExclusiveMaximum_k__BackingField;
		[CompilerGenerated]
		private int? _MinimumItems_k__BackingField;
		[CompilerGenerated]
		private int? _MaximumItems_k__BackingField;
		[CompilerGenerated]
		private IList<string> _Patterns_k__BackingField;
		[CompilerGenerated]
		private IList<JsonSchemaModel> _Items_k__BackingField;
		[CompilerGenerated]
		private IDictionary<string, JsonSchemaModel> _Properties_k__BackingField;
		[CompilerGenerated]
		private IDictionary<string, JsonSchemaModel> _PatternProperties_k__BackingField;
		[CompilerGenerated]
		private JsonSchemaModel _AdditionalProperties_k__BackingField;
		[CompilerGenerated]
		private bool _AllowAdditionalProperties_k__BackingField;
		[CompilerGenerated]
		private IList<JToken> _Enum_k__BackingField;
		[CompilerGenerated]
		private JsonSchemaType _Disallow_k__BackingField;
	
		// Properties
		public bool Required { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonSchemaType Type { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? MinimumLength { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? MaximumLength { [CompilerGenerated] get; [CompilerGenerated] set; }
		public double? DivisibleBy { [CompilerGenerated] get; [CompilerGenerated] set; }
		public double? Minimum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public double? Maximum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool ExclusiveMinimum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool ExclusiveMaximum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? MinimumItems { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int? MaximumItems { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IList<string> Patterns { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IList<JsonSchemaModel> Items { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IDictionary<string, JsonSchemaModel> Properties { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IDictionary<string, JsonSchemaModel> PatternProperties { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonSchemaModel AdditionalProperties { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool AllowAdditionalProperties { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IList<JToken> Enum { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonSchemaType Disallow { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public JsonSchemaModel();
	
		// Methods
		public static JsonSchemaModel Create(IList<JsonSchema> schemata);
		private static void Combine(JsonSchemaModel model, JsonSchema schema);
	}
}
