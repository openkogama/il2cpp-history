/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DictionaryWithChangeEvent<TKey, TValue> : IDictionary<TKey, TValue>
{
	// Fields
	private IDictionary<TKey, TValue> dictionary;
	public OnDictionaryChangeDelegate OnDictionaryChange;

	// Properties
	public bool IsReadOnly { get; }
	public int Count { get; }
	public ICollection<TKey> Keys { get; }
	public ICollection<TValue> Values { get; }
	public TValue this[TKey key] { get => default; set {} }

	// Nested types
	public delegate void OnDictionaryChangeDelegate(IDictionary<TKey, TValue> dictionary);

	// Constructors
	public DictionaryWithChangeEvent();

	// Methods
	public void Add(KeyValuePair<TKey, TValue> pair);
	public void Add(TKey key, TValue value);
	public bool Remove(KeyValuePair<TKey, TValue> pair);
	public bool Remove(TKey key);
	public void Clear();
	public bool Contains(KeyValuePair<TKey, TValue> pair);
	public bool ContainsKey(TKey key);
	IEnumerator<KeyValuePair<TKey, TValue>> IEnumerable<KeyValuePair<TKey, TValue>>.GetEnumerator();
	public IEnumerator GetEnumerator();
	public void CopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex);
	private void NotifyDictionaryChange();
	public bool TryGetValue(TKey key, out ref TValue value);
}

