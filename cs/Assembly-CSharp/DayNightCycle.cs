/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Borodar.FarlandSkies.CloudyCrownPro.DotParams;
using ThemeTimers;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DayNightCycle : MonoBehaviour
{
	// Fields
	[Header("Configuration")]
	[Range(0f, 100f)]
	[SerializeField]
	private float _sunrise;
	[Range(0f, 100f)]
	[SerializeField]
	private float _sunset;
	[SerializeField]
	[Tooltip("Max angle between the horizon and the center of sun\u2019s disk")]
	private float _sunAltitude;
	[SerializeField]
	[Tooltip("Angle between z-axis and the center of sun\u2019s disk at sunrise")]
	private float _sunLongitude;
	[SerializeField]
	[Tooltip("A pair of angles that limit visible orbit of the sun")]
	private Vector2 _sunOrbit;
	[Range(0f, 100f)]
	[SerializeField]
	private float _moonrise;
	[Range(0f, 100f)]
	[SerializeField]
	private float _moonset;
	[SerializeField]
	[Tooltip("Max angle between the horizon and the center of moon\u2019s disk")]
	private float _moonAltitude;
	[SerializeField]
	[Tooltip("Angle between z-axis and the center of moon\u2019s disk at moonrise")]
	private float _moonLongitude;
	[SerializeField]
	[Tooltip("A pair of angles that limit visible orbit of the moon")]
	private Vector2 _moonOrbit;
	[Header("Dependencies")]
	[SerializeField]
	private ThemeSkybox skybox;
	[SerializeField]
	private DayNightCycleColorPresets colorPresets;
	private float _sunDuration;
	private Vector3 _sunAttitudeVector;
	private float _moonDuration;
	private Vector3 _moonAttitudeVector;
	private bool useServerTime;
	private float cycleLength;
	private ITimer timer;
	private float cycleStartTime;
	private bool initialized;
	private bool isPaused;
	private DayNightCycleColorPresets.Preset activeColorPreset;
	[CompilerGenerated]
	private SkyParam _CurrentSkyParam_k__BackingField;
	[CompilerGenerated]
	private StarsParam _CurrentStarsParam_k__BackingField;
	[CompilerGenerated]
	private CelestialParam _CurrentSunParam_k__BackingField;
	[CompilerGenerated]
	private CelestialParam _CurrentMoonParam_k__BackingField;

	// Properties
	private float CurrentStepTime { get; }
	private SkyParamsList _skyParamsList { get; }
	private CelestialParamsList _sunParamsList { get; }
	private CelestialParamsList _moonParamsList { get; }
	private StarsParamsList _starsParamsList { get; }
	public bool IsPaused { get; set; }
	public int ColorPreset { set; }
	public bool UseServerTime { set; }
	public float InitialTimeOfDay { set; }
	public float TimeOfDay { get; set; }
	public float CycleLength { set; }
	public float SunriseTime { set; }
	public float SunsetTime { set; }
	public float MoonriseTime { set; }
	public float MoonsetTime { set; }
	public float SunAltitude { set; }
	public float SunLongitude { set; }
	public float MoonAltitude { set; }
	public float MoonLongitude { set; }
	private SkyParam CurrentSkyParam { [CompilerGenerated] get; [CompilerGenerated] set; }
	private StarsParam CurrentStarsParam { [CompilerGenerated] get; [CompilerGenerated] set; }
	private CelestialParam CurrentSunParam { [CompilerGenerated] get; [CompilerGenerated] set; }
	private CelestialParam CurrentMoonParam { [CompilerGenerated] get; [CompilerGenerated] set; }

	// Constructors
	public DayNightCycle();

	// Methods
	private void EditorAssert(bool b);
	public void Initialize();
	public void Reset();
	private void RecalcSunDuration();
	private void RecalcSunAltitudeVector();
	private void RecalcMoonDuration();
	private void RecalcMoonAltitudeVector();
	protected void Update();
	private void Update(float timeOfDay);
	protected void OnValidate();
}

