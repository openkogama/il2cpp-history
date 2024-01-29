/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.MetaData;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.ProfileSettings
{
	public static class ProfileSettingsManager
	{
		// Fields
		private const float mouseSenseMinModifier = 10f;
		private const float mouseSenseMaxModifier = 10f;
		private static SettingsPlatform settingsPlatform;
		public static Dictionary<ProfileSettingKey, Action<object>> ProfileSettingsChanged;
		public static float mouseSensitivity;
		[CompilerGenerated]
		private static TargetFrameRateValue _TargetFrameRate_k__BackingField;
		[CompilerGenerated]
		private static TextureQualityLevel _TextureQualityLevel_k__BackingField;
		[CompilerGenerated]
		private static FilterMode _TextureFilter_k__BackingField;
		[CompilerGenerated]
		private static AnistropicFilteringLevel _AnistropicFilteringLevel_k__BackingField;
		[CompilerGenerated]
		private static LightingQualityLevel _LightQualityLevel_k__BackingField;
		[CompilerGenerated]
		private static AntiAliasingLevel _AntiAliasingLevel_k__BackingField;
	
		// Properties
		public static TargetFrameRateValue TargetFrameRate { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public static TextureQualityLevel TextureQualityLevel { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public static FilterMode TextureFilter { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public static AnistropicFilteringLevel AnistropicFilteringLevel { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public static LightingQualityLevel LightQualityLevel { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public static AntiAliasingLevel AntiAliasingLevel { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal void _.cctor_b__39_0(object o);
			internal void _.cctor_b__39_1(object o);
			internal void _.cctor_b__39_2(object o);
			internal void _.cctor_b__39_3(object o);
			internal void _.cctor_b__39_4(object o);
			internal void _.cctor_b__39_5(object o);
			internal void _.cctor_b__39_6(object o);
		}
	
		// Constructors
		static ProfileSettingsManager();
	
		// Methods
		public static void Init(ProfileSettingsState profileSettingsState);
		public static object GetSettingValue(ProfileSettingKey profileSetting);
		public static void SetSettingValue(ProfileSettingKey profileSetting, object value);
		public static void ResetToDefaultValues();
		public static int MaxFrameRateToInt(TargetFrameRateValue value);
		public static int AnisoLevelToInt(AnistropicFilteringLevel level);
		private static int AntiAliasingLevelToInt(AntiAliasingLevel level);
		private static float CalculateMouseSensitivityValueFromValue(float value);
		private static void SetFrameRateSetting(TargetFrameRateValue value);
		private static void SetLightQualitySetting(LightingQualityLevel level);
	}
}
