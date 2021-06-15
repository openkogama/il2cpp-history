/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Bullet : MonoBehaviour
{
	// Fields
	public OnHitDelegate onHit;
	public OnHitDelegate onHitLocal;
	public Action<Ray> onOutOfRange;
	private PoolEnums initiatedPoolType;
	private MonoBehaviour pooledObjectReference;
	private HashSet<int> ignoreWoIDs;
	private bool isFired;
	private Ray lineOfFire;
	[SerializeField]
	private TrailRenderer trailRenderer;
	[SerializeField]
	private ParticleSystem pSystem;
	[SerializeField]
	private MeshRenderer[] meshRenderers;
	private CollisionBullet collisionBullet;
	private bool hit;
	private bool hasCleaned;
	private float currentAirTime;
	private float maxAirTime;
	private Vector3 startPosition;
	private Vector3 targetPosition;
	private Transform localTransform;
	private CullingSubscriberBase cullingSubscriberBase;
	private VoxelHit voxelHit;

	// Properties
	public PoolEnums InitiatedPoolType { get; set; }
	public MonoBehaviour PooledObjectReference { get; set; }

	// Nested types
	private class CollisionBullet
	{
		// Fields
		private readonly float speed;
		private readonly float range;
		private float distanceTraveled;
		private Vector3 currentPos;
		private Vector3 prevPos;
		private Ray ray;
		private readonly HashSet<int> ignoreWoIDs;

		// Nested types
		public enum State
		{
			Moving = 0,
			Hit = 1,
			OutOfRange = 2,
			Expiring = 3
		}

		// Constructors
		public CollisionBullet(float range, float speed, Vector3 origin, Vector3 direction, HashSet<int> ignoreWoIDs);

		// Methods
		public State Update(out VoxelHit voxelHit);
		private bool DoCollisionCheck(out VoxelHit voxelHit);
		private static bool DoBulletCollision(Ray ray, out VoxelHit voxelHit, float distance, HashSet<int> ignoreWoIDs);
	}

	public delegate void OnHitDelegate(VoxelHit hit, Ray lineOfFire);

	// Constructors
	public Bullet();

	// Methods
	private void Awake();
	private void Update();
	public static Bullet CreateBullet(PoolEnums bulletType, Vector3 pos);
	public void ResetBullet();
	public void ReturnToPool(PoolEnums bulletType);
	public void Fire(float speed, float range, Ray lineOfFire, HashSet<int> ignoreWoIDs);
	private void DoFire(float speed, float maxRange);
	private void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	public Vector3 FindTargetPos(float maxRange);
}

