/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVBlueprintBase : MVGroup
{
	// Fields
	protected Dictionary<object, object> blueprintData;
	protected Dictionary<object, object> childIdMap;
	protected Dictionary<object, object> idChildMap;

	// Constructors
	public MVBlueprintBase(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	public MVBlueprintBase(Dictionary<object, object> data, ObjectPrefab prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);
	public MVBlueprintBase(Dictionary<object, object> data, GameObject prefabObject, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void Compare(MVWorldObjectClient wo, bool visibleCubesOnly, ref int matchingCubeCount, ref int investigatedCubeCount);
	public override bool CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref int insertedByProfileId);
	protected bool CompareWorldObjectsInChildrenMap(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, List<string> compareChildren, ref int insertedByProfileId);
	private void MapDataToFields();
	public override MVWorldObjectClient Clone(int ownerActorNumber, int cloneGroupId, CloneBookkeeping cloneBookkeeping, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	public MVWorldObjectClient GetChild(string child);
	public override void OnDataUpdate();
}

