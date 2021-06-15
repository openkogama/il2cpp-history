/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVMaterial
{
	// Fields
	public int unlockPriceGold;
	public bool isUnlocked;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Mesh _Mesh_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _Name_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private string _Description_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private PhysicalProperties _PhysicalProperties_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private AvatarModifierPackageType _ModifierPackageType_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private Texture2D _ButtonTexture_k__BackingField;

	// Properties
	public Mesh Mesh { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public string Name { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public string Description { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public PhysicalProperties PhysicalProperties { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public AvatarModifierPackageType ModifierPackageType { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Texture2D ButtonTexture { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public bool IsAvailable { get; }
	public bool IsDestructible { get; }

	// Constructors
	public MVMaterial();
	public MVMaterial(int materialId, string name, string description, PhysicalProperties physicalProperties, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, int priceGold, bool isUnlocked, MaterialButtonTextureGenerator materialButtonTextureGenerator);
	public MVMaterial(PhysicalProperties physicalProperties, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType);

	// Methods
	private void GenerateCube(int materialId);
	private void AddVertices(int direction);
}

