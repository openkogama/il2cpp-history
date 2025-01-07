/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVInteractableBase : MVComponent
{
	// Constructors
	protected MVInteractableBase();

	// Methods
	public abstract void TakeDamage(float amount, MVPlayer damageDealer, PlayerKilledByType damageType);
	public abstract void TakeDamageOverTime(AvatarModifierPackageType type, MVPlayer damageDealer, PlayerKilledByType damageType);
	public abstract void Heal(float amount, MVPlayer healer);
	public abstract void HealOverTime(AvatarModifierPackageType type, MVPlayer healer);
	public abstract void AddModifier(AvatarModifierPackageType type, int id = -1, AvatarModifierPackage.AvatarModifier[] additionalModifers = null);
	public abstract bool HasModifier(AvatarModifierPackageType type);
	public abstract void RemoveModifier(AvatarModifierPackageType type, int id = -1);
	public abstract bool HasModifierEffect(AvatarModifierEffect avatarModifierEffect);
	public abstract float HandleModifierEffect(AvatarModifierEffect avatarModifierEffect, float baseValue);
	public abstract void ClearModifiers();
}

