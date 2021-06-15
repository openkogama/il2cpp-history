/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public static class LinqExtensions
	{
		// Fields
		[CompilerGenerated]
		private static Func<JObject, IEnumerable<JProperty>> __f__am_cache0;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _Values_c__Iterator0<T, U> : IEnumerable<U>, IEnumerator<U>
			where T : JToken
		{
			// Fields
			internal IEnumerable<T> source;
			internal IEnumerator<T> _locvar0;
			internal JToken _token___1;
			internal object key;
			internal IEnumerator<JToken> _locvar1;
			internal JToken _t___2;
			internal JToken _value___3;
			internal U _current;
			internal bool _disposing;
			internal int _PC;
	
			// Properties
			U IEnumerator<U>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _Values_c__Iterator0();
	
			// Methods
			public bool MoveNext();
			[DebuggerHidden]
			public void Dispose();
			[DebuggerHidden]
			public void Reset();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
			[DebuggerHidden]
			IEnumerator<U> IEnumerable<U>.GetEnumerator();
		}
	
		[CompilerGenerated]
		private sealed class _Convert_c__Iterator1<T, U> : IEnumerable<U>, IEnumerator<U>
			where T : JToken
		{
			// Fields
			internal IEnumerable<T> source;
			internal IEnumerator<T> _locvar0;
			internal JToken _token___1;
			internal U _current;
			internal bool _disposing;
			internal int _PC;
	
			// Properties
			U IEnumerator<U>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _Convert_c__Iterator1();
	
			// Methods
			public bool MoveNext();
			[DebuggerHidden]
			public void Dispose();
			[DebuggerHidden]
			public void Reset();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
			[DebuggerHidden]
			IEnumerator<U> IEnumerable<U>.GetEnumerator();
		}
	
		// Methods
		[CompilerGenerated]
		private static IEnumerable<JToken> _Ancestors_1_m__0<T>(T j)
			where T : JToken;
		[CompilerGenerated]
		private static IEnumerable<JToken> _Descendants_1_m__1<T>(T j)
			where T : JContainer;
		[CompilerGenerated]
		private static IEnumerable<JProperty> _Properties_m__2(JObject d);
		[CompilerGenerated]
		private static IEnumerable<JToken> _Children_2_m__3<T, U>(T c)
			where T : JToken;
	
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
		[DebuggerHidden]
		internal static IEnumerable<U> Values<T, U>(this IEnumerable<T> source, object key)
			where T : JToken;
		public static IJEnumerable<JToken> Children<T>(this IEnumerable<T> source)
			where T : JToken;
		public static IEnumerable<U> Children<T, U>(this IEnumerable<T> source)
			where T : JToken;
		[DebuggerHidden]
		internal static IEnumerable<U> Convert<T, U>(this IEnumerable<T> source)
			where T : JToken;
		internal static U Convert<T, U>(this T token)
			where T : JToken;
		public static IJEnumerable<JToken> AsJEnumerable(this IEnumerable<JToken> source);
		public static IJEnumerable<T> AsJEnumerable<T>(this IEnumerable<T> source)
			where T : JToken;
	}
}
