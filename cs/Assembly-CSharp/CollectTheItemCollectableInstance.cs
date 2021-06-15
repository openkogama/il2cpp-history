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

public class CollectTheItemCollectableInstance : MVBlueprintBase, ITriggerBoxEventsHandler, IPickupStateHandler
{
	// Fields
	private CollectTheItemObject collectTheItemObject;
	private CullingSubscriberBase cullingSubscriberBase;
	private UseInteractor useInteractor;
	private bool isTaken;
	private readonly float timeCreated;
	private PickupItemState currentState;

	// Properties
	private bool IsOriginalInstance { get; }
	private int OriginalInstanceID { get; }
	public bool HasArrowIndicator { get; }
	private int CollectTheItemCollectableID { get; }

	// Constructors
	public CollectTheItemCollectableInstance(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void Reset();
	public void SetupGreyoutScript(object sender, EditStateEventArgs args);
	private void InitializeInstanceWithData();
	private void SetupCulling();
	private void SetupUseInteractor();
	private void OnEditModeChange(EditModeChangeArgs arg);
	private void SetupInstance();
	private void OnCollected(bool shouldBeActiveOnCollect);
	private void SetBlinker();
	private bool CheckCanUse(int woId, MVInteractableBase interactable);
	private bool CanPickupWithoutUse(int instigator);
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private bool SendEnterEvent(int instigator);
	private new void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs);
	public void OnStateChanged(CullingGroupEvent cullingEvent);
	private bool DoPickup(int instigatorWOID);
	public void Enter(int instigatorWoID);
	public void Exit();
	public void SetRotationEnabled(bool enableRotation);
	public override void Destroy();
	public override bool Delete(MVWorldObjectClientManager worldObjectClientManager, ref string errorText);
	public void HandleStateChange(PickupItemState state);
}

