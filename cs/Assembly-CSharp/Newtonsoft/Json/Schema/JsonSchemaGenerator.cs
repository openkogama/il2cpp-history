/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using Newtonsoft.Json.Serialization;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	public class JsonSchemaGenerator
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
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
			[DebuggerBrowsable]
			private Type _Type_k__BackingField;
			[CompilerGenerated]
			[DebuggerBrowsable]
			private JsonSchema _Schema_k__BackingField;
	
			// Properties
			public Type Type { [CompilerGenerated] get; [CompilerGenerated] private set; }
			public JsonSchema Schema { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
			// Constructors
			public TypeSchema(Type type, JsonSchema schema);
		}
	
		[CompilerGenerated]
		private sealed class _GenerateInternal_c__AnonStorey0
		{
			// Fields
			internal Type type;
	
			// Constructors
			public _GenerateInternal_c__AnonStorey0();
	
			// Methods
			internal bool __m__0(TypeSchema tc);
		}
	
		// Constructors
		public JsonSchemaGenerator();
	
		// Methods
		private void Push(TypeSchema typeSchema);
		private TypeSchema Pop();
		public JsonSchema Generate(Type type);
		public JsonSchema Generate(Type type, JsonSchemaResolver resolver);
		public JsonSchema Generate(Type type, bool rootSchemaNullable);
		public JsonSchema Generate(Type type, JsonSchemaResolver resolver, bool rootSchemaNullable);
		private string GetTitle(Type type);
		private string GetDescription(Type type);
		private string GetTypeId(Type type, bool explicitOnly);
		private JsonSchema GenerateInternal(Type type, Required valueRequired, bool required);
		private JsonSchemaType AddNullType(JsonSchemaType type, Required valueRequired);
		private bool HasFlag(DefaultValueHandling value, DefaultValueHandling flag);
		private void GenerateObjectSchema(Type type, JsonObjectContract contract);
		private void GenerateISerializableContract(Type type, JsonISerializableContract contract);
		internal static bool HasFlag(JsonSchemaType? value, JsonSchemaType flag);
		private JsonSchemaType GetJsonSchemaType(Type type, Required valueRequired);
	}
}
