/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarModifierPackages
{
	// Fields
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EventHandler<EventArgs> OnUnequipItemEvent;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EventHandler<EventArgs> OnDisableVehiclesEvent;
	public OnModifierExpiredDelegate OnModifierExpired;
	private List<AvatarModifierPackage> packages;
	[CompilerGenerated]
	private static Comparison<AvatarModifierPackage.AvatarModifier> __f__am_cache0;
	[CompilerGenerated]
	private static Comparison<AvatarModifierPackage.AvatarModifier> __f__am_cache1;

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

	[CompilerGenerated]
	private sealed class _HasModifier_c__AnonStorey0
	{
		// Fields
		internal AvatarModifierPackageType type;

		// Constructors
		public _HasModifier_c__AnonStorey0();

		// Methods
		internal bool __m__0(AvatarModifierPackage p);
	}

	[CompilerGenerated]
	private sealed class _AddModifierPackage_c__AnonStorey1
	{
		// Fields
		internal AvatarModifierPackage modifierPackage;

		// Constructors
		public _AddModifierPackage_c__AnonStorey1();

		// Methods
		internal bool __m__0(AvatarModifierPackage x);
	}

	[CompilerGenerated]
	private sealed class _RemoveModifierPackage_c__AnonStorey2
	{
		// Fields
		internal AvatarModifierPackage modifierPackage;

		// Constructors
		public _RemoveModifierPackage_c__AnonStorey2();

		// Methods
		internal bool __m__0(AvatarModifierPackage x);
	}

	// Constructors
	public AvatarModifierPackages();

	// Methods
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
	[CompilerGenerated]
	private static int _HandleModifierEffect_m__0(AvatarModifierPackage.AvatarModifier x, AvatarModifierPackage.AvatarModifier y);
	[CompilerGenerated]
	private static int _ComputeModifierEffectGroupedById_m__1(AvatarModifierPackage.AvatarModifier x, AvatarModifierPackage.AvatarModifier y);
}

