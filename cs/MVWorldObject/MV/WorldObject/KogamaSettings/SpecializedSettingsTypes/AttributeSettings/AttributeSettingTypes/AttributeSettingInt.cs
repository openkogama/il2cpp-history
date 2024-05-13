/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributePointCalculators;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributeSettingTypes
{
	public class AttributeSettingInt : KogamaSettingNumericBase<int>, IAttributeSetting
	{
		// Fields
		public readonly IAttributePointIntCalculator Calculator;
		[CompilerGenerated]
		private AttributeSettingsExclusivityFlag _ExclusivityFlag_k__BackingField;
	
		// Properties
		public int AttributeValue { get; }
		public AttributeSettingsExclusivityFlag ExclusivityFlag { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		private AttributeSettingInt(string key, int value, int min, int max, IAttributePointIntCalculator calculator, KogamaSettingsCollectionBase parent);
		public AttributeSettingInt(string key, int value, int min, int max, IAttributePointIntCalculator calculator, AttributeSettingsExclusivityFlag attributeSettingsExclusivityFlag, KogamaSettingsCollectionBase parent);
	
		// Methods
		public override string ToString();
	}
}
