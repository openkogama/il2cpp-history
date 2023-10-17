/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Camera
{
	public class CameraBoxSettings : MonoBehaviour, IHandleSettingChanged
	{
		// Fields
		public const string DistanceToAvatarDataKey = "distanceToAvatar";
		public const string ForceFirstPersonDataKey = "forceFirstPersonCamera";
		[SerializeField]
		private SettingsBase settingsBase;
		[SerializeField]
		private SettingsSlider slider;
		[SerializeField]
		private SettingsInputFieldSlider inputField;
		[SerializeField]
		private SettingsToggle toggle;
		[SerializeField]
		private CameraBoxColorsSettings colorsSettings;
		[SerializeField]
		private CameraBoxBloomSettings bloomSettings;
		[SerializeField]
		private CameraBoxAmbientOcclusionSettings ambientOcclusionSettings;
		[SerializeField]
		private CameraBoxDepthOfFieldSettings depthOfFieldSettings;
		[SerializeField]
		private CameraBoxVignetteSettings vignetteSettings;
		[SerializeField]
		private CameraBoxGrainSettings grainSettings;
		[SerializeField]
		private CameraBoxLensDistortionSettings lensDistortionSettings;
		private int cameraWorldObjectID;
		private Dictionary<object, object> woData;
	
		// Constructors
		public CameraBoxSettings();
	
		// Methods
		public void Initialize(int woID, GameObject root);
		private Dictionary<object, object> InitData();
		public void OnSettingChanged(string key, object value);
		public void OnColorSettingsOpen();
		public void OnBloomSettingsOpen();
		public void OnAmbientOcclusionSettingsOpen();
		public void OnDepthOfFieldSettingsOpen();
		public void OnVignetteSettingsOpen();
		public void OnGrainSettingsOpen();
		public void OnLensDistortionSettingsOpen();
		public object GetSetting(string dataKey, object defaultVal);
	}
}
