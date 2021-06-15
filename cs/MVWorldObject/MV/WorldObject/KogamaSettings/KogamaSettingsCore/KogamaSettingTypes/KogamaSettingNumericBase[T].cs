/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes
{
	public class KogamaSettingNumericBase<T> : KogamaSettingValueWrapperBase
		where T : IComparable<T>
	{
		// Fields
		public readonly KogamaSettingNumeric<T> KogamaSettingNumeric;
	
		// Properties
		public override IKogamaSetting KogamaSetting { get; }
		public T NumericValue { get; set; }
	
		// Constructors
		public KogamaSettingNumericBase(string key, T value, T min, T max, KogamaSettingsCollectionBase parent);
	}
}
