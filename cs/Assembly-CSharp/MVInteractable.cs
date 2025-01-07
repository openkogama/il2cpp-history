/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVInteractable : MVInteractableBase
{
	// Fields
	protected AvatarModifierPackages modifierPackages;
	protected MVRuntimeDataVariable runtimeDataModifiers;
	protected MVRuntimeDataVariable<float> health;
	protected MVRuntimeDataVariable<int> maxHealth;
	protected MVRuntimeDataVariableClampedFloat shield;
	protected float poisonResist;
	private float healthRegenerationPerSecondSetting;
	private float shieldRegenerationPerSecondSetting;

	// Properties
	public AvatarModifierPackages ModifierPackages { get; }

	// Constructors
	protected MVInteractable();

	// Methods
	public virtual void Init(MVRuntimeDataVariable runtimeDataModifiers, MVRuntimeDataVariable<float> health, MVRuntimeDataVariable<int> maxHealth, MVRuntimeDataVariableClampedFloat shield, WorldObjectSkillDataManager skillDataManager);
	public virtual void InitializeSetings(float healthRegenerationPerSecondSetting, float shieldRegenerationPerSecondSetting);
	protected virtual void RestoreShield(float restoredShieldAmount);
	protected bool IgnoreDamage(MVPlayer damageDealer);
	protected bool IgnoreHealing(MVPlayer healer);
	private void Update();
	public override void AddModifier(AvatarModifierPackageType type, int id = -1, AvatarModifierPackage.AvatarModifier[] additionalModifers = null);
	public override bool HasModifier(AvatarModifierPackageType type);
	public override void RemoveModifier(AvatarModifierPackageType type, int id = -1);
	public override void ClearModifiers();
	public override bool HasModifierEffect(AvatarModifierEffect avatarModifierEffect);
	public override float HandleModifierEffect(AvatarModifierEffect avatarModifierEffect, float baseValue);
	[CompilerGenerated]
	private void _Init_b__10_0(AvatarModifierPackage modifier);
}

