/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public class JArray : JContainer, IList<JToken>
	{
		// Fields
		private IList<JToken> _values;
	
		// Properties
		new bool System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.IsReadOnly { get; }
		protected override IList<JToken> ChildrenTokens { get; }
		public override JTokenType Type { get; }
		public override JToken this[object key] { get => default; set {} }
		public JToken this[int index] { get => default; set {} }
	
		// Constructors
		public JArray();
		public JArray(JArray other);
		public JArray(params object[] content);
		public JArray(object content);
	
		// Methods
		internal override bool DeepEquals(JToken node);
		internal override JToken CloneToken();
		public static new JArray Load(JsonReader reader);
		public static new JArray Parse(string json);
		public static new JArray FromObject(object o);
		public static new JArray FromObject(object o, JsonSerializer jsonSerializer);
		public override void WriteTo(JsonWriter writer, JsonConverter[] converters);
		public int IndexOf(JToken item);
		public void Insert(int index, JToken item);
		public void RemoveAt(int index);
		public void Add(JToken item);
		public void Clear();
		public bool Contains(JToken item);
		new void ICollection<JToken>.CopyTo(JToken[] array, int arrayIndex);
		public bool Remove(JToken item);
		internal override int GetDeepHashCode();
	}
}
