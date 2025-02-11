/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class Bullet : MonoBehaviour
{
	// Fields
	private const float MaxAllowedBulletAirTime = 20f;
	private const float ColorOverTime = 0.01f;
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
	[SerializeField]
	private SpriteRenderer[] spriteRenderers;
	private CollisionBullet collisionBullet;
	private bool hit;
	private bool hasCleaned;
	private float currentAirTime;
	private float targetAirTime;
	private float maxAirTime;
	private float handToMuzzleDist;
	private Vector3 startPosition;
	private Vector3 targetPosition;
	private Color storedBulletColor;
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

	[CompilerGenerated]
	private sealed class _MakeVisibleOverTime_d__48 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public Bullet __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _MakeVisibleOverTime_d__48(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public Bullet();

	// Methods
	private void Awake();
	private void Update();
	private CollisionBullet.State UpdateBulletState();
	private void Expire();
	public static Bullet CreateBullet(PoolEnums bulletType, Vector3 pos, float handToMuzzleDist = 0f);
	public void SetBulletAndTrailSettings(Color bulletColor, Color trailColor, float speed, float size);
	public void ResetBullet();
	public void ReturnToPool(PoolEnums bulletType);
	public void Fire(float speed, float range, Ray lineOfFire, HashSet<int> ignoreWoIDs, bool thirdPersonWeapon = false);
	private void DoFire(float speed, float maxRange, bool thirdPersonWeapon);
	private void OnStateChanged(CullingGroupEvent cullingGroupEvent);
	private Vector3 FindTargetPos(float maxRange);
	private Ray CalculateLineOfFireFromMuzzle(float maxRange);
	[IteratorStateMachine(typeof(_MakeVisibleOverTime_d__48))]
	private IEnumerator MakeVisibleOverTime();
}

