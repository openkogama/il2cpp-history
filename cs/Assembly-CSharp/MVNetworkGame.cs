/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using CodeStage.AntiCheat.ObscuredTypes;
using ExitGames.Client.Photon;
using MV.Common;
using MV.WorldObject;
using MV.WorldObject.MetaData;
using MV.WorldObject.RuntimeEvents;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVNetworkGame : IPhotonPeerListener
{
	// Fields
	[CompilerGenerated]
	private EventHandler<ReceivedItemFromQueryEventArgs> ReceivedItemFromQuery;
	[CompilerGenerated]
	private EventHandler<ReceivedItemFromQueryEventArgs> ReceivedAvatarBodiesFromQuery;
	[CompilerGenerated]
	private Action<string> ReceivedAccessoryData;
	private MVConnState connState;
	private const string appName = "MVGameServer";
	private MVItemBusinessLogic itemBusinessLogic;
	private bool isPublished;
	private GameDataQueryManager gameDataQueryManager;
	private TransformNetworkManager transformNetworkManager;
	public readonly GameEventManager GameEventManager;
	[CompilerGenerated]
	private LogicObjectManagerClient _LogicObjectManager_k__BackingField;
	[CompilerGenerated]
	private MVGameType _GameType_k__BackingField;
	[CompilerGenerated]
	private Region _Region_k__BackingField;
	private readonly Dictionary<Region, float> timeZoneMap;
	[CompilerGenerated]
	private MVGameCoinManager _GameCoinManager_k__BackingField;
	[CompilerGenerated]
	private ItemCategories _ItemCategories_k__BackingField;
	[CompilerGenerated]
	private MVNetworkGameStateListener _NetworkGameStateListener_k__BackingField;
	[CompilerGenerated]
	private PhotonPeer _Peer_k__BackingField;
	[CompilerGenerated]
	private ObscuredString _XpKey_k__BackingField;
	[CompilerGenerated]
	private int _MarketPlaceLevel_k__BackingField;
	[CompilerGenerated]
	private int _PublishLevel_k__BackingField;
	[CompilerGenerated]
	private string _AdConsentEndpointURL_k__BackingField;
	[CompilerGenerated]
	private string _KogamaMainpageURL_k__BackingField;
	[CompilerGenerated]
	private CreySettings _CreySettings_k__BackingField;
	[CompilerGenerated]
	private CustomTouristPromotionSettings _CustomTouristPromotionSettings_k__BackingField;
	[CompilerGenerated]
	private ElitePromotionSettings _EliteSettings_k__BackingField;
	private int lastFrameServerTimeUpdate;
	private int lastFrameLocalTimeUpdate;
	private int serverTimeInMilliseconds;
	private int localTimeInMilliseconds;
	private MVTeamManager teamManager;
	private GameStatCounterManager gameStatCounterManager;
	private LevelRewardsManager levelRewardsManager;
	[CompilerGenerated]
	private MVMaterialRepository _MaterialRepository_k__BackingField;
	[CompilerGenerated]
	private PlayerRepository _PlayerRepository_k__BackingField;
	[CompilerGenerated]
	private ShopRepository _ShopRepository_k__BackingField;
	[CompilerGenerated]
	private GameTierShopRepository _GameTierShopRepository_k__BackingField;
	[CompilerGenerated]
	private AvatarRepository _AvatarShopRepository_k__BackingField;
	[CompilerGenerated]
	private MvAvatarMetaDataWoMap _AvatarMetaDataWoMap_k__BackingField;
	[CompilerGenerated]
	private MVGameModeChangeNotifier _GameStateController_k__BackingField;
	[CompilerGenerated]
	private FriendList _Friends_k__BackingField;
	[CompilerGenerated]
	private MVLocalObjectController _PlayerController_k__BackingField;
	[CompilerGenerated]
	private WinningConditionManager _WinningConditionManager_k__BackingField;
	private WorldNetwork worldNetwork;
	public Action<int, Dictionary<object, object>> PurchaseProductResponseHandler;
	public Action<IWinningCondition> OnWinningConditionFulfilled;
	public Action<int> OnActiveAvatar;
	public Action<bool> OnItemAddedToWorld;
	public UnityAction<string> OnPublishedPlanet;
	public UnityAction<string> OnAddWorldObjectToInventoryCallbackDev;
	public Action<bool> OnSetAvatarAccessoryResponse;
	public OnReceivedChatMessageDelegate OnReceivedChatMessage;
	public OnMarketPlaceActionCompleteDelegate OnMarketPlaceActionComplete;
	[CompilerGenerated]
	private EventHandler<ScreenshotUploadedEventArgs> ScreenshotUploaded;
	public Action OnActiveAvatarSet;
	public Action OnAccessoryUnequipped;
	private readonly MVPlayerContainer playerContainer;
	private PhotonLoggingConfig photonLoggingConfig;
	private EmbeddedSiteConfigData embeddedSiteConfigData;
	private LogicObjectManagerClientWrapper logicObjectManagerClientWrapper;
	private RuntimeVariableNetworkManager runtimeVariableNetworkManager;
	private float prevServiceCallTime;
	private const float serviceCallInterval = 0.07f;
	private GameDataQueryManager.GameDataQuery gameDataQuery;
	private EventHandling eventHandling;
	private OperationRequests operationRequests;
	private OperationResponseHandling operationResponseHandling;
	private StatusChangedHandling statusChangedHandling;

	// Properties
	public LogicObjectManagerClient LogicObjectManager { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public MVGameType GameType { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public Region Region { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public float TimeZone { get; }
	public MVItemBusinessLogic ItemBusinessLogic { get; }
	public MVGameCoinManager GameCoinManager { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public ItemCategories ItemCategories { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public MVConnState ConnState { get; set; }
	public bool IsPlaying { get; }
	public MVNetworkGameStateListener NetworkGameStateListener { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public PhotonPeer Peer { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public ObscuredString XpKey { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int MarketPlaceLevel { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int PublishLevel { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public string AdConsentEndpointURL { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public string KogamaMainpageURL { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public CreySettings CreySettings { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public CustomTouristPromotionSettings CustomTouristPromotionSettings { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public ElitePromotionSettings EliteSettings { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public int ServerTimeInMilliSeconds { get; }
	public int LocalTimeInMilliSeconds { get; }
	public int StepTimeStamp { get; }
	public MVMaterialRepository MaterialRepository { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public PlayerRepository PlayerRepository { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public ShopRepository ShopRepository { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public GameTierShopRepository GameTierShopRepository { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public AvatarRepository AvatarShopRepository { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public MvAvatarMetaDataWoMap AvatarMetaDataWoMap { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public LevelRewardsManager LevelRewardsManager { get; }
	public MVTeamManager TeamManager { get; }
	public MVGameModeChangeNotifier GameStateController { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public FriendList Friends { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public MVLocalObjectController PlayerController { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public GameStatCounterManager GameStatCounterManager { get; }
	public WinningConditionManager WinningConditionManager { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public World World { get; }
	public MVWorldObjectClientManager WorldObjectClientManager { get; }
	public OperationRequests OperationRequestSender { get; }
	public TransformNetworkManager TransformNetworkManager { get; }
	public MVPlayerContainer MVPlayerContainer { get; }
	public MVLocalPlayer LocalPlayer { get; }
	public RuntimeVariableNetworkManager RuntimeVariableNetworkManager { get; }

	// Events
	public event EventHandler<ReceivedItemFromQueryEventArgs> ReceivedItemFromQuery {
		add;
		remove;
	}
	public event EventHandler<ReceivedItemFromQueryEventArgs> ReceivedAvatarBodiesFromQuery {
		add;
		remove;
	}
	public event Action<string> ReceivedAccessoryData {
		add;
		remove;
	}
	public event EventHandler<ScreenshotUploadedEventArgs> ScreenshotUploaded {
		add;
		remove;
	}

	// Nested types
	public delegate void OnReceivedChatMessageDelegate(MVPlayer sender, string message);

	public delegate void OnMarketPlaceActionCompleteDelegate(bool success);

	private class EventHandling
	{
		// Fields
		private DynamicEventCallbackManager dynamicEventCallbackManager;
		private bool cacheEvents;
		private Queue<ExitGames.Client.Photon.EventData> cachedEvents;
		private MVNetworkGame networkGame;
		private const float maxJoinTimeValue = 250000f;

		// Properties
		public bool CacheEvents { set; }

		// Nested types
		private class DynamicEventCallbackManager
		{
			// Fields
			private Dictionary<MVEventCodes, EventCallback> eventCallbacks;
			private readonly HashSet<MVEventCodes> eventsHandledByDynamicEventCallbackManager;

			// Nested types
			private class EventCallback
			{
				// Fields
				[CompilerGenerated]
				private Action<ExitGames.Client.Photon.EventData> OnEventData;

				// Events
				public event Action<ExitGames.Client.Photon.EventData> OnEventData {
					add;
					remove;
				}

				// Constructors
				public EventCallback();

				// Methods
				public void Notify(ExitGames.Client.Photon.EventData eventData);
				public void Subscribe(Action<ExitGames.Client.Photon.EventData> callback);
				public bool UnSubscribe(Action<ExitGames.Client.Photon.EventData> callback);
			}

			// Constructors
			public DynamicEventCallbackManager();

			// Methods
			public bool IsDynamicEvent(MVEventCodes eventCode);
			public void Notify(MVEventCodes eventCode, ExitGames.Client.Photon.EventData eventData);
			public void SubscribeToEvent(MVEventCodes eventCode, Action<ExitGames.Client.Photon.EventData> callback);
			public void UnSubscribeToEvent(MVEventCodes eventCode, Action<ExitGames.Client.Photon.EventData> callback);
		}

		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static MVWorldObjectClient.CallBackDelegate __9__10_0;

			// Constructors
			static __c();
			public __c();

			// Methods
			internal void _HandleEvent_b__10_0(MVWorldObjectClient wo);
		}

		// Constructors
		public EventHandling(MVNetworkGame networkGame);

		// Methods
		public void UncacheEventsFromJoin();
		public void OnEvent(ExitGames.Client.Photon.EventData photonEvent);
		private void HandleEvent(MVEventCodes eventCode, ExitGames.Client.Photon.EventData photonEvent);
		public void SubscribeToEvent(MVEventCodes eventCode, Action<ExitGames.Client.Photon.EventData> callback);
		public void UnSubscribeToEvent(MVEventCodes eventCode, Action<ExitGames.Client.Photon.EventData> callback);
		private void HandleActorReadyMetric();
	}

	private class GameDataQueryManager
	{
		// Fields
		private readonly Dictionary<int, GameDataQuery> gameDataQueries;

		// Nested types
		public class GameDataQuery
		{
			// Fields
			private BytePacker bp;
			private int instigatorActorNumber;
			[CompilerGenerated]
			private QueryType _QueryType_k__BackingField;

			// Properties
			public QueryType QueryType { [CompilerGenerated] get; [CompilerGenerated] private set; }
			public int InstigatorActorNumber { get; }

			// Constructors
			public GameDataQuery(BytePacker bp, int instigatorActorNumber, QueryType queryType);

			// Methods
			public override string ToString();
			public void AddGameDataQuery(GameDataQuery gameDataQuery);
			public BytePacker GetBytePacker();
		}

		// Constructors
		public GameDataQueryManager();

		// Methods
		public void HandleDataBatch(int instigator, int queryId, QueryType queryType, bool queryDataLeft, BytePacker bp);
		public void OnGameQueryReady(int queryId);
		private void OnGetGameBatch(int queryId, GameDataQuery gameDataQuery);
		private void InitializeGameQueryData(GameDataQuery gameDataQuery);
	}

	private class LogicEventQueue
	{
		// Fields
		private readonly Dictionary<int, Queue<ExitGames.Client.Photon.EventData>> logicEvents;

		// Properties
		public int Count { get; }

		// Constructors
		public LogicEventQueue();

		// Methods
		public void Enqueue(ExitGames.Client.Photon.EventData eventData);
		public void Dequeue(int timestamp);
		private void HandleEvent(ExitGames.Client.Photon.EventData photonEvent);
	}

	private class LogicObjectManagerClientWrapper
	{
		// Fields
		private LogicEventQueue logicEventQueue;
		private readonly MVNetworkGame networkGame;
		private UpdateEvaluator updateEvaluatorStep;
		private UpdateEvaluator fastFordwardUpdateEvaluator;

		// Properties
		public int StepTimeStamp { get; }

		// Constructors
		public LogicObjectManagerClientWrapper(MVNetworkGame networkGame, int stepTimestamp);

		// Methods
		public void EnqueueLogicEvent(ExitGames.Client.Photon.EventData eventData);
		public void Step();
		public void FastForward(int timestamp);
		public void FastForwardImmediately(int timestamp);
		public void Reset();
		public void Update();
		private void ExecuteRemainingFrames();
		private void UpdateLogicObjectManager();
	}

	private class UpdateEvaluator
	{
		// Fields
		private int lastUpdateTick;
		private int accumulatedTime;
		private int stepTimestamp;
		private readonly int updateInterval;

		// Properties
		public int StepTimestamp { get; set; }
		public int UpdateInterval { get; }

		// Constructors
		public UpdateEvaluator(int updateInterval);

		// Methods
		public bool DoUpdate(LogicObjectManager logicObjectManager);
	}

	public class OperationRequests
	{
		// Fields
		private OperationResponsePendingManager operationResponsePendingManager;
		private MVNetworkGame networkGame;
		private PhotonPeer peer;
		public string dummyData;
		private bool gamepointWelcomeClaimed;

		// Constructors
		public OperationRequests(MVNetworkGame networkGame);

		// Methods
		public void UploadData(int id, byte[] uploadData);
		public void TryRemovePendingOperation(MVOperationCodes operationCode);
		public void Syncronize();
		public void ClaimRewardedAdXP(bool success);
		public void SyncronizePing();
		public void SetSpawnRoleBody(int avatarCreatorWoId, int avatarBodyDbId);
		public void TogglePreviewTier();
		public void IncrementStatRequest(IncrementStatRequestType statRequestType, int value = 0);
		public void ClaimPlayingNewGameRewardedGold();
		public void GetHighScoreList();
		public void GetTopHighScoreList();
		public void CustomDevCommands();
		public void GetAvatarBodies();
		public void CreateSpawnRole(int avatarSpawnerWoId);
		public void ClaimGamePointWelcomeReward();
		public void AddObjectLink(ObjectLink link);
		public void PublishPlanet(Action<string> errorHandler);
		private bool PublishPlanet(bool newImagePending, Action<string> errorHandler);
		public void UploadGameScreenShot();
		private void HandleUploadScreenShotData(byte[] screenshot);
		public bool IsOperationPending(MVOperationCodes operationCode);
		public void RequestAcceptFriendShip(int friendID);
		public void ResetPlayerPlanetData();
		public void RequestRejectFriendShip(int friendID);
		public void StartSessionTime();
		public void RequestWoUniquePrototype(int woId);
		public void Handshake();
		public void JoinGame(string encrypt);
		public bool AddLink(Link link);
		public void UpdateWorldObject(int id, Vector3 position, byte[] rotation, TransformPackageType packageType);
		public void UpdateLineOfFire(int worldObjectIDPickupOwner, Vector3 camDir, Vector3 camOrigin);
		public void TransferWorldObjectsToGroup(int groupId, int[] worldObjects);
		public void TransferOwnership(int worldObjectID, int ownerActorNr, Transform t);
		public void PostGameMsg(MVGameMsgType gameMsgType, Dictionary<object, object> gameMsgData);
		public void PostChatMsg(Dictionary<object, object> gameMsgData, MVGameMsgType chatMsgType);
		public void PostNotificationOperation(NotificationType type, Dictionary<object, object> notificationData);
		public void LockHierarchy(int worldObjectID, bool lockHierarchy);
		public void UpdateWorldObjectDataPartial(int worldObjectID, string keyPath, object value);
		public void UpdateWorldObjectDataPartial(int worldObjectID, Dictionary<object, object> woData);
		public void RemoveWorldObjectDataPartial(int worldObjectID, string keyPath);
		public void RemoveWorldObjectDataPartial(int worldObjectID, Dictionary<object, object> woDataToRemove);
		public void WorldObjectRPC(int worldObjectID, Dictionary<object, object> dataPackage);
		public void UpdateWorldObjectRunTimeData(int worldObjectID, Dictionary<object, object> worldObjectRunTimeData);
		public void RegisterWorldObject(WorldObjectType type, int groupId, Dictionary<object, object> woData, Vector3 position, Quaternion rotation, Vector3 scale, bool localOwner, bool transferOwnershipToServerOnLeave);
		public void RequestBuiltInItem(BuiltInItem builtInItem, int groupId, Dictionary<object, object> customData, Vector3 position, Quaternion rotation, Vector3 scale, bool localOwner, bool transferOwnershipToServerOnLeave);
		public void AddItemToWorld(int itemId, int groupId, Vector3 position, Quaternion rotation, bool localOwner, bool transferOwnershipToServerOnLeave, bool isPreviewItem);
		public void CloneWorldObjectTree(MVWorldObjectClient root, bool localOwner, bool setAsPreviewItem, bool cloneToRootGroup);
		public void CloneWorldObjectTreeWithPosition(MVWorldObjectClient root, Vector3 position, Quaternion rotation, bool localOwner, bool setAsPreviewItem, bool cloneToRootGroup, bool isTempObject);
		public void CloneTempWorldObjectWithOriginalReference(MVWorldObjectClient root, Vector3 position, Quaternion rotation);
		private Dictionary<byte, object> CreateBasicCloneData(MVWorldObjectClient root, bool localOwner, bool setAsPreviewItem, bool cloneToRootGroup);
		private Dictionary<byte, object> CreateWithPositionCloneData(MVWorldObjectClient root, Vector3 position, Quaternion rotation, bool localOwner, bool setAsPreviewItem, bool cloneToRootGroup, bool isTempObject);
		public void AddPlanetToPlanet(int planetId, int subtreeId);
		public void UnregisterWorldObject(int worldObjectID);
		public void LocalPlayerLevelChanged(int level);
		public void JoinNotification();
		public void Ban(CheatType cheatType);
		public void AutoRegisterLocalPrototype(int woId, int worldInventoryID);
		public void UpdatePrototype(int worldInventoryID, byte[] prototypeData);
		public void UpdatePrototypeScale(int worldInventoryID, float scale);
		public void AddWorldObjectToInventory(int worldObjectID);
		public void RemoveItemFromInventory(int itemID);
		public void UpdateInventorySlots(Dictionary<object, object> itemIdToSlotIndexTable);
		public void SendClientLog(string logString, string stackTrace, LogType type, Dictionary<string, object> extraSentryData, Dictionary<string, string> tags);
		public void ReportCaptureFlag(int woid);
		public void ReportReachedTimeAttackFlag(int captureTime, int woid);
		public void ResetLogicChunk(int worldObjectID);
		public bool RequestFriendShipByID(int id, ref string errorText);
		public void RequestMarketPlaceItem(int itemID);
		public void RequestAddItemToMarketPlace(int itemID, string itemName, string itemDescription);
		public void RequestRemoveItemFromMarketPlace(int itemID);
		public void RequestLargeDBQuery(MVOperationCodes operationCode, DBQuery query, Dictionary<object, object> inData, int numRowsPerReturn);
		public void RequestResetTerrain();
		public void SendRuntimeEventOperation(RuntimeEvent runtimeEvent);
		public void SetTeam(MVTeam team);
		public void AttachWorldObjectToSeat(int seatOwnerWoID, int worldObjectID, VehicleSeatBase seatBase);
		public void AddAvatarToAvatarShopInventory(int worldObjectId, string name);
		public void DeleteAvatarFromShopInventory(int worldObjectId);
		public void SpawnVehicleWithDriver(int worldObjectSpawnerVehicleID, int worldObjectID, VehicleSeatBase seatBase);
		public void VehicleEnergyUse(int worldObjectSpawnerVehicleEnergyID, int worldObjectID);
		public void DetachWorldObjectFromVehicle(int worldObjectID);
		public void SetAvatarAccessorySlot(int avatarBodyWoID, int streamingAssetId, float offset, float scale);
		public void UnEquipAccessory(int avatarBodyWoID, AccessorySlotType accessorySlotType);
		public void ResetAvatar(int AvatarID);
		public void SetActiveAvatar(int AvatarID);
		public void UpdateAvatarAccessoryOffset(int bodyWoID, AccessorySlotType slot, float offset);
		public void UpdateAvatarAccessoryScale(int bodyWoID, AccessorySlotType slot, float scale);
		public void PurchaseSwitchTheme(int themeId, Dictionary<object, object> themeSettingsData);
		public void UnlockMaterial(int materialID);
		public void UnlockClientShopInventoryItem(int itemId);
		public void PurchaseAvatar(int avatarId);
		public void RemoveLink(int linkID);
		public void RemoveObjectLink(int objectLinkID);
		public void TriggerBoxEnter(int triggerBoxOwnerId, int triggerInstigatorId);
		public void TriggerBoxExit(int triggerBoxOwnerId, int triggerInstigatorId);
		public bool UploadScreenshot(ImageType imageType);
		public void PurchaseAvatarAccessory(int streamingAssetID);
		public void PurchaseTier(GamePassTier gamePassTier);
		public void PurchaseGameBooster(string gameBooster);
		public void PurchaseAvatarAccessoryBundle(int bundleId);
		public void LogicActivateRequest(int woID, bool activate);
		public void SetFirstTimeEvent(FirstTimeEvent firstTimeEvent);
		public void SetTier(GamePassTier gamePassTier);
		public void SetGamePassTierToSeenOperation(GamePassTier gamePassTier);
		public void SetHighlightToSeen(int highlightId);
		public void OverrideFirstTimeEvent(FirstTimeEvent firstTimeEvent, bool overrideValue);
		public void ResetFirstTimeEvents(bool overrideValue);
		public void SetMouseSensitivity(float newMouseSensitivity);
		public void GetResetAvatar(int avatarWoID);
		public void RevokeEditRights(MVPlayer target);
		public void Kick(MVPlayer target, string reason);
		public void Observe(bool observe = true);
		private void AdminOperation(byte adminOperationType, int amount, int profileId, string msg);
		public void ShutdownSession();
		public void Ban(int hours, MVPlayer target, string reason);
		public void Expel(MVPlayer target, string reason);
		public void SetSayChatBubbleVisible(bool shouldShow);
		public void GetThemesData();
		public void ResetHighlights();
		public void RequestAccessoryData();
		public void SetEarningsReportToSeenOperation();
		public void SetActiveSpawnRole(int woID);
		public void RequestUpdateGoldResponse();
		private void PurchaseProduct(MVProductType productTypeID, Dictionary<object, object> productData);
		public void ChangeMaterial(ObscuredByte currentMaterialId);
		public void GetInventoryItemData(int itemID);
		public void AdAction(AdType adType, AdActionType actionType, AdContext adContext = AdContext.None);
		[CompilerGenerated]
		private void _HandleUploadScreenShotData_b__25_0();
	}

	private class OperationResponseHandling
	{
		// Fields
		private MVNetworkGame networkGame;

		// Constructors
		public OperationResponseHandling(MVNetworkGame networkGame);

		// Methods
		public void HandleOperationResponse(OperationResponse operationResponse);
		private void ExecuteOperationResponse(MVOperationCodes opCode, Dictionary<byte, object> returnValues, short returnCode);
	}

	private class ReconnectWithAlternatePortHandler
	{
		// Fields
		private const int alternateSecureWebSocketPort = 19091;
		private const int alternateWebSocketPort = 19090;
		private const int alternateUDPPort = 27000;
		private bool triedAlternatePort;
		private MVNetworkGame networkGame;

		// Constructors
		public ReconnectWithAlternatePortHandler(MVNetworkGame networkGame);

		// Methods
		public bool IsHandling(StatusCode statusCode);
		private static int GetAlternatePort(string serverIP);
	}

	private class StatusChangedHandling
	{
		// Fields
		private ReconnectWithAlternatePortHandler reconnectWithAlternatePortHandler;
		private bool registeredFatalStatusCodeInStatHat;
		private MVNetworkGame networkGame;

		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static UnityAction __9__5_0;

			// Constructors
			static __c();
			public __c();

			// Methods
			internal void _OnStatusChanged_b__5_0();
		}

		// Constructors
		public StatusChangedHandling(MVNetworkGame networkGame);

		// Methods
		private void HandleDisconnectMetric(StatusCode returnCode);
		public void OnStatusChanged(StatusCode returnCode);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass253_0
	{
		// Fields
		public Dictionary<byte, object> returnValues;

		// Constructors
		public __c__DisplayClass253_0();

		// Methods
		internal void _OnAddItemToInventory_b__0(MVWorldObjectClient wo);
	}

	// Constructors
	public MVNetworkGame(PhotonLoggingConfig photonLoggingConfig, EmbeddedSiteConfigData embeddedSiteConfigData);

	// Methods
	public void SubscribeToEvent(MVEventCodes eventCode, Action<ExitGames.Client.Photon.EventData> callback);
	public void UnSubscribeToEvent(MVEventCodes eventCode, Action<ExitGames.Client.Photon.EventData> callback);
	private void CreatePrivateClasses();
	private void networkGameStateListener_OnGameStateChanged(object sender, GameStateChangeEventArgs e);
	public void Update();
	public void Cleanup();
	private void UpdateGame();
	public void Service();
	public bool Join();
	private static void GeneratePlanetScreenShot(Action<byte[]> callback);
	public void OnUnregisterWorldObjectResponse(int worldObjectID);
	public void OnResetLogicChunkEvent(int worldObjectID);
	public void OnPickupItemStateChangeEvent(PickupItemState state, int worldObjectID, int instigatorActorNr);
	public void OnUpdateLineOfFire(int worldObjectID, Vector3 camOrigin, Vector3 camDir);
	public void AllModesSetup(ExitGames.Client.Photon.EventData photonEvent);
	public void PlayModeSetup(ExitGames.Client.Photon.EventData photonEvent);
	public void BuildModeSetup(ExitGames.Client.Photon.EventData photonEvent);
	private void SetupLogicManager(int stepTimestamp);
	public void OnNotificationEventReceived(NotificationType type, Dictionary<object, object> data);
	private void OnRequestFriendshipResponse(int returnCode);
	public void OnPurchaseProductResponse(int returnCode, Dictionary<object, object> purchaseResponseData);
	public void AddCloneToWorldObjects(MVWorldObjectClient wo);
	private Dictionary<byte, object> GetAttachWorldObjectToSeatData(VehicleSeatBase seatBase);
	private void OnJoinResponse(Dictionary<byte, object> returnValues);
	private void InitializeManagers();
	private void OnRequestMaterialsResponse(Dictionary<object, object> materialList);
	private void CreatePlayersFromUserList(Dictionary<object, object> userList);
	private void OnGetBuiltInItemBusinessData(Dictionary<object, object> builtInItemBusinessData);
	private void OnRequestFriendsResponse(Dictionary<object, object> friendsList);
	private void WOCM_InitializedGameQueryDataHandler(object sender, InitializedGameQueryDataEventArgs e);
	private void TransferBodyResponseHandler(object sender, OnTransferWosResponseEventArgs e);
	private void OnTransferOwnershipResponse(Dictionary<byte, object> returnValues, int returnCode);
	private void OnLockHierarchyResponse(Dictionary<byte, object> returnValues, int returnCode);
	private void OnRequestWoUniquePrototypeFailed(Dictionary<byte, object> returnValues);
	private void OnLockHierarchyEvent(ExitGames.Client.Photon.EventData eventData);
	private void OnUnregisterWorldObjectEvent(int worldObjectID);
	private void OnUpdateWorldObjectEvent(ExitGames.Client.Photon.EventData photonEvent);
	private void OnWorldObjectRPCEvent(ExitGames.Client.Photon.EventData photonEvent);
	private void OnTransferOwnershipEvent(ExitGames.Client.Photon.EventData photonEvent);
	private void OnUnregisterPrototypeEvent(int worldInventoryID);
	private void OnFriendRequestEvent(int friendID, int profileID, int friendProfileID);
	private void OnFriendUpdateEvent(int friendID, int profileID, FriendStatus status);
	private void OnAddLinkEvent(int fromID, int toID, int linkID);
	private void OnRemoveLinkEvent(int linkID);
	private void OnAddObjectLinkEvent(int fromID, int toID, int linkID);
	private void OnRemoveObjectLinkEvent(int linkID);
	private void OnTriggerBoxEnterEvent(int actorNr, int worldObjectID);
	private void OnTriggerBoxExitEvent(int actorNr, int worldObjectID);
	private void OnTriggerBoxStayBegin(int worldObjectID, int instigatorId);
	private void OnTriggerBoxStayEnd(int worldObjectID);
	private void OnRemoveItemFromInventory(int itemID);
	private void OnWoUniquePrototypeEvent(int woId, int worldInventoryId);
	public void ResetPlayer();
	public void OnSetWorldObjectsToPurchasedEvent(int purchaseProfileId, int itemId);
	public void OnTransferWorldObjectsToGroup(ExitGames.Client.Photon.EventData eventData);
	public MVWorldObjectClient OnCloneWorldObjectTree(ExitGames.Client.Photon.EventData eventData);
	public MVWorldObjectClient OnCloneWorldObjectTreePosition(ExitGames.Client.Photon.EventData eventData);
	public void OnCloneTempWorldObjectWithOriginalReferenceEvent(ExitGames.Client.Photon.EventData eventData);
	public void OnGetGameBatch(ExitGames.Client.Photon.EventData eventData);
	private void OnGameQueryReady(ExitGames.Client.Photon.EventData eventData);
	private void OnPostWinnerReportEvent();
	private void OnCollectiblePickedUp(ExitGames.Client.Photon.EventData photonEvent);
	private void OnGetActiveAvatarResponse(int woid);
	public void OnSetTeamEvent(int actorNr, MVTeam team);
	public void OnGetItemCategories(Dictionary<object, object> outData);
	public void OnGetPlanetOwnershipTypes(Dictionary<object, object> outData);
	private void OnInventoryResultSetResponse(Dictionary<object, object> outData);
	private void OnShopInventoryResultSetResponse(Dictionary<object, object> outData, bool isDone);
	private void OnAvatarShopInventoryResultSetResponse(Dictionary<object, object> outData);
	public void OnAddItemToInventory(Dictionary<byte, object> returnValues, short returnCode);
	public void OnAddWorldObjectToInventoryResponseDev(int returnCode, int worldObjectID, int itemID);
	public void OnOperationResponse(OperationResponse operationResponse);
	public void OnStatusChanged(StatusCode statusCode);
	public void OnEvent(ExitGames.Client.Photon.EventData eventData);
	private void HandleGameSnapshotData(BytePacker bytePacker, QueryType queryType, bool dataLeft);
	private void CreateGame();
	private void OnGameCreated(object sender, InitializedGameQueryDataEventArgs initializedGameQueryDataEventArgs);
	private void OnLevelChanged(int actorNr, int level);
	private void OnSetSayChatBubbleVisible(int actorNr, bool visible);
	private void LoadModeGui();
	public void DebugReturn(DebugLevel level, string debug);
}

