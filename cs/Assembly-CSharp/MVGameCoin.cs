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

public class MVGameCoin : MVLogicObject
{
	// Fields
	private MVGameCoinObject pickupObject;
	private UseInteractor useInteractor;
	private GameCoinClientState state;
	private bool isVisible;
	private float pickedUpStateDuration;
	private float reshowingStateDuration;
	private float pickedUpTime;
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }

	// Nested types
	public enum GameCoinClientState
	{
		Visible = 0,
		PickedUp = 1,
		ReShowing = 2,
		Invisible = 3
	}

	// Constructors
	public MVGameCoin(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void SetupUserInteractor();
	public override void OnDataUpdate();
	public override MVWorldObjectClient Clone(int ownerActorNumber, int cloneGroupId, CloneBookkeeping cloneBookkeeping, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	public override MVWorldObject DeepCopy();
	public override void Destroy();
	private void SetVisible();
	public virtual bool OnPickup(int instigatorID);
	public bool IsCoinTakeable(int woId, MVInteractableBase avatarInteractable);
	public override void Reset();
	protected override void OnUpdate();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	private void OnWinningConditionFulfilled(IWinningCondition winningCondition);
}

