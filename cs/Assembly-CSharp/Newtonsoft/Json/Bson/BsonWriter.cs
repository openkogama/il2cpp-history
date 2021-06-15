/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Bson
{
	public class BsonWriter : JsonWriter
	{
		// Fields
		private readonly BsonBinaryWriter _writer;
		private BsonToken _root;
		private BsonToken _parent;
		private string _propertyName;
	
		// Properties
		public DateTimeKind DateTimeKindHandling { get; set; }
	
		// Constructors
		public BsonWriter(Stream stream);
	
		// Methods
		public override void Flush();
		protected override void WriteEnd(JsonToken token);
		public override void WriteComment(string text);
		public override void WriteStartConstructor(string name);
		public override void WriteRaw(string json);
		public override void WriteRawValue(string json);
		public override void WriteStartArray();
		public override void WriteStartObject();
		public override void WritePropertyName(string name);
		public override void Close();
		private void AddParent(BsonToken container);
		private void RemoveParent();
		private void AddValue(object value, BsonType type);
		internal void AddToken(BsonToken token);
		public override void WriteNull();
		public override void WriteUndefined();
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
		public override void WriteValue(DateTimeOffset value);
		public override void WriteValue(byte[] value);
		public override void WriteValue(Guid value);
		public override void WriteValue(TimeSpan value);
		public override void WriteValue(Uri value);
		public void WriteObjectId(byte[] value);
		public void WriteRegex(string pattern, string options);
	}
}
