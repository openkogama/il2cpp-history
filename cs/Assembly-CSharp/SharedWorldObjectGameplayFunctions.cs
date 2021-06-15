/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.RuntimeEvents;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SharedWorldObjectGameplayFunctions
{
	// Nested types
	public static class Explosion
	{
		// Fields
		private static readonly int layerMask;

		// Constructors
		static Explosion();

		// Methods
		private static void ApplyProximityDamage(Vector3 position, float damageValue, float damageRadius, float shockwaveAcceleration, bool local, ExplosionEvent explosionEvent, HashSet<int> ignoreIDs);
		public static void Explode(ParticleSystem particlePrefab, Vector3 position, float damageValue, float damageRadius, float shockwaveAcceleration, bool local, ExplosionEvent explosionEvent, HashSet<int> ignoreIDs);
	}

	// Constructors
	public SharedWorldObjectGameplayFunctions();

	// Methods
	private static bool DoParticleEffect(Vector3 position);
	public static void DustEfffect(ParticleSystem particlePrefab, Vector3 position, float radius);
}

