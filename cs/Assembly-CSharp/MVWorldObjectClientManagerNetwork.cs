/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVWorldObjectClientManagerNetwork : MVWorldObjectClientManager
{
	// Constructors
	public MVWorldObjectClientManagerNetwork();

	// Methods
	public void Cleanup();
	public void OnCloneWorldObjectTreeResponse(bool success, int rootId);
	public void ResetWorld();
	public void ResetLocalWorldObject();
	public bool OnSetWorldObjectsToPurchasedEvent(int profileID, int itemID);
	public void OnTransferWorldObjectsToGroupEvent(int groupId, int[] worldObjectsToGroup);
	public void OnUpdateWorldObjectDataEvent(int worldObjectID, Dictionary<object, object> worldObjectData);
	public void OnUpdateWorldObjectDataPartialEvent(int worldObjectID, Dictionary<object, object> worldObjectData);
	public void OnRemoveWorldObjectDataPartialEvent(int worldObjectID, Dictionary<object, object> worldObjectDataToRemove);
	public void OnUpdateWorldObjectRunTimeDataEvent(int worldObjectID, Dictionary<object, object> delta);
	public bool TransferOwnershipProxy(int id, int ownerActorNr);
	public void HandleTransferWorldObjectsToGroup(bool success);
	public bool TransferOwnershipResponse(int id, int ownerActorNr, bool success);
	public bool LockHierarchyResponse(int id, bool lockObject, bool success);
	public bool LockHierarchyProxy(int id, int actorNr);
	private void SetOwnerInHierarchy(int id, int actorNr);
	public void DestroyWO(int id);
	private void DeleteWO(int id);
	public void OnWorldObjectDestroyed(int woID);
	public void OnAttachWorldObjectToSeat(int instigatorActorNr, int seatOwnerWoID, int worldObjectID, int seatID);
	public void AddToWorldObjects(MVWorldObjectClient wo);
	public bool Ungroup(int id);
	public MVWorldObjectClient Clone(int ownerActorNumber, MVWorldObjectClient rootOriginal, CloneBookkeeping cloneBookkeeping, MVWorldInventory worldInventory);
	public void AddWorldObject(Dictionary<object, object> data, MVWorldInventory worldInventory);
}

