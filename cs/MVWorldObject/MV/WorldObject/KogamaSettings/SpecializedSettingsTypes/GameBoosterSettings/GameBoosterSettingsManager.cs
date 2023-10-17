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

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings
{
	public class GameBoosterSettingsManager
	{
		// Fields
		private readonly Dictionary<object, object> woData;
	
		// Properties
		public List<GameBoosterSettingWithGoldSetting> InactiveGameBoosterSettingsList { get; }
		public KogamaSettingWrapperBase InactiveGameBoosterSettings { get; }
		public List<GameBoosterSettingWithGoldSetting> ActiveSettingsList { get; }
		public KogamaSettingWrapperBase ActiveSettings { get; }
	
		// Constructors
		public GameBoosterSettingsManager(Dictionary<object, object> data);
	}
}
