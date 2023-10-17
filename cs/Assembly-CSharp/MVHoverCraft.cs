/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using WorldObjectTypes.VehicleEnergy;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVHoverCraft : MVSimpleOneSeatVehicle
{
	// Fields
	public const float DefaultHealth = 150f;
	public const float MinHealth = 1f;
	public const float MaxHealth = 500f;
	public const float DefaultRandomLeaveVehicle = 0f;
	public const float MinRandomLeaveVehicle = 0f;
	public const float MaxRandomLeaveVehicle = 100f;
	private const float DeathExplosionDamageValue = 40f;
	private const float DeathExplosionRadius = 10f;
	private const float DeathExplosionImpulse = 2000f;
	private CullingSubscriberDynamic cullingSubscriberDynamic;
	private float randomLeaveVehicle;

	// Properties
	private HoverCraftVisualization HoverCraftVisualization { get; }
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
	private HoverCraftVisualization.HoverCraftVisualizationSettings CreateHoverCraftVisualizationSettings();
	public override void InitializeInventory();
	public override void Destroy();
	private void OnIsDeadChange(object isDead);
	protected override HealthChangeAffects HealthChangeResult(float health);
	protected override VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig();
	public override void OnDataUpdate();
	public override Bounds GetLocalBounds(BoundsContext boundsContext);
	protected override LocalObjectsBase CreateLocalObjects(int seatID, MVAvatarLocal vehicleUser);
}

