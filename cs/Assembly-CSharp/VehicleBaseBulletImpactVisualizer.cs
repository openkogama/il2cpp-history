/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class VehicleBaseBulletImpactVisualizer : BulletImpactVisualizer
{
	// Fields
	[Range]
	[SerializeField]
	private float particlesPerPointOfDamage;

	// Constructors
	public VehicleBaseBulletImpactVisualizer();

	// Methods
	public override void VisualizeBulletImpact(VoxelHit voxelHit, Ray lineOfFire, int shooterActorNumber, float damage = 100f);
}

