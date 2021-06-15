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

public class AvatarInteractable : MVInteractable, IMoveHitHandler
{
	// Fields
	public Action<float, MVPlayer, PlayerKilledByType> OnDamageTaken;
	public Action<Vector3> OnNewSafePosition;
	public Action OnShieldReplenished;
	private DamageSource lastDamageSource;
	private float boostedHealthMultiplier;
	private float damageMultiplier;
	private HashSet<PlayerKilledByType> KillNotificationBlacklist;
	private readonly MaterialHitPackage[] hitPackages;
	private InteractableMaterialHitHandler materialHitHandler;
	private bool canWallJumpAnySurfaces;

	// Properties
	public DamageSource LastDamageSource { get; }

	// Nested types
	public class DamageSource
	{
		// Fields
		public static readonly DamageSource none;
		public MVPlayer shooter;
		public PlayerKilledByType damageType;
		public float time;
		private const float lifeTime = 4f;

		// Properties
		public bool Outdated { get; }

		// Constructors
		public DamageSource(MVPlayer shooter, PlayerKilledByType damageType);
		private DamageSource();
		static DamageSource();
	}

	// Constructors
	public AvatarInteractable();

	// Methods
	public override void Init(MVRuntimeDataVariable runtimeDataModifiers, MVRuntimeDataVariable<float> health, MVRuntimeDataVariable<int> maxHealth, MVRuntimeDataVariableClampedFloat shield, WorldObjectSkillDataManager skillDataManager);
	private void OnDestroy();
	public void InitializeSkills(WorldObjectSkillDataManager skillDataManager);
	public override void TakeDamage(float amount, MVPlayer damageDealer, PlayerKilledByType damageType);
	private void DoKilledNotification(MVPlayer damageDealer, PlayerKilledByType defaultDamageType);
	private float GetBoostedHealth(float defaultHealth);
	public void DieFromRespawn(MVPlayer damageDealer, PlayerKilledByType damageType);
	public void DieFromStuck();
	public void DieFromFalling();
	public void DieFromBeingStuck();
	protected override void RestoreShield(float restoredShieldAmount);
	private float DamageShield(float amount);
	public override void AddModifier(AvatarModifierPackageType type, int id = -1, AvatarModifierPackage.AvatarModifier[] additionalModifers = null);
	public void HandleMoveHit(MVControllerColliderHit moveHit);
	private bool IsGroundedSafely(MVControllerColliderHit moveHit);
	private void SetupBoostedHealthMultiplier();
	private void HandlePoisonResistBoost();
}

