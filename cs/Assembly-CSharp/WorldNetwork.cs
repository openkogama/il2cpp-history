/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WorldNetwork : World
{
	// Fields
	private Links links;
	private ObjectLinks objectLinks;

	// Properties
	public MVWorldObjectClientManagerNetwork WorldObjectClientManagerNetwork { get; }
	public RuntimeEventManagerNetwork RuntimeEventManagerNetwork { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _CreateGameWorldFromQueryData_c__AnonStorey0
	{
		// Fields
		internal BytePacker queryData;
		internal int instigatorActorNumber;
		internal WorldNetwork _this;

		// Constructors
		public _CreateGameWorldFromQueryData_c__AnonStorey0();

		// Methods
		internal void __m__0(int rootId);
	}

	// Constructors
	public WorldNetwork();

	// Methods
	public void Update(MVNetworkGame game);
	public void CreateGameWorldFromQueryData(BytePacker queryData, int instigatorActorNumber);
	private void OnGameDataDeserialized(BytePacker queryData, int instigatorActorNumber, int rootId);
	private void ConstructRuntimeEventManager();
	public void AddGameQueryDataToGameWorld(BytePacker queryData, int instigatorActorNumber);
	private MVWorldObjectClient InitializeQueryData(BytePacker queryData);
	private void DeserializeRuntimeEvents(BytePacker queryData);
	private void CreateQueryEvent(MVWorldObjectClient root, int instigatorActorNumber);
	private void HandleDeserializedWorldData(Dictionary<object, object> data, KogamaDataType dataType);
	private void AddPrototype(Dictionary<object, object> data);
	private void AddWorldObject(Dictionary<object, object> data);
	private void AddLink(Dictionary<object, object> data);
	private void AddObjectLink(Dictionary<object, object> data);
	public MVWorldObjectClient OnCloneWorldObjectTreeEvent(int ownerActorNumber, int previewProfileOwnerId, bool cloneToRootGroup, int originalId, int cloneId, int cloneLinkId, int cloneObjectLinkId);
	private void CloneLinks(CloneBookkeeping cloneBookkeeping);
	private void CloneObjectLinks(CloneBookkeeping cloneBookkeeping);
	public bool OnUnregisterWorldObject(int id);
	public void AddLink(MV.WorldObject.Link link);
	public MV.WorldObject.Link RemoveLink(int linkID);
	public bool LinksContains(int linkID);
	public void AddObjectLink(ObjectLink objectLink);
	public void RemoveObjectLink(int objectLinkID);
	public bool ObjectLinksContains(int linkID);
}

