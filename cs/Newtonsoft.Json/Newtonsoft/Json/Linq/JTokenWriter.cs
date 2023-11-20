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

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[Nullable(0)]
	[NullableContext(2)]
	public class JTokenWriter : JsonWriter
	{
		// Fields
		private JContainer _token;
		private JContainer _parent;
		private JValue _value;
		private JToken _current;
	
		// Properties
		public JToken Token { get; }
	
		// Constructors
		public JTokenWriter();
	
		// Methods
		public override void Close();
		public override void WriteStartObject();
		[NullableContext(1)]
		private void AddParent(JContainer container);
		private void RemoveParent();
		public override void WriteStartArray();
		[NullableContext(1)]
		public override void WriteStartConstructor(string name);
		protected override void WriteEnd(JsonToken token);
		[NullableContext(1)]
		public override void WritePropertyName(string name);
		private void AddRawValue(object value, JTokenType type, JsonToken token);
		internal void AddJValue(JValue value, JsonToken token);
		public override void WriteValue(object value);
		public override void WriteNull();
		public override void WriteUndefined();
		public override void WriteRaw(string json);
		public override void WriteComment(string text);
		public override void WriteValue(string value);
		public override void WriteValue(int value);
		[CLSCompliant(false)]
		public override void WriteValue(uint value);
		public override void WriteValue(long value);
		[CLSCompliant(false)]
		public override void WriteValue(ulong value);
		public override void WriteValue(float value);
		public override void WriteValue(double value);
		public override void WriteValue(bool value);
		public override void WriteValue(short value);
		[CLSCompliant(false)]
		public override void WriteValue(ushort value);
		public override void WriteValue(char value);
		public override void WriteValue(byte value);
		[CLSCompliant(false)]
		public override void WriteValue(sbyte value);
		public override void WriteValue(decimal value);
		public override void WriteValue(DateTime value);
		public override void WriteValue(DateTimeOffset value);
		public override void WriteValue(byte[] value);
		public override void WriteValue(TimeSpan value);
		public override void WriteValue(Guid value);
		public override void WriteValue(Uri value);
		[NullableContext(1)]
		internal override void WriteToken(JsonReader reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments);
	}
}
