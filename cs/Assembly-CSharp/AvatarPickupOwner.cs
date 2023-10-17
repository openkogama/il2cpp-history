/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarPickupOwner : MVPickupOwner
{
	// Fields
	private MVAvatar mvAvatar;
	private bool hasUnlimitedAmmo;
	[CompilerGenerated]
	private HashSet<int> _AdditionalIgnoreWOIDS_k__BackingField;

	// Properties
	public override HashSet<int> IgnoreWOIDs { get; }
	public HashSet<int> AdditionalIgnoreWOIDS { [CompilerGenerated] private get; [CompilerGenerated] set; }

	// Constructors
	public AvatarPickupOwner();

	// Methods
	public void Init(MVRuntimeDataVariable currentItemRuntimeDataVariable, MVRuntimeDataVariable isFiringRuntimeDataVariable, MVAvatar mvAvatar, WorldObjectSkillDataManager skillsDataManager);
	private void InitSkills(WorldObjectSkillDataManager skillDataManager);
	protected override void Equip(AvatarItemType type, int variantId);
	protected override void Unequip();
	public void HandlePointing(bool inputFire);
}

