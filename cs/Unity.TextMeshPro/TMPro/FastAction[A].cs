/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public class FastAction<A>
	{
		// Fields
		private LinkedList<Action<A>> delegates;
		private Dictionary<Action<A>, LinkedListNode<Action<A>>> lookup;
	
		// Constructors
		public FastAction();
	
		// Methods
		public void Add(Action<A> rhs);
		public void Remove(Action<A> rhs);
		public void Call(A a);
	}
}
