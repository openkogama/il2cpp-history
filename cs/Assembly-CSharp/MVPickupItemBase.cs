/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVPickupItemBase : MVLogicObject, IPickupStateHandler, IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private const UseGUIResult purchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	private MVWorldObjectDocumentationType documentationType;
	private AvatarItemType pickupItemType;
	private int pickupVariantId;
	private bool canPickUp;
	private UseInteractor useInteractor;
	private MVPickupItemBaseObject baseObject;
	private static readonly Dictionary<AvatarItemType, MVWorldObjectDocumentationType> avatarItemToToinventoryItemDescrip;
	private List<int> instigatorsInTrigger;

	// Properties
	protected override bool HasVisualsInPlaymode { get; }
	public AvatarItemType Type { get; }
	public int VariantID { get; }
	public Dictionary<object, object> ItemData { get; }
	public override MVWorldObjectDocumentationType DocumentationType { get; }

	// Constructors
	public MVPickupItemBase(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	static MVPickupItemBase();

	// Methods
	private static ObjectPrefab GetPickupPrefabName(Dictionary<object, object> data);
	private void SetupUseInteractor();
	public override void Initialize();
	public override void Destroy();
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public override void InitializeInventory();
	public override void OnDataUpdate();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private bool CheckCanUse(int woId, MVInteractableBase avatarInteractable);
	private bool DoPickup(int instigatorWOID);
	private void triggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	public void HandleStateChange(PickupItemState state);
	private bool ShouldDoAutoPickup(int instigator);
	void IUpdatecontrollerSubscriberUpdate.UpdateControllerUpdate();
}

