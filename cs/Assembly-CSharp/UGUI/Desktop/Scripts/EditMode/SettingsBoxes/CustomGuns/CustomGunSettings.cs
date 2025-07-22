/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.UGUI.Desktop.Scripts.EditMode.SettingsBoxes;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.CustomGuns
{
	public class CustomGunSettings : SettingsUI
	{
		// Fields
		[Header("Gun settings serialized fields")]
		[SerializeField]
		[Space(10f)]
		private GameObject chargeSettingsContent;
		[SerializeField]
		private GameObject projectileSettingsContent;
		[SerializeField]
		[Space(20f)]
		private SettingsInputField nameInputField;
		[SerializeField]
		[Space(10f)]
		private SettingsToggle muzzleFlareOnFireToggle;
		[SerializeField]
		private SettingsToggle thirdPersonCameraToggle;
		[SerializeField]
		private SettingsToggle smokeOnFireToggle;
		[SerializeField]
		[Space(10f)]
		private SettingsDropdown fireModeDropdown;
		[SerializeField]
		private SettingsDropdown fireSoundEffectDropdown;
		[SerializeField]
		[Space(10f)]
		private SettingsInputFieldSlider weaponDamageInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider maxAmmoInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider impulseStrengthInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider recoilStrengthInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider attackAnimationInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider attackCooldownInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider spreadInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider movementSpeedInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider shotsPerBurstInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider burstCooldownBetweenShotsInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider projectilesPerShotInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider muzzleFlareSizeInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider fireSoundVolumeInputSlider;
		[SerializeField]
		[Space(10f)]
		private Image muzzleFlareColorImage;
		[Header("Charge settings serialized fields")]
		[SerializeField]
		[Space(10f)]
		[Space(20f)]
		private SettingsToggle chargeEnabledToggle;
		[SerializeField]
		private SettingsToggle chargeParticlesToggle;
		[SerializeField]
		private SettingsToggle chargeZoomToggle;
		[SerializeField]
		[Space(10f)]
		private SettingsDropdown chargeSoundEffectDropdown;
		[SerializeField]
		[Space(10f)]
		private SettingsInputFieldSlider chargeTimeInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider chargeSoundVolumeInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider chargeZoomAmmountInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider chargeParticlesSizeInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider chargeZoomTimeInputSlider;
		[SerializeField]
		[Space(10f)]
		private Image chargeParticlesColorImage;
		[Header("Projectile settings serialized fields")]
		[SerializeField]
		[Space(20f)]
		[Space(10f)]
		private SettingsToggle sparksOnHitToggle;
		[SerializeField]
		[Space(10f)]
		private SettingsDropdown hitSoundEffectDropdown;
		[SerializeField]
		[Space(10f)]
		private SettingsInputFieldSlider rangeInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider projectileSpeedInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider projectileSizeInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider hitSoundVolumeInputSlider;
		[SerializeField]
		private SettingsInputFieldSlider sparksSizeInputSlider;
		[SerializeField]
		[Space(10f)]
		private Image projectileColorImage;
		[SerializeField]
		private Image projectileTrailColorImage;
		[SerializeField]
		private Image sparksColorImage;
		[SerializeField]
		[Space(10f)]
		private CustomItemAudioPlayer fireAudioPlayer;
		[SerializeField]
		private CustomItemAudioPlayer chargeAudioPlayer;
		[SerializeField]
		private CustomItemAudioPlayer hitAudioPlayer;
	
		// Properties
		protected override Vector2 NormalEditingCanvasSize { get; }
		protected Vector2 ChargeSettingsCanvasSize { get; }
		protected Vector2 ProjectileSettingsCanvasSize { get; }
		protected override Dictionary<object, object> DefaultItemData { get; }
	
		// Constructors
		public CustomGunSettings();
	
		// Methods
		public override void Initialize(int woID, GameObject root);
		public override void OnSettingChanged(string key, object value);
		private void OnSettingsChangedStateUpdate();
		protected override Dictionary<object, object> ReadWorldObjectItemData(Dictionary<object, object> woData);
		public override void OnColorPressed(string colorKey);
		public override void OnColorEdited();
		public void OnChargeSettingsOpen();
		public void OnChargeSettingsClose();
		public void OnProjectileSettingsOpen();
		public void OnProjectileSettingsClose();
		public void OnClickPreviewSound(string soundCategory, int index);
		private void OnDestroy();
	}
}
