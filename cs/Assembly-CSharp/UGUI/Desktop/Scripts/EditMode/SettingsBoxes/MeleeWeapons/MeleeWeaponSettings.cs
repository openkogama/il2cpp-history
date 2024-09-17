/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.MeleeWeapons
{
	public class MeleeWeaponSettings : MonoBehaviour, IHandleSettingChanged
	{
		// Fields
		private static readonly Vector2 NormalEditingCanvasSize;
		private static readonly Vector2 ColorEditingCanvasSize;
		[SerializeField]
		private RectTransform canvas;
		[SerializeField]
		private SettingsBase settingsBase;
		[SerializeField]
		private SettingsInputField nameInputField;
		[SerializeField]
		private SettingsSlider weaponDamageSlider;
		[SerializeField]
		private SettingsInputFieldSlider weaponDamageInputSlider;
		[SerializeField]
		private SettingsSlider ImpulseStrengthSlider;
		[SerializeField]
		private SettingsInputFieldSlider ImpulseStrengthInputSlider;
		[SerializeField]
		private SettingsSlider RecoilStrengthSlider;
		[SerializeField]
		private SettingsInputFieldSlider RecoilStrengthInputSlider;
		[SerializeField]
		private SettingsSlider attackAnimationSlider;
		[SerializeField]
		private SettingsInputFieldSlider attackAnimationInputSlider;
		[SerializeField]
		private SettingsSlider attackCooldownSlider;
		[SerializeField]
		private SettingsInputFieldSlider attackCooldownInputSlider;
		[SerializeField]
		private SettingsSlider rangeSlider;
		[SerializeField]
		private SettingsInputFieldSlider rangeInputSlider;
		[SerializeField]
		private SettingsDropdown fireSoundEffectDropdown;
		[SerializeField]
		private SettingsDropdown hitSoundEffectDropdown;
		[SerializeField]
		private Image trailColorImage;
		[SerializeField]
		private Image hitEffectColorImage;
		[SerializeField]
		private GameObject colorPicker;
		[SerializeField]
		private Image colorPickerPreview;
		[SerializeField]
		private SettingsSlider colorR;
		[SerializeField]
		private SettingsSlider colorG;
		[SerializeField]
		private SettingsSlider colorB;
		[SerializeField]
		private SettingsSlider colorA;
		[SerializeField]
		private CustomItemAudioPlayer fireAudioPlayer;
		[SerializeField]
		private CustomItemAudioPlayer hitAudioPlayer;
		private Dictionary<object, object> data;
		private string editingColorKey;
		private Dictionary<object, object> itemData;
	
		// Constructors
		public MeleeWeaponSettings();
		static MeleeWeaponSettings();
	
		// Methods
		public void Initialize(int woID, GameObject root);
		public void OnSettingChanged(string key, object value);
		private Dictionary<object, object> ReadWorldObjectItemData(Dictionary<object, object> woData);
		public void OnColorPressed(string colorKey);
		private void UpdateColorPickerPreview();
		public void OnColorEdited();
		public void OnClickPreviewSound(string soundCategory, int index);
	}
}
