/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.Tools;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.MVDoor
{
	public static class DoorData
	{
		// Fields
		public static Dictionary<DoorType, Dictionary<object, object>> defaultValues;
	
		// Nested types
		public static class Keys
		{
			// Fields
			public static string Name;
			public static string BeginOpen;
			public static string PlayersCanOpen;
			public static string ReverseOpenDirection;
			public static string OpenValue;
			public static string CloseValue;
			public static string ToggleTime;
			public static string DoorType;
			public static string DocType;
			public static string IsOpen;
	
			// Constructors
			static Keys();
		}
	
		// Constructors
		static DoorData();
	
		// Methods
		public static object DefaultValue(DoorType doorType, string key);
		public static Dictionary<object, object> DefaultData(DoorType doorType);
		public static ValueTuple<IntVector, IntVector> GetEditPoints(DoorType doorType);
		public static Enums.Vector3Axis GetDoorAxis(DoorType doorType);
		public static Vector3 GetCubeModelLocalPosition(DoorType doorType, Transform animationRoot);
		public static bool IsSliding(DoorType doorType);
	}
}
