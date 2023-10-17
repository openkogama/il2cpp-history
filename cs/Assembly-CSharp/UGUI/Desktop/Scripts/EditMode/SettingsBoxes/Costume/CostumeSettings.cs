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

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Costume
{
	public class CostumeSettings : MonoBehaviour, IHandleSettingChanged
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
		private SettingsSlider healthSlider;
		[SerializeField]
		private SettingsInputFieldSlider healthInputSlider;
		[SerializeField]
		private SettingsSlider movementSpeedSlider;
		[SerializeField]
		private SettingsInputFieldSlider movementSpeedInputSlider;
		[SerializeField]
		private SettingsToggle playerInvisibleToggle;
		[SerializeField]
		private SettingsToggle playersCanCollideToggle;
		[SerializeField]
		private SettingsToggle trailToggle;
		[SerializeField]
		private SettingsSlider trailLengthSlider;
		[SerializeField]
		private SettingsInputFieldSlider trailLengthInputSlider;
		[SerializeField]
		private Image trailColorImage;
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
		private Dictionary<object, object> data;
		private string editingColorKey;
		private Dictionary<object, object> itemData;
	
		// Constructors
		public CostumeSettings();
		static CostumeSettings();
	
		// Methods
		public void Initialize(int woID, GameObject root);
		public void OnSettingChanged(string key, object value);
		private Dictionary<object, object> ReadWorldObjectItemData(Dictionary<object, object> woData);
		public void OnColorPressed(string colorKey);
		private void UpdateColorPickerPreview();
		public void OnColorEdited();
	}
}
