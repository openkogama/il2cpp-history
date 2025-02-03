/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Camera;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MainCameraManager : MonoBehaviour
{
	// Fields
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
	[SerializeField]
	private PostProcessLayer postProcessLayer;
	[SerializeField]
	private PostProcessVolume postProcessVolume;
	[SerializeField]
	public PostProcessResources postProcessResources;
	public static PostProcessingSettings CurrentPostProcessingSettings;
	private MVCameraController cameraController;
	private bool isLogicRendered;
	private static Dictionary<MVGameType, ICameraSettings> cameraSettings;
	public Shader transparentMultiplyColor;
	[CompilerGenerated]
	private EventHandler<OnIgnoreInputTypesArgs> onIgnoreInputTypes;
	private bool blueModeEnabled;
	public static float DistanceToAvatarBase;
	public static CameraType DefaultCameraType;
	public static bool IsCameraForcedFirstPerson;
	private ProtectedTransform protectedTransform;
	private static float baseVolume;
	private static bool mute;
	private static bool gameHasCameraEffects;
	private bool cameraEffects;
	public static Action<bool> OnMuteChange;
	public static Action<bool> OnCameraEffectsChange;
	public static Action OnCameraSettingAdded;
	public static Action<bool> OnCameraCubeAddedRemoved;
	public static Action<bool> OnGameCameraEffectsChange;
	private int cullingMask;
	private MaskMode maskMode;

	// Properties
	public Skybox Skybox { get; }
	public LineDrawManager LineDrawManager { get; }
	public float FieldOfView { get; set; }
	public Camera MainCamera { get; }
	public MVCameraBase CurrentCamera { get; }
	public bool BlueModeEnabled { get; set; }
	public ProtectedTransform ProtectedTransform { get; }
	public Vector3 FireDirection { get; }
	public Vector3 FireOrigin { get; }
	public static bool Mute { get; set; }
	public static bool GameHasCameraEffects { get; set; }
	public bool CameraEffects { get; set; }
	public MaskMode CamMaskMode { get; set; }
	public bool TertiaryCameraActive { get; set; }
	public Camera TertiaryCamera { get; }
	public Camera SecondaryCamera { get; }
	public bool IsLogicRendered { get; set; }

	// Events
	public event EventHandler<OnIgnoreInputTypesArgs> onIgnoreInputTypes {
		add;
		remove;
	}

	// Constructors
	public MainCameraManager();
	static MainCameraManager();

	// Methods
	public void EnableScreenOptimizer();
	public static void RegisterCameraWithSettings(MVGameType gameType, ICameraSettings camSettings);
	public static void UnRegisterCameraWithSettings(MVGameType gameType);
	public static ICameraSettings GetSettings(MVGameType gameType);
	public static bool HasSetting(MVGameType gameType);
	public void PlayPlingSound();
	public void SetCameraController(MVCameraController camController);
	public void UpdateAudioListener();
	public bool IsCameraControllerSet();
	protected void Awake();
	public void IgnoreInputTypes(IgnoreInputTypes inputTypes);
	public void Init();
	public void UpdateCamera();
	public void StartTransitionCam(float transitionTime = 2f, bool soft = false);
	public void CancelTransitionCam();
	private void RenderLogic(bool renderLogic);
	protected void OnDestroy();
	private void HandleCameraCubeAddedRemoved(bool cubeAddedRemoved);
	public bool ApplyPostProcessingThis(PostProcessingSettings data);
	public static bool ApplyPostProcessing(PostProcessLayer ppLayer, PostProcessVolume ppVolume, PostProcessingSettings data);
	private static bool DoPostProcessingColor(PostProcessLayer ppLayer, PostProcessVolume ppVolume, PostProcessingColorSettings colorSettings);
	private static bool DoPostProcessingBloom(PostProcessLayer ppLayer, PostProcessVolume ppVolume, PostProcessingBloomSettings bloomSettings);
	private static bool DoPostProcessingAmbientOcclusion(PostProcessLayer ppLayer, PostProcessVolume ppVolume, PostProcessingAmbientOcclusionSettings aoSettings);
	private static bool DoPostProcessingDepthOfField(PostProcessLayer ppLayer, PostProcessVolume ppVolume, PostProcessingDepthOfFieldSettings aoSettings);
	private static bool DoPostProcessingVignette(PostProcessLayer ppLayer, PostProcessVolume ppVolume, PostProcessingVignetteSettings vignetteSettings);
	private static bool DoPostProcessingGrain(PostProcessLayer ppLayer, PostProcessVolume ppVolume, PostProcessingGrainSettings grainSettings);
	private static bool DoPostProcessingLensDistortion(PostProcessLayer ppLayer, PostProcessVolume ppVolume, PostProcessingLensDistortionSettings lensDistortionSettings);
	private static void EnablePostProcessing(PostProcessLayer ppLayer, PostProcessVolume ppVolume, bool ppEnabled);
}

