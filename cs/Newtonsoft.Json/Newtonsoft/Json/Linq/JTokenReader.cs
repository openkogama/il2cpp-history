/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[Nullable(0)]
	[NullableContext(1)]
	public class JTokenReader : JsonReader, IJsonLineInfo
	{
		// Fields
		private readonly JToken _root;
		[Nullable(2)]
		private string _initialPath;
		[Nullable(2)]
		private JToken _parent;
		[Nullable(2)]
		private JToken _current;
	
		// Properties
		[Nullable(2)]
		public JToken CurrentToken { [NullableContext(2)] get; }
		int IJsonLineInfo.LineNumber { get; }
		int IJsonLineInfo.LinePosition { get; }
		public override string Path { get; }
	
		// Constructors
		public JTokenReader(JToken token);
	
		// Methods
		public override bool Read();
		private bool ReadOver(JToken t);
		private bool ReadToEnd();
		private JsonToken? GetEndToken(JContainer c);
		private bool ReadInto(JContainer c);
		private bool SetEnd(JContainer c);
		private void SetToken(JToken token);
		[NullableContext(2)]
		private string SafeToString(object value);
		bool IJsonLineInfo.HasLineInfo();
	}
}
