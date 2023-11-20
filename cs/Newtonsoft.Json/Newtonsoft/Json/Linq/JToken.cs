/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
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

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[DefaultMember("Item")]
	[Nullable(0)]
	[NullableContext(1)]
	public abstract class JToken : IEnumerable<JToken>, IJsonLineInfo, ICloneable, IDynamicMetaObjectProvider
	{
		// Fields
		[Nullable(2)]
		private JContainer _parent;
		[Nullable(2)]
		private JToken _previous;
		[Nullable(2)]
		private JToken _next;
		[Nullable(2)]
		private object _annotations;
		private static readonly JTokenType[] BooleanTypes;
		private static readonly JTokenType[] NumberTypes;
		private static readonly JTokenType[] BigIntegerTypes;
		private static readonly JTokenType[] StringTypes;
		private static readonly JTokenType[] GuidTypes;
		private static readonly JTokenType[] TimeSpanTypes;
		private static readonly JTokenType[] UriTypes;
		private static readonly JTokenType[] CharTypes;
		private static readonly JTokenType[] DateTimeTypes;
		private static readonly JTokenType[] BytesTypes;
	
		// Properties
		[Nullable(2)]
		public JContainer Parent { [DebuggerStepThrough] [NullableContext(2)] get; [NullableContext(2)] internal set; }
		public JToken Root { get; }
		public abstract JTokenType Type { get; }
		public abstract bool HasValues { get; }
		[Nullable(2)]
		public JToken Next { [NullableContext(2)] get; [NullableContext(2)] internal set; }
		[Nullable(2)]
		public JToken Previous { [NullableContext(2)] get; [NullableContext(2)] internal set; }
		public string Path { get; }
		[Nullable(2)]
		public virtual JToken First { [NullableContext(2)] get; }
		[Nullable(2)]
		public virtual JToken Last { [NullableContext(2)] get; }
		int IJsonLineInfo.LineNumber { get; }
		int IJsonLineInfo.LinePosition { get; }
	
		// Nested types
		[NullableContext(0)]
		private class LineInfoAnnotation
		{
			// Fields
			internal readonly int LineNumber;
			internal readonly int LinePosition;
	
			// Constructors
			public LineInfoAnnotation(int lineNumber, int linePosition);
		}
	
		// Constructors
		internal JToken();
		static JToken();
	
		// Methods
		internal abstract JToken CloneToken([Nullable(2)] JsonCloneSettings settings);
		public virtual JEnumerable<JToken> Children();
		public void Remove();
		public void Replace(JToken value);
		public abstract void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		public override string ToString();
		public string ToString(Formatting formatting, params JsonConverter[] converters);
		private static JValue EnsureValue(JToken value);
		private static string GetType(JToken token);
		private static bool ValidateToken(JToken o, JTokenType[] validTypes, bool nullable);
		public static explicit operator bool(JToken value);
		public static explicit operator DateTimeOffset(JToken value);
		[NullableContext(2)]
		public static explicit operator bool?(JToken value);
		public static explicit operator long(JToken value);
		[NullableContext(2)]
		public static explicit operator DateTime?(JToken value);
		[NullableContext(2)]
		public static explicit operator DateTimeOffset?(JToken value);
		[NullableContext(2)]
		public static explicit operator decimal?(JToken value);
		[NullableContext(2)]
		public static explicit operator double?(JToken value);
		[NullableContext(2)]
		public static explicit operator char?(JToken value);
		public static explicit operator int(JToken value);
		public static explicit operator short(JToken value);
		[CLSCompliant(false)]
		public static explicit operator ushort(JToken value);
		[CLSCompliant(false)]
		public static explicit operator char(JToken value);
		public static explicit operator byte(JToken value);
		[CLSCompliant(false)]
		public static explicit operator sbyte(JToken value);
		[NullableContext(2)]
		public static explicit operator int?(JToken value);
		[NullableContext(2)]
		public static explicit operator short?(JToken value);
		[CLSCompliant(false)]
		[NullableContext(2)]
		public static explicit operator ushort?(JToken value);
		[NullableContext(2)]
		public static explicit operator byte?(JToken value);
		[CLSCompliant(false)]
		[NullableContext(2)]
		public static explicit operator sbyte?(JToken value);
		public static explicit operator DateTime(JToken value);
		[NullableContext(2)]
		public static explicit operator long?(JToken value);
		[NullableContext(2)]
		public static explicit operator float?(JToken value);
		public static explicit operator decimal(JToken value);
		[CLSCompliant(false)]
		[NullableContext(2)]
		public static explicit operator uint?(JToken value);
		[CLSCompliant(false)]
		[NullableContext(2)]
		public static explicit operator ulong?(JToken value);
		public static explicit operator double(JToken value);
		public static explicit operator float(JToken value);
		[NullableContext(2)]
		public static explicit operator string(JToken value);
		[CLSCompliant(false)]
		public static explicit operator uint(JToken value);
		[CLSCompliant(false)]
		public static explicit operator ulong(JToken value);
		public static explicit operator Guid(JToken value);
		[NullableContext(2)]
		public static explicit operator Guid?(JToken value);
		public static explicit operator TimeSpan(JToken value);
		[NullableContext(2)]
		public static explicit operator TimeSpan?(JToken value);
		[NullableContext(2)]
		public static explicit operator Uri(JToken value);
		private static BigInteger ToBigInteger(JToken value);
		private static BigInteger? ToBigIntegerNullable(JToken value);
		IEnumerator IEnumerable.GetEnumerator();
		IEnumerator<JToken> IEnumerable<JToken>.GetEnumerator();
		public JsonReader CreateReader();
		public object ToObject(System.Type objectType);
		[NullableContext(2)]
		public object ToObject(System.Type objectType, [Nullable(1)] JsonSerializer jsonSerializer);
		public static JToken ReadFrom(JsonReader reader);
		public static JToken ReadFrom(JsonReader reader, [Nullable(2)] JsonLoadSettings settings);
		[NullableContext(2)]
		internal void SetLineInfo(IJsonLineInfo lineInfo, JsonLoadSettings settings);
		internal void SetLineInfo(int lineNumber, int linePosition);
		bool IJsonLineInfo.HasLineInfo();
		protected virtual DynamicMetaObject GetMetaObject(System.Linq.Expressions.Expression parameter);
		DynamicMetaObject IDynamicMetaObjectProvider.GetMetaObject(System.Linq.Expressions.Expression parameter);
		object ICloneable.Clone();
		public JToken DeepClone();
		public void AddAnnotation(object annotation);
		public T Annotation<T>()
			where T : class;
		internal void CopyAnnotations(JToken target, JToken source);
	}
}
