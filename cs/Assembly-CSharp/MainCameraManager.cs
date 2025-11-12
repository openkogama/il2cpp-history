/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MainCameraManager : MonoBehaviour
{
	// Fields
	public static Action<bool> OnMuteChange;
	public static Action<bool> OnCameraEffectsChange;
	public static Action OnCameraSettingAdded;
	public static Action<bool> OnCameraCubeAddedRemoved;
	public static Action<bool> OnGameCameraEffectsChange;
	public static float DistanceToAvatarBase;
	public static CameraType DefaultCameraType;
	public static bool IsCameraForcedFirstPerson;
	private static Dictionary<MVGameType, ICameraSettings> cameraSettings;
	private static float baseVolume;
	private static bool isMuted;
	private static bool isTemporarilyMuted;
	private static bool storedMuteValue;
	[SerializeField]
	private Camera mainCamera;
	[SerializeField]
	private Transform secondaryCamera;
	[SerializeField]
	private Transform tertiaryCamera;
	[SerializeField]
	private TransitionCamera transitionCamera;
	[SerializeField]
	private AudioSource plingSound;
	[SerializeField]
	private GrayscaleEffect greyScaleEffect;
	[SerializeField]
	private Skybox skybox;
	[SerializeField]
	private AudioListener audioListener;
	[SerializeField]
	private LineDrawManager lineDrawManager;
	[SerializeField]
	private ScreenSizeOptimizer screenSizeOptimizer;
	public Shader transparentMultiplyColor;
	[CompilerGenerated]
	private EventHandler<OnIgnoreInputTypesArgs> OnIgnoreInputTypes;
	private PostProcessingManager postProcessingManager;
	private MVCameraController cameraController;
	private ProtectedTransform protectedTransform;
	private bool isLogicRendered;
	private bool blueModeEnabled;
	private int cullingMask;
	private MaskMode maskMode;

	// Properties
	public Skybox Skybox { get; }
	public LineDrawManager LineDrawManager { get; }
	public float FieldOfView { get; set; }
	public Camera MainCamera { get; }
	public Camera TertiaryCamera { get; }
	public Camera SecondaryCamera { get; }
	public MVCameraBase CurrentCamera { get; }
	public ProtectedTransform ProtectedTransform { get; }
	public Vector3 FireDirection { get; }
	public Vector3 FireOrigin { get; }
	public PostProcessingManager PostProcessingManager { get; }
	public bool BlueModeEnabled { get; set; }
	public static bool Mute { get; set; }
	public MaskMode CamMaskMode { get; set; }
	public bool TertiaryCameraActive { get; set; }
	public bool IsLogicRendered { get; set; }

	// Events
	public event EventHandler<OnIgnoreInputTypesArgs> OnIgnoreInputTypes {
		add;
		remove;
	}

	// Constructors
	public MainCameraManager();
	static MainCameraManager();

	// Methods
	protected void Awake();
	public void Init();
	public void EnableScreenOptimizer();
	public void PlayPlingSound();
	public void SetCameraController(MVCameraController camController);
	public void UpdateAudioListener();
	public bool IsCameraControllerSet();
	public void IgnoreInputTypes(IgnoreInputTypes inputTypes);
	public void UpdateCamera();
	public void StartTransitionCam(float transitionTime = 2f, bool soft = false);
	public void CancelTransitionCam();
	private void RenderLogic(bool renderLogic);
	protected void OnDestroy();
	public static void TemporaryMute(bool muteTemporarily);
	public static void RegisterCameraWithSettings(MVGameType gameType, ICameraSettings camSettings);
	public static void UnRegisterCameraWithSettings(MVGameType gameType);
	public static ICameraSettings GetSettings(MVGameType gameType);
	public static bool HasSetting(MVGameType gameType);
}

