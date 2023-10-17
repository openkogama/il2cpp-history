/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Schema;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
		private ValidationEventHandler ValidationEventHandler;
	
		// Properties
		public override object Value { get; }
		public override int Depth { get; }
		public override char QuoteChar { get; protected internal set; }
		public override JsonToken TokenType { get; }
		public override System.Type ValueType { get; }
		private IEnumerable<JsonSchemaModel> CurrentSchemas { get; }
		private IEnumerable<JsonSchemaModel> CurrentMemberSchemas { get; }
		public JsonSchema Schema { get; set; }
		public JsonReader Reader { get; }
		int IJsonLineInfo.LineNumber { get; }
		int IJsonLineInfo.LinePosition { get; }
	
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
			private string _CurrentPropertyName_k__BackingField;
			[CompilerGenerated]
			private int _ArrayItemCount_k__BackingField;
	
			// Properties
			public string CurrentPropertyName { [CompilerGenerated] get; [CompilerGenerated] set; }
			public int ArrayItemCount { [CompilerGenerated] get; [CompilerGenerated] set; }
			public IList<JsonSchemaModel> Schemas { get; }
			public Dictionary<string, bool> RequiredProperties { get; }
			public JTokenType TokenType { get; }
	
			// Nested types
			[Serializable]
			[CompilerGenerated]
			private sealed class __c
			{
				// Fields
				public static readonly __c __9;
				public static Func<string, string> __9__17_0;
				public static Func<string, bool> __9__17_1;
				public static Func<KeyValuePair<string, JsonSchemaModel>, bool> __9__18_0;
				public static Func<KeyValuePair<string, JsonSchemaModel>, string> __9__18_1;
	
				// Constructors
				static __c();
				public __c();
	
				// Methods
				internal string _.ctor_b__17_0(string p);
				internal bool _.ctor_b__17_1(string p);
				internal bool _GetRequiredProperties_b__18_0(KeyValuePair<string, JsonSchemaModel> p);
				internal string _GetRequiredProperties_b__18_1(KeyValuePair<string, JsonSchemaModel> p);
			}
	
			// Constructors
			public SchemaScope(JTokenType tokenType, IList<JsonSchemaModel> schemas);
	
			// Methods
			private IEnumerable<string> GetRequiredProperties(JsonSchemaModel schema);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<KeyValuePair<string, bool>, bool> __9__41_0;
			public static Func<KeyValuePair<string, bool>, string> __9__41_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal bool _ValidateEndObject_b__41_0(KeyValuePair<string, bool> kv);
			internal string _ValidateEndObject_b__41_1(KeyValuePair<string, bool> kv);
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
	}
}
