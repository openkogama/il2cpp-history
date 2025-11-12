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

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class TraceJsonReader : JsonReader, IJsonLineInfo
	{
		// Fields
		private readonly JsonReader _innerReader;
		private readonly JsonTextWriter _textWriter;
		private readonly StringWriter _sw;
	
		// Properties
		public override int Depth { get; }
		public override string Path { get; }
		public override JsonToken TokenType { get; }
		[Nullable(2)]
		public override object Value { [NullableContext(2)] get; }
		[Nullable(2)]
		public override System.Type ValueType { [NullableContext(2)] get; }
		int IJsonLineInfo.LineNumber { get; }
		int IJsonLineInfo.LinePosition { get; }
	
		// Constructors
		public TraceJsonReader(JsonReader innerReader);
	
		// Methods
		public string GetDeserializedJsonMessage();
		public override bool Read();
		public override int? ReadAsInt32();
		[NullableContext(2)]
		public override string ReadAsString();
		[NullableContext(2)]
		public override byte[] ReadAsBytes();
		public override decimal? ReadAsDecimal();
		public override double? ReadAsDouble();
		public override bool? ReadAsBoolean();
		public override System.DateTime? ReadAsDateTime();
		public override DateTimeOffset? ReadAsDateTimeOffset();
		public void WriteCurrentToken();
		public override void Close();
		bool IJsonLineInfo.HasLineInfo();
	}
}
