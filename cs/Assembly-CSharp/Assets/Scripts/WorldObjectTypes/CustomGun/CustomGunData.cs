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

namespace Assets.Scripts.WorldObjectTypes.CustomGun
{
	public static class CustomGunData
	{
		// Fields
		private static readonly Dictionary<object, object> defaultItemValues;
		private static readonly Dictionary<object, object> minValues;
		private static readonly Dictionary<object, object> maxValues;
		public static readonly string[] fireModes;
		public static readonly string[] fireSoundEffects;
		public static readonly string[] hitSoundEffects;
		public static readonly string[] chargeSoundEffects;
	
		// Nested types
		public enum FireMode
		{
			Semi = 0,
			Auto = 1,
			Burst = 2
		}
	
		public abstract class Keys : EditablePickupItemData.Keys
		{
			// Fields
			public const string MovementSpeedWhileHeld = "MovementSpeedWhileHeld";
			public const string FireMode = "FireMode";
			public const string MuzzlePosition = "MuzzlePosition";
			public const string MuzzleDirection = "MuzzleDirection";
			public const string MuzzleFlareOnFire = "MuzzleFlareOnFire";
			public const string MuzzleFlareSize = "MuzzleFlareSize";
			public const string MuzzleFlareColor = "MuzzleFlareColor";
			public const string ThirdPersonCamera = "ThirdPersonCamera";
			public const string SmokeOnFire = "SmokeOnFire";
			public const string ShotsPerBurst = "ShotsPerBurst";
			public const string BurstCooldownBetweenShots = "BurstCooldownBetweenShots";
			public const string ProjectilesPerShot = "ProjectilesPerShot";
			public const string ChargeEnabled = "ChargeEnabled";
			public const string ChargeTime = "ChargeTime";
			public const string ChargeSoundEffect = "ChargeSoundEffect";
			public const string ChargeSoundEffectVolume = "ChargeSoundEffectVolume";
			public const string ChargeParticlesEnabled = "ChargeParticlesEnabled";
			public const string ChargeParticlesSize = "ChargeParticlesSize";
			public const string ChargeParticlesColor = "ChargeParticlesColor";
			public const string ChargeZoomEnabled = "ChargeZoomEnabled";
			public const string ChargeZoomAmmount = "ChargeZoomAmmount";
			public const string ChargeZoomTime = "ChargeZoomTime";
			public const string ProjectileSpeed = "ProjectileSpeed";
			public const string ProjectileSize = "ProjectileSize";
			public const string ProjectileColor = "ProjectileColor";
			public const string ProjectileTrailColor = "ProjectileTrailColor";
			public const string SparksOnHit = "SparksOnHit";
			public const string SparksSize = "SparksSize";
			public const string SparksColor = "SparksColor";
	
			// Constructors
			protected Keys();
	
			// Methods
			public static new List<string> GetKeys();
		}
	
		// Constructors
		static CustomGunData();
	
		// Methods
		public static Dictionary<object, object> DefaultData();
		public static Dictionary<object, object> DefaultItemData();
		public static object DefaultValue(string key);
		public static Color DefaultColor(string colorKey);
		public static Vector3 DefaultVector3(string vectorKey);
		public static float MinValue(string key);
		public static float MaxValue(string key);
		public static ValueTuple<float, float> MinMaxValue(string key);
		public static ValueTuple<IntVector, IntVector> GetEditPoints();
	}
}
