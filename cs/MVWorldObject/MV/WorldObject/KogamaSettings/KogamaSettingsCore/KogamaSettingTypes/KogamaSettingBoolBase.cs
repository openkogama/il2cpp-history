/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes
{
	public class KogamaSettingBoolBase : KogamaSettingValueWrapperBase
	{
		// Fields
		public readonly KogamaSettingBool KogamaSettingBool;
	
		// Properties
		public bool ValueBool { get; set; }
		public override IKogamaSetting KogamaSetting { get; }
	
		// Constructors
		public KogamaSettingBoolBase(string key, bool value, KogamaSettingsCollectionBase parent);
	}
}
