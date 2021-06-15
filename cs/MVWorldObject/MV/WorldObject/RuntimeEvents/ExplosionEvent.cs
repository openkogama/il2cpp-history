/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.Common;
using MV.WorldObject;
using UnityEngine;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.RuntimeEvents
{
	public class ExplosionEvent : RuntimeEvent
	{
		// Fields
		private static Dictionary<RuntimeEventType, ExplosionValues> explosionValues;
	
		// Properties
		public ExplosionValues ExplosionValuesStruct { get; }
		public override byte[] Data { get; }
	
		// Nested types
		public struct ExplosionValues
		{
			// Fields
			private readonly float radius;
			private readonly float centerDamage;
			private readonly DamageFallOffType damageFallOffType;
	
			// Properties
			public float Radius { get; }
			public float CenterDamage { get; }
			public DamageFallOffType DamageFallOffType { get; }
	
			// Constructors
			public ExplosionValues(float radius, float centerDamage, DamageFallOffType damageFallOffType);
		}
	
		// Constructors
		public ExplosionEvent(RuntimeEventType runtimeEventType, BytePacker bytePacker);
		public ExplosionEvent(RuntimeEventType runtimeEventType, Vector3 worldPosition, Vector3 normal);
		public ExplosionEvent(RuntimeEventType runtimeEventType, Vector3 worldPosition);
		static ExplosionEvent();
	
		// Methods
		public static ExplosionValues GetExplosionValuesStruct(RuntimeEventType runtimeEventType);
		public override string ToString();
	}
}
