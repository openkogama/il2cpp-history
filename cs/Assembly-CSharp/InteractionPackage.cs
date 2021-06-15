/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class InteractionPackage
{
	// Constructors
	protected InteractionPackage();

	// Methods
	public abstract void ParseAndHandlePackage(MVWorldObjectClient worldObjectClient, MVPlayer shooter, InteractionData interactionStruct);
	protected void HandlePackage(MVWorldObjectClient target, MVPlayer shooter, float damage, PlayerKilledByType killedByType, Vector3 impulse, AvatarModifierPackageType modType);
	protected void HandlePackage(MVWorldObjectClient target, MVPlayer shooter, float damage, PlayerKilledByType killedByType, Vector3 impulse);
	protected void HandlePackage(MVWorldObjectClient target, MVPlayer shooter, float damage, PlayerKilledByType killedByType);
	protected void HandlePackage(MVWorldObjectClient target, MVPlayer shooter, Vector3 impulse, AvatarModifierPackageType modifierType);
	protected void HandlePackage(MVWorldObjectClient target, Vector3 impulse, AvatarModifierPackageType modifierType);
	protected void HandlePackage(MVWorldObjectClient target, MVPlayer shooter, Vector3 impulse);
	protected void HandlePackage(MVWorldObjectClient target, MVPlayer shooter, AvatarModifierPackageType modifierType);
	private bool IsValidTarget(MVPlayer shooter, MVWorldObjectClient target, MVInteractableBase targetInteractable);
	private bool IsSpawnProtected(MVInteractableBase targetInteractable);
}

