/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ARepository
{
	// Fields
	public OnRepositoryChangeDelegate OnRepositoryChange;
	public Dictionary<int, string> PlanetOwnershipTypes;
	public Dictionary<object, object> itemIDToInventorySlotIndex;

	// Nested types
	public delegate void OnRepositoryChangeDelegate(ARepository repository);

	public delegate void OnWorldObjectTypeExtracted(WorldObjectType worldObjectType, Dictionary<object, object> woData);

	[CompilerGenerated]
	private sealed class _GetWorldObjectTypeFromMVItemData_c__AnonStorey0
	{
		// Fields
		internal OnWorldObjectTypeExtracted onWorldObjectExtracted;

		// Constructors
		public _GetWorldObjectTypeFromMVItemData_c__AnonStorey0();

		// Methods
		internal void __m__0(Dictionary<object, object> returnData, KogamaDataType dataType);
	}

	// Constructors
	public ARepository();

	// Methods
	public virtual void RemoveItem(int itemId);
	public void SwapItems(int itemId1, int itemId2);
	public void MoveItem(int itemId, int slotIndex);
	public void NotifyRepositoryChange();
	public static KoGaMaPackageClient GetKoGaMaPackageFromItem(MVItem item);
	public static void GetWorldObjectTypeFromMVItemData(byte[] data, OnWorldObjectTypeExtracted onWorldObjectExtracted);
}

