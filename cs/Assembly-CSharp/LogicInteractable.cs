/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LogicInteractable : MVInteractableBase
{
	// Fields
	[CompilerGenerated]
	private EventHandler<TakeDamageEventArgs> OnDamageEvent;

	// Events
	public event EventHandler<TakeDamageEventArgs> OnDamageEvent {
		add;
		remove;
	}

	// Constructors
	public LogicInteractable();

	// Methods
	public override void TakeDamage(float amount, MVPlayer damageDealer, PlayerKilledByType damageType);
	public override void TakeDamageOverTime(AvatarModifierPackageType type, MVPlayer damageDealer, PlayerKilledByType damageType);
	public override void Heal(float amount, MVPlayer healer);
	public override void HealOverTime(AvatarModifierPackageType type, MVPlayer healer);
	public override void AddModifier(AvatarModifierPackageType type, int id = -1, AvatarModifierPackage.AvatarModifier[] additionalModifers = null);
	public override bool HasModifier(AvatarModifierPackageType type);
	public override void RemoveModifier(AvatarModifierPackageType type, int id = -1);
	public override float HandleModifierEffect(AvatarModifierEffect avatarModifierEffect, float baseValue);
	public override void ClearModifiers();
	public override bool HasModifierEffect(AvatarModifierEffect avatarModifierEffect);
}

