/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.Tools
{
	public class ColliderCollection : IReadOnlyCollection<Collider>
	{
		// Fields
		private readonly LinkedList<Collider> colliders;
		private readonly Collider baseCollider;
		private Collider activeCollider;
	
		// Properties
		public int Count { get; }
		public Collider Base { get; }
		public Collider Active { get; }
	
		// Constructors
		public ColliderCollection(Collider baseCollider);
	
		// Methods
		public void SetActiveCollider(Collider collider);
		public bool RemoveCollider(Collider collider);
		IEnumerator<Collider> IEnumerable<Collider>.GetEnumerator();
		public IEnumerator GetEnumerator();
		public void CopyTo(Array array, int index);
	}
}
