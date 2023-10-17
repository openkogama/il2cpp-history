/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterPrototypeSettings
{
	public static class GameBoosterPrototypeSettingsManager
	{
		// Fields
		public const int defaultMinGold = 5;
		public const int defaultMaxGold = 50;
		public const int defaultValGold = 10;
		public const int defaultMinTimeSeconds = 600;
		public const int defaultMaxTimeSeconds = 600;
		public const int defaultValTimeSeconds = 600;
		public const string root = "GameBoosterPrototypeSetting";
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass1
		{
			// Fields
			public List<GameBoosterSettingWithGoldSetting> inv;
	
			// Constructors
			public __c__DisplayClass1();
	
			// Methods
			public void _GetSettingsSettingsList_b__0(KogamaSettingWrapperBase settingNode);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass4
		{
			// Fields
			public Dictionary<string, GameBoosterSettingWithGoldSetting> inv;
	
			// Constructors
			public __c__DisplayClass4();
	
			// Methods
			public void _GetSettingsDictionary_b__3(KogamaSettingWrapperBase settingNode);
		}
	
		// Methods
		public static KogamaSettingWrapperBase CreateGameBoosterSettingPrototypes();
		public static Dictionary<object, object> GetDefaultSettingsSubSet(List<string> defaultSettingsSubset);
		public static List<GameBoosterSettingWithGoldSetting> GetSettingsSettingsList(KogamaSettingWrapperBase root);
		public static Dictionary<string, GameBoosterSettingWithGoldSetting> GetSettingsDictionary(KogamaSettingWrapperBase root);
		public static GameBoosterSettingWithGoldSetting CreateDefaultBool(string key, KogamaSettingsCollectionBase root);
		public static GameBoosterSettingWithGoldSetting CreateDefaultInt(int defaultVal, int minVal, int maxVal, string key, KogamaSettingsCollectionBase root);
		public static GameBoosterSettingWithGoldSetting CreateDefaultFloat(float defaultVal, float minVal, float maxVal, string key, KogamaSettingsCollectionBase root);
		private static GameBoosterSettingWithGoldSetting CreateDefaultGameBoosterSettingWithGoldSetting(string key, KogamaSettingsCollectionBase root);
		private static KogamaSettingNumericBase<int> CreateGoldSetting(GameBoosterSettingWithGoldSetting gameBoosterSettingWithGoldSetting);
		private static KogamaSettingNumericBase<int> CreateTimeSetting(GameBoosterSettingWithGoldSetting gameBoosterSettingWithGoldSetting);
	}
}
