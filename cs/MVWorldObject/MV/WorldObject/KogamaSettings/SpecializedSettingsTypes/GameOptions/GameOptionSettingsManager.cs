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

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.GameOptions
{
	public class GameOptionSettingsManager
	{
		// Fields
		private readonly Dictionary<object, object> woData;
	
		// Properties
		public List<KogamaSettingValueWrapperBase> GetOptions { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass1
		{
			// Fields
			public List<KogamaSettingValueWrapperBase> inv;
	
			// Constructors
			public __c__DisplayClass1();
	
			// Methods
			public void _GetSettingsSettingsList_b__0(KogamaSettingWrapperBase settingNode);
		}
	
		// Constructors
		public GameOptionSettingsManager(Dictionary<object, object> woData);
	
		// Methods
		private static List<KogamaSettingValueWrapperBase> GetSettingsSettingsList(KogamaSettingWrapperBase root);
	}
}
