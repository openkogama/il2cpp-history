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
	public class CameraBoxAmbientOcclusionSettings : MonoBehaviour
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
		private SettingsSlider thicknessSlider;
		[SerializeField]
		private SettingsInputFieldSlider thicknessInputField;
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
			public const string AmbientOcclusionOn = "ppAOOn";
			public const string Intensity = "ppAOInty";
			public const string Thickness = "ppAOThick";
			public const string ColorR = "ppAOColR";
			public const string ColorG = "ppAOColG";
			public const string ColorB = "ppAOColB";
		}
	
		public static class DefaultValues
		{
			// Fields
			public const bool AmbientOcclusionOn = false;
			public const int Intensity = 0;
			public const int Thickness = 1;
			public const float ColorR = 0f;
			public const float ColorG = 0f;
			public const float ColorB = 0f;
		}
	
		private static class MinMaxValues
		{
			// Fields
			public const int IntensityMin = 0;
			public const int IntensityMax = 15;
			public const int ThicknessMin = 1;
			public const int ThicknessMax = 10;
		}
	
		// Constructors
		public CameraBoxAmbientOcclusionSettings();
	
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
