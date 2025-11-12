/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Portal.Scripts.Utils.Cache
{
	public class MemoryKgmCache<K, T> : IKgmCache<K, T>, IDisposable
	{
		// Fields
		private readonly Dictionary<K, KgmCacheItem<T>> cache;
		private readonly ReaderWriterLockSlim locker;
		private bool disposed;
	
		// Constructors
		public MemoryKgmCache();
	
		// Methods
		public void Dispose();
		private void Dispose(bool disposing);
		public void Clear();
		public T Get(K key);
		public bool TryGet(K key, out ref T value);
		public void AddOrUpdate(K key, T value, int expirationSeconds, bool resetExpirationIfExists = false);
		public bool Exists(K key);
	}
}
