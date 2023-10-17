/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public static class LinqExtensions
	{
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c__0<T>
			where T : JToken
		{
			// Fields
			public static readonly __c__0<T> __9;
			public static Func<T, IEnumerable<JToken>> __9__0_0;
	
			// Constructors
			static __c__0();
			public __c__0();
	
			// Methods
			internal IEnumerable<JToken> _Ancestors_b__0_0(T j);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c__1<T>
			where T : JContainer
		{
			// Fields
			public static readonly __c__1<T> __9;
			public static Func<T, IEnumerable<JToken>> __9__1_0;
	
			// Constructors
			static __c__1();
			public __c__1();
	
			// Methods
			internal IEnumerable<JToken> _Descendants_b__1_0(T j);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<JObject, IEnumerable<JProperty>> __9__2_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal IEnumerable<JProperty> _Properties_b__2_0(JObject d);
		}
	
		[CompilerGenerated]
		private sealed class _Values_d__9<T, U> : IEnumerable<U>, IEnumerator<U>
			where T : JToken
		{
			// Fields
			private int __1__state;
			private U __2__current;
			private int __l__initialThreadId;
			private IEnumerable<T> source;
			public IEnumerable<T> __3__source;
			private object key;
			public object __3__key;
			private IEnumerator<T> __7__wrap1;
			private IEnumerator<JToken> __7__wrap2;
	
			// Properties
			U IEnumerator<U>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _Values_d__9(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			private void __m__Finally1();
			private void __m__Finally2();
			[DebuggerHidden]
			void IEnumerator.Reset();
			[DebuggerHidden]
			IEnumerator<U> IEnumerable<U>.GetEnumerator();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c__11<T, U>
			where T : JToken
		{
			// Fields
			public static readonly __c__11<T, U> __9;
			public static Func<T, IEnumerable<JToken>> __9__11_0;
	
			// Constructors
			static __c__11();
			public __c__11();
	
			// Methods
			internal IEnumerable<JToken> _Children_b__11_0(T c);
		}
	
		[CompilerGenerated]
		private sealed class _Convert_d__12<T, U> : IEnumerable<U>, IEnumerator<U>
			where T : JToken
		{
			// Fields
			private int __1__state;
			private U __2__current;
			private int __l__initialThreadId;
			private IEnumerable<T> source;
			public IEnumerable<T> __3__source;
			private IEnumerator<T> __7__wrap1;
	
			// Properties
			U IEnumerator<U>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _Convert_d__12(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			private void __m__Finally1();
			[DebuggerHidden]
			void IEnumerator.Reset();
			[DebuggerHidden]
			IEnumerator<U> IEnumerable<U>.GetEnumerator();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
		}
	
		// Extension methods
		public static IJEnumerable<JToken> Ancestors<T>(this IEnumerable<T> source)
			where T : JToken;
		public static IJEnumerable<JToken> Descendants<T>(this IEnumerable<T> source)
			where T : JContainer;
		public static IJEnumerable<JProperty> Properties(this IEnumerable<JObject> source);
		public static IJEnumerable<JToken> Values(this IEnumerable<JToken> source, object key);
		public static IJEnumerable<JToken> Values(this IEnumerable<JToken> source);
		public static IEnumerable<U> Values<U>(this IEnumerable<JToken> source, object key);
		public static IEnumerable<U> Values<U>(this IEnumerable<JToken> source);
		public static U Value<U>(this IEnumerable<JToken> value);
		public static U Value<T, U>(this IEnumerable<T> value)
			where T : JToken;
		[IteratorStateMachine(typeof(_Values_d__9<T, U>))]
		internal static IEnumerable<U> Values<T, U>(this IEnumerable<T> source, object key)
			where T : JToken;
		public static IJEnumerable<JToken> Children<T>(this IEnumerable<T> source)
			where T : JToken;
		public static IEnumerable<U> Children<T, U>(this IEnumerable<T> source)
			where T : JToken;
		[IteratorStateMachine(typeof(_Convert_d__12<T, U>))]
		internal static IEnumerable<U> Convert<T, U>(this IEnumerable<T> source)
			where T : JToken;
		internal static U Convert<T, U>(this T token)
			where T : JToken;
		public static IJEnumerable<JToken> AsJEnumerable(this IEnumerable<JToken> source);
		public static IJEnumerable<T> AsJEnumerable<T>(this IEnumerable<T> source)
			where T : JToken;
	}
}
