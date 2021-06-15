/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeSkybox : ThemeComponent
{
	// Fields
	[SerializeField]
	private PlatformSpecificMaterial skyboxMaterialSerialized;
	private Material skyboxMaterial;
	[SerializeField]
	[Tooltip]
	private Color _topColor;
	[SerializeField]
	[Tooltip]
	private Color _bottomColor;
	[SerializeField]
	private bool fogEnabled;
	[Range]
	[SerializeField]
	private float fogDensity;
	[SerializeField]
	private float fogStartDist;
	[SerializeField]
	private float fogEndDist;
	[SerializeField]
	private Color _starsTint;
	[Range]
	[SerializeField]
	[Tooltip]
	private float _starsExtinction;
	[Range]
	[SerializeField]
	[Tooltip]
	private float _starsTwinklingSpeed;
	[SerializeField]
	private FlareLight _sun;
	[SerializeField]
	private Color _sunTint;
	[Range]
	[SerializeField]
	private float _sunSize;
	[Range]
	[SerializeField]
	[Tooltip]
	private float _sunFlareBrightness;
	[Range]
	[SerializeField]
	private float _sunLightContrast;
	[Range]
	[SerializeField]
	private float _sunLightIntensity;
	[SerializeField]
	private FlareLight _moon;
	[SerializeField]
	private Color _moonTint;
	[Range]
	[SerializeField]
	private float _moonSize;
	[Range]
	[SerializeField]
	[Tooltip]
	private float _moonFlareBrightness;
	[Range]
	[SerializeField]
	private float _moonLightContrast;
	[Range]
	[SerializeField]
	private float _moonLightIntensity;
	[Range]
	[SerializeField]
	[Tooltip]
	private float _cloudsHeight;
	[Range]
	[SerializeField]
	[Tooltip]
	private float _cloudsOffset;
	[Range]
	[SerializeField]
	[Tooltip]
	private float _cloudsRotationSpeed;
	[Range]
	[SerializeField]
	[Tooltip]
	private float _exposure;
	[SerializeField]
	private AnimationCurve lightIntensityByEmitterHeight;
	private Material previousSkyboxMaterial;
	private CameraClearFlags previousClearFlags;
	private float sunAngle;
	private float moonAngle;

	// Properties
	public Material Material { get; }
	public Color TopColor { get; set; }
	public Color BottomColor { get; set; }
	public bool FogEnabled { get; set; }
	public float FogDensity { get; set; }
	public float FogStartDistance { get; set; }
	public float FogEndDistance { get; set; }
	public Color StarsTint { get; set; }
	public float StarsExtinction { get; set; }
	public float StarsTwinklingSpeed { get; set; }
	public Light SunLight { get; }
	public LensFlare SunFlare { get; }
	public Color SunTint { get; set; }
	public float SunSize { get; set; }
	public float SunLightContrast { get; set; }
	public float SunLightIntensity { get; set; }
	public float SunFlareBrightness { get; set; }
	public float SunHeight { set; }
	public float SunAxisDegrees { set; }
	public Quaternion SunRotation { get; set; }
	public Light MoonLight { get; }
	public LensFlare MoonFlare { get; }
	public float MoonSize { get; set; }
	public Color MoonTint { get; set; }
	public float MoonLightContrast { get; set; }
	public float MoonLightIntensity { get; set; }
	public float MoonFlareBrightness { get; set; }
	public float MoonHeight { set; }
	public float MoonAxisDegrees { set; }
	public Quaternion MoonRotation { get; set; }
	public float CloudsHeight { get; set; }
	public float CloudsOffset { get; set; }
	public float CloudsRotationSpeed { get; set; }
	public float Exposure { get; set; }
	private Skybox Skybox { get; }
	private Camera Camera { get; }

	// Nested types
	[Serializable]
	private class PlatformSpecificMaterial
	{
		// Fields
		[SerializeField]
		private Material skyboxMaterialAndroid;
		[SerializeField]
		private Material skyboxMaterialStandalone;
		[SerializeField]
		private Material skyboxMaterialWebGL;

		// Constructors
		public PlatformSpecificMaterial();

		// Methods
		public static implicit operator Material(PlatformSpecificMaterial m);
	}

	// Constructors
	public ThemeSkybox();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	public override void Activate();
	public override void Deactivate();
	public void RecalculateSunLight();
	public void RecalculateMoonLight();
	public void RecalculateFogColor();
	private void ApplyRenderSettings();
}

