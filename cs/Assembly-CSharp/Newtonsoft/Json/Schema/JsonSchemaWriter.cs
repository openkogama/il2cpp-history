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
	internal class JsonSchemaWriter
	{
		// Fields
		private readonly JsonWriter _writer;
		private readonly JsonSchemaResolver _resolver;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<JsonSchemaType, bool> __9__7_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal bool _WriteType_b__7_0(JsonSchemaType v);
		}
	
		// Constructors
		public JsonSchemaWriter(JsonWriter writer, JsonSchemaResolver resolver);
	
		// Methods
		private void ReferenceOrWriteSchema(JsonSchema schema);
		public void WriteSchema(JsonSchema schema);
		private void WriteSchemaDictionaryIfNotNull(JsonWriter writer, string propertyName, IDictionary<string, JsonSchema> properties);
		private void WriteItems(JsonSchema schema);
		private void WriteType(string propertyName, JsonWriter writer, JsonSchemaType type);
		private void WritePropertyIfNotNull(JsonWriter writer, string propertyName, object value);
	}
}
