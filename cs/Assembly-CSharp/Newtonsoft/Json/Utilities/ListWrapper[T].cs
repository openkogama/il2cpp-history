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
	internal class ListWrapper<T> : CollectionWrapper<T>, IList<T>, IWrappedList
	{
		// Fields
		private readonly IList<T> _genericList;
	
		// Properties
		public T this[int index] { get => default; set {} }
		public override int Count { get; }
		public override bool IsReadOnly { get; }
		public object UnderlyingList { get; }
	
		// Constructors
		public ListWrapper(IList list);
		public ListWrapper(IList<T> list);
	
		// Methods
		public int IndexOf(T item);
		public void Insert(int index, T item);
		public void RemoveAt(int index);
		public override void Add(T item);
		public override void Clear();
		public override bool Contains(T item);
		public override void CopyTo(T[] array, int arrayIndex);
		public override bool Remove(T item);
		public override IEnumerator<T> GetEnumerator();
	}
}
