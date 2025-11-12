/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(new byte[3] {0, 1, 1 })]
	[NullableContext(1)]
	public class JsonPropertyCollection : KeyedCollection<string, Newtonsoft.Json.Serialization.JsonProperty>
	{
		// Fields
		private readonly System.Type _type;
		private readonly List<JsonProperty> _list;
	
		// Constructors
		public JsonPropertyCollection(System.Type type);
	
		// Methods
		protected override string GetKeyForItem(JsonProperty item);
		public void AddProperty(JsonProperty property);
		public JsonProperty GetClosestMatchProperty(string propertyName);
		private bool TryGetProperty(string key, [Nullable(2)] [NotNullWhen(true)] out JsonProperty item);
		public JsonProperty GetProperty(string propertyName, StringComparison comparisonType);
	}
}
