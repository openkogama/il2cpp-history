/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using MV.WorldObject.AntiCheat;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes
{
	public class KogamaSettingNumeric<T> : KogamaSettingBase
		where T : IComparable<T>
	{
		// Fields
		public readonly RangeValidator<T> RangeValidator;
	
		// Properties
		public override KogamaSettingValueType KogamaSettingValueType { get; }
		public T NumericValue { get; set; }
	
		// Constructors
		public KogamaSettingNumeric(T value, T min, T max);
	
		// Methods
		public override string ToString();
	}
}
