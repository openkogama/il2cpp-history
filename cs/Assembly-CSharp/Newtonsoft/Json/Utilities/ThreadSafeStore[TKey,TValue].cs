/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal class ThreadSafeStore<TKey, TValue>
	{
		// Fields
		private readonly object _lock;
		private Dictionary<TKey, TValue> _store;
		private readonly Func<TKey, TValue> _creator;
	
		// Constructors
		public ThreadSafeStore(Func<TKey, TValue> creator);
	
		// Methods
		public TValue Get(TKey key);
		private TValue AddValue(TKey key);
	}
}
