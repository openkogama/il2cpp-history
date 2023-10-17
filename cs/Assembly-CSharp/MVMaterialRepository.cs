/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVMaterialRepository
{
	// Fields
	private readonly List<MVMaterial> materials;
	private readonly MVMaterial noMaterial;
	private readonly MVMaterial inAirMaterial;
	private readonly PhysicalProperties physicalPropertiesDefault;
	public const int DEFAULT_MATERIAL_ID = 21;
	public bool allowDestructibleMaterialSelection;
	private static MVMaterialRepository instance;

	// Properties
	public int MaterialCount { get; }
	public MVMaterial InAirMaterial { get; }
	public static bool AllowDestructibleMaterialSelection { get; set; }

	// Constructors
	public MVMaterialRepository();

	// Methods
	public void Reset();
	public void SetMaterialPrice(int materialID, int materialUnlockPriceGold);
	public void SetMaterialUnlocked(int materialId, bool unlocked);
	private bool AllMaterialUnlocked();
	public void AddMaterial(string name, string description, string path, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, int priceGold, bool isUnlocked, float[] physicalProperties, MaterialButtonTextureGenerator materialButtonTextureGenerator);
	public MVMaterial GetMaterial(byte materialId);
	public PhysicalProperties GetMaterialPhysicalProperties(byte materialId);
	public bool IsMaterialUnlocked(byte[] mats);
	public bool IsMaterialUnlocked(byte mat);
}

