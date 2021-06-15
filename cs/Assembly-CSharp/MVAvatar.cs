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

public abstract class MVAvatar : MVGroup, IHealRayAttachementObject, IUpdatecontrollerSubscriberLateUpdate
{
	// Fields
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
	private readonly Vector3 characterControllerCenterOffset;
	protected const float healParticleSpawnCooldownTime = 1f;
	protected float healParticleSpawnTime;
	private Ray lineOfFire;
	private bool isLocal;
	private MVBody body;
	private GameObject healRayAttachmentObject;
	protected AvatarPickupOwner avatarPickupOwner;
	protected AvatarLimbManager limbManager;
	protected WorldObjectSkillDataManager skillDataManager;

	// Properties
	public MVRuntimeDataVariableClampedFloat Shield { get; set; }
	public Vector3 CharacterControllerCenterOffset { get; }
	public float HealParticleSpawnTime { set; }
	public PickupItem CurrentPickup { get; }
	public AvatarLimbManager LimbManager { get; }
	public float SetTransparency { set; }
	public MVBody Body { get; }
	public bool IsSeated { get; }
	public int SeatID { get; set; }
	public Avatar Avatar { get; }
	public abstract Vector3 VelocityRelative { get; }
	public abstract Vector3 VelocityAbsolute { get; }
	public MVWorldObjectClient WorldObjectClient { get; }

	// Constructors
	public MVAvatar(Dictionary<object, object> data, GameObject avatarPrefab, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	protected virtual void OnSeatedChanged(bool isSeated);
	public bool IsInMode(SpawnRoleModeType t);
	public virtual void BeforeVehicleEntered();
	public virtual void OnEnterVehicle();
	public virtual void OnLeaveVehicle();
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
	[DebuggerHidden]
	private void _set_Scale___BaseCallProxy0(Vector3 value);
	[CompilerGenerated]
	private void _Initialize_m__0(object val);
	[CompilerGenerated]
	private void _InitializeModifiers_m__1(object modifiers);
}

