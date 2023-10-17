/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using MV.WorldObject.RuntimeEvents;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RuntimeEventManager
{
	// Fields
	protected MVCubeModelPrototypeTerrain cubeModelPrototypeTerrain;
	protected MVCubeModelFineGrainedTerrain cubeModelFineGrainedTerrain;
	private readonly AccumulatedCubeDamages localAccumulatedCubeDamages;
	protected bool doEffects;

	// Nested types
	private class AccumulatedCubeDamages : IUpdatecontrollerSubscriberUpdate
	{
		// Fields
		private Dictionary<IntVector, AccumulatedCubeDamage> accumulatedCubeDamages;

		// Nested types
		private class AccumulatedCubeDamage
		{
			// Fields
			private const float intervalInSecondsBeforeReset = 5f;
			private float lastReceivedDamage;
			private float damage;

			// Properties
			public bool Expired { get; }

			// Constructors
			public AccumulatedCubeDamage();

			// Methods
			public float AddDamage(float damageDelta);
		}

		// Constructors
		public AccumulatedCubeDamages();

		// Methods
		public float AddDamageToCube(float damage, IntVector position);
		public void UpdateControllerUpdate();
		public void Clear();
		public void UpdateControllerFixedUpdate();
	}

	// Constructors
	public RuntimeEventManager();

	// Methods
	public void ResetTerrain();
	public void SendRuntimeEvent(ExplosionEvent explosion);
	public void ExecuteRuntimeEventLocal(ExplosionEvent explosion);
	public bool SendRemoveOneFineGrainedCube(VoxelHit voxelHit, float damage);
	public void SendRuntimeEvent(SingleCubeFineGrainedEvent singleCubeFineGrainedEvent);
	private bool IsRemovingAddedFineGrainedCube(SingleCubeFineGrainedEvent singleCubeFineGrainedEvent);
	protected bool HandleEvent(SingleCubeFineGrainedEvent singleCubeFineGrainedEvent);
	protected bool HandleEvent(ExplosionEvent explosion);
}

