/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[Nullable(0)]
	[NullableContext(1)]
	public class JArray : JContainer, IList<JToken>
	{
		// Fields
		private readonly List<JToken> _values;
	
		// Properties
		protected override IList<JToken> ChildrenTokens { get; }
		public override JTokenType Type { get; }
		public JToken this[int index] { get => default; set {} }
		public bool IsReadOnly { get; }
	
		// Constructors
		public JArray();
		internal JArray(JArray other, [Nullable(2)] JsonCloneSettings settings);
		public JArray(object content);
	
		// Methods
		internal override JToken CloneToken([Nullable(2)] JsonCloneSettings settings = null);
		public static JArray Load(JsonReader reader, [Nullable(2)] JsonLoadSettings settings);
		public override void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		[NullableContext(2)]
		internal override int IndexOfItem(JToken item);
		public int IndexOf(JToken item);
		public void Insert(int index, JToken item);
		public void RemoveAt(int index);
		public IEnumerator<JToken> GetEnumerator();
		public void Add(JToken item);
		public void Clear();
		public bool Contains(JToken item);
		public void CopyTo(JToken[] array, int arrayIndex);
		public bool Remove(JToken item);
	}
}
