/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public abstract class JContainer : JToken, IList<JToken>, IList
	{
		// Fields
		private object _syncRoot;
		private bool _busy;
	
		// Properties
		JToken IList<Newtonsoft.Json.Linq.JToken>.this[int index] { get => default; set {} }
		bool ICollection<Newtonsoft.Json.Linq.JToken>.IsReadOnly { get; }
		bool IList.IsFixedSize { get; }
		bool IList.IsReadOnly { get; }
		object IList.this[int index] { get => default; set {} }
		bool ICollection.IsSynchronized { get; }
		object ICollection.SyncRoot { get; }
		protected abstract IList<JToken> ChildrenTokens { get; }
		public override bool HasValues { get; }
		public override JToken First { get; }
		public override JToken Last { get; }
		public int Count { get; }
	
		// Nested types
		private class JTokenReferenceEqualityComparer : IEqualityComparer<JToken>
		{
			// Fields
			public static readonly JTokenReferenceEqualityComparer Instance;
	
			// Constructors
			public JTokenReferenceEqualityComparer();
			static JTokenReferenceEqualityComparer();
	
			// Methods
			public bool Equals(JToken x, JToken y);
			public int GetHashCode(JToken obj);
		}
	
		[CompilerGenerated]
		private sealed class _Descendants_c__Iterator0 : IEnumerable<JToken>, IEnumerator<JToken>
		{
			// Fields
			internal IEnumerator<JToken> _locvar0;
			internal JToken _o___1;
			internal JContainer _c___2;
			internal IEnumerator<JToken> _locvar1;
			internal JToken _d___3;
			internal JContainer _this;
			internal JToken _current;
			internal bool _disposing;
			internal int _PC;
	
			// Properties
			JToken IEnumerator<Newtonsoft.Json.Linq.JToken>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _Descendants_c__Iterator0();
	
			// Methods
			public bool MoveNext();
			[DebuggerHidden]
			public void Dispose();
			[DebuggerHidden]
			public void Reset();
			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator();
			[DebuggerHidden]
			IEnumerator<JToken> IEnumerable<JToken>.GetEnumerator();
		}
	
		// Constructors
		internal JContainer();
		internal JContainer(JContainer other);
	
		// Methods
		internal void CheckReentrancy();
		internal bool ContentsEqual(JContainer container);
		public override JEnumerable<JToken> Children();
		public override IEnumerable<T> Values<T>();
		[DebuggerHidden]
		public IEnumerable<JToken> Descendants();
		internal bool IsMultiContent(object content);
		internal JToken EnsureParentToken(JToken item);
		internal int IndexOfItem(JToken item);
		internal virtual void InsertItem(int index, JToken item);
		internal virtual void RemoveItemAt(int index);
		internal virtual bool RemoveItem(JToken item);
		internal virtual JToken GetItem(int index);
		internal virtual void SetItem(int index, JToken item);
		internal virtual void ClearItems();
		internal virtual void ReplaceItem(JToken existing, JToken replacement);
		internal virtual bool ContainsItem(JToken item);
		internal virtual void CopyItemsTo(Array array, int arrayIndex);
		internal static bool IsTokenUnchanged(JToken currentValue, JToken newValue);
		internal virtual void ValidateToken(JToken o, JToken existing);
		public virtual void Add(object content);
		public void AddFirst(object content);
		internal void AddInternal(int index, object content);
		internal JToken CreateFromContent(object content);
		public JsonWriter CreateWriter();
		public void ReplaceAll(object content);
		public void RemoveAll();
		internal void ReadTokenFrom(JsonReader r);
		internal void ReadContentFrom(JsonReader r);
		internal int ContentsHashCode();
		int IList<JToken>.IndexOf(JToken item);
		void IList<JToken>.Insert(int index, JToken item);
		void IList<JToken>.RemoveAt(int index);
		void ICollection<JToken>.Add(JToken item);
		void ICollection<JToken>.Clear();
		bool ICollection<JToken>.Contains(JToken item);
		void ICollection<JToken>.CopyTo(JToken[] array, int arrayIndex);
		bool ICollection<JToken>.Remove(JToken item);
		private JToken EnsureValue(object value);
		int IList.Add(object value);
		void IList.Clear();
		bool IList.Contains(object value);
		int IList.IndexOf(object value);
		void IList.Insert(int index, object value);
		void IList.Remove(object value);
		void IList.RemoveAt(int index);
		void ICollection.CopyTo(Array array, int index);
	}
}
