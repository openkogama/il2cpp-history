/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThreadSafeQueue<T>
{
	// Fields
	private Queue<T> _queue;
	private object _lock;

	// Properties
	private Queue<T> Queue { get; }
	public int Count { get; }

	// Constructors
	public ThreadSafeQueue(int initialCap);

	// Methods
	public void Clear();
	public T Dequeue();
	public void Enqueue(T a);
	public T Peek();
}

