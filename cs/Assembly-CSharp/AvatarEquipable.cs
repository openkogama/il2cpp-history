/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarEquipable : MVEquipable
{
	// Fields
	private MVInteractableBase interactableLocal;
	private MVRuntimeDataVariable currentItem;
	private bool isAbleToCollectPickups;
	private bool isAbleToEquipWeapons;
	private List<AvatarItemType> nonWeaponPickups;

	// Constructors
	public AvatarEquipable();

	// Methods
	public void Init(MVInteractableBase interactableLocal, MVRuntimeDataVariable currentItem, WorldObjectSkillDataManager skillsDataManager);
	public override bool Equip(AvatarItemType type, AvatarEquipableType equipType, Dictionary<object, object> itemData, int variantID = 0, bool holsterable = true);
	public override void Holster();
	public override void Unholster();
	public bool GetIsEquipped(AvatarItemType type);
	public void EquipSlapGun(object sender, EventArgs e);
	public override void Unequip();
}

