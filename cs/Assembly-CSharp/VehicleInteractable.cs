/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehicleInteractable : MVInteractable, IMoveHitHandler
{
	// Constructors
	public VehicleInteractable();

	// Methods
	public override void TakeDamage(float amount, MVPlayer damageDealer, PlayerKilledByType damageType);
	public override void TakeDamageOverTime(AvatarModifierPackageType type, MVPlayer damageDealer, PlayerKilledByType damageType);
	public override void AddModifier(AvatarModifierPackageType type, int id = -1, AvatarModifierPackage.AvatarModifier[] additionalModifers = null);
	public void HandleMoveHit(MVControllerColliderHit moveHit);
}

