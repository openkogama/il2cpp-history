/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.Costume
{
	public static class CostumeData
	{
		// Fields
		private static readonly Dictionary<object, object> defaultItemValues;
		private static readonly Dictionary<object, object> minValues;
		private static readonly Dictionary<object, object> maxValues;
	
		// Nested types
		public abstract class Keys
		{
			// Fields
			public const string CubeModelId = "CubeModelId";
			public const string Name = "Name";
			public const string Health = "Health";
			public const string MovementSpeed = "MovementSpeed";
			public const string PlayerInvisible = "PlayerInvisible";
			public const string PlayersCanCollide = "PlayersCanCollide";
			public const string TrailEnabled = "TrailEnabled";
			public const string TrailLength = "TrailLength";
			public const string TrailColor = "TrailColor";
	
			// Constructors
			protected Keys();
		}
	
		// Constructors
		static CostumeData();
	
		// Methods
		public static Dictionary<object, object> DefaultData();
		public static Dictionary<object, object> DefaultItemData();
		public static object DefaultValue(string key);
		public static Color DefaultColor(string colorKey);
		public static float MinValue(string key);
		public static float MaxValue(string key);
		public static ValueTuple<float, float> MinMaxValue(string key);
		public static ValueTuple<IntVector, IntVector> GetEditPoints();
	}
}
