/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVGameCoinChest : MVLogicObject
{
	// Fields
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	private GameCoinChestClientState state;
	private int instigator;
	private UseInteractor useInteractor;
	private MVGameCoinChestObject chestObject;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override bool Visible { get; set; }

	// Nested types
	private enum GameCoinChestClientState
	{
		Closed = 0,
		Opening = 1,
		Open = 2
	}

	// Constructors
	public MVGameCoinChest(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void SetupUseInteractor();
	public override void OnDataUpdate();
	public override void InitializeInventory();
	protected override void OnUpdate();
	public bool IsUsable(int woId, MVInteractableBase avatarInteractable);
	private bool OpenChest(int instigatorID);
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public override void Reset();
	private void DoOpen();
	public override MVWorldObjectClient Clone(int ownerActorNumber, int cloneGroupId, CloneBookkeeping cloneBookkeeping, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	public override MVWorldObject DeepCopy();
	public override void Destroy();
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
}

