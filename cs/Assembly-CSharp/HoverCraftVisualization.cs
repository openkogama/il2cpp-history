/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HoverCraftVisualization : VehicleVisualizationBase
{
	// Fields
	public Transform hoverCraftHullRoot;
	public ParticleSystem damageSmokeEmitter;
	public ParticleSystem fire;
	public VehicleBlinker vehicleBlinker;
	public List<ParticleSystem> thrusters;
	public AudioSource moving;
	public float HoverPeriod;
	public float HoverAmplitude;
	public float rotateRollFactor;
	public float rollSpeed;
	public float rollMax;
	public float pitchMax;
	public float pitchSpeedTime;
	public float pitchFactor;
	public float damageParticleFactor;
	private Vector3 HoverOffset;
	private float angleDiff;
	private Quaternion prevWorldRot;
	private float maxHealth;
	private float prevHealth;
	private bool vehicleIsUnoccupied;
	private float unoccupiedTime;
	private float vehicleAboutToBeRemovedTime;
	private Vector3 prevWorldPosition;
	private float minVolume;
	private float smoothMoveSpeed;
	private float smoothPitchFactor;
	private float smoothMoveSpeedTime;
	private Vector3 smoothVelocity;
	private float moveSpeed;
	private float smoothAcceleration;
	private float signedAcceleration;
	private VehicleSeatManager vehicleSeatManager;
	private Vector3 localHoverCraftHullRootBasePosition;

	// Constructors
	public HoverCraftVisualization();

	// Methods
	private void Awake();
	public void Init(Transform hoverCraftHull, VehicleSeatManager vehicleSeatManager, float maxHealth, MVRuntimeDataVariableClampedFloat health, bool isInSpawner);
	private void OnEnable();
	private void OnDisable();
	private void OnHealthChange(float newHealth);
	private void Update();
	private void HandleUnoccupiedVehicle();
	private void PassiveAnim();
	private void AnimateHullInertia();
	private void CalculateMovementValues();
	private void AnimateHullSpeed();
	private void HandleSound();
	[CompilerGenerated]
	private void _Init_m__0(object healthVal);
}

