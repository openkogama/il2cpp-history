/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CodeStage.AntiCheat.ObscuredTypes;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public struct AvatarModifierPackage
{
	// Fields
	public int id;
	public ObscuredFloat duration;
	public AvatarModifier[] avatarModifiers;
	public Dictionary<AvatarModifierPackageType, ModifierActions> actionsToTakeVsTypes;
	private ObscuredFloat timeStamp;
	public bool persistant;
	private AvatarModifierPackageType avatarModifierPackageType;
	private AvatarModifierPackageAdditionPolicy avatarModifierPackageAdditionPolicy;
	public static string[] AvatarModifierPackageTypeLookupTable;

	// Properties
	public AvatarModifierPackageType AvatarModifierPackageType { get; }
	public AvatarModifierPackageAdditionPolicy AvatarModifierPackageAdditionPolicy { get; }
	public bool IsExpired { get; set; }

	// Nested types
	public struct AvatarModifier
	{
		// Fields
		public AvatarModifierType avatarModifierType;
		public AvatarModifierEffect avatarModifierEffect;
		public Func<float> value;

		// Constructors
		public AvatarModifier(AvatarModifierType avatarModifierType, AvatarModifierEffect avatarModifierEffect, Func<float> value);
	}

	// Constructors
	public AvatarModifierPackage(AvatarModifierPackageType avatarModifierPackageType, AvatarModifierPackageAdditionPolicy avatarModifierPackageAdditionPolicy, float duration, AvatarModifier[] avatarModifiers, Dictionary<AvatarModifierPackageType, ModifierActions> actionsToTakeVsTypes = null, bool persist = false);
	static AvatarModifierPackage();

	// Methods
	public bool IsEqualTo(AvatarModifierPackage other);
	public void Renew();
}

