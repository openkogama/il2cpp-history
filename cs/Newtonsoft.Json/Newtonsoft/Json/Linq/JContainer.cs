/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[Nullable(0)]
	[NullableContext(1)]
	public abstract class JContainer : JToken, IList<JToken>, IBindingList
	{
		// Fields
		[Nullable(2)]
		internal ListChangedEventHandler _listChanged;
		[Nullable(2)]
		internal NotifyCollectionChangedEventHandler _collectionChanged;
		[Nullable(2)]
		private object _syncRoot;
		private bool _busy;
	
		// Properties
		protected abstract IList<JToken> ChildrenTokens { get; }
		public override bool HasValues { get; }
		[Nullable(2)]
		public override JToken First { [NullableContext(2)] get; }
		[Nullable(2)]
		public override JToken Last { [NullableContext(2)] get; }
		JToken IList<Newtonsoft.Json.Linq.JToken>.this[int index] { get => default; set {} }
		bool ICollection<Newtonsoft.Json.Linq.JToken>.IsReadOnly { get; }
		bool IList.IsFixedSize { get; }
		bool IList.IsReadOnly { get; }
		[Nullable(2)]
		object IList.this[int index] { [NullableContext(2)] get => default; [NullableContext(2)] set {} }
		public int Count { get; }
		bool ICollection.IsSynchronized { get; }
		object ICollection.SyncRoot { get; }
	
		// Constructors
		internal JContainer();
		internal JContainer(JContainer other, [Nullable(2)] JsonCloneSettings settings);
	
		// Methods
		internal void CheckReentrancy();
		protected virtual void OnListChanged(ListChangedEventArgs e);
		protected virtual void OnCollectionChanged(NotifyCollectionChangedEventArgs e);
		public override JEnumerable<JToken> Children();
		[NullableContext(2)]
		internal bool IsMultiContent([NotNullWhen(true)] object content);
		internal JToken EnsureParentToken([Nullable(2)] JToken item, bool skipParentCheck, bool copyAnnotations);
		[NullableContext(2)]
		internal abstract int IndexOfItem(JToken item);
		[NullableContext(2)]
		internal virtual bool InsertItem(int index, JToken item, bool skipParentCheck, bool copyAnnotations);
		internal virtual void RemoveItemAt(int index);
		[NullableContext(2)]
		internal virtual bool RemoveItem(JToken item);
		internal virtual JToken GetItem(int index);
		[NullableContext(2)]
		internal virtual void SetItem(int index, JToken item);
		internal virtual void ClearItems();
		internal virtual void ReplaceItem(JToken existing, JToken replacement);
		[NullableContext(2)]
		internal virtual bool ContainsItem(JToken item);
		internal virtual void CopyItemsTo(Array array, int arrayIndex);
		internal static bool IsTokenUnchanged(JToken currentValue, [Nullable(2)] JToken newValue);
		internal virtual void ValidateToken(JToken o, [Nullable(2)] JToken existing);
		[NullableContext(2)]
		public virtual void Add(object content);
		[NullableContext(2)]
		internal bool TryAdd(object content);
		internal void AddAndSkipParentCheck(JToken token);
		[NullableContext(2)]
		internal bool TryAddInternal(int index, object content, bool skipParentCheck, bool copyAnnotations);
		internal static JToken CreateFromContent([Nullable(2)] object content);
		public void RemoveAll();
		internal void ReadTokenFrom(JsonReader reader, [Nullable(2)] JsonLoadSettings options);
		internal void ReadContentFrom(JsonReader r, [Nullable(2)] JsonLoadSettings settings);
		[NullableContext(2)]
		private static JProperty ReadProperty([Nullable(1)] JsonReader r, JsonLoadSettings settings, IJsonLineInfo lineInfo, [Nullable(1)] JContainer parent);
		int IList<JToken>.IndexOf(JToken item);
		void IList<JToken>.Insert(int index, JToken item);
		void IList<JToken>.RemoveAt(int index);
		void ICollection<JToken>.Add(JToken item);
		void ICollection<JToken>.Clear();
		bool ICollection<JToken>.Contains(JToken item);
		void ICollection<JToken>.CopyTo(JToken[] array, int arrayIndex);
		bool ICollection<JToken>.Remove(JToken item);
		[NullableContext(2)]
		private JToken EnsureValue(object value);
		[NullableContext(2)]
		int IList.Add(object value);
		void IList.Clear();
		[NullableContext(2)]
		bool IList.Contains(object value);
		[NullableContext(2)]
		int IList.IndexOf(object value);
		[NullableContext(2)]
		void IList.Insert(int index, object value);
		[NullableContext(2)]
		void IList.Remove(object value);
		void IList.RemoveAt(int index);
		void ICollection.CopyTo(Array array, int index);
	}
}
