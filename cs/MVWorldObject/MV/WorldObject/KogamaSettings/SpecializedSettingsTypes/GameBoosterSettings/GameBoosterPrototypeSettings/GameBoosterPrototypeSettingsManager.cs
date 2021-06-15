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

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterPrototypeSettings
{
	public static class GameBoosterPrototypeSettingsManager
	{
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
	
		// Methods
		public static KogamaSettingWrapperBase CreateGameBoosterSettingPrototypes();
		public static List<GameBoosterSettingWithGoldSetting> GetSettingsSettingsList(KogamaSettingWrapperBase root);
		public static GameBoosterSettingWithGoldSetting CreateDefaultBool(string key, KogamaSettingsCollectionBase root);
		public static GameBoosterSettingWithGoldSetting CreateDefaultInt(int defaultVal, int minVal, int maxVal, string key, KogamaSettingsCollectionBase root);
		private static GameBoosterSettingWithGoldSetting CreateDefaultGameBoosterSettingWithGoldSetting(string key, KogamaSettingsCollectionBase root);
		private static KogamaSettingNumericBase<int> CreateGoldSetting(GameBoosterSettingWithGoldSetting gameBoosterSettingWithGoldSetting);
		private static KogamaSettingNumericBase<int> CreateTimeSetting(GameBoosterSettingWithGoldSetting gameBoosterSettingWithGoldSetting);
	}
}
