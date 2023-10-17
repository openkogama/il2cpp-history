/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributeSettingTypes
{
	public class AttributeSettingBool : KogamaSettingBoolBase, IAttributeSetting
	{
		// Fields
		public readonly int AttributePointsValue;
		[CompilerGenerated]
		private AttributeSettingsExclusivityFlag _ExclusivityFlag_k__BackingField;
	
		// Properties
		public int AttributeValue { get; }
		public AttributeSettingsExclusivityFlag ExclusivityFlag { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		private AttributeSettingBool(string key, bool value, int attributePointsValue, KogamaSettingsCollectionBase kogamaSettingsCollection);
		public AttributeSettingBool(string key, bool value, int attributePointsValue, AttributeSettingsExclusivityFlag attributeSettingsExclusivityFlag, KogamaSettingsCollectionBase kogamaSettingsCollection);
	
		// Methods
		public override string ToString();
	}
}
