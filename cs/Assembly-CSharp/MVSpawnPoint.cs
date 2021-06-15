/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVSpawnPoint : MVLogicObject
{
	// Fields
	private bool isInWorld;

	// Properties
	protected override bool HasVisualsInPlaymode { get; }

	// Constructors
	public MVSpawnPoint(Dictionary<object, object> data, ObjectPrefab prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void Destroy();
	private static MVTeam WOTypeToTeamIndex(WorldObjectType type);
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public override bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
}

