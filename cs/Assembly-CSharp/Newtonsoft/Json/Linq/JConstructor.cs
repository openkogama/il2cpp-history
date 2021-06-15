/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public class JConstructor : JContainer
	{
		// Fields
		private string _name;
		private IList<JToken> _values;
	
		// Properties
		protected override IList<JToken> ChildrenTokens { get; }
		public string Name { get; set; }
		public override JTokenType Type { get; }
		public override JToken this[object key] { get => default; set {} }
	
		// Constructors
		public JConstructor();
		public JConstructor(JConstructor other);
		public JConstructor(string name, params object[] content);
		public JConstructor(string name, object content);
		public JConstructor(string name);
	
		// Methods
		internal override bool DeepEquals(JToken node);
		internal override JToken CloneToken();
		public override void WriteTo(JsonWriter writer, JsonConverter[] converters);
		internal override int GetDeepHashCode();
		public static new JConstructor Load(JsonReader reader);
	}
}
