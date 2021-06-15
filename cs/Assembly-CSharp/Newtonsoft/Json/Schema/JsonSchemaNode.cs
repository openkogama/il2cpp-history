/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	internal class JsonSchemaNode
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _Id_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private ReadOnlyCollection<JsonSchema> _Schemas_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Dictionary<string, JsonSchemaNode> _Properties_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Dictionary<string, JsonSchemaNode> _PatternProperties_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private List<JsonSchemaNode> _Items_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private JsonSchemaNode _AdditionalProperties_k__BackingField;
		[CompilerGenerated]
		private static Func<JsonSchema, string> __f__am_cache0;
		[CompilerGenerated]
		private static Func<string, string> __f__am_cache1;
	
		// Properties
		public string Id { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public ReadOnlyCollection<JsonSchema> Schemas { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Dictionary<string, JsonSchemaNode> Properties { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public Dictionary<string, JsonSchemaNode> PatternProperties { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public List<JsonSchemaNode> Items { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public JsonSchemaNode AdditionalProperties { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public JsonSchemaNode(JsonSchema schema);
		private JsonSchemaNode(JsonSchemaNode source, JsonSchema schema);
	
		// Methods
		public JsonSchemaNode Combine(JsonSchema schema);
		public static string GetId(IEnumerable<JsonSchema> schemata);
		[CompilerGenerated]
		private static string _GetId_m__0(JsonSchema s);
		[CompilerGenerated]
		private static string _GetId_m__1(string id);
	}
}
