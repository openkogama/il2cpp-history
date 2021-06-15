/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public class JTokenReader : JsonReader, IJsonLineInfo
	{
		// Fields
		private readonly JToken _root;
		private JToken _parent;
		private JToken _current;
	
		// Properties
		int IJsonLineInfo.LineNumber { get; }
		int IJsonLineInfo.LinePosition { get; }
		private bool IsEndElement { get; }
	
		// Constructors
		public JTokenReader(JToken token);
	
		// Methods
		public override byte[] ReadAsBytes();
		public override decimal? ReadAsDecimal();
		public override DateTimeOffset? ReadAsDateTimeOffset();
		public override bool Read();
		private bool ReadOver(JToken t);
		private bool ReadToEnd();
		private JsonToken? GetEndToken(JContainer c);
		private bool ReadInto(JContainer c);
		private bool SetEnd(JContainer c);
		private void SetToken(JToken token);
		private string SafeToString(object value);
		bool IJsonLineInfo.HasLineInfo();
	}
}
