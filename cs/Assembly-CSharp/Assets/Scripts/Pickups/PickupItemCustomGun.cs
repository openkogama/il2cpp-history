/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.WorldObjectTypes.CustomGun;
using CodeStage.AntiCheat.ObscuredTypes;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Assets.Scripts.Pickups
{
	internal class PickupItemCustomGun : PickupItemEditable
	{
		// Fields
		private const float UnlimitedAmmoAmmount = 999f;
		private const float EffectTimeoutTime = 0.05f;
		[SerializeField]
		private CustomItemAudioPlayer chargeAudioPlayer;
		[SerializeField]
		private AnimationCurve chargeCurve;
		[SerializeField]
		private Transform staticMuzzlePoint;
		[SerializeField]
		private ParticleSystem chargeParticles;
		[SerializeField]
		private ParticleSystem smokeParticles;
		[SerializeField]
		private ParticleSystem flareParticles;
		private bool canDoFOVZoom;
		private TimeoutClock fireEffectTimeout;
		private TimeoutClock bulletEffectTimeout;
		private IEnumerator chargeRoutine;
		private ObscuredInt currentAmmo;
		private ObscuredInt firedInBurst;
		private ObscuredFloat currentCharge;
		private ObscuredFloat initialFOV;
		private ObscuredFloat initialMouseSensitivity;
		private ObscuredBool isCharging;
	
		// Properties
		public override AvatarItemType Type { get; }
		protected new CustomGunConfiguration Configuration { get; set; }
		public override bool HasUnlimitedAmmo { get; }
		public override bool FirstPerson { get; }
		public override float ChargeState { get; }
		public override int Quantity { get; }
		protected override string FireSoundEffectName { get; }
		protected override string HitSoundEffectName { get; }
		protected override string AttackAnimationName { get; }
		protected override bool IsAmmoDepleted { get; }
		public override Color CrossHairColor { get; }
	
		// Nested types
		protected class CustomGunConfiguration : PickupItemEditable.EditableItemConfiguration
		{
			// Fields
			public float movementSpeedWhileHeld;
			public int fireMode;
			public Vector3 muzzlePosition;
			public Vector3 muzzleDirection;
			public bool muzzleFlareOnFire;
			public float muzzleFlareSize;
			public Color muzzleFlareColor;
			public bool thirdPersonCamera;
			public bool smokeOnFire;
			public float shotsPerBurst;
			public float burstCooldownBetweenShots;
			public float projectilesPerShot;
			public bool chargeEnabled;
			public float chargeTime;
			public int chargeSoundEffect;
			public float chargeSoundEffectVolume;
			public bool chargeParticlesEnabled;
			public float chargeParticlesSize;
			public Color chargeParticlesColor;
			public bool chargeZoomEnabled;
			public float chargeZoomAmmount;
			public float chargeZoomTime;
			public float projectileSpeed;
			public float projectileSize;
			public Color projectileColor;
			public Color projectileTrailColor;
			public bool sparksOnHit;
			public float sparksSize;
			public Color sparksColor;
	
			// Constructors
			public CustomGunConfiguration();
		}
	
		[CompilerGenerated]
		private sealed class _ChargeRoutine_d__67 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public PickupItemCustomGun __4__this;
			private float _chargeBeginTime_5__2;
			private float _targetFieldOfView_5__3;
			private float _targetMouseSensitivity_5__4;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _ChargeRoutine_d__67(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public PickupItemCustomGun();
	
		// Methods
		protected override void InitializeAudioPlayers();
		public override void ResetAmmo();
		public override void TriggerBegin(int instigatorActorNr);
		public override void TriggerEnd();
		private void FireWithCharge(CustomGunData.FireMode fireMode);
		private void FireSemiAutomaticWithCharge();
		protected override EditableItemConfiguration GetDefaultConfiguration();
		protected override void SetConfiguration(Dictionary<object, object> itemData);
		public override void OnEquip();
		public override void OnStateChanged(Dictionary<object, object> newState);
		private void SoundStateUpdate();
		private void MuzzleStateUpdate();
		private void MovementSpeedStateUpdate();
		protected override void OnFire(bool isLocal);
		private Vector3 HandleBulletGenerationOnFire(bool isLocal);
		private void HandleRecoil(Vector3 direction);
		private void HandleFiringStateAndAmmoOnFire();
		private void HandleFireEffects(bool isLocal);
		protected void PlayFireSoundEffect(bool isLocal);
		protected override void OnHit(VoxelHit voxelHit, Ray lineOfFire);
		private void OnLocalHit(VoxelHit voxelHit, Ray lineOfFire);
		public override bool IsSameItemData(Dictionary<object, object> itemData);
		protected override void InterruptFire();
		public override void OnLeaveVehicleWithWeapon();
		public override void OnEnterVehicleWithWeapon();
		[IteratorStateMachine(typeof(_ChargeRoutine_d__67))]
		private IEnumerator ChargeRoutine(int instigatorActorNr);
	}
}
