/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class EnumPoolManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<Pool> pool;
	private Pool[] lookupTable;

	// Constructors
	public EnumPoolManager();

	// Methods
	private void Awake();
	public Pool GetPool(PoolEnums pEnum);
	public T Instantiate<T>(PoolEnums pEnum)
		where T : MonoBehaviour;
	public void Return(MonoBehaviour obj, PoolEnums pEnum);
}

