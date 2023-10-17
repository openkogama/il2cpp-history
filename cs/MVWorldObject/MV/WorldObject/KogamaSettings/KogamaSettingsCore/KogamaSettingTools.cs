/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributePrototypeSettings;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.KogamaSettings.KogamaSettingsCore
{
	public static class KogamaSettingTools
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass1
		{
			// Fields
			public bool contains;
			public KogamaSettingWrapperBase destinationNode;
	
			// Constructors
			public __c__DisplayClass1();
	
			// Methods
			public void _RootDestinationContains_b__0(KeyValuePair<object, object> deltaSettingNode);
		}
	
		// Methods
		public static void EnforceSettingsConstraints(AttributeSettingWoType attributeSettingWoType, Dictionary<object, object> data);
		public static KogamaSettingWrapperBase CreatePrototypeWithUserValues(Dictionary<object, object> userValuesDict, KogamaSettingWrapperBase prototypeRoot, Func<KeyValuePair<object, object>, KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase, KogamaSettingValueWrapperBase> factoryFunc);
		public static KogamaSettingWrapperBase CreateDeepCopy(KogamaSettingWrapperBase source, Func<KeyValuePair<object, object>, KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase, KogamaSettingValueWrapperBase> factoryFunc);
		public static void OverrideValues(KogamaSettingWrapperBase target, KogamaSettingWrapperBase source);
		public static KogamaSettingWrapperBase CreateFromValues(Dictionary<object, object> values, KogamaSettingWrapperBase prototypeRoot, Func<KeyValuePair<object, object>, KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase, KogamaSettingValueWrapperBase> factoryFunc);
		public static void Traverse(KogamaSettingWrapperBase root, Action<KogamaSettingWrapperBase> callback);
		public static bool RootDestinationContains(KogamaSettingWrapperBase obj, KogamaSettingWrapperBase destinationNode);
		public static void Traverse(Dictionary<object, object> data, Action<KeyValuePair<object, object>> callback);
		private static void Traverse(KeyValuePair<object, object> data, Action<KeyValuePair<object, object>> callback);
		public static Dictionary<object, object> KogamaSettingsToDictionary(KogamaSettingWrapperBase obj);
		public static KogamaSettingWrapperBase GetRoot(KogamaSettingWrapperBase obj);
		public static Dictionary<object, object> GetSubTree(KogamaSettingWrapperBase obj);
		public static Dictionary<object, object> GetSettingBranch(KogamaSettingWrapperBase obj);
		private static void KogamaSettingsToDictionary(KogamaSettingWrapperBase obj, Dictionary<object, object> settingsDictionary);
		private static KogamaSettingWrapperBase CreateFromValues(KeyValuePair<object, object> valuePair, KogamaSettingWrapperBase prototype, KogamaSettingsCollectionBase parent, Func<KeyValuePair<object, object>, KogamaSettingValueWrapperBase, KogamaSettingsCollectionBase, KogamaSettingValueWrapperBase> factoryFunc);
	}
}
