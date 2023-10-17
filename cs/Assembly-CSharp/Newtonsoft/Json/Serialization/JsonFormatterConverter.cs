/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal class JsonFormatterConverter : IFormatterConverter
	{
		// Fields
		private readonly JsonSerializer _serializer;
	
		// Constructors
		public JsonFormatterConverter(JsonSerializer serializer);
	
		// Methods
		private T GetTokenValue<T>(object value);
		public object Convert(object value, System.Type type);
		public object Convert(object value, TypeCode typeCode);
		public bool ToBoolean(object value);
		public byte ToByte(object value);
		public char ToChar(object value);
		public DateTime ToDateTime(object value);
		public decimal ToDecimal(object value);
		public double ToDouble(object value);
		public short ToInt16(object value);
		public int ToInt32(object value);
		public long ToInt64(object value);
		public sbyte ToSByte(object value);
		public float ToSingle(object value);
		public string ToString(object value);
		public ushort ToUInt16(object value);
		public uint ToUInt32(object value);
		public ulong ToUInt64(object value);
	}
}
