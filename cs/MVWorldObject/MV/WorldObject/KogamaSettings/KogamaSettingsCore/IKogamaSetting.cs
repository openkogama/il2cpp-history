/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore
{
	public interface IKogamaSetting
	{
		// Properties
		object Value { get; set; }
		KogamaSettingValueType KogamaSettingValueType { get; }
	
		// Events
		event Action<IKogamaSetting> OnValueChange {
			add;
			remove;
		}
	}
}
