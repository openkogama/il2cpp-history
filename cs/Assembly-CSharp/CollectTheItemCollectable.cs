/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class CollectTheItemCollectable : MVBlueprintBase
{
	// Fields
	private CullingSubscriberBase cullingSubscriberBase;
	private MVCubeModelInstance collectableModel;
	private CollectTheItemCollectableInstance collectableInstance;
	private EditableCubeModelWrapper editableCubeModelWrapper;
	private CollectTheItem controller;
	public Action OnCollectTheItemDestroyed;
	private ObscuredIntVector minBounds;
	private ObscuredIntVector maxBounds;
	private ObscuredInt minCubes;

	// Properties
	public int CollectableModelId { get; }
	public int DropOffId { get; }
	public bool HasArrowIndicator { get; }
	public bool HasDropOff { get; }

	// Constructors
	public CollectTheItemCollectable(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public void InitializeWithController(CollectTheItem controller);
	private void SetupCollectableModel();
	private new void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	public Dictionary<string, object> GetItemData();
	public void CreateCollectableInstance(Vector3 position, Quaternion rotation);
	public override bool OnExitObject(EditorStateMachine e);
	public override bool OnEnterObject(EditorStateMachine e);
	public void OnStateChanged(CullingGroupEvent cullingEvent);
	public override bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
	public override void Destroy();
}

