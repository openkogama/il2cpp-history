/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TypePoolManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<Pool> pool;
	private Dictionary<Type, Pool> poolAsDictionary;
	[CompilerGenerated]
	private static Func<Pool, Type> __f__am_cache0;

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
	[CompilerGenerated]
	private static Type _Awake_m__0(Pool p);
}

