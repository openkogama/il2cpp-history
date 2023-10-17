/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InteractableMaterialHitHandler
{
	// Fields
	private Dictionary<AvatarModifierPackageType, ParticleSystem> particles;
	private AvatarModifierPackageType currentMoveHitParticleType;
	private ParticleSystem currentParticleSystem;
	private Vector3 prevPos;
	private const float deadzoneDist = 1f;

	// Constructors
	public InteractableMaterialHitHandler();

	// Methods
	public void Initialize(MaterialHitPackage[] packages, Transform parent);
	public void HandleHit(MVControllerColliderHit moveHit);
	private void DisableCurrentSystem();
	private void SetNewCurrentParticleSystem(AvatarModifierPackageType newParticleType);
	private void UpdateCurrentSystem(MVControllerColliderHit moveHit);
	private void SetParticlePlacement(Vector3 position, Vector3 eulerRotation);
}

