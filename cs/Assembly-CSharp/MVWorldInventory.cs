/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVWorldInventory
{
	// Fields
	private Dictionary<int, RuntimePrototypeCubeModel> runtimePrototypes;
	private Dictionary<int, PendingPrototypeData> pendingRuntimePrototypes;
	private List<RuntimePrototypeCubeModel> dirtyRPCM;
	private const int numberOfLowPriorityMeshGenerations = 1;
	public OnWorldInventoryChangeDelegate OnWorldInventoryChange;

	// Properties
	public Dictionary<int, RuntimePrototypeCubeModel> RuntimePrototypes { get; }

	// Nested types
	public delegate void OnWorldInventoryChangeDelegate(MVWorldInventory inventory);

	// Constructors
	public MVWorldInventory();

	// Methods
	public void AddRuntimePrototypeToDirty(RuntimePrototypeCubeModel rpcm);
	public void OnUpdatePrototypeEvent(int worldInventoryID, byte[] worldInventoryData);
	public void OnUpdatePrototypeScaleEvent(int worldInventoryID, float scale);
	private void GenerateAllDirty(ref int counter);
	private bool GenerateDirty(MeshGeneratePriority priority, ref int counter);
	private void GenerateDirtyRPCM();
	public void LateUpdate();
	public void AddPrototype(Dictionary<object, object> data);
	public void RemovePrototype(int id);
	public void UnpendRuntimePrototype(int woId);
	public void OnReplaceWoPrototype(int woId, int worldInventoryId);
	public void RequestWoMakeUniquePrototype(int woId);
	private void ReplaceWithPendingRuntimePrototype(int woId);
	private RuntimePrototypeCubeModel CreatePendingPrototype(int prototypeId);
	private void NotifyWorldInventoryChange();
}

