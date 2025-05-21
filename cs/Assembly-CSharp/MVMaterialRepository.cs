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
	public const int DEFAULT_MATERIAL_ID = 21;
	private static MVMaterialRepository instance;
	public bool allowDestructibleMaterialSelection;
	private readonly List<MVMaterial> materials;
	private readonly MVMaterial noMaterial;
	private readonly MVMaterial inAirMaterial;
	private readonly PhysicalProperties physicalPropertiesDefault;
	[CompilerGenerated]
	private bool _IsButtonTexturesInitialized_k__BackingField;

	// Properties
	public static bool AllowDestructibleMaterialSelection { get; set; }
	public int MaterialCount { get; }
	public MVMaterial InAirMaterial { get; }
	public bool IsButtonTexturesInitialized { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public MVMaterialRepository();

	// Methods
	public void InitializeMaterials(Dictionary<object, object> materialList);
	public void Reset();
	public void SetMaterialPrice(int materialID, int materialUnlockPriceGold);
	public void SetMaterialUnlocked(int materialId, bool unlocked);
	private bool AllMaterialUnlocked();
	public void GenerateMaterialButtonTextures();
	public void AddMaterial(string name, string description, string path, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, int priceGold, bool isUnlocked, float[] physicalProperties, MaterialButtonTextureGenerator materialButtonTextureGenerator);
	public MVMaterial GetMaterial(byte materialId);
	public PhysicalProperties GetMaterialPhysicalProperties(byte materialId);
	public bool IsMaterialUnlocked(byte[] mats);
	public bool IsMaterialUnlocked(byte mat);
}

