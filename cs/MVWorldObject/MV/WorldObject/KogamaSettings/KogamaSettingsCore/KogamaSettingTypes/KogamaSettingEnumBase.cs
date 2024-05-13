/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes
{
	public class KogamaSettingEnumBase : KogamaSettingValueWrapperBase
	{
		// Fields
		public readonly KogamaSettingEnum KogamaSettingEnum;
	
		// Properties
		public override IKogamaSetting KogamaSetting { get; }
		public int EnumValue { get; }
	
		// Constructors
		public KogamaSettingEnumBase(string key, int value, int min, int max, KogamaSettingsCollectionBase parent);
	}
}
