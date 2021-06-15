/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CFX_SpawnSystem : MonoBehaviour
{
	// Fields
	private static CFX_SpawnSystem instance;
	public GameObject[] objectsToPreload;
	public int[] objectsToPreloadTimes;
	public bool hideObjectsInHierarchy;
	private bool allObjectsLoaded;
	private Dictionary<int, List<GameObject>> instantiatedObjects;
	private Dictionary<int, int> poolCursors;

	// Properties
	public static bool AllObjectsLoaded { get; }

	// Constructors
	public CFX_SpawnSystem();

	// Methods
	public static GameObject GetNextObject(GameObject sourceObj, bool activateObject = true);
	public static void PreloadObject(GameObject sourceObj, int poolSize = 1);
	public static void UnloadObjects(GameObject sourceObj);
	private void addObjectToPool(GameObject sourceObject, int number);
	private void removeObjectsFromPool(GameObject sourceObject);
	private void Awake();
	private void Start();
}

