/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal class DictionaryWrapper<TKey, TValue> : IDictionary<TKey, TValue>, IWrappedDictionary
	{
		// Fields
		private readonly IDictionary _dictionary;
		private readonly IDictionary<TKey, TValue> _genericDictionary;
		private object _syncRoot;
		[CompilerGenerated]
		private static Func<DictionaryEntry, KeyValuePair<TKey, TValue>> __f__am_cache0;
	
		// Properties
		bool IDictionary.IsFixedSize { get; }
		ICollection IDictionary.Keys { get; }
		ICollection IDictionary.Values { get; }
		object IDictionary.this[object key] { get => default; set {} }
		bool ICollection.IsSynchronized { get; }
		object ICollection.SyncRoot { get; }
		public ICollection<TKey> Keys { get; }
		public ICollection<TValue> Values { get; }
		public TValue this[TKey key] { get => default; set {} }
		public int Count { get; }
		public bool IsReadOnly { get; }
		public object UnderlyingDictionary { get; }
	
		// Nested types
		private struct DictionaryEnumerator<TEnumeratorKey, TEnumeratorValue> : IDictionaryEnumerator
		{
			// Fields
			private readonly IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> _e;
	
			// Properties
			public DictionaryEntry Entry { get; }
			public object Key { get; }
			public object Value { get; }
			public object Current { get; }
	
			// Constructors
			public DictionaryEnumerator(IEnumerator<KeyValuePair<TEnumeratorKey, TEnumeratorValue>> e);
	
			// Methods
			public bool MoveNext();
			public void Reset();
		}
	
		// Constructors
		public DictionaryWrapper(IDictionary dictionary);
		public DictionaryWrapper(IDictionary<TKey, TValue> dictionary);
	
		// Methods
		public void Add(TKey key, TValue value);
		public bool ContainsKey(TKey key);
		public bool Remove(TKey key);
		public bool TryGetValue(TKey key, out ref TValue value);
		public void Add(KeyValuePair<TKey, TValue> item);
		public void Clear();
		public bool Contains(KeyValuePair<TKey, TValue> item);
		public void CopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex);
		public bool Remove(KeyValuePair<TKey, TValue> item);
		public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator();
		IEnumerator IEnumerable.GetEnumerator();
		void IDictionary.Add(object key, object value);
		bool IDictionary.Contains(object key);
		IDictionaryEnumerator IDictionary.GetEnumerator();
		public void Remove(object key);
		void ICollection.CopyTo(Array array, int index);
		[CompilerGenerated]
		private static KeyValuePair<TKey, TValue> _GetEnumerator_m__0(DictionaryEntry de);
	}
}
