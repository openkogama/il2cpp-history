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

namespace MV.WorldObject
{
	public static class RuntimeVariablesRepository
	{
		// Fields
		private static Dictionary<WorldObjectType, Dictionary<object, object>> runtimeVariables;
	
		// Constructors
		static RuntimeVariablesRepository();
	
		// Methods
		public static void SetupRuntimeVariable(WorldObjectType worldObjectType, Dictionary<object, object> targetRuntimeVariables);
		public static Dictionary<object, object> GetRuntimeVariables(WorldObjectType worldObjectType);
		private static Dictionary<object, object> AvatarRuntimeData();
		private static Dictionary<object, object> BuildModeAvatarRuntimeData();
		private static Dictionary<object, object> HoverCraftRuntimeData();
		private static Dictionary<object, object> HamsterWheelRuntimeData();
		private static Dictionary<object, object> MonoPlaneRuntimeData();
		private static Dictionary<object, object> JetPackRuntimeData();
		private static Dictionary<object, object> AdvancedGhostRuntimeData();
		private static Dictionary<object, object> SentryGun();
		private static Dictionary<object, object> CollectibleRuntimeData();
	}
}
