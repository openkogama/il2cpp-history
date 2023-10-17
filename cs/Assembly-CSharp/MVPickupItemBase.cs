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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVPickupItemBase : MVLogicObject, IPickupStateHandler, IUpdatecontrollerSubscriberUpdate
{
	// Fields
	public const string ItemDataKey = "itemData";
	public const string ItemTypeKey = "itemType";
	public const string VariantIdKey = "variantId";
	public const float PickupRotationSpeed = 68f;
	private const UseGUIResult PurchaseOptions = UseGUIResult.CanAfford | UseGUIResult.CannotAfford;
	[CompilerGenerated]
	private MVPickupItemBaseObject _BaseObject_k__BackingField;
	protected UseInteractor useInteractor;
	protected int pickupVariantId;
	protected AvatarItemType pickupItemType;
	private readonly MVWorldObjectDocumentationType documentationType;
	private bool canPickUp;
	private readonly List<int> instigatorsInTrigger;
	private static readonly Dictionary<AvatarItemType, MVWorldObjectDocumentationType> avatarItemToToinventoryItemDescrip;

	// Properties
	protected override bool HasVisualsInPlaymode { get; }
	public AvatarItemType Type { get; }
	public int VariantID { get; }
	public Dictionary<object, object> ItemData { get; }
	public MVPickupItemBaseObject BaseObject { [CompilerGenerated] get; [CompilerGenerated] protected set; }
	public override MVWorldObjectDocumentationType DocumentationType { get; }

	// Constructors
	public MVPickupItemBase(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);
	static MVPickupItemBase();

	// Methods
	private static ObjectPrefab GetPickupPrefabName(Dictionary<object, object> data);
	private void SetupUseInteractor();
	protected virtual void AddExtraUseRequirements(GameObject root, UseInteractor ui);
	public override void Initialize();
	public override void Destroy();
	public override Vector3 GetClosestGridPoint(float gridSize, Vector3 position);
	public override void InitializeInventory();
	public override void OnDataUpdate();
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	private void triggerBoxEvents_TriggerExit(object sender, TriggerEventArgs e);
	protected bool CheckCanUse(int woId, MVInteractableBase avatarInteractable);
	protected virtual bool CheckCanUse();
	protected bool DoPickup(int instigatorWOID);
	public void HandleStateChange(PickupItemState state);
	private bool ShouldDoAutoPickup(int instigator);
	private bool TryGetPickupOwner(int instigator, out MVPickupOwner pickupOwner);
	protected virtual bool IsSameWeapon(PickupItem pickupItem);
	void IUpdatecontrollerSubscriberUpdate.UpdateControllerUpdate();
}

