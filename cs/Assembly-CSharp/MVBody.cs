/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVBody : MVBlueprintBase, IWorldObjectWithModelingConstraint
{
	// Fields
	private BodyAccessoriesController bodyAccessoriesController;
	private BodyAccessoriesController previewBodyAccessoriesController;
	private bool collidersEnabled;
	private bool shadowVisible;
	private bool visible;
	private MVBodyObject bodyObject;
	private Dictionary<int, IModelingConstraint> constraints;
	private List<Renderer> renderers;
	private List<Collider> colliders;
	private List<MVCubeModelInstance> attachedPartModels;
	private bool initialized;
	private bool hasAvatarBeenAttached;
	private Vector3 modelScale;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _LayerToSetTo_k__BackingField;
	private BodyClone bodyClone;
	[CompilerGenerated]
	private static Dictionary<string, int> __f__switch_map1;

	// Properties
	public string LayerToSetTo { [CompilerGenerated] private get; [CompilerGenerated] set; }
	public BoneAnimation Animation { get; }
	public bool IsPlayerBody { get; }
	public BodyData BodyData { get; }
	public List<MVCubeModelInstance> AttachedParts { get; }
	public AvatarBlobShadowController BlobShadow { get; }
	public new bool Visible { get; set; }
	public bool ShadowVisible { get; set; }
	private bool CollidersEnabled { get; set; }
	public bool AccessoryMoveOverride { get; set; }

	// Constructors
	public MVBody(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public bool IsAccessorySlotOccupied(AccessorySlotType accessorySlotType);
	public float GetAccessoryOffset(AccessorySlotType slot);
	public void ApplyAccessoryOffset(float yOffset, AccessorySlotType slot);
	public float GetAccessoryScale(AccessorySlotType slot);
	public void ApplyAccessorySize(float size, AccessorySlotType slot);
	public bool IsAccessoryEquipped(int streamingAssetId);
	public GameObject CreateClone();
	public void DestroyClone();
	public void PreviewAccessory(AccessoryDataClient viewItem);
	public void EndPreviewAccessory();
	private void UpdateBodyClone(Dictionary<object, object> accessoryData);
	public void SyncOffset(AccessorySlotType slot, float offset);
	public void SyncScale(AccessorySlotType slot, float scale);
	public override void Initialize();
	public void InitializeHealth(float currentHealthAmount);
	public void InitializeShield(float currentShieldAmount);
	public void UpdateBlinking();
	public override void InitializeInventory();
	public override void Destroy();
	public void Attach(MVAvatar mvAvatar, bool isLocal);
	public void Detach();
	public void StartBlinking(BlinkType type, float duration);
	public void StopBlinking(BlinkType type);
	public void ToggleBlinking(bool shouldShowBlinking);
	public GameObject CopyByValue();
	private void CopyMaterialsByValue(GameObject bodyCloneGO);
	private void InitializeCommon();
	private void RefreshAccessories();
	private Dictionary<object, object> GetAccessoryData();
	private void UpdateVisibility();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	public override MVWorldObjectClient Clone(int ownerActorNumber, int cloneGroupId, CloneBookkeeping cloneBookkeeping, Dictionary<int, MVWorldObjectClient> worldObjects, Dictionary<int, RuntimePrototypeCubeModel> prototypes);
	public IModelingConstraint GetModelConstaint(MVCubeModelInstance cubeModel);
	public override void OnDataUpdate();
	public void OnAnimationUpdate(object newAnimationData);
	public void OnHealthUpdate(object newHealthData);
	public void OnShieldUpdate(object newShieldData);
	public void EnableBodyBlinker();
	public void DisableBodyBlinker();
	public void StartAnimation(string newAnimation);
	public MVCubeModelInstance GetBodyPart(string part);
	private void AttachCubes();
	private void AttachCube(string boneName);
	private void AlignModel(string boneName, Transform bone, GameObject model);
}

