/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public static class SharedWorldObjectValuesRepository
	{
		// Fields
		public const string OriginalIdKey = "OriginalId";
		public const string RespawnIntervalKey = "RespawnInterval";
		public const string RespawnCountKey = "RespawnCount";
		private static Dictionary<WorldObjectType, Dictionary<object, object>> values;
	
		// Constructors
		static SharedWorldObjectValuesRepository();
	
		// Methods
		public static Dictionary<object, object> GetValues(WorldObjectType worldObjectType);
		private static Dictionary<object, object> AdvancedGhostData();
		private static Dictionary<object, object> SentryGun();
	}
}
