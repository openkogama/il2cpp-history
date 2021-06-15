/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVGamePointRewardLogicObject : MVLogicObject
{
	// Properties
	protected virtual int GamePointRewardAmount { get; }
	public string GamePointString { get; }

	// Constructors
	public MVGamePointRewardLogicObject(Dictionary<object, object> data, ObjectPrefab prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void OnDataUpdate();
	public override void Destroy();
	protected bool HasGamePoints(Dictionary<object, object> dataToCheck);
	protected int GetGamePointsRewardAmount(Dictionary<object, object> data);
}

