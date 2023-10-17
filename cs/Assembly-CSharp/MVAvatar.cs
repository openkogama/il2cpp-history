/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVAvatar : MVGroup, IHealRayAttachementObject, IUpdatecontrollerSubscriberLateUpdate
{
	// Fields
	public const int DefaultBaseMaxHelth = 100;
	protected const float healParticleSpawnCooldownTime = 1f;
	protected Avatar avatar;
	public MVRuntimeDataVariable<float> Health;
	public MVRuntimeDataVariable<int> MaxHealth;
	private MVRuntimeDataVariableClampedFloat shield;
	public MVRuntimeDataVariable Modifiers;
	public MVRuntimeDataVariable CurrentItem;
	public MVRuntimeDataVariable IsFiring;
	public MVRuntimeDataVariable Animation;
	public MVRuntimeDataVariable SpawnRoleModeTypes;
	public MVRuntimeDataVariableClampedFloat Size;
	public LimbRotationRuntimeData LimbRotationRuntimeData;
	protected float healParticleSpawnTime;
	protected AvatarPickupOwner avatarPickupOwner;
	protected AvatarLimbManager limbManager;
	protected WorldObjectSkillDataManager skillDataManager;
	private readonly Vector3 characterControllerCenterOffset;
	private Ray lineOfFire;
	private bool isLocal;
	private MVBody body;
	private GameObject healRayAttachmentObject;
	private bool isHidden;

	// Properties
	public Vector3 CharacterControllerCenterOffset { get; }
	public float HealParticleSpawnTime { set; }
	public MVRuntimeDataVariableClampedFloat Shield { get; set; }
	public PickupItem CurrentPickup { get; }
	public AvatarLimbManager LimbManager { get; }
	public MVBody Body { get; }
	public Avatar Avatar { get; }
	public bool IsSeated { get; }
	public int SeatID { get; set; }
	public bool IsHidden { get; set; }
	public float SetTransparency { set; }
	public abstract Vector3 VelocityRelative { get; }
	public abstract Vector3 VelocityAbsolute { get; }
	public MVWorldObjectClient WorldObjectClient { get; }

	// Constructors
	public MVAvatar(Dictionary<object, object> data, GameObject avatarPrefab, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	protected virtual void OnSeatedChanged(bool isSeated);
	public virtual void BeforeVehicleEntered();
	public virtual void OnEnterVehicle();
	public virtual void OnLeaveVehicle();
	public bool IsInMode(SpawnRoleModeType t);
	public override void Initialize();
	public override void Destroy();
	public void SetTeam();
	public void UpdateControllerLateUpdate();
	protected void HandleLeaveVehicle();
	protected virtual void AvatarStateChangedHandler(object a);
	private void InitializeModifiers();
	public override void AddChild(MVWorldObjectClient child);
	public override void TransferChild(int id);
	protected virtual void AttachBody(MVBody newBody);
	protected void TrySpawningHealParticles(float previousHealth, float currentHealth);
	public GameObject GetHealRayAttachmentObject();
	protected void OnStateChangeToHidden();
	protected virtual void OnAnimationChange(object newAnimationData);
	protected virtual void OnHealthChange(object newHealthData);
	protected virtual void OnShieldChange(object newShieldData);
	protected virtual void OnCurrentPickupChange(object newPickupDataData);
	[CompilerGenerated]
	private void _Initialize_b__54_0(object val);
	[CompilerGenerated]
	private void _InitializeModifiers_b__60_0(object modifiers);
}

