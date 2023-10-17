/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ThemeAttributes;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class CloudyThemeBase : Theme
{
	// Fields
	[Header("Attributes", order = 1)]
	[Header("Day/night-cycle", order = 2)]
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
	[Header("Sky")]
	[SerializeField]
	private ColorAttribute topColor;
	[SerializeField]
	private ColorAttribute bottomColor;
	[Header("Stars")]
	[SerializeField]
	private ColorAttribute starsTint;
	[SerializeField]
	private FloatAttribute starsExtinction;
	[SerializeField]
	private FloatAttribute starsTwinkilingSpeed;
	[Header("Sun")]
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
	[Header("Moon")]
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
	[Header("Clouds")]
	[SerializeField]
	private FloatAttribute cloudsHeight;
	[SerializeField]
	private FloatAttribute cloudsOffset;
	[SerializeField]
	private FloatAttribute cloudsRotationSpeed;
	[Header("Fog")]
	[SerializeField]
	private BoolAttribute useFog;
	[SerializeField]
	private FloatAttribute fogDensity;
	[Header("Misc")]
	[SerializeField]
	private FloatAttribute exposure;
	[Header("Dependencies")]
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
	private void _InitializeAttributes_b__44_0(int i);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_1(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_2(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_3(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_4(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_5(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_6(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_7(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_8(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_9(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_10(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_11(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_12(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_13(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_14(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_15(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_16(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_17(Color c);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_18(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_19(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_20(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_21(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_22(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_23(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_24(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_25(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_26(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_27(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_28(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_29(float f);
	[CompilerGenerated]
	private void _InitializeAttributes_b__44_30(float f);
}

