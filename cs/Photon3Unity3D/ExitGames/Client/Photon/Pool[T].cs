/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 5: Photon3Unity3D.dll - Assembly: Photon3Unity3D, Version=4.1.2.19, Culture=neutral, PublicKeyToken=null

namespace ExitGames.Client.Photon
{
	public class Pool<T>
		where T : class
	{
		// Fields
		private readonly Func<T> createFunction;
		private readonly Queue<T> pool;
		private readonly Action<T> resetFunction;
	
		// Properties
		public int Count { get; }
	
		// Constructors
		public Pool(Func<T> createFunction, Action<T> resetFunction, int poolCapacity);
		public Pool(Func<T> createFunction, int poolCapacity);
	
		// Methods
		private void CreatePoolItems(int numItems);
		public void Push(T item);
		public T Pop();
	}
}
