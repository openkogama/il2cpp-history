/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class GizmoBehaviourCollection : IEnumerable
	{
		// Fields
		private List<IGizmoBehaviour> _behaviours;
	
		// Properties
		public int Count { get; }
	
		// Constructors
		public GizmoBehaviourCollection();
	
		// Methods
		public bool Add(IGizmoBehaviour behaviour);
		public bool Remove(IGizmoBehaviour behaviour);
		public Type GetFirstBehaviourOfType<Type>()
			where Type : class, IGizmoBehaviour;
		public IGizmoBehaviour GetFirstBehaviourOfType(System.Type behaviourType);
		public List<Type> GetBehavioursOfType<Type>()
			where Type : class, IGizmoBehaviour;
		public List<IGizmoBehaviour> GetBehavioursOfType(System.Type behaviourType);
		public bool Contains(IGizmoBehaviour behaviour);
		public IEnumerator<IGizmoBehaviour> GetEnumerator();
		IEnumerator IEnumerable.GetEnumerator();
	}
}
