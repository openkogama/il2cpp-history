/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
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
	private IEnumerator generateTexturesRoutine;
	[CompilerGenerated]
	private bool _IsButtonTexturesInitialized_k__BackingField;

	// Properties
	public static bool AllowDestructibleMaterialSelection { get; set; }
	public int MaterialCount { get; }
	public MVMaterial InAirMaterial { get; }
	public bool IsButtonTexturesInitialized { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _GenerateMaterialButtonTextureRoutine_d__26 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public MVMaterialRepository __4__this;
		private MaterialButtonTextureGenerator _materialButtonTextureGenerator_5__2;
		private int _i_5__3;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GenerateMaterialButtonTextureRoutine_d__26(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public MVMaterialRepository();

	// Methods
	public void InitializeMaterials(Dictionary<object, object> materialList);
	public void Reset();
	public void SetMaterialPrice(int materialID, int materialUnlockPriceGold);
	public void SetMaterialUnlocked(int materialId, bool unlocked);
	private bool AllMaterialUnlocked();
	public void GenerateMaterialButtonTextures();
	[IteratorStateMachine(typeof(_GenerateMaterialButtonTextureRoutine_d__26))]
	private IEnumerator GenerateMaterialButtonTextureRoutine();
	private void ForceGenerateMaterialButtonTextures();
	public void AddMaterial(string name, string description, string path, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, int priceGold, bool isUnlocked, float[] physicalProperties, MaterialButtonTextureGenerator materialButtonTextureGenerator);
	public MVMaterial GetMaterial(byte materialId);
	public PhysicalProperties GetMaterialPhysicalProperties(byte materialId);
	public bool IsMaterialUnlocked(byte[] mats);
	public bool IsMaterialUnlocked(byte mat);
}

