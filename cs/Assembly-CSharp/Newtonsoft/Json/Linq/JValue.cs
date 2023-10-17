/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public class JValue : JToken, IEquatable<JValue>, IFormattable, IComparable, IComparable<JValue>
	{
		// Fields
		private JTokenType _valueType;
		private object _value;
	
		// Properties
		public override bool HasValues { get; }
		public override JTokenType Type { get; }
		public object Value { get; set; }
	
		// Constructors
		internal JValue(object value, JTokenType type);
		public JValue(JValue other);
		public JValue(long value);
		public JValue(ulong value);
		public JValue(double value);
		public JValue(DateTime value);
		public JValue(bool value);
		public JValue(string value);
		public JValue(Guid value);
		public JValue(Uri value);
		public JValue(TimeSpan value);
		public JValue(object value);
	
		// Methods
		internal override bool DeepEquals(JToken node);
		private static int Compare(JTokenType valueType, object objA, object objB);
		private static int CompareFloat(object objA, object objB);
		internal override JToken CloneToken();
		public static JValue CreateComment(string value);
		public static JValue CreateString(string value);
		private static JTokenType GetValueType(JTokenType? current, object value);
		private static JTokenType GetStringValueType(JTokenType? current);
		public override void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		internal override int GetDeepHashCode();
		private static bool ValuesEquals(JValue v1, JValue v2);
		public bool Equals(JValue other);
		public override bool Equals(object obj);
		public override int GetHashCode();
		public override string ToString();
		public string ToString(string format);
		public string ToString(IFormatProvider formatProvider);
		public string ToString(string format, IFormatProvider formatProvider);
		int IComparable.CompareTo(object obj);
		public int CompareTo(JValue obj);
	}
}
