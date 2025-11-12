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
	public class FastAction
	{
		// Fields
		private LinkedList<Action> delegates;
		private Dictionary<Action, LinkedListNode<Action>> lookup;
	
		// Constructors
		public FastAction();
	
		// Methods
		public void Add(Action rhs);
		public void Remove(Action rhs);
		public void Call();
	}
}
