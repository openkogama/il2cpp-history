/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameBoosterSettings.GameBoosterSettingTypes
{
	public class GameBoosterSettingWithGoldSetting : KogamaSettingsCollectionBase
	{
		// Fields
		public const string settingKey = "sk";
		public const string goldSettingKey = "gsk";
		public const string timeSettingKey = "tsk";
	
		// Properties
		public KogamaSettingNumericBase<int> GoldPrice { get; }
		public KogamaSettingValueWrapperBase Setting { get; }
	
		// Constructors
		public GameBoosterSettingWithGoldSetting(string key, KogamaSettingsCollectionBase kogamaSettingsCollection);
	
		// Methods
		public override void AddChild(KogamaSettingWrapperBase kogamaSetting);
		public override KogamaSettingsCollectionBase CopyWithOutChildren(KogamaSettingsCollectionBase parent);
		public override string ToString();
	}
}
