/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes
{
	public class KogamaSettingsCollectionBase : KogamaSettingWrapperBase
	{
		// Fields
		protected readonly Dictionary<string, KogamaSettingWrapperBase> children;
	
		// Properties
		public Dictionary<string, KogamaSettingWrapperBase> Children { get; }
	
		// Constructors
		public KogamaSettingsCollectionBase(string key, KogamaSettingsCollectionBase kogamaSettingsCollection);
	
		// Methods
		public virtual void AddChild(KogamaSettingWrapperBase kogamaSetting);
		public virtual KogamaSettingsCollectionBase CopyWithOutChildren(KogamaSettingsCollectionBase parent);
		public override string ToString();
	}
}
