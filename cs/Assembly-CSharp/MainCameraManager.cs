/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private LineDrawManager lineDrawManager;
	private MVCameraController cameraController;
	private bool isLogicRendered;
	private static Dictionary<MVGameType, ICameraSettings> cameraSettings;
	public Shader transparentMultiplyColor;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private EventHandler<OnIgnoreInputTypesArgs> onIgnoreInputTypes;
	private bool blueModeEnabled;
	private ProtectedTransform protectedTransform;
	private static float baseVolume;
	private static bool mute;
	public static Action<bool> OnMuteChange;
	public static Action OnCameraSettingAdded;
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
	public static void RegisterCameraWithSettings(MVGameType gameType, ICameraSettings cameraSettings);
	public static void UnRegisterCameraWithSettings(MVGameType gameType);
	public static ICameraSettings GetSettings(MVGameType gameType);
	public static bool HasSetting(MVGameType gameType);
	public void PlayPlingSound();
	public void SetCameraController(MVCameraController cameraController);
	public bool IsCameraControllerSet();
	protected void Awake();
	public void IgnoreInputTypes(IgnoreInputTypes inputTypes);
	public void Init();
	public void UpdateCamera();
	public void StartTransitionCam(float transitionTime = 2f, bool soft = false);
	public void CancelTransitionCam();
	private void RenderLogic(bool renderLogic);
	protected void OnDestroy();
}

