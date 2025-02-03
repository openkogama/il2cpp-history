/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using AntiHack;
using Assets.Scripts.AdIntegration;
using Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator;
using Assets.Scripts.Subscription;
using MV.Common;
using UnityEngine;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class MVGameControllerBase : MonoBehaviour, IUpdatecontrollerSubscriberUpdate
{
	// Fields
	public const bool LevelingTestMode = false;
	public const bool ClientShopInsideInventory = true;
	[SerializeField]
	protected RegionConfigManager regionConfigManager;
	[SerializeField]
	protected DebugLogHandler debugLogHandler;
	[SerializeField]
	protected KoGaMaSettingsContainer koGaMaSettings;
	[SerializeField]
	private MainCameraManager mainCameraManager;
	[SerializeField]
	private Styles styles;
	[SerializeField]
	private MaterialLoader materialLoader;
	[SerializeField]
	protected PrefabPool prefabPool;
	[SerializeField]
	protected TextureIntegrityChecker textureIntegrityChecker;
	[SerializeField]
	private ThemeRepository themeRepository;
	[SerializeField]
	private StreamingAssetManager streamingAssetManager;
	[SerializeField]
	protected EmbeddedPlayerConfig embeddedPlayerConfig;
	[CompilerGenerated]
	private static bool _IsInitialized_k__BackingField;
	[CompilerGenerated]
	private static bool _DisconnectIsOk_k__BackingField;
	[CompilerGenerated]
	private static IPlayModeUI _PlayModeUI_k__BackingField;
	[CompilerGenerated]
	private static IEditModeUI _EditModeUI_k__BackingField;
	public static OnReceivedGameMsgDelegate OnReceivedGameMsg;
	public static OnReceivedNotificationEventDelegate OnReceivedNotification;
	public static OnPostGameInitDelegate OnPostGameInit;
	protected static MVGameControllerBase instance;
	protected MVNetworkGame game;
	private AudioManager audioManager;
	private BrowserComm browserComm;
	private LevelLoader levelLoader;
	private SkinnedMeshOptimizeManager skinnedMeshOptimizeManager;
	private FlagDebriefingControl flagDebriefingControl;
	private GoldRewardManager goldRewardManager;
	protected JoystickControllerStack joystickControllerStack;
	private bool quitHasBeenCalled;
	private TimeReward timeReward;
	private OverrideMaterials overrideMaterials;
	private LoadStats loadStats;
	private MVJoinState _joinState;
	private FirstFrameUpdateActorReady firstFrameUpdateActorReady;
	private int reAuthTestTries;
	protected ModeControllerBase modeController;
	[CompilerGenerated]
	private static bool _WebPlayAsTouch_k__BackingField;
	[CompilerGenerated]
	private static bool _PortalUI_k__BackingField;
	[CompilerGenerated]
	private bool _ShuttingDown_k__BackingField;
	[CompilerGenerated]
	private static bool _WebPlayAsTouchInitialized_k__BackingField;
	[CompilerGenerated]
	private static GameSessionData _GameSessionData_k__BackingField;
	private Action<MVJoinState> onJoinStateChanged;
	[CompilerGenerated]
	private static bool _SeekAdConsent_k__BackingField;
	[SerializeField]
	private AudioBuild audioBuild;
	[SerializeField]
	private WaterPlaneManager waterPlaneManagerPrefab;
	private WaterPlaneManager waterPlaneManager;
	[SerializeField]
	private SkyboxManager skyboxManager;
	[SerializeField]
	private SubscriberCooldownsManager subscriberCooldownsManager;
	[CompilerGenerated]
	private static bool _Quitting_k__BackingField;
	[CompilerGenerated]
	private static bool _LeavingEditPlayMode_k__BackingField;

	// Properties
	public static SpawnRoleDataMediator SpawnRoleDataMediatorLocal { get; }
	public static MVLocalPlayer LocalPlayer { get; }
	public static GameEventManager GameEventManager { get; }
	public static bool IsInitialized { [CompilerGenerated] get; [CompilerGenerated] protected set; }
	public static bool DisconnectIsOk { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public static IPlayModeUI PlayModeUI { [CompilerGenerated] get; [CompilerGenerated] protected set; }
	public static IEditModeUI EditModeUI { [CompilerGenerated] get; [CompilerGenerated] protected set; }
	public static bool IsAlive { get; }
	public static MVNetworkGame Game { get; }
	public static AudioManager AudioManager { get; }
	public static BrowserComm BrowserComm { get; }
	public static LevelLoader LevelLoader { get; }
	public static SkinnedMeshOptimizeManager SkinnedMeshOptimizeManager { get; }
	public static FlagDebriefingControl FlagDebriefingControl { get; }
	public static GoldRewardManager GoldRewardManager { get; }
	public static TextureIntegrityChecker TextureIntegrityChecker { get; }
	public static StreamingAssetManager StreamingAssetManager { get; }
	protected EmbeddedPlayerConfig EmbeddedPlayerConfig { get; }
	protected RegionConfig RegionConfig { get; }
	public static StaticAssetsConfig StaticAssetsConfig { get; }
	public static bool WebPlayAsTouch { [CompilerGenerated] get; [CompilerGenerated] set; }
	public static bool PortalUI { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool ShuttingDown { [CompilerGenerated] get; [CompilerGenerated] protected set; }
	public static bool WebPlayAsTouchInitialized { [CompilerGenerated] get; [CompilerGenerated] set; }
	public static GameSessionData GameSessionData { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public static BuildTarget BuildTarget { get; }
	public static Action OnFirstFrameUpdateActorReady { get; set; }
	private static bool OkToReAuth { get; }
	public static int ReAuthTries { get; }
	public static bool UsingDevSessionData { get; }
	public static MVNetworkGame.OperationRequests OperationRequests { get; }
	public static LoadStats LoadStats { get; }
	public static MVGameMode GameMode { get; }
	public static MVWorldObjectClientManager WOCM { get; }
	public static TimeReward TimeReward { get; }
	public static KoGaMaSettingsContainer KoGaMaSettings { get; }
	public static bool IsTouristSession { get; }
	public static IAdManager AdManager { get; }
	protected abstract IAdManager GetAdManager { get; }
	public static bool SeekAdConsent { [CompilerGenerated] get; [CompilerGenerated] set; }
	public static MVJoinState JoinState { get; set; }
	public static Action<MVJoinState> OnJoinStateChanged { get; set; }
	protected abstract bool IsPlayingInternal { get; }
	public static bool IsPlaying { get; }
	public static MaterialLoader MaterialLoader { get; }
	public static MainCameraManager MainCameraManager { get; }
	public static WaterPlaneManager WaterPlaneManager { get; }
	public static SkyboxManager SkyboxManager { get; }
	public static SubscriberCooldownsManager SubscriberCooldownsManager { get; }
	public static bool Quitting { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public static bool LeavingEditPlayMode { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Nested types
	public delegate void OnReceivedGameMsgDelegate(MVGameMsgType type, Dictionary<object, object> gameMsgData);

	public delegate void OnReceivedNotificationEventDelegate(NotificationType type, Dictionary<object, object> data);

	public delegate void OnPostGameInitDelegate();

	protected class VersionData
	{
		// Fields
		[CompilerGenerated]
		private int _minVersion_k__BackingField;
		[CompilerGenerated]
		private int _version_k__BackingField;

		// Properties
		public int minVersion { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int version { [CompilerGenerated] get; [CompilerGenerated] set; }

		// Constructors
		public VersionData();

		// Methods
		public bool ForceUpdate(int clientVersion);
		public override string ToString();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass183_0
	{
		// Fields
		public QuitBaseCallback applicationQuitObject;

		// Constructors
		public __c__DisplayClass183_0();

		// Methods
		internal void _ApplicationQuit_b__0();
	}

	// Constructors
	protected MVGameControllerBase();

	// Methods
	public static bool IsInCorrectInventory(bool insidePlayerInventory);
	protected virtual void Awake();
	protected virtual void Start();
	protected virtual void OnDestroy();
	public static void UnregisterPlayModeController();
	protected void Update();
	protected void FixedUpdate();
	protected virtual void LateUpdate();
	protected void OnDrawGizmos();
	private void OnRTGAppInitialize();
	public static void RegisterPlayModeController(ModeControllerBase playModeController);
	public static void PostGameMsg(MVGameMsgType gameMsgType, Dictionary<object, object> gameMsgData);
	public static void PostGameMsg(MVGameMsgType gameMsgType, string message);
	public static void PostDestroyCleanup();
	public void UpdateControllerUpdate();
	public static void RegisterJoystickControllerStack(JoystickControllerStack joystickControllerStack);
	public static void PushJoystick(ControlType joystickType);
	public static void PopJoystick();
	public static void SetGameSessionData(GameSessionData gameSessionData);
	public static bool TryReauth();
	public static void ApplicationQuit(QuitBaseCallback applicationQuitObject);
	public static void RegisterOverrideMaterials();
	private static extern bool SetWindowPos(IntPtr hwnd, int hWndInsertAfter, int x, int Y, int cx, int cy, int wFlags);
	public static extern IntPtr FindWindow(string className, string windowName);
	public static void SetPosition(int x, int y, int resX = 0, int resY = 0);
	protected void OnApplicationQuit();
	protected void ShutDown();
	protected abstract void HandleApplicationQuit(QuitBaseCallback quitBaseCallback);
	protected virtual void CleanUp();
	protected void CleanUpPortal();
	protected void HandleQuitDisconnect();
	private void AlternatePortTest();
	protected virtual void StartGame();
	protected virtual void InitWebGL(bool developmentMode);
	protected virtual void InitStandAlone(bool developmentMode);
	protected void OnReceivedReAuthWebParametersFromHttpRequest(UnityWebRequest www);
	protected void OnReceivedSessionData(UnityWebRequest www);
	protected virtual void UpdateInternal();
	protected void Initialize();
	private void HandleDebugShortCuts();
	private void StartGameWithSessionData(bool ok, string sessionDataJson);
	private void ReceivedLoadStatsCallback(bool ok, string data);
	private void UpdateGame();
	protected static void DeleteScreenPlayerPrefs();
	public void UpdateControllerLateUpdate();
	public static void ForceEmbedSite(string url);
	public static void TogglePlayerIndicators();
}

