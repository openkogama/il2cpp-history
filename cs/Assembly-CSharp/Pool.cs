/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[Serializable]
public class Pool
{
	// Fields
	[SerializeField]
	private MonoBehaviour prefab;
	[SerializeField]
	private int poolSize;
	[SerializeField]
	private PoolEnums poolEnum;
	private Transform parent;
	private List<int> available;
	private MonoBehaviour[] pool;

	// Properties
	public int ObjectsAvailable { get; }
	public PoolEnums PoolType { get; }
	public MonoBehaviour Prefab { get; }
	public MonoBehaviour Next { get; }
	public MonoBehaviour Return { set; }

	// Constructors
	public Pool();

	// Methods
	public T Instantiate<T>()
		where T : MonoBehaviour;
	public void ReturnObject(MonoBehaviour obj);
	public void Initialize(Transform parent);
}

