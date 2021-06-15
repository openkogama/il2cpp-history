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

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributeSettingTypes
{
	public class AttributeSettingEnum : KogamaSettingEnumBase, IAttributeSetting
	{
		// Fields
		public readonly Dictionary<int, int> valueAttributeValueMap;
		[CompilerGenerated]
		private AttributeSettingsExclusivityFlag _ExclusivityFlag_k__BackingField;
	
		// Properties
		public AttributeSettingsExclusivityFlag ExclusivityFlag { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public int AttributeValue { get; }
	
		// Constructors
		private AttributeSettingEnum(string key, int value, Dictionary<int, int> valueAttributeValueMap, int min, int max, KogamaSettingsCollectionBase parent);
		public AttributeSettingEnum(string key, int value, Dictionary<int, int> valueAttributeValueMap, int min, int max, AttributeSettingsExclusivityFlag attributeSettingsExclusivityFlag, KogamaSettingsCollectionBase parent);
	
		// Methods
		public override string ToString();
	}
}
