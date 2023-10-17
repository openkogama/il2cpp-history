/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVAvatarRemote : MVAvatar, IBulletImpactVisualizer, ISpawnRoleRemote
{
	// Fields
	private DynamicCullingHandler cullingHandler;
	private CapsuleCollider triggerCollider;
	private AvatarRemoteMovementCalculator avatarRemoteMovementCalculator;
	[CompilerGenerated]
	private bool _IsInVehicle_k__BackingField;
	private const float initialCullingRadius = 3.5f;
	private float impulseMagnitudeFactor;
	private float velocityMinMagnitude;
	private float velocityMaxMagnitude;
	private float minVelocity;
	private const float hitTimeOut = 2f;
	private float prevHitTime;

	// Properties
	public bool IsInVehicle { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public override Vector3 VelocityRelative { get; }
	public override Vector3 VelocityAbsolute { get; }
	int ISpawnRoleRemote.Id { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass18_0
	{
		// Fields
		public MVAvatarRemote __4__this;
		public HealthBar healthBar;

		// Constructors
		public __c__DisplayClass18_0();

		// Methods
		internal void _InitializeHealth_b__0(object health);
		internal void _InitializeHealth_b__1(object maxHealth);
	}

	// Constructors
	public MVAvatarRemote(Dictionary<object, object> data, Dictionary<int, MVWorldObjectClient> worldObjects);

	// Methods
	public override void Initialize();
	private void OnResume();
	private void OnObserve();
	private void InitAvatarState();
	public override void Destroy();
	private void InitializeHealth();
	private void InitializeShield();
	private CapsuleCollider CreateTriggerCollider();
	protected override void OnAnimationChange(object newAnimationData);
	private void triggerBoxEvents_TriggerEnter(object sender, TriggerEventArgs e);
	protected override void AvatarStateChangedHandler(object a);
	private void ShowBody();
	private void HideBody();
	protected override void AttachBody(MVBody newBody);
	public override void OnEnterVehicle();
	public override void OnLeaveVehicle();
	public void VisualizeBulletImpact(VoxelHit voxelHit, Ray lineOfFire, int shooterActorNumber, float damage = 100f);
	public void Activate(int idFrom, Vector3 position, Quaternion rotation);
	public void DeActivate(int idTo);
	[CompilerGenerated]
	private void _InitializeShield_b__19_0(object shield);
}

