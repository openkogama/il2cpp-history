/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Dynamic;
using System.Linq.Expressions;
using System.Numerics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[Nullable(0)]
	[NullableContext(2)]
	public class JValue : JToken, IEquatable<JValue>, IFormattable, IComparable, IComparable<JValue>, IConvertible
	{
		// Fields
		private JTokenType _valueType;
		private object _value;
	
		// Properties
		public override bool HasValues { get; }
		public override JTokenType Type { get; }
		public object Value { get; }
	
		// Nested types
		[Nullable(new byte[2] {0, 1 })]
		[NullableContext(1)]
		private class JValueDynamicProxy : DynamicProxy<JValue>
		{
			// Constructors
			public JValueDynamicProxy();
	
			// Methods
			public override bool TryConvert(JValue instance, ConvertBinder binder, [Nullable(2)] [NotNullWhen(true)] out object result);
			public override bool TryBinaryOperation(JValue instance, BinaryOperationBinder binder, object arg, [NotNullWhen(true)] [Nullable(2)] out object result);
		}
	
		// Constructors
		internal JValue(object value, JTokenType type);
		[NullableContext(1)]
		internal JValue(JValue other, [Nullable(2)] JsonCloneSettings settings);
		public JValue(long value);
		public JValue(decimal value);
		[CLSCompliant(false)]
		public JValue(ulong value);
		public JValue(double value);
		public JValue(float value);
		public JValue(DateTime value);
		public JValue(DateTimeOffset value);
		public JValue(bool value);
		public JValue(string value);
		public JValue(Guid value);
		public JValue(Uri value);
		public JValue(TimeSpan value);
		public JValue(object value);
	
		// Methods
		[NullableContext(1)]
		private static int CompareBigInteger(BigInteger i1, object i2);
		internal static int Compare(JTokenType valueType, object objA, object objB);
		[NullableContext(1)]
		private static int CompareFloat(object objA, object objB);
		private static bool Operation(ExpressionType operation, object objA, object objB, out object result);
		[NullableContext(1)]
		internal override JToken CloneToken([Nullable(2)] JsonCloneSettings settings);
		[NullableContext(1)]
		public static JValue CreateComment([Nullable(2)] string value);
		[NullableContext(1)]
		public static JValue CreateNull();
		[NullableContext(1)]
		public static JValue CreateUndefined();
		private static JTokenType GetValueType(JTokenType? current, object value);
		private static JTokenType GetStringValueType(JTokenType? current);
		[NullableContext(1)]
		public override void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		[NullableContext(1)]
		private static bool ValuesEquals(JValue v1, JValue v2);
		public bool Equals(JValue other);
		public override bool Equals(object obj);
		public override int GetHashCode();
		[NullableContext(1)]
		public override string ToString();
		[NullableContext(1)]
		public string ToString([Nullable(2)] IFormatProvider formatProvider);
		public string ToString(string format, IFormatProvider formatProvider);
		[NullableContext(1)]
		protected override DynamicMetaObject GetMetaObject(System.Linq.Expressions.Expression parameter);
		int IComparable.CompareTo(object obj);
		public int CompareTo(JValue obj);
		TypeCode IConvertible.GetTypeCode();
		bool IConvertible.ToBoolean(IFormatProvider provider);
		char IConvertible.ToChar(IFormatProvider provider);
		sbyte IConvertible.ToSByte(IFormatProvider provider);
		byte IConvertible.ToByte(IFormatProvider provider);
		short IConvertible.ToInt16(IFormatProvider provider);
		ushort IConvertible.ToUInt16(IFormatProvider provider);
		int IConvertible.ToInt32(IFormatProvider provider);
		uint IConvertible.ToUInt32(IFormatProvider provider);
		long IConvertible.ToInt64(IFormatProvider provider);
		ulong IConvertible.ToUInt64(IFormatProvider provider);
		float IConvertible.ToSingle(IFormatProvider provider);
		double IConvertible.ToDouble(IFormatProvider provider);
		decimal IConvertible.ToDecimal(IFormatProvider provider);
		DateTime IConvertible.ToDateTime(IFormatProvider provider);
		[NullableContext(1)]
		object IConvertible.ToType(System.Type conversionType, [Nullable(2)] IFormatProvider provider);
	}
}
