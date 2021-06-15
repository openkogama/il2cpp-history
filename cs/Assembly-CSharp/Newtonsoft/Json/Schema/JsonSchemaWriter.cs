/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	internal class JsonSchemaWriter
	{
		// Fields
		private readonly JsonWriter _writer;
		private readonly JsonSchemaResolver _resolver;
		[CompilerGenerated]
		private static Func<JsonSchemaType, bool> __f__am_cache0;
	
		// Constructors
		public JsonSchemaWriter(JsonWriter writer, JsonSchemaResolver resolver);
	
		// Methods
		private void ReferenceOrWriteSchema(JsonSchema schema);
		public void WriteSchema(JsonSchema schema);
		private void WriteSchemaDictionaryIfNotNull(JsonWriter writer, string propertyName, IDictionary<string, JsonSchema> properties);
		private void WriteItems(JsonSchema schema);
		private void WriteType(string propertyName, JsonWriter writer, JsonSchemaType type);
		private void WritePropertyIfNotNull(JsonWriter writer, string propertyName, object value);
		[CompilerGenerated]
		private static bool _WriteType_m__0(JsonSchemaType v);
	}
}
