/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	internal class JsonSchemaModelBuilder
	{
		// Fields
		private JsonSchemaNodeCollection _nodes;
		private Dictionary<JsonSchemaNode, JsonSchemaModel> _nodeModels;
		private JsonSchemaNode _node;
	
		// Constructors
		public JsonSchemaModelBuilder();
	
		// Methods
		public JsonSchemaModel Build(JsonSchema schema);
		public JsonSchemaNode AddSchema(JsonSchemaNode existingNode, JsonSchema schema);
		public void AddProperties(IDictionary<string, JsonSchema> source, IDictionary<string, JsonSchemaNode> target);
		public void AddProperty(IDictionary<string, JsonSchemaNode> target, string propertyName, JsonSchema schema);
		public void AddItem(JsonSchemaNode parentNode, int index, JsonSchema schema);
		public void AddAdditionalProperties(JsonSchemaNode parentNode, JsonSchema schema);
		private JsonSchemaModel BuildNodeModel(JsonSchemaNode node);
	}
}
