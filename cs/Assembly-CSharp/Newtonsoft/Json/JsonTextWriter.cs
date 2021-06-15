/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Utilities;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public class JsonTextWriter : JsonWriter
	{
		// Fields
		private readonly TextWriter _writer;
		private Base64Encoder _base64Encoder;
		private char _indentChar;
		private int _indentation;
		private char _quoteChar;
		private bool _quoteName;
	
		// Properties
		private Base64Encoder Base64Encoder { get; }
		public int Indentation { get; set; }
		public char QuoteChar { get; set; }
		public char IndentChar { get; set; }
		public bool QuoteName { get; set; }
	
		// Constructors
		public JsonTextWriter(TextWriter textWriter);
	
		// Methods
		public override void Flush();
		public override void Close();
		public override void WriteStartObject();
		public override void WriteStartArray();
		public override void WriteStartConstructor(string name);
		protected override void WriteEnd(JsonToken token);
		public override void WritePropertyName(string name);
		protected override void WriteIndent();
		protected override void WriteValueDelimiter();
		protected override void WriteIndentSpace();
		private void WriteValueInternal(string value, JsonToken token);
		public override void WriteNull();
		public override void WriteUndefined();
		public override void WriteRaw(string json);
		public override void WriteValue(string value);
		public override void WriteValue(int value);
		public override void WriteValue(uint value);
		public override void WriteValue(long value);
		public override void WriteValue(ulong value);
		public override void WriteValue(float value);
		public override void WriteValue(double value);
		public override void WriteValue(bool value);
		public override void WriteValue(short value);
		public override void WriteValue(ushort value);
		public override void WriteValue(char value);
		public override void WriteValue(byte value);
		public override void WriteValue(sbyte value);
		public override void WriteValue(decimal value);
		public override void WriteValue(DateTime value);
		public override void WriteValue(byte[] value);
		public override void WriteValue(DateTimeOffset value);
		public override void WriteValue(Guid value);
		public override void WriteValue(TimeSpan value);
		public override void WriteValue(Uri value);
		public override void WriteComment(string text);
		public override void WriteWhitespace(string ws);
	}
}
