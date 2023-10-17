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

public class MVGamePointChest : MVGamePointRewardLogicObject
{
	// Fields
	private static readonly UseGUIResult purchaseOptions;
	private bool canRespawn;
	private int respawnTime;
	private float pickUpTime;
	private const string respawnString = "respawnTime";
	private const string gamePointAwardedString = "gamePointAmount";
	private GamePointChestClientState state;
	private UseInteractor useInteractor;
	private MVGamePointChestObject chestObject;
	private const int gamePointAmountSettingDefaultValue = 30;
	private int gamePointsRewarded;

	// Properties
	public override MVWorldObjectDocumentationType DocumentationType { get; }
	public override bool HasInputConnector { get; }
	public override bool HasOutputConnector { get; }
	protected override bool HasVisualsInPlaymode { get; }
	public override bool Visible { get; set; }

	// Nested types
	public enum GamePointChestClientState
	{
		Closed = 0,
		Opening = 1,
		Open = 2
	}

	// Constructors
	public MVGamePointChest(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	static MVGamePointChest();

	// Methods
	public override void Initialize();
	private void SetupUseInteractor();
	private void UpdateGamePointsRewardedAmount();
	private void UpdateChestSize();
	private void UpdateCanRespawn(Dictionary<object, object> newData);
	private bool HandleDifferentChestSizeStages(float percentage);
	public override void OnDataUpdate();
	public override void InitializeInventory();
	protected override void OnUpdate();
	public bool IsUsable(int id, MVInteractableBase avatarInteractable);
	private bool OpenChest(int instigatorID);
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	public override void Reset();
	private void OnWinningConditionFulfilled(IWinningCondition winningCondition);
	private void SetToClosed();
	private void HandleStandaloneDisabling();
	private void Disable();
	public override MVWorldObjectClient Clone(int ownerActorNumber, int cloneGroupId, CloneBookkeeping cloneBookkeeping, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	public override MVWorldObject DeepCopy();
	public override void Destroy();
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
}

