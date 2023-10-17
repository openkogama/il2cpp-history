/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace UGUI.Desktop.Scripts.EditMode.SettingsBoxes.Camera
{
	public class CameraBoxBloomSettings : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private CameraBoxSettings cameraBoxSettings;
		[SerializeField]
		private SettingsToggle featureOnToggle;
		[SerializeField]
		private SettingsSlider intensitySlider;
		[SerializeField]
		private SettingsInputFieldSlider intensityInputField;
		[SerializeField]
		private SettingsSlider softKneeSlider;
		[SerializeField]
		private SettingsInputFieldSlider softKneeInputField;
		[SerializeField]
		private SettingsSlider diffusionSlider;
		[SerializeField]
		private SettingsInputFieldSlider diffusionInputField;
		[SerializeField]
		private Image colorImage;
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
	
		// Nested types
		public static class DataKeys
		{
			// Fields
			public const string BloomOn = "ppBloomOn";
			public const string Intensity = "ppBloomInty";
			public const string SoftKnee = "ppBloomSKnee";
			public const string Diffusion = "ppBloomDiff";
			public const string ColorR = "ppBloomColR";
			public const string ColorG = "ppBloomColG";
			public const string ColorB = "ppBloomColB";
		}
	
		public static class DefaultValues
		{
			// Fields
			public const bool BloomOn = false;
			public const int Intensity = 0;
			public const int SoftKnee = 5;
			public const int Diffusion = 7;
			public const float ColorR = 1f;
			public const float ColorG = 1f;
			public const float ColorB = 1f;
		}
	
		private static class MinMaxValues
		{
			// Fields
			public const int IntensityMin = 0;
			public const int IntensityMax = 7;
			public const int SoftKneeMin = 0;
			public const int SoftKneeMax = 10;
			public const int DiffusionMin = 1;
			public const int DiffusionMax = 10;
		}
	
		// Constructors
		public CameraBoxBloomSettings();
	
		// Methods
		private void Start();
		public void OnSavePressed();
		public void OnColorPressed();
		public void OnColorEdited();
		public static void InitData(Dictionary<object, object> data);
		public static bool IsKey(string key);
		public object ValueToSend(string key, object value);
	}
}
