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
using Newtonsoft.Json;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class TraceJsonWriter : JsonWriter
	{
		// Fields
		private readonly JsonWriter _innerWriter;
		private readonly JsonTextWriter _textWriter;
		private readonly StringWriter _sw;
	
		// Constructors
		public TraceJsonWriter(JsonWriter innerWriter);
	
		// Methods
		public string GetSerializedJsonMessage();
		public override void WriteValue(decimal value);
		public override void WriteValue(decimal? value);
		public override void WriteValue(bool value);
		public override void WriteValue(bool? value);
		public override void WriteValue(byte value);
		public override void WriteValue(byte? value);
		public override void WriteValue(char value);
		public override void WriteValue(char? value);
		[NullableContext(2)]
		public override void WriteValue(byte[] value);
		public override void WriteValue(DateTime value);
		public override void WriteValue(DateTime? value);
		public override void WriteValue(DateTimeOffset value);
		public override void WriteValue(DateTimeOffset? value);
		public override void WriteValue(double value);
		public override void WriteValue(double? value);
		public override void WriteUndefined();
		public override void WriteNull();
		public override void WriteValue(float value);
		public override void WriteValue(float? value);
		public override void WriteValue(Guid value);
		public override void WriteValue(Guid? value);
		public override void WriteValue(int value);
		public override void WriteValue(int? value);
		public override void WriteValue(long value);
		public override void WriteValue(long? value);
		[NullableContext(2)]
		public override void WriteValue(object value);
		public override void WriteValue(sbyte value);
		public override void WriteValue(sbyte? value);
		public override void WriteValue(short value);
		public override void WriteValue(short? value);
		[NullableContext(2)]
		public override void WriteValue(string value);
		public override void WriteValue(TimeSpan value);
		public override void WriteValue(TimeSpan? value);
		public override void WriteValue(uint value);
		public override void WriteValue(uint? value);
		public override void WriteValue(ulong value);
		public override void WriteValue(ulong? value);
		[NullableContext(2)]
		public override void WriteValue(Uri value);
		public override void WriteValue(ushort value);
		public override void WriteValue(ushort? value);
		[NullableContext(2)]
		public override void WriteComment(string text);
		public override void WriteStartArray();
		public override void WriteEndArray();
		public override void WriteStartConstructor(string name);
		public override void WriteEndConstructor();
		public override void WritePropertyName(string name);
		public override void WritePropertyName(string name, bool escape);
		public override void WriteStartObject();
		public override void WriteEndObject();
		[NullableContext(2)]
		public override void WriteRawValue(string json);
		[NullableContext(2)]
		public override void WriteRaw(string json);
		public override void Close();
	}
}
