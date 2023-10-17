/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ThemeSkybox : ThemeComponent
{
	// Fields
	[SerializeField]
	private PlatformSpecificMaterial skyboxMaterialSerialized;
	private Material skyboxMaterial;
	[SerializeField]
	[Tooltip("Color at the top pole of skybox sphere")]
	private Color _topColor;
	[SerializeField]
	[Tooltip("Color at the bottom pole of skybox sphere")]
	private Color _bottomColor;
	[SerializeField]
	private bool fogEnabled;
	[Range(0f, 0.5f)]
	[SerializeField]
	private float fogDensity;
	[SerializeField]
	private float fogStartDist;
	[SerializeField]
	private float fogEndDist;
	[SerializeField]
	private Color _starsTint;
	[Range(0f, 10f)]
	[SerializeField]
	[Tooltip("Reduction in stars apparent brightness closer to the horizon")]
	private float _starsExtinction;
	[Range(0f, 25f)]
	[SerializeField]
	[Tooltip("Variation in stars apparent brightness caused by the atmospheric turbulence")]
	private float _starsTwinklingSpeed;
	[SerializeField]
	private FlareLight _sun;
	[SerializeField]
	private Color _sunTint;
	[Range(0.1f, 3f)]
	[SerializeField]
	private float _sunSize;
	[Range(0.01f, 2f)]
	[SerializeField]
	[Tooltip("Actual flare brightness depends on sun tint alpha, and this property is just a coefficient for that value")]
	private float _sunFlareBrightness;
	[Range(0f, 1f)]
	[SerializeField]
	private float _sunLightContrast;
	[Range(0f, 8f)]
	[SerializeField]
	private float _sunLightIntensity;
	[SerializeField]
	private FlareLight _moon;
	[SerializeField]
	private Color _moonTint;
	[Range(0.1f, 3f)]
	[SerializeField]
	private float _moonSize;
	[Range(0.01f, 2f)]
	[SerializeField]
	[Tooltip("Actual flare brightness depends on moon tint alpha, and this property is just a coefficient for that value")]
	private float _moonFlareBrightness;
	[Range(0f, 1f)]
	[SerializeField]
	private float _moonLightContrast;
	[Range(0f, 8f)]
	[SerializeField]
	private float _moonLightIntensity;
	[Range(-0.75f, 0.75f)]
	[SerializeField]
	[Tooltip("Height of the clouds relative to the horizon")]
	private float _cloudsHeight;
	[Range(0f, 1f)]
	[SerializeField]
	[Tooltip("Distance between the cloud waves")]
	private float _cloudsOffset;
	[Range(-50f, 50f)]
	[SerializeField]
	[Tooltip("Rotation of the clouds around the positive y axis")]
	private float _cloudsRotationSpeed;
	[Range(0f, 10f)]
	[SerializeField]
	[Tooltip("Adjusts the brightness of the skybox")]
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

