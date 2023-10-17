/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVEquipableProxy : MVEquipable
{
	// Fields
	private MVEquipable equipable;

	// Constructors
	public MVEquipableProxy();

	// Methods
	public void Init(MVEquipable equipable);
	public override bool Equip(AvatarItemType type, AvatarEquipableType equipType, Dictionary<object, object> itemData, int variantID = 0, bool holsterable = true);
	public override void Unequip();
	public override void Holster();
	public override void Unholster();
}

