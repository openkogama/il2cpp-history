/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVWorldObjectSpawner : MVBlueprintBase
{
	// Fields
	public const string RespawnIntervalDataKey = "RespawnInterval";
	public const string RespawnCountDataKey = "RespawnCount";
	protected MVWorldObjectDocumentationType documentationType;
	protected const string SpawnWorldObjectIDKey = "spawnWorldObjectID";
	protected UseInteractor useInteractor;
	protected SpawnStateWrapper spawnStateWrapper;
	protected int spawnWorldObjectID;
	protected TriggerBoxEvents triggerBoxEvents;
	private int predictTakeTime;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }

	// Constructors
	protected MVWorldObjectSpawner(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	protected MVWorldObjectSpawner(Dictionary<object, object> data, ObjectPrefab prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private SpawnStateWrapper.SpawnStateConfiguration ReadRespawnStateConfiguration();
	private int GetDataByKey(string key, int defaultValue);
	public override void Destroy();
	public void RollbackPrediction();
	public void TakePrediction(int takeTime);
	public void Take(int takeTime);
	public override void OnDataUpdate();
	protected virtual void OnSpawnStateChange(SpawnState spawnState);
	protected abstract bool CheckCanUse(int woId, MVInteractableBase userWoID);
	protected abstract bool Use(int userWoID);
}

