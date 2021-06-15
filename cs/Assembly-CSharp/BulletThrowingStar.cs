/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BulletThrowingStar : MonoBehaviour
{
	// Fields
	private CullingSubscriberBase cullingSubscriberBase;
	public OnHitDelegate onHit;
	public OnHitDelegate onHitLocal;
	private HashSet<int> ignoreWoIDs;
	private bool isFired;
	private Ray lineOfFire;
	[SerializeField]
	private TrailRenderer trailRenderer;
	[SerializeField]
	private ParticleSystem pSystem;
	[SerializeField]
	private AudioSource aSource;
	[SerializeField]
	private MeshRenderer[] meshRenderers;
	[SerializeField]
	private MeshFilter meshFilter;
	private float fallRate;
	private const float rotationSpeedXMin = 20f;
	private const float rotationSpeedXMax = 30f;
	private const float rotationSpeedZMin = 2f;
	private const float rotationSpeedZMax = 8f;
	private bool inAir;
	private bool isFalling;
	private bool hasHit;
	private bool hasHitStatic;
	private float speed;
	private float rangeStraight;
	private float rangeFall;
	private float downwardForce;
	private bool hasNotified;
	private float totalDistTravelled;
	private VoxelHit voxelHit;
	private Vector3 airRotation;
	private Vector3 direction;
	private Transform tfrm;
	private float coolOffStartTime;
	private float coolOffDuration;
	private PoolEnums initiatedPoolEnum;

	// Nested types
	public delegate void OnHitDelegate(VoxelHit hit, Ray lineOfFire);

	// Constructors
	public BulletThrowingStar();

	// Methods
	private void Awake();
	public static BulletThrowingStar CreateBullet(PoolEnums poolEnum, Vector3 pos);
	public void Fire(float speed, float rangeStraight, Ray lineOfFire, HashSet<int> ignoreWoIDs, float rangeFall, float fallRate);
	private void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	private void Update();
	private bool DoCollisionCheck(Vector3 pos, float dist, Vector3 dir, out VoxelHit voxelHit);
	private static bool DoBulletCollision(Ray ray, out VoxelHit voxelHit, float distance, HashSet<int> ignoreWoIDs);
	public Vector3 FindTargetPos(float maxRange);
}

