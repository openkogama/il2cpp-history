/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVHoverCraft : MVSimpleOneSeatVehicle
{
	// Fields
	private float deathExplosionDamageValue;
	private float deathExplosionRadius;
	private float deathExplosionImpulse;
	private CullingSubscriberDynamic cullingSubscriberDynamic;

	// Properties
	public override bool IsDead { get; }

	// Nested types
	protected class LocalObjectsHoverCraft : MVSimpleOneSeatVehicle.LocalObjectsSimpleVehicle
	{
		// Constructors
		public LocalObjectsHoverCraft(MVSimpleOneSeatVehicle vehicleBase, SmoothCharacterController smoothController, SimpleVehicleMotorBase hoverCraftMotor);
	}

	// Constructors
	public MVHoverCraft(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	public override void InitializeInventory();
	public override void Destroy();
	private void OnIsDeadChange(object isDead);
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	protected override LocalObjectsBase CreateLocalObjects(int seatID, MVAvatarLocal vehicleUser);
}

