/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore
{
	public static class KogamaSettingTools
	{
		// Methods
		public static KogamaSettingWrapperBase CreatePrototypeWithUserValues(Dictionary<object, object> userValuesDict, KogamaSettingWrapperBase prototypeRoot, Func<KeyValuePair<object, object>, KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase, KogamaSettingValueWrapperBase> factoryFunc);
		public static KogamaSettingWrapperBase CreateDeepCopy(KogamaSettingWrapperBase source, Func<KeyValuePair<object, object>, KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase, KogamaSettingValueWrapperBase> factoryFunc);
		public static void OverrideValues(KogamaSettingWrapperBase target, KogamaSettingWrapperBase source);
		public static KogamaSettingWrapperBase CreateFromValues(Dictionary<object, object> values, KogamaSettingWrapperBase prototypeRoot, Func<KeyValuePair<object, object>, KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase, KogamaSettingValueWrapperBase> factoryFunc);
		public static void Traverse(KogamaSettingWrapperBase root, Action<KogamaSettingWrapperBase> callback);
		public static Dictionary<object, object> KogamaSettingsToDictionary(KogamaSettingWrapperBase obj);
		public static Dictionary<object, object> GetSubTree(KogamaSettingWrapperBase obj);
		public static Dictionary<object, object> GetSettingBranch(KogamaSettingWrapperBase obj);
		private static void KogamaSettingsToDictionary(KogamaSettingWrapperBase obj, Dictionary<object, object> settingsDictionary);
		private static KogamaSettingWrapperBase CreateFromValues(KeyValuePair<object, object> valuePair, KogamaSettingWrapperBase prototype, KogamaSettingsCollectionBase parent, Func<KeyValuePair<object, object>, KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase, KogamaSettingValueWrapperBase> factoryFunc);
	}
}
