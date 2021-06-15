/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Borodar.FarlandSkies.CloudyCrownPro.DotParams;
using ThemeTimers;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DayNightCycle : MonoBehaviour
{
	// Fields
	[Header]
	[Range]
	[SerializeField]
	private float _sunrise;
	[Range]
	[SerializeField]
	private float _sunset;
	[SerializeField]
	[Tooltip]
	private float _sunAltitude;
	[SerializeField]
	[Tooltip]
	private float _sunLongitude;
	[SerializeField]
	[Tooltip]
	private Vector2 _sunOrbit;
	[Range]
	[SerializeField]
	private float _moonrise;
	[Range]
	[SerializeField]
	private float _moonset;
	[SerializeField]
	[Tooltip]
	private float _moonAltitude;
	[SerializeField]
	[Tooltip]
	private float _moonLongitude;
	[SerializeField]
	[Tooltip]
	private Vector2 _moonOrbit;
	[Header]
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
	[DebuggerBrowsable]
	private SkyParam _CurrentSkyParam_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private StarsParam _CurrentStarsParam_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private CelestialParam _CurrentSunParam_k__BackingField;
	[CompilerGenerated]
	[DebuggerBrowsable]
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

