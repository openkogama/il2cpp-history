/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.Avatar.Accessories;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BodyAccessoriesController
{
	// Fields
	private static Dictionary<AccessorySlotType, string> slotBoneNameMap;
	private static Dictionary<AccessorySlotType, Vector3> slotBoneOffset;
	private bool accessoryMoveOverride;
	private Dictionary<AccessorySlotType, AvatarAccessory> accessoryMap;
	private AccessoryLoader accessoryLoader;
	private Dictionary<object, object> accessoryData;
	private BodyData bodyData;
	private int bodyWoId;
	private bool accessoriesVisible;

	// Properties
	public Dictionary<object, object> AccessoryData { get; }
	public bool AccessoryMoveOverride { get; set; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass25_0
	{
		// Fields
		public AccessorySlotType slot;
		public BodyAccessoriesController __4__this;

		// Constructors
		public __c__DisplayClass25_0();

		// Methods
		internal void _RefreshAccessories_b__0(AvatarAccessory accessory);
	}

	// Constructors
	public BodyAccessoriesController(int bodyWoId, BodyData bodyData, Dictionary<object, object> accessoryData, bool isVisible);
	static BodyAccessoriesController();

	// Methods
	public float GetOffset(AccessorySlotType accessorySlot);
	public float GetScale(AccessorySlotType accessorySlot);
	public bool IsAccessoryEquipped(int streamingAssetId);
	public void Destroy();
	public Vector3 GetSlotPosition(AccessorySlotType slot, Vector3 offset);
	private bool AttachAccessory(AvatarAccessory acc, AccessorySlotType slot, float offset, float scale);
	private Transform GetSlotTransform(AccessorySlotType slot);
	public void UpdateAccessoryVisibility(bool visible);
	public void ApplySizeChange(float size, AccessorySlotType slot);
	public void ApplyAccessoryOffset(float yOffset, AccessorySlotType slot);
	public void RefreshAccessories(Dictionary<object, object> accessoryData);
	private void UpdateScale(AccessorySlotType slot, float scale);
	private void UpdateOffset(AccessorySlotType slot, float offset);
	private void DestroyAccessory(AccessorySlotType slot);
	private bool IsAccessoryInWoData(AvatarAccessory avatarAccessory);
	private void LoadedAccessoryCallback(AvatarAccessory accessory, AccessorySlotType slot);
	public bool IsAccessorySlotOccupied(AccessorySlotType accessorySlotType);
	private bool AccessoryShouldBeSelecable(AvatarAccessory accessory);
	private void MakeAccessorySelectable(AvatarAccessory accessory, AccessorySlotType accessorySlot);
}

