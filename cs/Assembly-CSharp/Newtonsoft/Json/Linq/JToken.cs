/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public abstract class JToken : IJEnumerable<JToken>, IJsonLineInfo, ICloneable
	{
		// Fields
		private JContainer _parent;
		private JToken _previous;
		private JToken _next;
		private static JTokenEqualityComparer _equalityComparer;
		private int? _lineNumber;
		private int? _linePosition;
	
		// Properties
		public static JTokenEqualityComparer EqualityComparer { get; }
		public JContainer Parent { [DebuggerStepThrough] get; internal set; }
		public JToken Root { get; }
		public abstract JTokenType Type { get; }
		public abstract bool HasValues { get; }
		public JToken Next { get; internal set; }
		public JToken Previous { get; internal set; }
		public virtual JToken this[object key] { get => default; set {} }
		public virtual JToken First { get; }
		public virtual JToken Last { get; }
		IJEnumerable<JToken> Newtonsoft.Json.Linq.IJEnumerable<Newtonsoft.Json.Linq.JToken>.this[object key] { get => default; }
		int IJsonLineInfo.LineNumber { get; }
		int IJsonLineInfo.LinePosition { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class _Ancestors_d__29 : IEnumerable<JToken>, IEnumerator<JToken>
		{
			// Fields
			private int __1__state;
			private JToken __2__current;
			private int __l__initialThreadId;
			public JToken __4__this;
			private JToken _parent_5__2;
	
			// Properties
			JToken IEnumerator<Newtonsoft.Json.Linq.JToken>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _Ancestors_d__29(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
			[DebuggerHidden]
			IEnumerator<JToken> IEnumerable<JToken>.GetEnumerator();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
		}
	
		[CompilerGenerated]
		private sealed class _AfterSelf_d__30 : IEnumerable<JToken>, IEnumerator<JToken>
		{
			// Fields
			private int __1__state;
			private JToken __2__current;
			private int __l__initialThreadId;
			public JToken __4__this;
			private JToken _o_5__2;
	
			// Properties
			JToken IEnumerator<Newtonsoft.Json.Linq.JToken>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _AfterSelf_d__30(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
			[DebuggerHidden]
			IEnumerator<JToken> IEnumerable<JToken>.GetEnumerator();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
		}
	
		[CompilerGenerated]
		private sealed class _BeforeSelf_d__31 : IEnumerable<JToken>, IEnumerator<JToken>
		{
			// Fields
			private int __1__state;
			private JToken __2__current;
			private int __l__initialThreadId;
			public JToken __4__this;
			private JToken _o_5__2;
	
			// Properties
			JToken IEnumerator<Newtonsoft.Json.Linq.JToken>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _BeforeSelf_d__31(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
			[DebuggerHidden]
			IEnumerator<JToken> IEnumerable<JToken>.GetEnumerator();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
		}
	
		// Constructors
		internal JToken();
	
		// Methods
		internal abstract JToken CloneToken();
		internal abstract bool DeepEquals(JToken node);
		public static bool DeepEquals(JToken t1, JToken t2);
		public void AddAfterSelf(object content);
		public void AddBeforeSelf(object content);
		[IteratorStateMachine(typeof(_Ancestors_d__29))]
		public IEnumerable<JToken> Ancestors();
		[IteratorStateMachine(typeof(_AfterSelf_d__30))]
		public IEnumerable<JToken> AfterSelf();
		[IteratorStateMachine(typeof(_BeforeSelf_d__31))]
		public IEnumerable<JToken> BeforeSelf();
		public virtual T Value<T>(object key);
		public virtual JEnumerable<JToken> Children();
		public JEnumerable<T> Children<T>()
			where T : JToken;
		public virtual IEnumerable<T> Values<T>();
		public void Remove();
		public void Replace(JToken value);
		public abstract void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		public override string ToString();
		public string ToString(Formatting formatting, params JsonConverter[] converters);
		private static JValue EnsureValue(JToken value);
		private static string GetType(JToken token);
		private static bool IsNullable(JToken o);
		private static bool ValidateFloat(JToken o, bool nullable);
		private static bool ValidateInteger(JToken o, bool nullable);
		private static bool ValidateDate(JToken o, bool nullable);
		private static bool ValidateBoolean(JToken o, bool nullable);
		private static bool ValidateString(JToken o);
		private static bool ValidateBytes(JToken o);
		public static explicit operator bool(JToken value);
		public static explicit operator DateTimeOffset(JToken value);
		public static explicit operator bool?(JToken value);
		public static explicit operator long(JToken value);
		public static explicit operator DateTime?(JToken value);
		public static explicit operator DateTimeOffset?(JToken value);
		public static explicit operator decimal?(JToken value);
		public static explicit operator double?(JToken value);
		public static explicit operator int(JToken value);
		public static explicit operator short(JToken value);
		public static explicit operator ushort(JToken value);
		public static explicit operator int?(JToken value);
		public static explicit operator short?(JToken value);
		public static explicit operator ushort?(JToken value);
		public static explicit operator DateTime(JToken value);
		public static explicit operator long?(JToken value);
		public static explicit operator float?(JToken value);
		public static explicit operator decimal(JToken value);
		public static explicit operator uint?(JToken value);
		public static explicit operator ulong?(JToken value);
		public static explicit operator double(JToken value);
		public static explicit operator float(JToken value);
		public static explicit operator string(JToken value);
		public static explicit operator uint(JToken value);
		public static explicit operator ulong(JToken value);
		public static explicit operator byte[](JToken value);
		public static implicit operator JToken(bool value);
		public static implicit operator JToken(DateTimeOffset value);
		public static implicit operator JToken(bool? value);
		public static implicit operator JToken(long value);
		public static implicit operator JToken(DateTime? value);
		public static implicit operator JToken(DateTimeOffset? value);
		public static implicit operator JToken(decimal? value);
		public static implicit operator JToken(double? value);
		public static implicit operator JToken(short value);
		public static implicit operator JToken(ushort value);
		public static implicit operator JToken(int value);
		public static implicit operator JToken(int? value);
		public static implicit operator JToken(DateTime value);
		public static implicit operator JToken(long? value);
		public static implicit operator JToken(float? value);
		public static implicit operator JToken(decimal value);
		public static implicit operator JToken(short? value);
		public static implicit operator JToken(ushort? value);
		public static implicit operator JToken(uint? value);
		public static implicit operator JToken(ulong? value);
		public static implicit operator JToken(double value);
		public static implicit operator JToken(float value);
		public static implicit operator JToken(string value);
		public static implicit operator JToken(uint value);
		public static implicit operator JToken(ulong value);
		public static implicit operator JToken(byte[] value);
		IEnumerator IEnumerable.GetEnumerator();
		IEnumerator<JToken> IEnumerable<JToken>.GetEnumerator();
		internal abstract int GetDeepHashCode();
		public JsonReader CreateReader();
		internal static JToken FromObjectInternal(object o, JsonSerializer jsonSerializer);
		public static JToken FromObject(object o);
		public static JToken FromObject(object o, JsonSerializer jsonSerializer);
		public T ToObject<T>();
		public T ToObject<T>(JsonSerializer jsonSerializer);
		public static JToken ReadFrom(JsonReader reader);
		public static JToken Parse(string json);
		public static JToken Load(JsonReader reader);
		internal void SetLineInfo(IJsonLineInfo lineInfo);
		internal void SetLineInfo(int lineNumber, int linePosition);
		bool IJsonLineInfo.HasLineInfo();
		public JToken SelectToken(string path);
		public JToken SelectToken(string path, bool errorWhenNoMatch);
		object ICloneable.Clone();
		public JToken DeepClone();
	}
}
