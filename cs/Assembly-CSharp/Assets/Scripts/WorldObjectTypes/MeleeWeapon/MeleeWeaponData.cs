/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.EditablePickupItem;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.WorldObjectTypes.MeleeWeapon
{
	public static class MeleeWeaponData
	{
		// Fields
		private static readonly Dictionary<object, object> defaultItemValues;
		private static readonly Dictionary<object, object> minValues;
		private static readonly Dictionary<object, object> maxValues;
		public static readonly string[] fireSoundEffects;
		public static readonly string[] hitSoundEffects;
	
		// Nested types
		public abstract class Keys : EditablePickupItemData.Keys
		{
			// Fields
			public const string TrailColor = "TrailColor";
			public const string HitEffectColor = "HitEffectColor";
	
			// Constructors
			protected Keys();
		}
	
		// Constructors
		static MeleeWeaponData();
	
		// Methods
		public static Dictionary<object, object> DefaultData();
		public static Dictionary<object, object> DefaultItemData();
		public static object DefaultValue(string key);
		public static Color DefaultColor(string colorKey);
		public static float MinValue(string key);
		public static float MaxValue(string key);
		public static ValueTuple<float, float> MinMaxValue(string key);
		public static ValueTuple<IntVector, IntVector> GetEditPoints();
		public static bool IsLegacySword(int itemId);
	}
}
