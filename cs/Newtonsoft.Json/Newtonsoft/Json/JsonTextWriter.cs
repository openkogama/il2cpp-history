/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json.Utilities;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[Nullable(0)]
	[NullableContext(1)]
	public class JsonTextWriter : JsonWriter
	{
		// Fields
		private readonly bool _safeAsync;
		private readonly TextWriter _writer;
		[Nullable(2)]
		private Base64Encoder _base64Encoder;
		private char _indentChar;
		private int _indentation;
		private char _quoteChar;
		private bool _quoteName;
		[Nullable(2)]
		private bool[] _charEscapeFlags;
		[Nullable(2)]
		private char[] _writeBuffer;
		[Nullable(2)]
		private IArrayPool<char> _arrayPool;
		[Nullable(2)]
		private char[] _indentChars;
	
		// Properties
		private Base64Encoder Base64Encoder { get; }
		public char QuoteChar { get; }
	
		// Constructors
		public JsonTextWriter(TextWriter textWriter);
	
		// Methods
		public override void Close();
		private void CloseBufferAndWriter();
		public override void WriteStartObject();
		public override void WriteStartArray();
		public override void WriteStartConstructor(string name);
		protected override void WriteEnd(JsonToken token);
		public override void WritePropertyName(string name);
		public override void WritePropertyName(string name, bool escape);
		internal override void OnStringEscapeHandlingChanged();
		private void UpdateCharEscapeFlags();
		protected override void WriteIndent();
		private int SetIndentChars();
		protected override void WriteValueDelimiter();
		protected override void WriteIndentSpace();
		private void WriteValueInternal(string value, JsonToken token);
		[NullableContext(2)]
		public override void WriteValue(object value);
		public override void WriteNull();
		public override void WriteUndefined();
		[NullableContext(2)]
		public override void WriteRaw(string json);
		[NullableContext(2)]
		public override void WriteValue(string value);
		private void WriteEscapedString(string value, bool quote);
		public override void WriteValue(int value);
		[CLSCompliant(false)]
		public override void WriteValue(uint value);
		public override void WriteValue(long value);
		[CLSCompliant(false)]
		public override void WriteValue(ulong value);
		public override void WriteValue(float value);
		public override void WriteValue(float? value);
		public override void WriteValue(double value);
		public override void WriteValue(double? value);
		public override void WriteValue(bool value);
		public override void WriteValue(short value);
		[CLSCompliant(false)]
		public override void WriteValue(ushort value);
		public override void WriteValue(char value);
		public override void WriteValue(byte value);
		[CLSCompliant(false)]
		public override void WriteValue(sbyte value);
		public override void WriteValue(decimal value);
		public override void WriteValue(System.DateTime value);
		private int WriteValueToBuffer(System.DateTime value);
		[NullableContext(2)]
		public override void WriteValue(byte[] value);
		public override void WriteValue(DateTimeOffset value);
		private int WriteValueToBuffer(DateTimeOffset value);
		public override void WriteValue(Guid value);
		public override void WriteValue(TimeSpan value);
		[NullableContext(2)]
		public override void WriteValue(System.Uri value);
		[NullableContext(2)]
		public override void WriteComment(string text);
		private void EnsureWriteBuffer();
		private void WriteIntegerValue(long value);
		private void WriteIntegerValue(ulong value, bool negative);
		private int WriteNumberToBuffer(ulong value, bool negative);
		private void WriteIntegerValue(int value);
		private void WriteIntegerValue(uint value, bool negative);
		private int WriteNumberToBuffer(uint value, bool negative);
	}
}
