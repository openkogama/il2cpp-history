/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVWorldObjectSpawner : MVBlueprintBase
{
	// Fields
	protected MVWorldObjectDocumentationType documentationType;
	protected UseInteractor useInteractor;
	protected SpawnStateWrapper spawnStateWrapper;
	protected int spawnWorldObjectID;
	protected TriggerBoxEvents triggerBoxEvents;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }

	// Constructors
	protected MVWorldObjectSpawner(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	protected MVWorldObjectSpawner(Dictionary<object, object> data, ObjectPrefab prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void Destroy();
	public virtual void Take(int takeTime);
	protected virtual void OnSpawnStateChange(SpawnState spawnState);
	protected abstract bool CheckCanUse(int woId, MVInteractableBase userWoID);
	protected abstract bool Use(int userWoID);
}

