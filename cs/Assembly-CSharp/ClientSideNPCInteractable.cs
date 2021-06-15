/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ClientSideNPCInteractable : MVInteractableBase
{
	// Fields
	private static readonly Dictionary<AvatarModifierPackageType, float> allowedModifiersDictionary;
	private Action<float, MVPlayer, PlayerKilledByType> takeDamageCallback;
	private int respawnInterval;
	private float maxHealth;

	// Constructors
	public ClientSideNPCInteractable();
	static ClientSideNPCInteractable();

	// Methods
	public void Init(Action<float, MVPlayer, PlayerKilledByType> takeDamageCallback);
	public bool IsDead();
	public override void TakeDamage(float amount, MVPlayer damageDealer, PlayerKilledByType damageType);
	public void Reset();
	public override void AddModifier(AvatarModifierPackageType type, int id, AvatarModifierPackage.AvatarModifier[] additionalModifers);
	public override bool HasModifier(AvatarModifierPackageType type);
	public override void RemoveModifier(AvatarModifierPackageType type, int id);
	public override bool HasModifierEffect(AvatarModifierEffect type);
	public override float HandleModifierEffect(AvatarModifierEffect avatarModifierEffect, float baseValue);
	public override void ClearModifiers();
}

