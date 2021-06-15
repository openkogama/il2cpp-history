/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public class JsonPropertyCollection : KeyedCollection<string, Newtonsoft.Json.Serialization.JsonProperty>
	{
		// Fields
		private readonly Type _type;
	
		// Constructors
		public JsonPropertyCollection(Type type);
	
		// Methods
		protected override string GetKeyForItem(JsonProperty item);
		public void AddProperty(JsonProperty property);
		public JsonProperty GetClosestMatchProperty(string propertyName);
		public JsonProperty GetProperty(string propertyName, StringComparison comparisonType);
	}
}
