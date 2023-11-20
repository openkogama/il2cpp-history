/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
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
	[DefaultMember("Item")]
	[Nullable(0)]
	[NullableContext(1)]
	public class JConstructor : JContainer
	{
		// Fields
		[Nullable(2)]
		private string _name;
		private readonly List<JToken> _values;
	
		// Properties
		protected override IList<JToken> ChildrenTokens { get; }
		[Nullable(2)]
		public string Name { [NullableContext(2)] get; }
		public override JTokenType Type { get; }
	
		// Constructors
		internal JConstructor(JConstructor other, [Nullable(2)] JsonCloneSettings settings);
		public JConstructor(string name);
	
		// Methods
		[NullableContext(2)]
		internal override int IndexOfItem(JToken item);
		internal override JToken CloneToken([Nullable(2)] JsonCloneSettings settings = null);
		public override void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		public static JConstructor Load(JsonReader reader, [Nullable(2)] JsonLoadSettings settings);
	}
}
