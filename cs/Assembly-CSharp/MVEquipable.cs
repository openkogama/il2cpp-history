/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVEquipable : MVComponent
{
	// Constructors
	protected MVEquipable();

	// Methods
	public abstract bool Equip(AvatarItemType type, AvatarEquipableType equipType, Dictionary<object, object> itemData, int variantID = 0);
	public abstract void Unequip();
	public abstract void Holster();
	public abstract void Unholster();
}

