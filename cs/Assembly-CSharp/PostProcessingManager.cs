/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Camera;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Camera))]
public class PostProcessingManager : MonoBehaviour
{
	// Fields
	private static readonly Dictionary<PostProcessKey, Pass> PostProcessKeyToPassMap;
	public static Action<bool> OnGameHasPostProcessingChanged;
	public static Action<bool> OnIsPostProcessEffectsEnabledChanged;
	public static Action<bool> OnPostProcessCameraCubeAddedRemoved;
	public static PostProcessingSettings CurrentPostProcessingSettings;
	private static bool isPostProcessEffectsEnabled;
	private static bool hasGamePostProcessEffects;
	[SerializeField]
	private Shader postProcessShader;
	[SerializeField]
	private Shader resampleShader;
	private Material postProcessMaterial;
	private Material resampleMaterial;
	private Vector2Int storedTextureResolution;
	private int resampleIterations;
	private readonly Dictionary<PostProcessKey, string> activeEffectsStrings;
	private readonly HashSet<PostProcessKey> activeEffects;
	private readonly Dictionary<Pass, int> activePasses;

	// Properties
	public static bool IsPostProcessEffectsEnabled { get; set; }
	public static bool HasGamePostProcessEffects { get; set; }

	// Nested types
	private enum Pass
	{
		AO_DOF = 0,
		BLOOM = 1,
		COLOR_VIGNETTE_GRAIN = 2,
		LENS_DISTORTION = 3
	}

	private enum PostProcessKey
	{
		AMBIENT_OCCLUSION = 0,
		BLOOM = 1,
		DOF = 2,
		COLORS = 3,
		VINGETTE = 4,
		GRAIN = 5,
		LENS_DISTORTION = 6
	}

	[CompilerGenerated]
	private struct __c__DisplayClass26_0
	{
		// Fields
		public RenderTexture currentSrc;
		public RenderTexture currentDst;
		public PostProcessingManager __4__this;
		public RenderTexture rtA;
		public RenderTexture rtB;
	}

	// Constructors
	public PostProcessingManager();
	static PostProcessingManager();

	// Methods
	private void Awake();
	public bool Initialize(PostProcessingSettings data);
	private void OnRenderImage(RenderTexture src, RenderTexture dst);
	private RenderTexture GetReSampledTexture(RenderTexture src);
	private void SetEffectActiveState(PostProcessKey key, bool isActive);
	private bool SetPostProcessingColorValues(PostProcessingColorSettings colorSettings);
	private bool SetPostProcessingBloomValues(PostProcessingBloomSettings bloomSettings);
	private bool SetPostProcessingAmbientOcclusionValues(PostProcessingAmbientOcclusionSettings aoSettings);
	private bool SetPostProcessingDepthOfFieldValues(PostProcessingDepthOfFieldSettings dofSettings);
	private bool SetPostProcessingVignetteValues(PostProcessingVignetteSettings vignetteSettings);
	private bool SetPostProcessingGrainValues(PostProcessingGrainSettings grainSettings);
	private bool SetPostProcessingLensDistortionValues(PostProcessingLensDistortionSettings lensDistortionSettings);
	private void HandlePostProcessCubeAddedRemoved(bool cubeAddedRemoved);
	private void OnDestroy();
	[CompilerGenerated]
	private void _OnRenderImage_g__RunPassThenSwitchTextures_26_0(Pass pass, ref __c__DisplayClass26_0 param_00000213);
}

