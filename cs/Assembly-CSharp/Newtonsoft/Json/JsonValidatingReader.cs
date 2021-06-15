/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Schema;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public class JsonValidatingReader : JsonReader, IJsonLineInfo
	{
		// Fields
		private readonly JsonReader _reader;
		private readonly Stack<SchemaScope> _stack;
		private JsonSchema _schema;
		private JsonSchemaModel _model;
		private SchemaScope _currentScope;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private ValidationEventHandler ValidationEventHandler;
		[CompilerGenerated]
		private static Func<KeyValuePair<string, bool>, bool> __f__am_cache0;
		[CompilerGenerated]
		private static Func<KeyValuePair<string, bool>, string> __f__am_cache1;
	
		// Properties
		int IJsonLineInfo.LineNumber { get; }
		int IJsonLineInfo.LinePosition { get; }
		public override object Value { get; }
		public override int Depth { get; }
		public override char QuoteChar { get; protected internal set; }
		public override JsonToken TokenType { get; }
		public override Type ValueType { get; }
		private IEnumerable<JsonSchemaModel> CurrentSchemas { get; }
		private IEnumerable<JsonSchemaModel> CurrentMemberSchemas { get; }
		public JsonSchema Schema { get; set; }
		public JsonReader Reader { get; }
	
		// Events
		public event ValidationEventHandler ValidationEventHandler {
			add;
			remove;
		}
	
		// Nested types
		private class SchemaScope
		{
			// Fields
			private readonly JTokenType _tokenType;
			private readonly IList<JsonSchemaModel> _schemas;
			private readonly Dictionary<string, bool> _requiredProperties;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private string _CurrentPropertyName_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private int _ArrayItemCount_k__BackingField;
			[CompilerGenerated]
			private static Func<string, string> __f__am_cache0;
			[CompilerGenerated]
			private static Func<string, bool> __f__am_cache1;
			[CompilerGenerated]
			private static Func<KeyValuePair<string, JsonSchemaModel>, bool> __f__am_cache2;
			[CompilerGenerated]
			private static Func<KeyValuePair<string, JsonSchemaModel>, string> __f__am_cache3;
	
			// Properties
			public string CurrentPropertyName { [CompilerGenerated] get; [CompilerGenerated] set; }
			public int ArrayItemCount { [CompilerGenerated] get; [CompilerGenerated] set; }
			public IList<JsonSchemaModel> Schemas { get; }
			public Dictionary<string, bool> RequiredProperties { get; }
			public JTokenType TokenType { get; }
	
			// Constructors
			public SchemaScope(JTokenType tokenType, IList<JsonSchemaModel> schemas);
	
			// Methods
			private IEnumerable<string> GetRequiredProperties(JsonSchemaModel schema);
			[CompilerGenerated]
			private static string _SchemaScope_m__0(string p);
			[CompilerGenerated]
			private static bool _SchemaScope_m__1(string p);
			[CompilerGenerated]
			private static bool _GetRequiredProperties_m__2(KeyValuePair<string, JsonSchemaModel> p);
			[CompilerGenerated]
			private static string _GetRequiredProperties_m__3(KeyValuePair<string, JsonSchemaModel> p);
		}
	
		// Constructors
		public JsonValidatingReader(JsonReader reader);
	
		// Methods
		private void Push(SchemaScope scope);
		private new SchemaScope Pop();
		private void RaiseError(string message, JsonSchemaModel schema);
		private void OnValidationEvent(JsonSchemaException exception);
		private void ValidateInEnumAndNotDisallowed(JsonSchemaModel schema);
		private JsonSchemaType? GetCurrentNodeSchemaType();
		public override byte[] ReadAsBytes();
		public override decimal? ReadAsDecimal();
		public override DateTimeOffset? ReadAsDateTimeOffset();
		public override bool Read();
		private void ValidateCurrentToken();
		private void ValidateEndObject(JsonSchemaModel schema);
		private void ValidateEndArray(JsonSchemaModel schema);
		private void ValidateNull(JsonSchemaModel schema);
		private void ValidateBoolean(JsonSchemaModel schema);
		private void ValidateString(JsonSchemaModel schema);
		private void ValidateInteger(JsonSchemaModel schema);
		private void ProcessValue();
		private void ValidateFloat(JsonSchemaModel schema);
		private static bool IsZero(double value);
		private void ValidatePropertyName(JsonSchemaModel schema);
		private bool IsPropertyDefinied(JsonSchemaModel schema, string propertyName);
		private bool ValidateArray(JsonSchemaModel schema);
		private bool ValidateObject(JsonSchemaModel schema);
		private bool TestType(JsonSchemaModel currentSchema, JsonSchemaType currentType);
		bool IJsonLineInfo.HasLineInfo();
		[CompilerGenerated]
		private static bool _ValidateEndObject_m__0(KeyValuePair<string, bool> kv);
		[CompilerGenerated]
		private static string _ValidateEndObject_m__1(KeyValuePair<string, bool> kv);
	}
}
