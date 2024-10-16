/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.MetaData
{
	public class ProfileSettingsState
	{
		// Fields
		public Dictionary<SettingsPlatform, Dictionary<ProfileSettingKey, object>> ProfileSettingsData;
	
		// Constructors
		public ProfileSettingsState();
	
		// Methods
		public object GetProfileSettingValue(SettingsPlatform settingsPlatform, ProfileSettingKey key);
		public static Dictionary<ProfileSettingKey, object> GetDefaultProfileSettingsValues(SettingsPlatform platform);
	}
}
