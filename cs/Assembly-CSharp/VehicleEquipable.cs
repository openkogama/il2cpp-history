/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehicleEquipable : MVEquipable
{
	// Fields
	private MVInteractableBase interactableLocal;
	private MVRuntimeDataVariable currentItem;

	// Constructors
	public VehicleEquipable();

	// Methods
	public void Init(MVInteractableBase interactableLocal, MVRuntimeDataVariable currentItem);
	public override bool Equip(AvatarItemType type, AvatarEquipableType equipType, Dictionary<object, object> itemData, int variantID = 0);
	public override void Holster();
	public override void Unholster();
	public override void Unequip();
}

