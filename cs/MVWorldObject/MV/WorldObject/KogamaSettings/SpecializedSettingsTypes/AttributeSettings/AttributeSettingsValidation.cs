/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributeSettingTypes;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings
{
	public static class AttributeSettingsValidation
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass1
		{
			// Fields
			public AttributeSettingsExclusivityFlag destinationExclusivityFlag;
	
			// Constructors
			public __c__DisplayClass1();
	
			// Methods
			public void _ValidateUpdate_b__0(KogamaSettingWrapperBase baseWrapper);
		}
	
		// Methods
		public static bool ValidateUpdate(KogamaSettingWrapperBase rootDelta, KogamaSettingWrapperBase rootDestination);
		private static bool ValidateUpdateRecursion(KogamaSettingWrapperBase rootDelta, KogamaSettingWrapperBase rootDestination, AttributeSettingsExclusivityFlag destinationExclusivityFlag);
		private static bool ValidateDeltaChild(IAttributeSetting rootDeltaChild, KogamaSettingWrapperBase rootDestination, AttributeSettingsExclusivityFlag destinationExclusivityFlag);
	}
}
