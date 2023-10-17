/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	internal class JsonSchemaNode
	{
		// Fields
		[CompilerGenerated]
		private string _Id_k__BackingField;
		[CompilerGenerated]
		private ReadOnlyCollection<JsonSchema> _Schemas_k__BackingField;
		[CompilerGenerated]
		private Dictionary<string, JsonSchemaNode> _Properties_k__BackingField;
		[CompilerGenerated]
		private Dictionary<string, JsonSchemaNode> _PatternProperties_k__BackingField;
		[CompilerGenerated]
		private List<JsonSchemaNode> _Items_k__BackingField;
		[CompilerGenerated]
		private JsonSchemaNode _AdditionalProperties_k__BackingField;
	
		// Properties
		public string Id { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public ReadOnlyCollection<JsonSchema> Schemas { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Dictionary<string, JsonSchemaNode> Properties { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Dictionary<string, JsonSchemaNode> PatternProperties { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public List<JsonSchemaNode> Items { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public JsonSchemaNode AdditionalProperties { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<JsonSchema, string> __9__27_0;
			public static Func<string, string> __9__27_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal string _GetId_b__27_0(JsonSchema s);
			internal string _GetId_b__27_1(string id);
		}
	
		// Constructors
		public JsonSchemaNode(JsonSchema schema);
		private JsonSchemaNode(JsonSchemaNode source, JsonSchema schema);
	
		// Methods
		public JsonSchemaNode Combine(JsonSchema schema);
		public static string GetId(IEnumerable<JsonSchema> schemata);
	}
}
