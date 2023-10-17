/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using Newtonsoft.Json.Serialization;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	public class JsonSchemaGenerator
	{
		// Fields
		[CompilerGenerated]
		private UndefinedSchemaIdHandling _UndefinedSchemaIdHandling_k__BackingField;
		private IContractResolver _contractResolver;
		private JsonSchemaResolver _resolver;
		private IList<TypeSchema> _stack;
		private JsonSchema _currentSchema;
	
		// Properties
		public UndefinedSchemaIdHandling UndefinedSchemaIdHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public IContractResolver ContractResolver { get; set; }
		private JsonSchema CurrentSchema { get; }
	
		// Nested types
		private class TypeSchema
		{
			// Fields
			[CompilerGenerated]
			private System.Type _Type_k__BackingField;
			[CompilerGenerated]
			private JsonSchema _Schema_k__BackingField;
	
			// Properties
			public System.Type Type { [CompilerGenerated] get; [CompilerGenerated] private set; }
			public JsonSchema Schema { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
			// Constructors
			public TypeSchema(System.Type type, JsonSchema schema);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass23_0
		{
			// Fields
			public System.Type type;
	
			// Constructors
			public __c__DisplayClass23_0();
	
			// Methods
			internal bool _GenerateInternal_b__0(TypeSchema tc);
		}
	
		// Constructors
		public JsonSchemaGenerator();
	
		// Methods
		private void Push(TypeSchema typeSchema);
		private TypeSchema Pop();
		public JsonSchema Generate(System.Type type);
		public JsonSchema Generate(System.Type type, JsonSchemaResolver resolver);
		public JsonSchema Generate(System.Type type, bool rootSchemaNullable);
		public JsonSchema Generate(System.Type type, JsonSchemaResolver resolver, bool rootSchemaNullable);
		private string GetTitle(System.Type type);
		private string GetDescription(System.Type type);
		private string GetTypeId(System.Type type, bool explicitOnly);
		private JsonSchema GenerateInternal(System.Type type, Required valueRequired, bool required);
		private JsonSchemaType AddNullType(JsonSchemaType type, Required valueRequired);
		private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag);
		private void GenerateObjectSchema(System.Type type, JsonObjectContract contract);
		private void GenerateISerializableContract(System.Type type, JsonISerializableContract contract);
		internal static bool HasFlag(JsonSchemaType? value, JsonSchemaType flag);
		private JsonSchemaType GetJsonSchemaType(System.Type type, Required valueRequired);
	}
}
