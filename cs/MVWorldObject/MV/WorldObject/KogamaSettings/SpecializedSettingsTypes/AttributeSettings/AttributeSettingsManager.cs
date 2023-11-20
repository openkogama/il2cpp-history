/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.Client;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributePrototypeSettings;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings
{
	public class AttributeSettingsManager
	{
		// Fields
		private readonly SettingsManager settingsManager;
		private readonly AttributeSettingWoType attributeSettingWoType;
		private readonly Dictionary<object, object> woData;
	
		// Properties
		public KogamaSettingWrapperBase AvailableAttributeSettings { get; }
		public KogamaSettingWrapperBase Settings { get; }
	
		// Constructors
		public AttributeSettingsManager(Dictionary<object, object> data, AttributeSettingWoType attributeSettingWoType, SettingsReporter settingsReporter);
	
		// Methods
		public void UpdateSetting(KogamaSettingValueWrapperBase attributeSetting);
		public void RemoveAvatarSetting(KogamaSettingValueWrapperBase attributeSetting);
		public void Submit();
	}
}
