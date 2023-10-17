/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public class JProperty : JContainer
	{
		// Fields
		private readonly List<JToken> _content;
		private readonly string _name;
	
		// Properties
		protected override IList<JToken> ChildrenTokens { get; }
		public string Name { [DebuggerStepThrough] get; }
		public JToken Value { [DebuggerStepThrough] get; set; }
		public override JTokenType Type { [DebuggerStepThrough] get; }
	
		// Constructors
		public JProperty(JProperty other);
		internal JProperty(string name);
		public JProperty(string name, params object[] content);
		public JProperty(string name, object content);
	
		// Methods
		internal override JToken GetItem(int index);
		internal override void SetItem(int index, JToken item);
		internal override bool RemoveItem(JToken item);
		internal override void RemoveItemAt(int index);
		internal override void InsertItem(int index, JToken item);
		internal override bool ContainsItem(JToken item);
		internal override void ClearItems();
		internal override bool DeepEquals(JToken node);
		internal override JToken CloneToken();
		public override void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		internal override int GetDeepHashCode();
		public static new JProperty Load(JsonReader reader);
	}
}
