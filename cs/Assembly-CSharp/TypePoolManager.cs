/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TypePoolManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<Pool> pool;
	private Dictionary<System.Type, Pool> poolAsDictionary;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<Pool, System.Type> __9__2_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal System.Type _Awake_b__2_0(Pool p);
	}

	// Constructors
	public TypePoolManager();

	// Methods
	private void Awake();
	public Pool GetPool<T>()
		where T : MonoBehaviour;
	public T Instantiate<T>()
		where T : MonoBehaviour;
	public void Return<T>(T obj)
		where T : MonoBehaviour;
	private void Update();
}

