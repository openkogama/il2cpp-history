/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarModifierPackages
{
	// Fields
	[CompilerGenerated]
	private EventHandler<EventArgs> OnUnequipItemEvent;
	[CompilerGenerated]
	private EventHandler<EventArgs> OnDisableVehiclesEvent;
	[CompilerGenerated]
	private bool _InPause_k__BackingField;
	public OnModifierExpiredDelegate OnModifierExpired;
	private readonly List<AvatarModifierPackage> packages;

	// Properties
	private bool InPause { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Events
	public event EventHandler<EventArgs> OnUnequipItemEvent {
		add;
		remove;
	}
	public event EventHandler<EventArgs> OnDisableVehiclesEvent {
		add;
		remove;
	}

	// Nested types
	public delegate void OnModifierExpiredDelegate(AvatarModifierPackage modifier);

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Comparison<AvatarModifierPackage.AvatarModifier> __9__27_0;
		public static Comparison<AvatarModifierPackage.AvatarModifier> __9__29_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _HandleModifierEffect_b__27_0(AvatarModifierPackage.AvatarModifier x, AvatarModifierPackage.AvatarModifier y);
		internal int _ComputeModifierEffectGroupedById_b__29_0(AvatarModifierPackage.AvatarModifier x, AvatarModifierPackage.AvatarModifier y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public AvatarModifierPackageType type;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal bool _HasModifier_b__0(AvatarModifierPackage p);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_0
	{
		// Fields
		public AvatarModifierPackage modifierPackage;

		// Constructors
		public __c__DisplayClass20_0();

		// Methods
		internal bool _AddModifierPackage_b__0(AvatarModifierPackage x);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass25_0
	{
		// Fields
		public AvatarModifierPackage modifierPackage;

		// Constructors
		public __c__DisplayClass25_0();

		// Methods
		internal bool _RemoveModifierPackage_b__0(AvatarModifierPackage x);
	}

	// Constructors
	public AvatarModifierPackages();

	// Methods
	private void OnResume();
	private void OnPause();
	public void Update();
	public void ClearModifiers();
	public void ClearNonPersistantModifiers();
	public bool HasModifier(AvatarModifierPackageType type);
	private void AddModifierPackage(AvatarModifierPackage modifierPackage, int id);
	public void AddModifier(AvatarModifierPackageType modifierPackageType, int id = -1, AvatarModifierPackage.AvatarModifier[] additionalModifers = null);
	public ModifierActions GetActionToTakeWithPackageType(AvatarModifierPackageType modifierPackageType);
	private bool HandleNewAvatarModifierPackage(AvatarModifierPackage newAvatarModifierPackage);
	public AvatarModifierPackageType GetPackageToActWith(AvatarModifierPackageType modifierPackageType, ModifierActions action);
	private void RemoveModifierPackage(AvatarModifierPackage modifierPackage, int id);
	public void RemoveModifier(AvatarModifierPackageType modifierPackageType, int id = -1);
	public float HandleModifierEffect(AvatarModifierEffect modifierEffect, float baseValue);
	public bool HasModifierEffect(AvatarModifierEffect modifierEffect);
	public Dictionary<int, float> ComputeModifierEffectGroupedById(AvatarModifierEffect modifierEffect, float baseValue);
}

