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
	public abstract class KogamaSettingValueWrapperBase : KogamaSettingWrapperBase
	{
		// Fields
		[CompilerGenerated]
		private Action<KogamaSettingValueWrapperBase> OnValueChange;
	
		// Properties
		public abstract IKogamaSetting KogamaSetting { get; }
	
		// Constructors
		protected KogamaSettingValueWrapperBase(string key, KogamaSettingsCollectionBase parent);
	
		// Methods
		protected void KogamaSettingOnOnValueChange(IKogamaSetting obj);
		public override string ToString();
	}
}
