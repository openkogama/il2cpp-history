/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WaterState
{
	// Fields
	private const float suffocationDamage = 5f;
	private const float avatarHeight = 2.1f;
	private readonly AvatarModifierPackage.AvatarModifier[] additionalUnderWaterModifiers;
	private readonly float oxygenMax;
	private float oxygen;
	private Vector3 worldPosition;
	private bool hasGillsNoLungs;

	// Constructors
	public WaterState(WorldObjectSkillDataManager skillDataManager);

	// Methods
	public void Destroy();
	public void Update(Vector3 worldPosition, MVInteractableBase avatarInteractable);
	private void UpdateModifiers(MVInteractableBase avatarInteractable);
	private void UpdateLocalAvatarOxygen(MVInteractableBase avatarInteractable);
	private float UnderwaterJumpPowerModifierCallback();
	private float UnderwaterModifierCallback();
	private float ComputeAvatarWaterProximity(Vector3 position);
	private void OnAvatarModeChange(SpawnRoleModeType newSpawnRoleMode);
}

