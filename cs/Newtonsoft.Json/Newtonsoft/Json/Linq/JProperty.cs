/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
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
	[NullableContext(1)]
	public class JProperty : JContainer
	{
		// Fields
		private readonly JPropertyList _content;
		private readonly string _name;
	
		// Properties
		protected override IList<JToken> ChildrenTokens { get; }
		public string Name { [DebuggerStepThrough] get; }
		public JToken Value { [DebuggerStepThrough] get; set; }
		public override JTokenType Type { [DebuggerStepThrough] get; }
	
		// Nested types
		[Nullable(0)]
		private class JPropertyList : IList<JToken>
		{
			// Fields
			[Nullable(2)]
			internal JToken _token;
	
			// Properties
			public int Count { get; }
			public bool IsReadOnly { get; }
			public JToken this[int index] { get => default; set {} }
	
			// Nested types
			[CompilerGenerated]
			private sealed class _GetEnumerator_d__1 : IEnumerator<JToken>
			{
				// Fields
				private int __1__state;
				private JToken __2__current;
				[Nullable(0)]
				public JPropertyList __4__this;
	
				// Properties
				JToken IEnumerator<Newtonsoft.Json.Linq.JToken>.Current { [DebuggerHidden] get; }
				object IEnumerator.Current { [DebuggerHidden] get; }
	
				// Constructors
				[DebuggerHidden]
				public _GetEnumerator_d__1(int __1__state);
	
				// Methods
				[DebuggerHidden]
				void IDisposable.Dispose();
				private bool MoveNext();
				[DebuggerHidden]
				void IEnumerator.Reset();
			}
	
			// Constructors
			public JPropertyList();
	
			// Methods
			[IteratorStateMachine(typeof(_GetEnumerator_d__1))]
			public IEnumerator<JToken> GetEnumerator();
			IEnumerator IEnumerable.GetEnumerator();
			public void Add(JToken item);
			public void Clear();
			public bool Contains(JToken item);
			public void CopyTo(JToken[] array, int arrayIndex);
			public bool Remove(JToken item);
			public int IndexOf(JToken item);
			public void Insert(int index, JToken item);
			public void RemoveAt(int index);
		}
	
		// Constructors
		internal JProperty(JProperty other, [Nullable(2)] JsonCloneSettings settings);
		internal JProperty(string name);
		public JProperty(string name, [Nullable(2)] object content);
	
		// Methods
		internal override JToken GetItem(int index);
		[NullableContext(2)]
		internal override void SetItem(int index, JToken item);
		[NullableContext(2)]
		internal override bool RemoveItem(JToken item);
		internal override void RemoveItemAt(int index);
		[NullableContext(2)]
		internal override int IndexOfItem(JToken item);
		[NullableContext(2)]
		internal override bool InsertItem(int index, JToken item, bool skipParentCheck, bool copyAnnotations);
		[NullableContext(2)]
		internal override bool ContainsItem(JToken item);
		internal override void ClearItems();
		internal override JToken CloneToken([Nullable(2)] JsonCloneSettings settings);
		public override void WriteTo(JsonWriter writer, params JsonConverter[] converters);
		public static JProperty Load(JsonReader reader, [Nullable(2)] JsonLoadSettings settings);
	}
}
