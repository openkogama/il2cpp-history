/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	internal class JsonSchemaBuilder
	{
		// Fields
		private JsonReader _reader;
		private readonly IList<JsonSchema> _stack;
		private readonly JsonSchemaResolver _resolver;
		private JsonSchema _currentSchema;
	
		// Properties
		private JsonSchema CurrentSchema { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass23_0
		{
			// Fields
			public JsonSchemaType type;
	
			// Constructors
			public __c__DisplayClass23_0();
	
			// Methods
			internal bool _MapType_b__0(KeyValuePair<string, JsonSchemaType> kv);
		}
	
		// Constructors
		public JsonSchemaBuilder(JsonSchemaResolver resolver);
	
		// Methods
		private void Push(JsonSchema value);
		private JsonSchema Pop();
		internal JsonSchema Parse(JsonReader reader);
		private JsonSchema BuildSchema();
		private void ProcessSchemaProperty(string propertyName);
		private void ProcessExtends();
		private void ProcessEnum();
		private void ProcessOptions();
		private void ProcessDefault();
		private void ProcessIdentity();
		private void ProcessAdditionalProperties();
		private void ProcessPatternProperties();
		private void ProcessItems();
		private void ProcessProperties();
		private JsonSchemaType? ProcessType();
		internal static JsonSchemaType MapType(string type);
		internal static string MapType(JsonSchemaType type);
	}
}
