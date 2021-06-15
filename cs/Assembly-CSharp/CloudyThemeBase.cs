/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeAttributes;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class CloudyThemeBase : Theme
{
	// Fields
	[Header]
	[Header]
	[SerializeField]
	private BoolAttribute useDayNightCycle;
	[SerializeField]
	private BoolAttribute useServerTime;
	[SerializeField]
	private IntAttribute colorPreset;
	[SerializeField]
	private FloatAttribute gameStartTime;
	[SerializeField]
	private FloatAttribute cycleLength;
	[SerializeField]
	private FloatAttribute sunAltitude;
	[SerializeField]
	private FloatAttribute sunLongitude;
	[SerializeField]
	private FloatAttribute moonAltitude;
	[SerializeField]
	private FloatAttribute moonLongitude;
	[Header]
	[SerializeField]
	private ColorAttribute topColor;
	[SerializeField]
	private ColorAttribute bottomColor;
	[Header]
	[SerializeField]
	private ColorAttribute starsTint;
	[SerializeField]
	private FloatAttribute starsExtinction;
	[SerializeField]
	private FloatAttribute starsTwinkilingSpeed;
	[Header]
	[SerializeField]
	private ColorAttribute sunTint;
	[SerializeField]
	private FloatAttribute sunSize;
	[SerializeField]
	private FloatAttribute sunHeight;
	[SerializeField]
	private FloatAttribute sunAxis;
	[SerializeField]
	private FloatAttribute sunLightContrast;
	[SerializeField]
	private FloatAttribute sunLightIntensity;
	[SerializeField]
	private FloatAttribute sunFlareBrightness;
	[Header]
	[SerializeField]
	private ColorAttribute moonTint;
	[SerializeField]
	private FloatAttribute moonSize;
	[SerializeField]
	private FloatAttribute moonHeight;
	[SerializeField]
	private FloatAttribute moonAxis;
	[SerializeField]
	private FloatAttribute moonLightContrast;
	[SerializeField]
	private FloatAttribute moonLightIntensity;
	[SerializeField]
	private FloatAttribute moonFlareBrightness;
	[Header]
	[SerializeField]
	private FloatAttribute cloudsHeight;
	[SerializeField]
	private FloatAttribute cloudsOffset;
	[SerializeField]
	private FloatAttribute cloudsRotationSpeed;
	[Header]
	[SerializeField]
	private BoolAttribute useFog;
	[SerializeField]
	private FloatAttribute fogDensity;
	[Header]
	[SerializeField]
	private FloatAttribute exposure;
	[Header]
	[SerializeField]
	private ThemeSkybox skybox;
	[SerializeField]
	private DayNightCycle dayNightCycle;
	[SerializeField]
	private DayNightCycleController cycleControllerPrefab;

	// Properties
	public override List<RectTransform> Controllers { get; }
	public ThemeSkybox Skybox { get; private set; }

	// Nested types
	public static class SettingGroups
	{
		// Fields
		public const int all = 0;
		public const int dayNightCycleOn = 1;
		public const int dayNightCycleOff = 2;
		public const int realTimeOn = 4;
		public const int realTimeOff = 8;
		public const int fogEnabled = 16;
		public const int fogDisabled = 32;
	}

	// Constructors
	protected CloudyThemeBase();

	// Methods
	public override void ThemeReset();
	protected override void InitializeAttributes();
	protected override void InitializeComponents();
	private void ToggleDayNightCycle(bool b);
	private void ToggleDayNightCycleUseServerTime(bool b);
	private void ToggleFog(bool b);
	[CompilerGenerated]
	private void _InitializeAttributes_m__0(int i);
	[CompilerGenerated]
	private void _InitializeAttributes_m__1(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__2(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__3(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_m__4(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_m__5(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_m__6(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__7(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__8(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_m__9(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__A(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__B(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__C(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__D(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__E(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__F(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__10(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__11(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_m__12(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__13(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__14(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__15(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__16(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__17(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__18(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__19(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__1A(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__1B(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__1C(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__1D(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_m__1E(float f);
}

