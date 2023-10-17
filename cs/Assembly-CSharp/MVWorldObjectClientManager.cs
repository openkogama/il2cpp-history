/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVWorldObjectClientManager : IWorldObjectManager
{
	// Fields
	protected readonly Dictionary<int, MVWorldObjectClient> worldObjects;
	protected readonly Queue<int> pendingUngroupQueue;
	protected readonly WorldObjectMapping worldObjectMapping;
	protected Dictionary<int, Action<object, WorldObjectDestroyedEventArgs>> woDestroyedEventSubscribers;
	protected Dictionary<System.Type, Action<object, WorldObjectCreatedEventArgs>> woCreatedEventSubscribers;
	private int rootGroupId;
	[CompilerGenerated]
	private MoveableController _MoveableController_k__BackingField;
	private Bounds worldBounds;
	public EventHandler<OnTransferOwnershipResponseEventArgs> OnWorldObjectTransferOwnershipResponse;
	public EventHandler<OnHierarchyLockedEventArgs> OnHierarchyLockedResponse;
	public EventHandler<OnTransferWosResponseEventArgs> OnTransferWosResponse;
	public EventHandler<CloneWorldObjectTreeResponseEventArgs> CloneWorldObjectTreeResponse;
	public EventHandler<EventArgs> OnResetWorldDone;

	// Properties
	public MoveableController MoveableController { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Bounds WorldBounds { get; }
	public int Count { get; }
	public MVGroup RootGroup { get; set; }

	// Nested types
	protected class WorldObjectMapping
	{
		// Fields
		private readonly Dictionary<WorldObjectType, HashSet<int>> worldObjectTypeSets;
		private readonly Dictionary<int, int> gameObjectIdToWorldObjectIdMap;
		private readonly Dictionary<System.Type, WorldObjectType> typeWorldObjectTypeMap;

		// Constructors
		public WorldObjectMapping();

		// Methods
		public void AddWorldObjectToTypeSet(MVWorldObjectClient wo);
		public HashSet<int> GetWorldObjectTypeSet(WorldObjectType worldObjectType);
		public void RemoveWorldObjectFromTypeSet(MVWorldObjectClient wo);
		public bool TryGetWorldObjectTypeFromObjectType(System.Type type, ref WorldObjectType worldObjectType);
		public bool TryGetWorldObjectIDFromGameObjectID(int goId, out int woID);
		private void AddToGameObjectIDMap(MVWorldObjectClient wo);
		private void AddWorldObjectToTypeWorldObjectTypeMap(System.Type type, WorldObjectType worldObjectType);
		private void RemoveWorldObjectFromTypeWorldObjectTypeMap(System.Type type);
	}

	private class WOCMWorldObjectClientRef<T> : WorldObjectClientRef<T>
		where T : MVWorldObjectClient
	{
		// Constructors
		public WOCMWorldObjectClientRef(int woId);
	}

	private class WOCMWorldObjectClientRef : WorldObjectClientRef
	{
		// Constructors
		public WOCMWorldObjectClientRef(int woId);
	}

	// Constructors
	public MVWorldObjectClientManager();

	// Methods
	public bool Contains(int woID);
	public bool IsType(int woID, WorldObjectType worldObjectType);
	public void GetAllWoIds(int id, HashSet<int> ids);
	public void UpdateWorldBounds(Bounds bounds);
	public List<MVWorldObjectClient> GetWorldObjectsByType(WorldObjectType type);
	public int GetWoIDHighestInHierarchyWithComponent<T>(int woId)
		where T : Component;
	public T GetSingletonWorldObject<T>()
		where T : MVWorldObjectClient;
	public WorldObjectClientRef<T> GetSingletonWorldObjectRef<T>()
		where T : MVWorldObjectClient;
	private MVWorldObjectClient GetSingletonWorldObjectByType(WorldObjectType worldObjectType);
	public static T GetEnabledMonoBehaviourHighestInHierarchy<T>(GameObject gameObject)
		where T : MonoBehaviour;
	public int GetWoIDWithLocalOwnerHighestInHierarchy(int woID);
	public List<MVWorldObjectClient> GetBlueprintWorldObjectsByType(System.Type type);
	public bool GetUnmodifiedWorldObject(KoGaMaPackageClient koGaMaPackageClient, ref int worldObjectId);
	public MVWorldObjectClient GetWorldObjectClient(int id);
	public T GetWorldObjectClient<T>(int id)
		where T : MVWorldObjectClient;
	public WorldObjectClientRef<T> GetWorldObjectClientRef<T>(int id)
		where T : MVWorldObjectClient;
	public static WorldObjectClientRef<MVWorldObjectClient> GetWorldObjectClientRefNullRefTyped();
	public WorldObjectClientRef GetWorldObjectClientRef(int id);
	public static WorldObjectClientRef GetWorldObjectClientRefNullRef();
	public MVWorldObject GetWorldObject(int id);
	public bool TryGetWorldObject(int id, out MVWorldObject worldObject);
	public MVWorldObjectClient GetWorldObjectClientRoot(int id);
	public MVWorldObjectClient GetWorldObjectClientWhere(Func<MVWorldObjectClient, bool> predicate);
	public IEnumerable<MVWorldObjectClient> GetWorldObjectClientsWhere(Func<MVWorldObjectClient, bool> predicate);
	public MVWorldObjectClient GetWorldObjectByGoId(int goId);
	public static MVWorldObjectClient GetMVObject(Transform t);
	public static MVWorldObjectClient GetValidSpawnPoint();
	private WorldObjectType GetSpawnPointTypeForNoneTeam();
	public void SubscribeWODestroyedEvent(int woID, Action<object, WorldObjectDestroyedEventArgs> woDestroyedEventHandler);
	public void UnsubscribeWODestroyedEvent(int woID, Action<object, WorldObjectDestroyedEventArgs> woDestroyedEventHandler);
	public void SubscribeWOCreatedEvent(System.Type type, Action<object, WorldObjectCreatedEventArgs> woCreatedEventHandler);
	public void UnsubscribeWOCreatedEvent(System.Type type, Action<object, WorldObjectCreatedEventArgs> woCreatedEventHandler);
	public bool UnregisterWorldObject(int worldObjectId);
	public void CloneWorldObjectTree(MVWorldObjectClient root, bool localOwner, bool setAsPreviewItem, bool cloneToRootGroup);
}

